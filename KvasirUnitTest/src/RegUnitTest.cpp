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


template<typename>
struct Print;

void FTest(){

}
enum class E{a,b};

using Test = Kvasir::Register::RWLocation<1,2,E>;
constexpr Test test{};
int main(){
	auto b = E::b;
	apply(test.write<E::a>(), test.write(b));
}

