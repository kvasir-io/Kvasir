#pragma once
#include "Mpl/Utility.hpp"
#include "Cmsis/Assembler.hpp"

namespace Kvasir{
namespace Atomic{
	namespace Detail{
		using namespace MPL;
		template<typename T, typename = void>
		struct Intigral;
		template<typename T>
		struct Integral<T,EnableIfT<IsIntegral<T>::value>>{
		private:
			volatile T data_{0};
		public:
			Integral(){}
			Integral(T in):data_{in}{};
			T load(){
				return data_;
			}
			void store(T in){
				data_ = in;
			}
		};
	}
	template<typename T>
	struct Integral : Detail::Integral<T>{};

	template<unsigned Address, unsigned Mask, unsigned Value>
	void atomicPartialWrite(){
		do{
			auto reg = *(unsigned*)Address;
			reg &= Mask;
			reg |= Value;
		}while()
	}
	template<unsigned Address, unsigned Mask>
	void atomicPartialWrite(unsigned value){

	}
}
}
