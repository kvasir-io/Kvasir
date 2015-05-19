#pragma once

#include "MPL/Utility.hpp"

namespace Kvasir{

	template<int I, int J>
	struct CoutFromTo{
		constexpr bool isLast = false;
		constexpr int value = I;
		using Next = CountFromTo<I+1,J>;
	};

	template<int I>
	struct CountFromTo<I,I>{
		constexpr bool isLast = true;
		constexpr int value = I;
	};

	template<int I>
	struct CoutTo{
		constexpr bool isLast = false;
		constexpr int value = 0;
		using Next = CountFromTo<1,I>;
	};

	template<>
	struct CountTo<1>{
		constexpr bool isLast = true;
		constexpr int value = 0;
	};
	template<typename T>
	class SinglePassRange{
		const T begin_;
		const T end_;
	public:
		constexpr SinglePassRange():begin_{},end_{}{}
		constexpr SinglePassRange(T begin, T end):begin_{begin},end_{end}{}
		template<typename TIn, typename TIt = decltype(MPL::Declval<TIn>().begin()), typename = decltype(MPL::Declval<TIn>().begin()), typename = MPL::EnableIf<MPL::IsSame<T,TIt>::value>>
		SinglePassRange(T& in):begin_{in.begin()},end_{in.end()}{}
		T begin() const{
			return begin_;
		}
		T end() const{
			return end_;
		}
	};
	template<typename T>
	class ForwardRange{
		const T begin_;
		const T end_;
		const unsigned size_;
	public:
		constexpr ForwardRange():begin_{},end_{}{}
		constexpr ForwardRange(T begin, T end):begin_{begin},end_{end}{}
		template<typename TIn, typename TIt = decltype(MPL::Declval<TIn>().begin()), typename = decltype(MPL::Declval<TIn>().begin()), typename = MPL::EnableIf<MPL::IsSame<T,TIt>::value>>
		ForwardRange(T& in):begin_{in.begin()},end_{in.end()}{}
		ForwardRange(ForwardRange&) = delete;
		T begin() const{
			return begin_;
		}
		T end() const{
			return end_;
		}
		unsigned size() const{
			return end_ - begin_;
		}
		bool empty() const{
			return end_ == begin_;
		}
		friend unsigned size(const ForwardRange& r){
			return r.size();
		}
		friend bool empty(const ForwardRange& r){
			return r.empty();
		}

	};

	template<typename T>
	class RandomAccessRange{
		const T begin_;
		const T end_;
	public:
		constexpr RandomAccessRange():begin_{},end_{}{}
		constexpr RandomAccessRange(T begin, T end):begin_{begin},end_{end}{}
		template<typename TIn, typename TIt = decltype(MPL::Declval<TIn>().begin()), typename = decltype(MPL::Declval<TIn>().begin()), typename = MPL::EnableIf<MPL::IsSame<T,TIt>::value>>
		RandomAccessRange(T& in):begin_{in.begin()},end_{in.end()}{}
		RandomAccessRange(RandomAccessRange&) = delete;
		T begin() const{
			return begin_;
		}
		T end() const{
			return end_;
		}
		unsigned size() const{
			return end_ - begin_;
		}
		bool empty() const{
			return end_ == begin_;
		}
		friend unsigned size(const ForwardRange& r){
			return r.size();
		}
		friend bool empty(const ForwardRange& r){
			return r.empty();
		}

	};


}
