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


	template<typename TName, typename TDataType, unsigned Size, typename TEventAction = Action::DoNothing, typename TOverflowPolicy = OverFlowPolicyIgnore>
	struct Fifo{
	private:
		static Atomic::Queue<TDataType,Size> queue_;
	public:
		void push(TDataType in){
			queue_.push(in);
			TagTraitsT<TEventAction>{}();
		}
		template<typename T, typename =
				MPL::EnableIfT<MPL::IsSame<MPL::RemoveConstT<decltype(*DeclVal<T>().begin())>,TDataType>::value>>
		void push(T& range){
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
		bool pop(RandomAccessRange<TDataType*>){
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
