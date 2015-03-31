#include "Hardware.h"
#include "StartUp.hpp"
#include "Cdc.hpp"

int main(void) {



    // Force the counter to be placed into memory
    volatile static int i = 0 ;
    // Enter an infinite loop, just incrementing a counter
    while(1) {
        i++ ;
    }
    return 0 ;
}


KVASIR_START(Cdc)
