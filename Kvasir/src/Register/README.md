#Kvasir Register Abstraction 

This C++ library provides a highly optimized and powerful abstraction to Special Function Registers (SFRs). 
SFRs are essentially address locations which look like ram to the Processor and compiler but are hard wired to 
special functions of the core and peripherials of a microcontroller/microprocessor. To avoid errors most compiler 
optimizations must be switched off locally (by using the volatile keyword) when dealing with SFRs. 

Example 1:

<code>
    volatile int& mySfr = 0x40123456;
    
    //in user code
    sfr |= (1<<14) | (1<<13);  //set bit 14
 
    //in an ISR
    sfr &= ~(1<<16);
</code>

This approach is effective but far less efficient than possible.

Besides being inefficient this approach can be unsafe and unflexable. For example the register "mySfr" may contain bits which are cleared by writing a 1. This harmless looking |= reads the register, changes bit 14 and leaves the rest unchanged, however with the above mentioned special behavior unrelated bits would be cleared unexpectedly by this action. The "mySfr" in code example above could also be modified from an ISR which would cause a race condition. 

The root of the problem is that the compiler (and often the user) does not have enough information about the special functios contained in a given SFR to do static checking, provide flexable forms of expression or optimize the code correctly. 

This library allows the user to provide abstraction information for all SFRs in a compile time readable manor and uses template meta programming to preform optimizations and static checks based on this information. 

Lets see some code.

Example 2:

<code>
    //in a headder abstracting the particular chip in question
    
    constexpr RWLocation<0x40123456,(1<<13)> mySfrBitName1;
    constexpr RWLocation<0x40123456,(1<<14)> mySfrBitName2;
    constexpr RWLocation<0x40123456,(1<<16)> mySfrBitName3;
    
    //in user code
    apply(set(mySfrBitName1),set(mySfrBitName2));
    
    //in an ISR
    apply(clear(mySfrBitName3));
</code>

here `apply` executes its parameters, in unspecified order. `set` and `clear` are essentially command factories which convert a `BitLocation` (which `RWLocation` is an alias of) into a `Register::Action` which in turn can be executed by `apply`. 

In example 2 we still have the same problem of a race condition, we could however remidy this with the `atomic` factory function which changes its parameter into an atomic operation or issues a compiler error if it is not possible. 

<code>
    //in a headder abstracting the particular chip in question
    constexpr RWLocation<0x40123456,(1<<13)> mySfrBitName1;
    constexpr RWLocation<0x40123456,(1<<14)> mySfrBitName2;
    constexpr RWLocation<0x40123456,(1<<16)> mySfrBitName3;
    
    //in user code
    apply(atomic(set(mySfrBitName1)),atomic(set(mySfrBitName2)));
    
    //in an ISR
    apply(atomic(clear(mySfrBitName3)));
</code>

This is now thread safe (using bit banding internally). What if we require that mySfrBitName1 and mySfrBitName2 are set at the same time? Notice that bit 16 used in the ISR is in byte 2 of the SFR and bits 13 and 14 are in byte 1, if we change our read modify write aroud to only access one single byte rather than the whole register we would remove the race condition. This kind of refactoring can be a source of bugs an confusion in normal code but here we can just use the `isolated` factory function. 

<code>

    //in a headder abstracting the particular chip in question
    
    constexpr RWLocation<0x40123456,(1<<13)> mySfrBitName1;
    
    constexpr RWLocation<0x40123456,(1<<14)> mySfrBitName2;
    
    constexpr RWLocation<0x40123456,(1<<16)> mySfrBitName3;
    
    //in user code
    
    apply(isolated(set(mySfrBitName1),set(mySfrBitName2)));
    
    //in an ISR
    
    apply(isolated(clear(mySfrBitName3)));
    
</code>

Now this is thread safe because we are accessing different bytes in bytewise mode in the ISR. It may not however be as clear as it should be during code review. Luckely there is a compile time evaluated `assertNoConflicts` function which can be used to enforce this at compile time. 

<code>
    assertNoConflicts(isolated(set(mySfrBitName1),set(mySfrBitName2)),isolated(clear(mySfrBitName3))); //no error
    
    assertNoConflicts(isolated(set(mySfrBitName1)),isolated(set(mySfrBitName2))); //error both bits are in the same byte
    
    //in user code
    
    apply(isolated(set(mySfrBitName1),set(mySfrBitName2)));
    
    //in an ISR
    
    apply(isolated(clear(mySfrBitName3)));
</code>
