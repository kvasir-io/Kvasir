#pragma once
/**************************************************************************
 * this file contains the Kvasir vector which is similar to the std::vector
 * from the C++ standard library except that it uses a fixed size buffer.
 * Using a fixed sized buffer allowes the use of Kvasir::Vector in designs
 * which do not use a heap.
Copyright 2015 Odin Holmes
Aditional contribution from Stephan Bökelmann
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
****************************************************************************/
namespace Kvasir {
	namespace VectorPolicies{
		struct TrapError{
			void operator()(){
				while(1){};
			}
		};
		struct IgnoreError{
			void operator()(){
			}
		};
		template<int BufferSize, typename TErrorPolicy>
		struct BoundsChecking{
			template<typename T>
			void operator()(const T* begin, const T* index){
				if(index < begin || index >= &begin[BufferSize]){
					TErrorPolicy{}();
				}
			}
		};
	}

	template<typename TElement, int BufferSize, typename TBoundsCheckingPolicy = VectorPolicies::BoundsChecking<BufferSize,VectorPolicies::TrapError>>
	struct Vector{
		Vector():end_{&data_}{}
		T* begin(){
			return &data_;
		}
		const T* begin() const{
			return &data_;
		}
		const T* cbegin() const{
			return &data_;
		}
		T* end(){
			return end_;
		}
		const T* end() const{
			return end_;
		}
		const T* cend() const{
			return end_;
		}
		int maxSize() const{
			return BufferSize;
		}
		int size() const{
			return end_ - &data_;
		}
		bool empty() const{
			return &data_ == end_;
		}
		void resize(int n, const T& val){
			TBoundsCheckingPolicy{}(&data_,data_[n]);
			auto pos = end_;
			end_ = &data_ + n;
			while(pos < end_){
				*pos = val;
				++pos;
			}
		}
		void resize(int n){
			T val{};
			resize(n,val);
		}
		T& operator[](int i){
			return data_[i];
		}
		const T& operator[](int i) const{
			return data_[i];
		}
		T& at(int i){
			TBoundsCheckingPolicy{}(&data_,&data_[i]);
			return data_[i];
		}
		const T& at(int i) const{
			TBoundsCheckingPolicy{}(&data_,&data_[i]);
			return data_[i];
		}
		T& front(){
			return data_[0];
		}
		const T& front() const{
			return data_[0];
		}
		T& back(){
			return *(end_-1);
		}
		const T& back() const{
			return *(end_-1);
		}
		T& data(){
			return &data_;
		}
		const T& data() const{
			return &data_;
		}
		T popBack(){
			--end_;
			TBoundsCheckingPolicy{}(&data_,end_);
			return *end_;
		}
		void pushBack(const T& in){
			TBoundsCheckingPolicy{}(&data_,end_+1);
			*end_ = in;
			++end_;
		}
		void clear(){
			end_ = &data_;
		}

	private:
		T data_[BufferSize];
		T* end_;
	};

}
