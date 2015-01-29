#pragma once

namespace Kvasir {
	namespace MPL {
		//Wrapper for integral type template parameters
		template<typename T, T I>
		struct Value {
			static constexpr T value{I};
			using Type = Value<T,I>;
		};

		template<bool B>
		using Bool = Value<bool,B>;
		using TrueType = Bool<true>;
		using FalseType = Bool<false>;

		template<int I>
		using Int = Value<int,I>;

		//Type list
		template<typename... Ts>
		struct List{
			using Type = List<Ts...>;
		};

		//Indices into an array
		template <unsigned... Is>
		struct Indices {
			using Type = Indices<Is...>;
		};

		//wrapper for template template parameters
		template<template<typename...> class T>
		struct Template{
			template<typename... Ts>
			using Apply = T<Ts...>;
		};

		template<typename T, typename... Ts>
		using TemplateT = typename T::template Apply<Ts...>;

	}
}
