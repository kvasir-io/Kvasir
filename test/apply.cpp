#include "Register/Apply.hpp"
#include "Chip/MKL27Z4.hpp"

#include "Register/Seam.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

namespace Kvasir {
	namespace Register {
		template<typename T>
		struct ExecuteSeam<T, ::Kvasir::Tag::User> : RecordActions<T> {};
	}
}

#define BRIGAND_NO_BOOST_SUPPORT 1
#include "brigand\brigand.hpp"
#include <utility>

using namespace brigand;

template<typename I, typename T>
struct indexed_type {};

template<typename T, typename U, typename V>
struct divide_impl;

template<template<typename...> class L, typename... T, typename... U, template<typename...> class L2, typename... V>
struct divide_impl<L<T...>, L<U...>, L2<V...>>
{
	template<typename... A, typename... B>
	static list<list<A...>, list<B...>> f(indexed_type<T, A>*..., indexed_type<U, B>*...);
	using type = decltype(f((V*)0 ...));
};

template<typename L, typename I>
using divide = typename divide_impl<
	//make_sequence<
	//	brigand::size_t<0>, 
	//	I::value>, 
	//make_sequence<
	//	brigand::size_t<I::value>, 
	//	(size<L>::value - I::value)>, 
	list<brigand::size_t<0>, brigand::size_t<2>>,
	list<brigand::size_t<2>, brigand::size_t<3>, brigand::size_t<4>>,
	transform<
	//make_sequence<
	//	brigand::size_t<0>, 
	//	size<L>::value>, 
	list<brigand::size_t<0>, brigand::size_t<2>, brigand::size_t<2>, brigand::size_t<3>, brigand::size_t<4>>,
	L,
	indexed_type<_1, _2 >> >::type;

template<typename T, typename...Ts> //find T in Ts... in constant time
struct find_impl {
	using is = make_sequence<brigand::size_t<0>, sizeof...(Ts)>;
	using l = list<Ts...>;
	using zipped = transform<is, l, indexed_type<_1, _2>>;
	template<typename C>
	struct convert_me;
	template<template<typename...> class C, typename... Cs>
	struct convert_me<C<Cs...>> : Cs...{};
	template<typename I>
	static I convert(indexed_type<I, T>*) {};
	using type = decltype(convert(&std::declval<convert_me<zipped>>()));
};

using l = list<char, int, bool, int, char>;

int main()
{
	using dl = divide<l, brigand::size_t<2>>;
	using namespace Kvasir::Register;
	constexpr auto w = write(Kvasir::Adc0Cfg2::AdlstsValC::v00);
	using Arg = typename std::remove_cv<decltype(w)>::type;
	static_assert(Detail::ArgsToApplyArePlausible<Arg>::value, "one of the supplied arguments is not supported");
	using namespace Kvasir::MPL;
	//unsigned a[] = { Detail::argToInt(args)... };
	//using IndexedActions = TransformT < brigand::list<Arg>, BuildIndicesT<1>, Kvasir::MPL::Template < Kvasir::Register::Detail::MakeIndexedAction >> ;
	//using FlattenedActions = brigand::flatten<IndexedActions>;
	//using Steps = SplitT<FlattenedActions, SequencePoint>;
	//using Merged = Kvasir::Register::Detail::MergeActionStepsT<Steps>;
	//using Actions = brigand::flatten<Merged>;
	//int i = Steps{};
	//static_assert(Kvasir::Register::Detail::ArgsToApplyArePlausible<typename std::remove_cv<decltype(w)>::type>::value, "one of the supplied arguments is not supported");
	//apply(w);
	if (Kvasir::Register::actions_.front().address_ == 0x4003b00c)
		return 0;
	return 1;
}
