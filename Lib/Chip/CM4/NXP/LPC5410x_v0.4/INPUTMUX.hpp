#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Input multiplexing
    namespace Nonepintsel0{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400500c0,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine
								input. (PIO0_0 to PIO1_31 correspond to numbers 0 to
								63).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
    }
    namespace Nonepintsel1{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400500c4,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine
								input. (PIO0_0 to PIO1_31 correspond to numbers 0 to
								63).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
    }
    namespace Nonepintsel2{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400500c8,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine
								input. (PIO0_0 to PIO1_31 correspond to numbers 0 to
								63).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
    }
    namespace Nonepintsel3{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400500cc,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine
								input. (PIO0_0 to PIO1_31 correspond to numbers 0 to
								63).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
    }
    namespace Nonepintsel4{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400500d0,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine
								input. (PIO0_0 to PIO1_31 correspond to numbers 0 to
								63).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
    }
    namespace Nonepintsel5{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400500d4,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine
								input. (PIO0_0 to PIO1_31 correspond to numbers 0 to
								63).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
    }
    namespace Nonepintsel6{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400500d8,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine
								input. (PIO0_0 to PIO1_31 correspond to numbers 0 to
								63).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
    }
    namespace Nonepintsel7{    ///<Pin interrupt select register 0
        using Addr = Register::Address<0x400500dc,0xffffff00,0,unsigned>;
        ///Pin number select for pin interrupt or pattern match engine
								input. (PIO0_0 to PIO1_31 correspond to numbers 0 to
								63).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> intpin{}; 
        namespace IntpinValC{
        }
    }
    namespace NonedmaItrigInmux0{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x400500e0,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux1{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x400500e4,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux2{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x400500e8,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux3{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x400500ec,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux4{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x400500f0,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux5{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x400500f4,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux6{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x400500f8,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux7{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x400500fc,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux8{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x40050100,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux9{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x40050104,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux10{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x40050108,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux11{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x4005010c,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux12{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x40050110,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux13{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x40050114,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux14{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x40050118,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux15{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x4005011c,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux16{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x40050120,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux17{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x40050124,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux18{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x40050128,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux19{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x4005012c,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux20{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x40050130,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaItrigInmux21{    ///<Trigger select register for DMA channel 0
        using Addr = Register::Address<0x40050134,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) for DMA channel n (n =
								0 to 21). 0 = ADC0 Sequence A interrupt 1 = ADC0 Sequence B
								interrupt 2 = SCT0 DMA request 0 3 = SCT0 DMA request 1 4 = Timer 0
								Match 0 5 = Timer 0 Match 1 6 = Timer 1 Match 0 7 = Timer 2 Match 0
								8 = Timer 2 Match 1 9 = Timer 3 Match 0 10 = Timer 4 Match 0 11 =
								Timer 4 Match 1 12 = Pin interrupt 0 13 = Pin interrupt 1 14 = Pin
								interrupt 2 15 = Pin interrupt 3 16 = DMA output trigger mux 0 17 =
								DMA output trigger mux 1 18 = DMA output trigger mux 2 19 = DMA
								output trigger mux 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaOtrigInmux0{    ///<DMA output trigger selection to become DMA trigger 16
        using Addr = Register::Address<0x40050140,0xffffffe0,0,unsigned>;
        ///DMA trigger output number (decimal value) for DMA channel n
								(n = 0 to 19).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaOtrigInmux1{    ///<DMA output trigger selection to become DMA trigger 16
        using Addr = Register::Address<0x40050144,0xffffffe0,0,unsigned>;
        ///DMA trigger output number (decimal value) for DMA channel n
								(n = 0 to 19).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaOtrigInmux2{    ///<DMA output trigger selection to become DMA trigger 16
        using Addr = Register::Address<0x40050148,0xffffffe0,0,unsigned>;
        ///DMA trigger output number (decimal value) for DMA channel n
								(n = 0 to 19).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonedmaOtrigInmux3{    ///<DMA output trigger selection to become DMA trigger 16
        using Addr = Register::Address<0x4005014c,0xffffffe0,0,unsigned>;
        ///DMA trigger output number (decimal value) for DMA channel n
								(n = 0 to 19).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inp{}; 
        namespace InpValC{
        }
    }
    namespace NonefreqmeasRef{    ///<Clock selection for frequency measurement function reference
						clock
        using Addr = Register::Address<0x40050160,0xffffffe0,0,unsigned>;
        ///Clock source number (decimal value) for frequency measure
								function target clock: 0 = System oscillator (MAIN_OSC) 1 = IRC
								oscillator 2 = Watchdog oscillator 3 = 32 kHz RTC oscillator 4 =
								Main clock (see Section 4.5.21) 5 = PIO0_4 6 = PIO0_20 7 = PIO0_24 8
								= PIO1_4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> clkin{}; 
        namespace ClkinValC{
        }
    }
    namespace NonefreqmeasTarget{    ///<Clock selection for frequency measurement function target
						clock
        using Addr = Register::Address<0x40050164,0xffffffe0,0,unsigned>;
        ///Clock source number (decimal value) for frequency measure
								function target clock: 0 = System oscillator (MAIN_OSC) 1 = IRC
								oscillator 2 = Watchdog oscillator 3 = 32 kHz RTC oscillator 4 =
								Main clock (see Section 4.5.18) 5 = PIO0_4 6 = PIO0_20 7 = PIO0_24 8
								= PIO1_4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> clkin{}; 
        namespace ClkinValC{
        }
    }
}
