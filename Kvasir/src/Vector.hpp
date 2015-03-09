#pragma once

namespace Kvasir {
	namespace VectorPolicies{
		struct TrapErrorPolicy{
			void operator()(){
				while(1){};
			}
		};
		struct IgnoreErrorPolicy{
			void operator()(){
			}
		};
	}
	template<typename TElement, int BufferSize, typename TErrorPolicy = VectorPolicies::TrapErrorPolicy>
	struct Vector{
		Vector():end_{&data_}{}
		T* begin(){
			return &data_;
		}
		T* end(){
			return end_;
		}
		int capacity(){
			return BufferSize;
		}
		int size(){
			return end_ - &data_;
		}
		bool empty(){
			return &data_ == end_;
		}
		T popBack(){
			if(empty()){
				TErrorPolicy{}();
			}

			return *(end_-1)
		}
	private:
		T data_[BufferSize];
		T* end_;
	};

}
