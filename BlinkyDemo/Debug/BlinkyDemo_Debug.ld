/*
 * GENERATED FILE - DO NOT EDIT
 * (c) Code Red Technologies Ltd, 2008-13
 * (c) NXP Semiconductors 2013-2015
 * Generated linker script file for LPC11U68
 * Created from generic_cpp.ld (LPCXpresso v7.5 (0 [Build 254] [2014-10-31] ))
 * By LPCXpresso v7.5.0 [Build 254] [2014-10-31]  on Tue Feb 10 14:12:50 CET 2015
 */


INCLUDE "BlinkyDemo_Debug_lib.ld"
INCLUDE "BlinkyDemo_Debug_mem.ld"

ENTRY(ResetISR)

SECTIONS
{

    /* MAIN TEXT SECTION */    
    .text : ALIGN(4)
    {
        FILL(0xff)
        __vectors_start__ = ABSOLUTE(.) ;
        KEEP(*(.isr_vector))
        
        /* Global Section Table */
        . = ALIGN(4) ;
        __section_table_start = .;
        __data_section_table = .;
        LONG(LOADADDR(.data));
        LONG(    ADDR(.data));
        LONG(  SIZEOF(.data));
        LONG(LOADADDR(.data_RAM2));
        LONG(    ADDR(.data_RAM2));
        LONG(  SIZEOF(.data_RAM2));
        LONG(LOADADDR(.data_RAM3));
        LONG(    ADDR(.data_RAM3));
        LONG(  SIZEOF(.data_RAM3));
        __data_section_table_end = .;
        __bss_section_table = .;
        LONG(    ADDR(.bss));
        LONG(  SIZEOF(.bss));
        LONG(    ADDR(.bss_RAM2));
        LONG(  SIZEOF(.bss_RAM2));
        LONG(    ADDR(.bss_RAM3));
        LONG(  SIZEOF(.bss_RAM3));
        __bss_section_table_end = .;
        __section_table_end = . ;
        /* End of Global Section Table */
        

        *(.after_vectors*)
        
    } >MFlash256
    
    .text : ALIGN(4)    
    {
         *(.text*)
        *(.rodata .rodata.* .constdata .constdata.*)
        . = ALIGN(4);
        
        /* C++ constructors etc */
        . = ALIGN(4);
        KEEP(*(.init))
        
        . = ALIGN(4);
        __preinit_array_start = .;
        KEEP (*(.preinit_array))
        __preinit_array_end = .;
        
        . = ALIGN(4);
        __init_array_start = .;
        KEEP (*(SORT(.init_array.*)))
        KEEP (*(.init_array))
        __init_array_end = .;
        
        KEEP(*(.fini));
        
        . = ALIGN(4);
        KEEP (*crtbegin.o(.ctors))
        KEEP (*(EXCLUDE_FILE (*crtend.o) .ctors))
        KEEP (*(SORT(.ctors.*)))
        KEEP (*crtend.o(.ctors))
        
        . = ALIGN(4);
        KEEP (*crtbegin.o(.dtors))
        KEEP (*(EXCLUDE_FILE (*crtend.o) .dtors))
        KEEP (*(SORT(.dtors.*)))
        KEEP (*crtend.o(.dtors))
        . = ALIGN(4);
        /* End C++ */
    } > MFlash256

    /*
     * for exception handling/unwind - some Newlib functions (in common
     * with C++ and STDC++) use this. 
     */
    .ARM.extab : ALIGN(4)
    {
    	*(.ARM.extab* .gnu.linkonce.armextab.*)
    } > MFlash256
    __exidx_start = .;
    
    .ARM.exidx : ALIGN(4)
    {
    	*(.ARM.exidx* .gnu.linkonce.armexidx.*)
    } > MFlash256
    __exidx_end = .;
    
    _etext = .;
        
    /* possible MTB section for Ram1_2 */
    .mtb_buffer_RAM2 (NOLOAD) :
    {
        KEEP(*(.mtb.$RAM2*))
        KEEP(*(.mtb.$RAM1_2*))
    } > Ram1_2 
    
    /* DATA section for Ram1_2 */
    .data_RAM2 : ALIGN(4)
    {
       FILL(0xff)
       *(.ramfunc.$RAM2)
       *(.ramfunc.$Ram1_2)
    	*(.data.$RAM2*)
    	*(.data.$Ram1_2*)
       . = ALIGN(4) ;
    } > Ram1_2 AT>MFlash256
    /* possible MTB section for Ram2USB_2 */
    .mtb_buffer_RAM3 (NOLOAD) :
    {
        KEEP(*(.mtb.$RAM3*))
        KEEP(*(.mtb.$RAM2USB_2*))
    } > Ram2USB_2 
    
    /* DATA section for Ram2USB_2 */
    .data_RAM3 : ALIGN(4)
    {
       FILL(0xff)
       *(.ramfunc.$RAM3)
       *(.ramfunc.$Ram2USB_2)
    	*(.data.$RAM3*)
    	*(.data.$Ram2USB_2*)
       . = ALIGN(4) ;
    } > Ram2USB_2 AT>MFlash256
    
    /* MAIN DATA SECTION */
    
    /* Default MTB section */
    .mtb_buffer_default (NOLOAD) :
    {
       KEEP(*(.mtb*))
    } > Ram0_32 

    .uninit_RESERVED : ALIGN(4)
    {
        KEEP(*(.bss.$RESERVED*))
        . = ALIGN(4) ;
        _end_uninit_RESERVED = .;
    } > Ram0_32

	
	/* Main DATA section (Ram0_32) */
	.data : ALIGN(4)
	{
	   FILL(0xff)
	   _data = . ;
	   *(vtable)
	   *(.ramfunc*)
	   *(.data*)
	   . = ALIGN(4) ;
	   _edata = . ;
	} > Ram0_32 AT>MFlash256

    /* BSS section for Ram1_2 */
    .bss_RAM2 : ALIGN(4)
    {
    	*(.bss.$RAM2*)
    	*(.bss.$Ram1_2*)
       . = ALIGN(4) ;
    } > Ram1_2
    /* BSS section for Ram2USB_2 */
    .bss_RAM3 : ALIGN(4)
    {
    	*(.bss.$RAM3*)
    	*(.bss.$Ram2USB_2*)
       . = ALIGN(4) ;
    } > Ram2USB_2

    /* MAIN BSS SECTION */
    .bss : ALIGN(4)
    {
        _bss = .;
        *(.bss*)
        *(COMMON)
        . = ALIGN(4) ;
        _ebss = .;
        PROVIDE(end = .);
    } > Ram0_32
        
    /* NOINIT section for Ram1_2 */
    .noinit_RAM2 (NOLOAD) : ALIGN(4)
    {
    	*(.noinit.$RAM2*)
    	*(.noinit.$Ram1_2*)
       . = ALIGN(4) ;
    } > Ram1_2 
    /* NOINIT section for Ram2USB_2 */
    .noinit_RAM3 (NOLOAD) : ALIGN(4)
    {
    	*(.noinit.$RAM3*)
    	*(.noinit.$Ram2USB_2*)
       . = ALIGN(4) ;
    } > Ram2USB_2 
    
    /* DEFAULT NOINIT SECTION */
    .noinit (NOLOAD): ALIGN(4)
    {
        _noinit = .;
        *(.noinit*) 
         . = ALIGN(4) ;
        _end_noinit = .;
    } > Ram0_32
    
    PROVIDE(_pvHeapStart = DEFINED(__user_heap_base) ? __user_heap_base : .);
    PROVIDE(_vStackTop = DEFINED(__user_stack_top) ? __user_stack_top : __top_Ram0_32 - 0);
}
