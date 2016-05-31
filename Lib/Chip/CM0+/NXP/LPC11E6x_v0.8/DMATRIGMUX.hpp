#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//DMA controller
    namespace DmatrigmuxDmaItrigPinmux0{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028000,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux1{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028004,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux2{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028008,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux3{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x4002800c,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux4{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028010,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux5{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028014,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux6{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028018,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux7{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x4002801c,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux8{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028020,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux9{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028024,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux10{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028028,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux11{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x4002802c,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux12{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028030,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux13{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028034,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux14{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x40028038,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace DmatrigmuxDmaItrigPinmux15{    ///<Trigger input select register for DMA channel 0.
        using Addr = Register::Address<0x4002803c,0x00000000,0x00000000,unsigned>;
        ///Trigger input number (decimal value) to DMA channel n. All other values are reserved.  0	 = ADC0_SEQA_IRQ 1 = 	ADC0_SEQB_IRQ 2	 = CT16B0_MAT0 3 = 	CT16B1_MAT0 4	 = CT32B0_MAT0 5	 = CT16B1_MAT0 6	 = PINT0 ( pin interrupt 0) 7 = 	PINT1 (pin interrupt1 ) 8 = 	SCT0_DMA0 9 = 	SCT0_DMA1 10	 = SCT1_DMA0 11	 = SCT1_DMA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> inpN{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
