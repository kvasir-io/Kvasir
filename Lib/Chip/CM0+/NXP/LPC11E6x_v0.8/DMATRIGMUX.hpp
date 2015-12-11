#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA controller
    namespace NonedmaItrigPinmux0{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028000,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux1{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028004,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux2{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028008,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux3{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x4002800c,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux4{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028010,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux5{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028014,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux6{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028018,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux7{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x4002801c,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux8{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028020,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux9{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028024,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux10{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028028,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux11{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x4002802c,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux12{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028030,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux13{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028034,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux14{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028038,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
    namespace NonedmaItrigPinmux15{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x4002803c,0xffffffe0,0,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
    }
}
