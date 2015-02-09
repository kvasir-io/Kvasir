/**************************************************************************************************
 * Source file containing the unittests of the CoreM3.hpp file
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

#include "..\..\Kvasir\src\CoreM3.hpp"

static void f(){
	Kvasir::Core::enableIrq(Kvasir::Core::Interrupt::can, Kvasir::Core::Interrupt::i2C0);
	Kvasir::Core::disableIrq(Kvasir::Core::Interrupt::can, Kvasir::Core::Interrupt::i2C0);
	Kvasir::Core::setPendingIrq(Kvasir::Core::Interrupt::can, Kvasir::Core::Interrupt::i2C0);
	Kvasir::Core::clearPendingIrq(Kvasir::Core::Interrupt::can, Kvasir::Core::Interrupt::i2C0);
}

