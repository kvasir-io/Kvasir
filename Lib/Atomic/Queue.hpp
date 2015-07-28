#pragma once

#include "MPL/Utility.hpp"
#include "Integral.hpp"

namespace Kvasir{
namespace Atomic{

//OverFlowPolicyIgnore is the default action which is taken if
//an overflow occurs. The user is encurraged to provide their
//own policy which call reset or some other error handler
struct OverFlowPolicyIgnore{
	static void operator(){}
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

template<typename TDataType, unsigned Size, typename TOverflowPolicy = OverFlowPolicyIgnore>
struct Queue{
private:
	using IndexType = GetIndexTypeT<Size>;
	TDataType data_[Size];
	Integral<IndexType> head_{};
	Integral<IndexType> tail_{};
	static IndexType distance(IndexType head, IndexType tail){
		int d = tail - head;
		if(d < 0){
			d += Size;
		}
		return d;
	}
	static IndexType next(IndexType in){
		return (in+1)%Size;
	}
public:
	void push(TDataType in){
		auto tail = tail_.load();
		auto head = head_.load();
		auto nextTail = next(tail);
		if(head != nextTail){
			data_[tail] = in;
			tail_.store(nextTail);		//commit
		}
		else{
			TOverflowPolicy{}();
		}
	}
	template<typename TRange, typename =
			MPL::EnableIfT<MPL::IsSame<decltype(*DeclVal<TRange>().begin()),TDataType>::value>>
	void push(TRange &range){
		auto tail = tail_.load();
		auto head = head_.load();
		if(range.size() < Size - distance(head,tail)){
			auto begin = range.begin();
			auto end = range.end();
			while(begin != end){
				data_[tail] = *begin++;
				tail = next(tail);
			}
			tail_.store(tail); 		//commit
		}
		else{
			TOverflowPolicy{}();
		}
	}
	bool pop(TDataType& out){
		auto tail = tail_.load();
		auto head = head_.load();
		if(head == tail){
			return false;
		}
		out = data_[head];
		head_.store(next(head)); 	//commit
		return true;
	}
	template<typename TRange, typename =
			MPL::EnableIfT<MPL::IsSame<decltype(*DeclVal<TRange>().begin()),TDataType>::value>>
	bool pop(TRange &range){
		auto tail = tail_.load();
		auto head = head_.load();
		int size = distance(head,tail);
		if(size < range.size()){
			return false;
		}
		auto begin = range.begin();
		auto end = range.end();
		while(begin != end){
			*begin++ = data[head];
			head = next(head);
		}
		head_.store(head); 			//commit
	}
	int sizeWas(){
		return distance(head_.load(),tail_.load());
	}
	bool wasFull(){
		auto tail = tail_.load();
		auto head = head_.load();
		return next(tail) == head;
	}
	///It is only safe to call this function if you are sure that no other thread is using the fifo
	void unsafeClear(){
		head_.store(0);
		tail_.store(0);
	}
};
}
}
