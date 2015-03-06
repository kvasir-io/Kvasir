/*
 * MPLAlgorithm.cpp
 *
 *  Created on: 23.02.2015
 *      Author: Odin
 */

#include "MPLUtility.hpp"
#include "MPLAlgorithm.hpp"

using namespace Kvasir::MPL;
using TestList1 = List<int,short,void,long,float,void,void,char>;
using TestList2 = List<void,int,short,void,long,float,void,void,char,void>;

static_assert(IsSame<SplitT<TestList1,void>,List<List<int,short>,List<long,float>,List<char>>>::value,"");
static_assert(IsSame<SplitT<TestList2,void>,List<List<int,short>,List<long,float>,List<char>>>::value,"");
