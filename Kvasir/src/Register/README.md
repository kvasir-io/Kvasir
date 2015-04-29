Kvasir Register Abstraction 

This C++ library provides a highly optimized and powerful abstraction to Special Function Registers (SFRs). 
SFRs are essentially address locations which look like ram to the Processor and compiler but are hard wired to 
special functions of the core and peripherials of a microcontroller/microprocessor. To avoid errors most compiler 
optimizations must be switched off locally (by using the volatile keyword) when dealing with SFRs. 
<code>
    volatile int& sfr = 0x40041234;
	sfr |= (1<<14);  //set bit 14
</code>
This approach is effective but far less efficient than possible.



