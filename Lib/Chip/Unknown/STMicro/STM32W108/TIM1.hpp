#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General purpose timer 1
    namespace Nonetim1Isr{    ///<TIM Interrupt Status Register
        using Addr = Register::Address<0x4000a800,0xffffe0a0,0,unsigned>;
        ///RSVD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> rsvd{}; 
        namespace RsvdValC{
        }
        ///TIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tif{}; 
        namespace TifValC{
        }
        ///CC4IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4if{}; 
        namespace Cc4ifValC{
        }
        ///CC3IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3if{}; 
        namespace Cc3ifValC{
        }
        ///CC2IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2if{}; 
        namespace Cc2ifValC{
        }
        ///CC1IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1if{}; 
        namespace Cc1ifValC{
        }
        ///UIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uif{}; 
        namespace UifValC{
        }
    }
    namespace Nonetim1Missr{    ///<TIM interrupt missed register
        using Addr = Register::Address<0x4000a818,0xffffe180,0,unsigned>;
        ///CC4IM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4im{}; 
        namespace Cc4imValC{
        }
        ///CC3IM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cc3im{}; 
        namespace Cc3imValC{
        }
        ///CC2IM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cc2im{}; 
        namespace Cc2imValC{
        }
        ///CC1IM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc1im{}; 
        namespace Cc1imValC{
        }
        ///RSVD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rsvd{}; 
        namespace RsvdValC{
        }
    }
    namespace Nonetim1Cr1{    ///<control register 1
        using Addr = Register::Address<0x4000e000,0xffffff00,0,unsigned>;
        ///ARBE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arbe{}; 
        namespace ArbeValC{
        }
        ///CMS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> cms{}; 
        namespace CmsValC{
        }
        ///DIR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///OPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> opm{}; 
        namespace OpmValC{
        }
        ///URS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urs{}; 
        namespace UrsValC{
        }
        ///UDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> udis{}; 
        namespace UdisValC{
        }
        ///CEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cen{}; 
        namespace CenValC{
        }
    }
    namespace Nonetim1Ier{    ///<TIM Interrupt Enable Register
        using Addr = Register::Address<0x4000a840,0xffffffa0,0,unsigned>;
        ///TIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tie{}; 
        namespace TieValC{
        }
        ///CC4IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4ie{}; 
        namespace Cc4ieValC{
        }
        ///CC3IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3ie{}; 
        namespace Cc3ieValC{
        }
        ///CC2IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2ie{}; 
        namespace Cc2ieValC{
        }
        ///CC1IE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1ie{}; 
        namespace Cc1ieValC{
        }
        ///UIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uie{}; 
        namespace UieValC{
        }
    }
    namespace Nonetim1Cr2{    ///<control register 2
        using Addr = Register::Address<0x4000e004,0xffffff0f,0,unsigned>;
        ///TI1S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ti1s{}; 
        namespace Ti1sValC{
        }
        ///MMS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> mms{}; 
        namespace MmsValC{
        }
    }
    namespace Nonetim1Smcr{    ///<slave Mode Control register
        using Addr = Register::Address<0x4000e008,0xffff0008,0,unsigned>;
        ///ETP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> etp{}; 
        namespace EtpValC{
        }
        ///ECE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ece{}; 
        namespace EceValC{
        }
        ///ETPS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> etps{}; 
        namespace EtpsValC{
        }
        ///ETF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> etf{}; 
        namespace EtfValC{
        }
        ///MSM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msm{}; 
        namespace MsmValC{
        }
        ///TS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> ts{}; 
        namespace TsValC{
        }
        ///SMS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sms{}; 
        namespace SmsValC{
        }
    }
    namespace Nonetim1Egr{    ///<TIM event generation register
        using Addr = Register::Address<0x4000e014,0xffffffa0,0,unsigned>;
        ///TG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tg{}; 
        namespace TgValC{
        }
        ///CC4G
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc4g{}; 
        namespace Cc4gValC{
        }
        ///CC3G
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cc3g{}; 
        namespace Cc3gValC{
        }
        ///CC2G
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cc2g{}; 
        namespace Cc2gValC{
        }
        ///CC1G
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1g{}; 
        namespace Cc1gValC{
        }
        ///UG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ug{}; 
        namespace UgValC{
        }
    }
    namespace Nonetim1Ccmr1Input{    ///<capture/compare mode register 1 (Input
          mode)
        using Addr = Register::Address<0x4000e018,0xffff0000,0,unsigned>;
        ///CC1S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
        namespace Cc1sValC{
        }
        ///IC1PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ic1psc{}; 
        namespace Ic1pscValC{
        }
        ///IC1F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic1f{}; 
        namespace Ic1fValC{
        }
        ///CC2S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        namespace Cc2sValC{
        }
        ///IC2PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ic2psc{}; 
        namespace Ic2pscValC{
        }
        ///IC2F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic2f{}; 
        namespace Ic2fValC{
        }
    }
    namespace Nonetim1Ccmr1Output{    ///<capture/compare mode register 1 (output
          mode)
        using Addr = Register::Address<0x4000e018,0xffff8080,0,unsigned>;
        ///OC2M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc2m{}; 
        namespace Oc2mValC{
        }
        ///OC2PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc2pe{}; 
        namespace Oc2peValC{
        }
        ///OC2FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc2fe{}; 
        namespace Oc2feValC{
        }
        ///CC2S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc2s{}; 
        namespace Cc2sValC{
        }
        ///OC1M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc1m{}; 
        namespace Oc1mValC{
        }
        ///OC1PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc1pe{}; 
        namespace Oc1peValC{
        }
        ///OC1FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc1fe{}; 
        namespace Oc1feValC{
        }
        ///CC1S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc1s{}; 
        namespace Cc1sValC{
        }
    }
    namespace Nonetim1Ccmr2Input{    ///<capture/compare mode register 2 (input
          mode)
        using Addr = Register::Address<0x4000e01c,0xffff0000,0,unsigned>;
        ///CC3S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc3s{}; 
        namespace Cc3sValC{
        }
        ///IC3PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> ic3psc{}; 
        namespace Ic3pscValC{
        }
        ///IC3F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic3f{}; 
        namespace Ic3fValC{
        }
        ///CC4S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc4s{}; 
        namespace Cc4sValC{
        }
        ///IC4PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ic4psc{}; 
        namespace Ic4pscValC{
        }
        ///IC4F
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic4f{}; 
        namespace Ic4fValC{
        }
    }
    namespace Nonetim1Ccmr2Output{    ///<capture/compare mode register 2 (output
          mode)
        using Addr = Register::Address<0x4000e01c,0xffff8080,0,unsigned>;
        ///OC4M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> oc4m{}; 
        namespace Oc4mValC{
        }
        ///OC4PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oc4pe{}; 
        namespace Oc4peValC{
        }
        ///OC4FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oc4fe{}; 
        namespace Oc4feValC{
        }
        ///CC4S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cc4s{}; 
        namespace Cc4sValC{
        }
        ///OC3M
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> oc3m{}; 
        namespace Oc3mValC{
        }
        ///OC3PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oc3pe{}; 
        namespace Oc3peValC{
        }
        ///OC3FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> oc3fe{}; 
        namespace Oc3feValC{
        }
        ///CC3S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cc3s{}; 
        namespace Cc3sValC{
        }
    }
    namespace Nonetim1Ccer{    ///<TIM capture/compare enable
          register
        using Addr = Register::Address<0x4000e020,0xffffcccc,0,unsigned>;
        ///CC4P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cc4p{}; 
        namespace Cc4pValC{
        }
        ///CC4E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cc4e{}; 
        namespace Cc4eValC{
        }
        ///CC3P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cc3p{}; 
        namespace Cc3pValC{
        }
        ///CC3E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cc3e{}; 
        namespace Cc3eValC{
        }
        ///CC2P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cc2p{}; 
        namespace Cc2pValC{
        }
        ///CC2E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cc2e{}; 
        namespace Cc2eValC{
        }
        ///CC1P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cc1p{}; 
        namespace Cc1pValC{
        }
        ///CC1E
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cc1e{}; 
        namespace Cc1eValC{
        }
    }
    namespace Nonetim1Cnt{    ///<TIM counter register
        using Addr = Register::Address<0x4000e024,0xffff0000,0,unsigned>;
        ///CNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Nonetim1Psc{    ///<TIM prescaler register
        using Addr = Register::Address<0x4000e028,0xffff0000,0,unsigned>;
        ///PSC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> psc{}; 
        namespace PscValC{
        }
    }
    namespace Nonetim1Arr{    ///<TIM auto-reload register
        using Addr = Register::Address<0x4000e02c,0xffff0000,0,unsigned>;
        ///ARR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> arr{}; 
        namespace ArrValC{
        }
    }
    namespace Nonetim1Ccr1{    ///<IM capture/compare register 1
        using Addr = Register::Address<0x4000e034,0xffff0000,0,unsigned>;
        ///CCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr{}; 
        namespace CcrValC{
        }
    }
    namespace Nonetim1Ccr2{    ///<TIM capture/compare register 2
        using Addr = Register::Address<0x4000e038,0xffff0000,0,unsigned>;
        ///CCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr{}; 
        namespace CcrValC{
        }
    }
    namespace Nonetim1Ccr3{    ///<TIM capture/compare register 3
        using Addr = Register::Address<0x4000e03c,0xffff0000,0,unsigned>;
        ///CCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr{}; 
        namespace CcrValC{
        }
    }
    namespace Nonetim1Ccr4{    ///<TIM capture/compare register 4
        using Addr = Register::Address<0x4000e040,0xffff0000,0,unsigned>;
        ///CCR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ccr{}; 
        namespace CcrValC{
        }
    }
    namespace Nonetim1Or{    ///<TIM option register
        using Addr = Register::Address<0x4000e050,0xfffffff0,0,unsigned>;
        ///ORRSVD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> orrsvd{}; 
        namespace OrrsvdValC{
        }
        ///CLKMSKEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clkmsken{}; 
        namespace ClkmskenValC{
        }
        ///EXTRIGSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> extrigsel{}; 
        namespace ExtrigselValC{
        }
    }
}
