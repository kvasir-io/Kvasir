#pragma once

#include "MPL/Utility.hpp"

namespace Kvasir{
namespace Pipe{
	namespace Action{
		using VoidCallType = void(&)();
		template<VoidCallType F>
		struct CallAction{
			void operator()(){
				F();
			}
		};
		struct DoNothing{
			void operator()(){};
		};
	}

	template<typename TTag>
	struct TagTraits{
		static_assert(AlwaysFalse<TTag>::value,"error, no specialization available, use a different tag or include the right file");
	};

	template<Action::VoidCallType F>
	struct TagTraits<Action::CallAction<F>> : MPL::Return<Action::CallAction<F>>{};
	template<>
	struct TagTraits<Action::DoNothing> : MPL::Return<Action::DoNothing>{};

	template<typename T>
	using TagTraitsT = typename TagTraits<T>::Type;

	struct OverFlowPolicyIgnore{
		static void overflow(){}
	};

	namespace Detail{
		using namespace MPL;
		template<unsigned Size, typename = void>
		struct GetIndexType : Type<unsigned>{};
		template<unsigned Size>
		struct GetIndexType<Size,EnableIfT<(Size <= 256)>> : Type<unsigned char>{};
		template<unsigned Size>
		struct GetIndexType<Size,EnableIfT<(Size <= 65536)>> : Type<unsigned short>{};
		template<unsigned Size>
		using GetIndexTypeT = typename GetIndexType<Size,void>::Type;

	}

	template<typename TName, typename TDataType, unsigned Size, typename TEventAction = Action::DoNothing, typename TOverflowPolicy = OverFlowPolicyIgnore>
	struct Fifo{
	private:
		using IndexType = GetIndexTypeT<Size>;
		static TDataType data_[Size];
		volatile IndexType head_{0};
		volatile IndexType tail_{0};
		IndexType distance(IndexType head, IndexType tail){
			int d = tail - head;
			if(d < 0){
				d += Size;
			}
			return d;
		}
		IndexType next(IndexType in){
			return (in+1)%Size;
		}
	public:
		void push(TDataType in){
			auto tail = tail_;
			auto head = head_;
			auto nextTail = next(tail);
			if(head != nextTail){
				data_[tail] = in;
				tail_ = nextTail;		//commit
				TagTraitsT<TEventAction>{}();
			}
			else{
				TOverflowPolicy::overflow();
			}
		}
		void push(TDataType* begin, TDataType* end){
			auto tail = tail_;
			auto head = head_;
			if((end-begin) < Size - distance(head,tail)){
				while(begin != end){
					data_[tail] = *begin++;
					tail = next(tail);
				}
				tail_ = tail; 		//commit
				TagTraitsT<TEventAction>{}();
			}
		}
		bool pop(TDataType& out){
			auto tail = tail_;
			auto head = head_;
			if(head == tail){
				return false;
			}
			out = data_[head];
			head_ = next(head); 	//commit
			return true;
		}
		bool pop(TDataType* begin, TDataType* end){
			auto tail = tail_;
			auto head = head_;
			int size = distance(head,tail);
			if(size < (end-begin)){
				return false;
			}
			while(begin != end){
				*begin++ = data[head];
				head = next(head);
			}
			head_ = head; 			//commit
		}
		int sizeWas(){
			return distance(head_,tail_);
		}
		bool wasFull(){
			auto tail = tail_;
			auto head = head_;
			return next(tail) == head;
		}
		///It is only safe to call this function if you are sure that no other thread is using the fifo
		void unsafeClear(){
			head_ = 0;
			tail_ = 0;
		}
	};
}
}
