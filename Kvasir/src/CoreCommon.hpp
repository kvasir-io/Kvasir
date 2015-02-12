/**************************************************************************************************
 * Source file containing commonalities between Cortex M0 and M3 cores
 *
 *
 * List of bugs:
 * 			- none
 *
 *
 * List of requested funtionalities:
 * 			- NVIC_GetPendingIRQ from CMSIS equivalent
 * 			- NVIC_GetActive
 *
 *

*/
#pragma once
#include "Register.hpp"
#include "Interrupt.hpp"

namespace Kvasir{
	namespace Core{
		namespace Detail{
			enum class IsrRegister {
				ISER = 0,
				ICER = 0x80,
				ISPR = 0x200,
				ICPR = 0x280,
				IABR = 0x300,
				IPR = 0x400,
				STIR = 0xF00
			};
			constexpr int getIrqRegister(IsrRegister reg, int IrqNum){
				return 0xE000E100 + static_cast<int>(reg) + (IrqNum >> 5);
			}
		}
		template<typename T>
		struct EnableIrq;
		template<int I>
		struct EnableIrq<Interrupt::Type<I>> : Register::BlindWriteActionT<Detail::getIrqRegister(Detail::IsrRegister::ISER,I),(1<<I),(1<<I)>{};
		template<typename T>
		using EnableIrqT = typename EnableIrq<T>::Type;
		template<typename... Ts>
		void enableIrq(Ts...){
			Register::apply<EnableIrqT<Ts>...>();
		};
		template<typename T>
		struct DisableIrq;
		template<int I>
		struct DisableIrq<Interrupt::Type<I>> : Register::BlindWriteActionT<Detail::getIrqRegister(Detail::IsrRegister::ICER,I),(1<<(I & 0x1F)),(1<<(I & 0x1F))>{};
		template<typename T>
		using DisableIrqT = typename DisableIrq<T>::Type;
		template<typename... Ts>
		void disableIrq(Ts...){
			Register::apply<DisableIrqT<Ts>...>();
		};
		template<typename T>
		struct SetPendingIrq;
		template<int I>
		struct SetPendingIrq<Interrupt::Type<I>> : Register::BlindWriteActionT<Detail::getIrqRegister(Detail::IsrRegister::ISPR,I),(1<<(I & 0x1F)),(1<<(I & 0x1F))>{};
		template<typename T>
		using SetPendingIrqT = typename SetPendingIrq<T>::Type;
		template<typename... Ts>
		void setPendingIrq(Ts...){
			Register::apply<SetPendingIrqT<Ts>...>();
		};
		template<typename T>
		struct ClearPendingIrq;
		template<int I>
		struct ClearPendingIrq<Interrupt::Type<I>> : Register::BlindWriteActionT<Detail::getIrqRegister(Detail::IsrRegister::ICPR,I),(1<<(I & 0x1F)),(1<<(I & 0x1F))>{};
		template<typename T>
		using ClearPendingIrqT = typename ClearPendingIrq<T>::Type;
		template<typename... Ts>
		void clearPendingIrq(Ts...){
			Register::apply<ClearPendingIrqT<Ts>...>();
		};
	}
}
