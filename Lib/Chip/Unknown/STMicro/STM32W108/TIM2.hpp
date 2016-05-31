#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General purpose timer 2
    namespace Tim2Tim2Isr{    ///<TIM Interrupt Status Register
        using Addr = Register::Address<0x4000a804,0xffffe0a0,0x00000000,unsigned>;
        ///RSVD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsvd{}; 
        ///TIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tif{}; 
        ///CC4IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4if{}; 
        ///CC3IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3if{}; 
        ///CC2IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2if{}; 
        ///CC1IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1if{}; 
        ///UIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
    }
    namespace Tim2Tim2Missr{    ///<TIM interrupt missed register
        using Addr = Register::Address<0x4000a81c,0xffffe180,0x00000000,unsigned>;
        ///CC4IM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4im{}; 
        ///CC3IM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3im{}; 
        ///CC2IM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2im{}; 
        ///CC1IM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1im{}; 
        ///RSVD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsvd{}; 
    }
    namespace Tim2Tim2Cr1{    ///<control register 1
        using Addr = Register::Address<0x4000f000,0xffffff00,0x00000000,unsigned>;
        ///ARBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arbe{}; 
        ///CMS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> cms{}; 
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///OPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> opm{}; 
        ///URS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urs{}; 
        ///UDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udis{}; 
        ///CEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
    }
    namespace Tim2Tim2Ier{    ///<TIM Interrupt Enable Register
        using Addr = Register::Address<0x4000a844,0xffffffa0,0x00000000,unsigned>;
        ///TIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie{}; 
        ///CC4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4ie{}; 
        ///CC3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3ie{}; 
        ///CC2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2ie{}; 
        ///CC1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1ie{}; 
        ///UIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
    }
    namespace Tim2Tim2Cr2{    ///<control register 1
        using Addr = Register::Address<0x4000f004,0xffffff0f,0x00000000,unsigned>;
        ///TI1S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ti1s{}; 
        ///MMS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> mms{}; 
    }
    namespace Tim2Tim2Smcr{    ///<TIM slave Mode Control          register
        using Addr = Register::Address<0x4000f008,0xffff0008,0x00000000,unsigned>;
        ///ETP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> etp{}; 
        ///ECE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ece{}; 
        ///ETPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> etps{}; 
        ///ETF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> etf{}; 
        ///MSM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msm{}; 
        ///TS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ts{}; 
        ///SMS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sms{}; 
    }
    namespace Tim2Tim2Egr{    ///<TIM event generation register
        using Addr = Register::Address<0x4000f014,0xffffffa0,0x00000000,unsigned>;
        ///TG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tg{}; 
        ///CC4G
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4g{}; 
        ///CC3G
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3g{}; 
        ///CC2G
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2g{}; 
        ///CC1G
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1g{}; 
        ///UG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
    }
    namespace Tim2Tim2Ccmr1Input{    ///<capture/compare mode register 1 (Input          mode)
        using Addr = Register::Address<0x4000f018,0xffff0000,0x00000000,unsigned>;
        ///CC1S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
        ///IC1PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ic1psc{}; 
        ///IC1F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic1f{}; 
        ///CC2S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        ///IC2PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ic2psc{}; 
        ///IC2F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic2f{}; 
    }
    namespace Tim2Tim2Ccmr1Output{    ///<capture/compare mode register 1 (output          mode)
        using Addr = Register::Address<0x4000f018,0xffff8080,0x00000000,unsigned>;
        ///OC2M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc2m{}; 
        ///OC2PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc2pe{}; 
        ///OC2FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc2fe{}; 
        ///CC2S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        ///OC1M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc1m{}; 
        ///OC1PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc1pe{}; 
        ///OC1FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc1fe{}; 
        ///CC1S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
    }
    namespace Tim2Tim2Ccmr2Input{    ///<capture/compare mode register 2 (input          mode)
        using Addr = Register::Address<0x4000f01c,0xffff0000,0x00000000,unsigned>;
        ///IC4F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic4f{}; 
        ///IC4PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ic4psc{}; 
        ///IC3F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic3f{}; 
        ///IC3PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ic3psc{}; 
        ///CC4S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc4s{}; 
        ///CC3S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc3s{}; 
    }
    namespace Tim2Tim2Ccmr2Output{    ///<capture/compare mode register 2 (output          mode)
        using Addr = Register::Address<0x4000f01c,0xffff8080,0x00000000,unsigned>;
        ///OC4M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc4m{}; 
        ///OC4PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc4pe{}; 
        ///OC4FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc4fe{}; 
        ///CC4S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc4s{}; 
        ///OC3M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc3m{}; 
        ///OC3PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc3pe{}; 
        ///OC3FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc3fe{}; 
        ///CC3S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc3s{}; 
    }
    namespace Tim2Tim2Ccer{    ///<TIM capture/compare enable          register
        using Addr = Register::Address<0x4000f020,0xffffcccc,0x00000000,unsigned>;
        ///CC4P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cc4p{}; 
        ///CC4E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4e{}; 
        ///CC3P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc3p{}; 
        ///CC3E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cc3e{}; 
        ///CC2P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cc2p{}; 
        ///CC2E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc2e{}; 
        ///CC1P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1p{}; 
        ///CC1E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cc1e{}; 
    }
    namespace Tim2Tim2Cnt{    ///<TIM counter register
        using Addr = Register::Address<0x4000f024,0xffff0000,0x00000000,unsigned>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Tim2Tim2Psc{    ///<TIM prescaler register
        using Addr = Register::Address<0x4000f028,0xffff0000,0x00000000,unsigned>;
        ///PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Tim2Tim2Arr{    ///<TIM auto-reload register
        using Addr = Register::Address<0x4000f02c,0xffff0000,0x00000000,unsigned>;
        ///ARR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
    }
    namespace Tim2Tim2Ccr1{    ///<TIM capture/compare register 1
        using Addr = Register::Address<0x4000f034,0xffff0000,0x00000000,unsigned>;
        ///CCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr{}; 
    }
    namespace Tim2Tim2Ccr2{    ///<TIM capture/compare register 2
        using Addr = Register::Address<0x4000f038,0xffff0000,0x00000000,unsigned>;
        ///CCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr{}; 
    }
    namespace Tim2Tim2Ccr3{    ///<TIM capture/compare register 3
        using Addr = Register::Address<0x4000f03c,0xffff0000,0x00000000,unsigned>;
        ///CCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr{}; 
    }
    namespace Tim2Tim2Ccr4{    ///<TIM capture/compare register 4
        using Addr = Register::Address<0x4000f040,0xffff0000,0x00000000,unsigned>;
        ///CCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr{}; 
    }
    namespace Tim2Tim2Or{    ///<TIM option register
        using Addr = Register::Address<0x4000f050,0xffffff00,0x00000000,unsigned>;
        ///REMAPC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> remapc4{}; 
        ///REMAPC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> remapc3{}; 
        ///REMAPC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> remapc2{}; 
        ///REMAPC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> remapc1{}; 
        ///ORRSVD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> orrsvd{}; 
        ///CLKMSKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clkmsken{}; 
        ///EXTRIGSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> extrigsel{}; 
    }
}
