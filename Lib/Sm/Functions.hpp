#pragma once

#include "/Mpl/Algorithm.hpp"

namespace Kvasir{
namespace SM{
	template<typename... Ts>
	struct Machine : MPL::Return<Machine<Ts...>>{};

	template<typename TParent, typename... Ts>
	struct ParentList : MPL::Retrun<ParentList<TParent, Ts...>>{};

	template<typename... Ts>
	struct OnEntry : MPL::Retrun<OnEntry<Ts...>>{};

	template<typename... Ts>
	struct OnExit : MPL::Retrun<OnExit<Ts...>>{};

	template<typename... Ts>
	struct Transition : MPL::Retrun<Transition<Ts...>>{};


	namespace Detail{

	}

	inline namespace Factory{
		template<typename... Ts>
		Machine<Ts...> makeSm(const Ts...){
			return {};
		}
		template<typename TParent, typename... Ts>
		ParentList<TParent, Ts...> parent(const TParent, const Ts...){
			return {};
		}
		template<typename TState, typename... Ts>
		OnEntry<TState, Ts...> onEntry(const TState, const Ts...){
			return {};
		}
		template<typename TState, typename... Ts>
		OnExit<TState, Ts...> onExit(const TState, const Ts...){
			return {};
		}
	}

	inline namespace Actions{
		template<typename TSM, typename TState>
		void transitionTo(TSM,TState state){

		}
		template<typename TSM, typename TEv>
		void postEvent(TSM,TEv ev){

		}
		template<typename TSM, typename TState>
		bool isInState(TSM,TState);
	}
}
}

