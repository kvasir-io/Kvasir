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
#include "MPLUtility.hpp"
#include "MPLAlgorithm.hpp"

using namespace Kvasir;
using namespace MPL;

static_assert(IsSameT<int,int>::value,"");
static_assert(!IsSameT<int,float>::value,"");

using Test = List<int,bool,long,float,double,float>;

static_assert(FindT<Test,bool>::value == 1,"");
static_assert(FindT<Test,float>::value == 3,"");
static_assert(FindT<Test,char>::value == -1,"");
static_assert(FindT<Test,int>::value == 0,"");
static_assert(FindT<List<>,char>::value == -1,"");
static_assert(ContainsT<Test,float>::value,"");
static_assert(ContainsT<Test,char>::value == false,"");

using UnsortedInts = List<Int<9>,Int<1>,Int<5>,Int<2>,Int<99>,Int<3>>;

using SortedInts = SortT<UnsortedInts,LessP>;
static_assert(IsSameT<SortedInts,List<Int<1>,Int<2>,Int<3>,Int<5>,Int<9>,Int<99>>>::value,"");
static_assert(IsSameT<SortT<List<>>,List<>>::value,"");
static_assert(IsSameT< SortT<List<Int<1>>>, List<Int<1>> >::value,"");

using TestTree = List<List<List<>,List<int>>,List<List<List<bool,long>,float,double,List<float>>>,List<>>;
using FlatTree = FlattenT<TestTree>;
static_assert(IsSame<Test,FlatTree>::value,"");


constexpr StrConst s{"blah"};
static_assert(s[1] == 'l',"");

