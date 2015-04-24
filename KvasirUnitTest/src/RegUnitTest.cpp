/**************************************************************************************************
 * Source file containing the unittests of the Reg.hpp file
 *
 *
 * List of bugs:
 * 			- none :P
 *
 *
 * List of requested funtionalities:
 * 			- many
 *
 *

*/
#include "Register.hpp"

using namespace Kvasir;
using namespace MPL;

enum class E{a,b};
void FTest(){
	using namespace Register;

	//Print<Reads> a{};
}

using Test = Kvasir::Register::RWLocation<1,2,0,E>;
constexpr Test test{};
int main(){
	auto b = E::b;
	apply(write(test,value<E,E::a>()), write(test,value<E,E::a>()));
}

