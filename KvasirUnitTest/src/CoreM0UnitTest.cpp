/**************************************************************************************************
 * Source file containing the unittests of the CoreM0.hpp file
 *
 *
 * List of bugs:
 * 			- none
 *
 *
 * List of requested funtionalities:
 * 			- many
 *
 *

*/

#include "..\..\Kvasir\src\CoreM0.hpp"

static void f(){
	Kvasir::Core::enableIrq(Kvasir::Core::Interrupt::i2c0,Kvasir::Core::Interrupt::dma);

}
