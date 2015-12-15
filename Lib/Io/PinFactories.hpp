/**************************************************************************
Copyright 2015 Odin Holmes
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
#pragma once
#include "MPL/Utility.hpp"
#include "Utility.hpp"

namespace Kvasir {
	namespace Io {
		/// This generic Metafunction which all pin factores resolve to. 
		/// It relies on the user to include a chip file which specializes this template
		/// with the propper resulting Register::Action
		template<typename TAction, typename TPinLocation>
		struct MakeAction {
			static_assert(MPL::AlwaysFalse<TAction>::value, "could not find this configuration in the included chip file");
		};
		template<typename TAction, typename TPinLocation>
		using MakeActionT = typename MakeAction<TAction, TPinLocation>::Type;

		namespace Detail {
			//make sure we actually got a PinLocation as a parameter
			template<typename TAction, typename TPortPin>
			struct MakeActionIfPinLocation {
				//static_assert(MPL::AlwaysFalse<TAction>::value,"parameter is not a PinLocation");	
			};
			template<typename TAction, int Port, int Pin>
			struct MakeActionIfPinLocation<TAction, Register::PinLocation<Port, Pin>> {
				using Type = MakeActionT<TAction, Register::PinLocation<Port, Pin>>;
			};
			template<typename TAction, typename TPinLocation>
			using MakeActionIfPinLocationT = typename MakeActionIfPinLocation<TAction, TPinLocation>::Type;
		}
		template<typename TPort, typename TPin>
		constexpr Register::PinLocation<TPort::value, TPin::value>
			makePinLocation(TPort, TPin) {
			return{};
		};
	}
	namespace Register {
		template<typename TAction, typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<TAction, T>
			action(TAction, T) {
			return{};
		};

		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Input, T>
			makeInput(T) {
			return{};
		};

		template<typename T, typename U, typename... Ts>
		constexpr decltype(MPL::list(makeInput(T{}), makeInput(U{}), makeInput(Ts{})...))
			makeInput(T, U, Ts...) {
			return{};
		}

		template<typename T>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Output, T>
			makeOutput(T) {
			return{};
		};

		template<typename T, typename U, typename... Ts>
		constexpr decltype(MPL::list(makeOutput(T{}), makeOutput(U{}), makeOutput(Ts{})...))
			makeOutput(T, U, Ts...) {
			return{};
		}

		template<typename TPortPin>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Set, TPortPin>
			set(TPortPin) {
			return{};
		};



		template<typename TPortPin>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Clear, TPortPin>
			clear(TPortPin) {
			return{};
		};


		template<typename TPortPin>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Toggle, TPortPin>
			toggle(TPortPin) {
			return{};
		};

		template<typename TPP1, typename TPP2, typename... TPortPins>
		constexpr MPL::List<Io::Detail::MakeActionIfPinLocationT<Io::Action::Toggle, TPP1>,
			Io::Detail::MakeActionIfPinLocationT<Io::Action::Toggle, TPP2>,
			Io::Detail::MakeActionIfPinLocationT<Io::Action::Toggle, TPortPins>...>
			toggle(TPP1, TPP2, TPortPins...) {
			return{};
		};

		template<typename TPortPin>
		constexpr Io::Detail::MakeActionIfPinLocationT<Io::Action::Read, TPortPin>
			read(TPortPin) {
			return{};
		};

	}
}
