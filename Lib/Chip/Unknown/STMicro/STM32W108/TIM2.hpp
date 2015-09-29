#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General purpose timer 2
    namespace Nonetim2Isr{    ///<TIM Interrupt Status Register
        using Addr = Register::Address<0x4000a804,0xffffe0a0,0,unsigned>;
        ///RSVD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> rsvd{}; 
        ///TIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tif{}; 
        ///CC4IF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4if{}; 
        ///CC3IF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3if{}; 
        ///CC2IF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2if{}; 
        ///CC1IF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1if{}; 
        ///UIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
    }
    namespace Nonetim2Missr{    ///<TIM interrupt missed register
        using Addr = Register::Address<0x4000a81c,0xffffe180,0,unsigned>;
        ///CC4IM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4im{}; 
        ///CC3IM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3im{}; 
        ///CC2IM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2im{}; 
        ///CC1IM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1im{}; 
        ///RSVD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rsvd{}; 
    }
    namespace Nonetim2Cr1{    ///<control register 1
        using Addr = Register::Address<0x4000f000,0xffffff00,0,unsigned>;
        ///ARBE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arbe{}; 
        ///CMS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> cms{}; 
        ///DIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        ///OPM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> opm{}; 
        ///URS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urs{}; 
        ///UDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udis{}; 
        ///CEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
    }
    namespace Nonetim2Ier{    ///<TIM Interrupt Enable Register
        using Addr = Register::Address<0x4000a844,0xffffffa0,0,unsigned>;
        ///TIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie{}; 
        ///CC4IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4ie{}; 
        ///CC3IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3ie{}; 
        ///CC2IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2ie{}; 
        ///CC1IE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1ie{}; 
        ///UIE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
    }
    namespace Nonetim2Cr2{    ///<control register 1
        using Addr = Register::Address<0x4000f004,0xffffff0f,0,unsigned>;
        ///TI1S
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ti1s{}; 
        ///MMS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> mms{}; 
    }
    namespace Nonetim2Smcr{    ///<TIM slave Mode Control
          register
        using Addr = Register::Address<0x4000f008,0xffff0008,0,unsigned>;
        ///ETP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> etp{}; 
        ///ECE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ece{}; 
        ///ETPS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> etps{}; 
        ///ETF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> etf{}; 
        ///MSM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msm{}; 
        ///TS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ts{}; 
        ///SMS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sms{}; 
    }
    namespace Nonetim2Egr{    ///<TIM event generation register
        using Addr = Register::Address<0x4000f014,0xffffffa0,0,unsigned>;
        ///TG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tg{}; 
        ///CC4G
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4g{}; 
        ///CC3G
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3g{}; 
        ///CC2G
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2g{}; 
        ///CC1G
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1g{}; 
        ///UG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
    }
    namespace Nonetim2Ccmr1Input{    ///<capture/compare mode register 1 (Input
          mode)
        using Addr = Register::Address<0x4000f018,0xffff0000,0,unsigned>;
        ///CC1S
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
        ///IC1PSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ic1psc{}; 
        ///IC1F
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic1f{}; 
        ///CC2S
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        ///IC2PSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ic2psc{}; 
        ///IC2F
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic2f{}; 
    }
    namespace Nonetim2Ccmr1Output{    ///<capture/compare mode register 1 (output
          mode)
        using Addr = Register::Address<0x4000f018,0xffff8080,0,unsigned>;
        ///OC2M
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc2m{}; 
        ///OC2PE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc2pe{}; 
        ///OC2FE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc2fe{}; 
        ///CC2S
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        ///OC1M
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc1m{}; 
        ///OC1PE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc1pe{}; 
        ///OC1FE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc1fe{}; 
        ///CC1S
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
    }
    namespace Nonetim2Ccmr2Input{    ///<capture/compare mode register 2 (input
          mode)
        using Addr = Register::Address<0x4000f01c,0xffff0000,0,unsigned>;
        ///IC4F
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic4f{}; 
        ///IC4PSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ic4psc{}; 
        ///IC3F
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic3f{}; 
        ///IC3PSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ic3psc{}; 
        ///CC4S
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc4s{}; 
        ///CC3S
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc3s{}; 
    }
    namespace Nonetim2Ccmr2Output{    ///<capture/compare mode register 2 (output
          mode)
        using Addr = Register::Address<0x4000f01c,0xffff8080,0,unsigned>;
        ///OC4M
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc4m{}; 
        ///OC4PE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc4pe{}; 
        ///OC4FE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc4fe{}; 
        ///CC4S
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc4s{}; 
        ///OC3M
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc3m{}; 
        ///OC3PE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc3pe{}; 
        ///OC3FE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc3fe{}; 
        ///CC3S
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc3s{}; 
    }
    namespace Nonetim2Ccer{    ///<TIM capture/compare enable
          register
        using Addr = Register::Address<0x4000f020,0xffffcccc,0,unsigned>;
        ///CC4P
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cc4p{}; 
        ///CC4E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4e{}; 
        ///CC3P
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc3p{}; 
        ///CC3E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cc3e{}; 
        ///CC2P
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cc2p{}; 
        ///CC2E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc2e{}; 
        ///CC1P
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1p{}; 
        ///CC1E
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cc1e{}; 
    }
    namespace Nonetim2Cnt{    ///<TIM counter register
        using Addr = Register::Address<0x4000f024,0xffff0000,0,unsigned>;
        ///CNT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Nonetim2Psc{    ///<TIM prescaler register
        using Addr = Register::Address<0x4000f028,0xffff0000,0,unsigned>;
        ///PSC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
    }
    namespace Nonetim2Arr{    ///<TIM auto-reload register
        using Addr = Register::Address<0x4000f02c,0xffff0000,0,unsigned>;
        ///ARR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
    }
    namespace Nonetim2Ccr1{    ///<TIM capture/compare register 1
        using Addr = Register::Address<0x4000f034,0xffff0000,0,unsigned>;
        ///CCR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr{}; 
    }
    namespace Nonetim2Ccr2{    ///<TIM capture/compare register 2
        using Addr = Register::Address<0x4000f038,0xffff0000,0,unsigned>;
        ///CCR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr{}; 
    }
    namespace Nonetim2Ccr3{    ///<TIM capture/compare register 3
        using Addr = Register::Address<0x4000f03c,0xffff0000,0,unsigned>;
        ///CCR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr{}; 
    }
    namespace Nonetim2Ccr4{    ///<TIM capture/compare register 4
        using Addr = Register::Address<0x4000f040,0xffff0000,0,unsigned>;
        ///CCR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr{}; 
    }
    namespace Nonetim2Or{    ///<TIM option register
        using Addr = Register::Address<0x4000f050,0xffffff00,0,unsigned>;
        ///REMAPC4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> remapc4{}; 
        ///REMAPC3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> remapc3{}; 
        ///REMAPC2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> remapc2{}; 
        ///REMAPC1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> remapc1{}; 
        ///ORRSVD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> orrsvd{}; 
        ///CLKMSKEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clkmsken{}; 
        ///EXTRIGSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> extrigsel{}; 
    }
}
