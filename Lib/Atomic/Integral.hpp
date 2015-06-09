#pragma once
#include "MPL/Utility.hpp"

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
}
}
