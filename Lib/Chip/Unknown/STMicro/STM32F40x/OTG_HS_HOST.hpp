#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB on the go high speed
    namespace NoneotgHsHcfg{    ///<OTG_HS host configuration
          register
        using Addr = Register::Address<0x40040400,0xfffffff8,0,unsigned>;
        ///FS/LS PHY clock select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fslspcs{}; 
        ///FS- and LS-only support
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fslss{}; 
    }
    namespace NoneotgHsHfir{    ///<OTG_HS Host frame interval
          register
        using Addr = Register::Address<0x40040404,0xffff0000,0,unsigned>;
        ///Frame interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frivl{}; 
    }
    namespace NoneotgHsHfnum{    ///<OTG_HS host frame number/frame time
          remaining register
        using Addr = Register::Address<0x40040408,0x00000000,0,unsigned>;
        ///Frame number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frnum{}; 
        ///Frame time remaining
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ftrem{}; 
    }
    namespace NoneotgHsHptxsts{    ///<OTG_HS_Host periodic transmit FIFO/queue
          status register
        using Addr = Register::Address<0x40040410,0x00000000,0,unsigned>;
        ///Periodic transmit data FIFO space
              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ptxfsavl{}; 
        ///Periodic transmit request queue space
              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ptxqsav{}; 
        ///Top of the periodic transmit request
              queue
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ptxqtop{}; 
    }
    namespace NoneotgHsHaint{    ///<OTG_HS Host all channels interrupt
          register
        using Addr = Register::Address<0x40040414,0xffff0000,0,unsigned>;
        ///Channel interrupts
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> haint{}; 
    }
    namespace NoneotgHsHaintmsk{    ///<OTG_HS host all channels interrupt mask
          register
        using Addr = Register::Address<0x40040418,0xffff0000,0,unsigned>;
        ///Channel interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> haintm{}; 
    }
    namespace NoneotgHsHprt{    ///<OTG_HS host port control and status
          register
        using Addr = Register::Address<0x40040440,0xfff80200,0,unsigned>;
        ///Port connect status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pcsts{}; 
        ///Port connect detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pcdet{}; 
        ///Port enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pena{}; 
        ///Port enable/disable change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> penchng{}; 
        ///Port overcurrent active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> poca{}; 
        ///Port overcurrent change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pocchng{}; 
        ///Port resume
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pres{}; 
        ///Port suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> psusp{}; 
        ///Port reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> prst{}; 
        ///Port line status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> plsts{}; 
        ///Port power
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ppwr{}; 
        ///Port test control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> ptctl{}; 
        ///Port speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> pspd{}; 
    }
    namespace NoneotgHsHcchar0{    ///<OTG_HS host channel-0 characteristics
          register
        using Addr = Register::Address<0x40040500,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count
              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace NoneotgHsHcchar1{    ///<OTG_HS host channel-1 characteristics
          register
        using Addr = Register::Address<0x40040520,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count
              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace NoneotgHsHcchar2{    ///<OTG_HS host channel-2 characteristics
          register
        using Addr = Register::Address<0x40040540,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count
              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace NoneotgHsHcchar3{    ///<OTG_HS host channel-3 characteristics
          register
        using Addr = Register::Address<0x40040560,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count
              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace NoneotgHsHcchar4{    ///<OTG_HS host channel-4 characteristics
          register
        using Addr = Register::Address<0x40040580,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count
              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace NoneotgHsHcchar5{    ///<OTG_HS host channel-5 characteristics
          register
        using Addr = Register::Address<0x400405a0,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count
              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace NoneotgHsHcchar6{    ///<OTG_HS host channel-6 characteristics
          register
        using Addr = Register::Address<0x400405c0,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count
              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace NoneotgHsHcchar7{    ///<OTG_HS host channel-7 characteristics
          register
        using Addr = Register::Address<0x400405e0,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count
              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace NoneotgHsHcchar8{    ///<OTG_HS host channel-8 characteristics
          register
        using Addr = Register::Address<0x40040600,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count
              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace NoneotgHsHcchar9{    ///<OTG_HS host channel-9 characteristics
          register
        using Addr = Register::Address<0x40040620,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count
              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace NoneotgHsHcchar10{    ///<OTG_HS host channel-10 characteristics
          register
        using Addr = Register::Address<0x40040640,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count
              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace NoneotgHsHcchar11{    ///<OTG_HS host channel-11 characteristics
          register
        using Addr = Register::Address<0x40040660,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Multi Count (MC) / Error Count
              (EC)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mc{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace NoneotgHsHcsplt0{    ///<OTG_HS host channel-0 split control
          register
        using Addr = Register::Address<0x40040504,0x7ffe0000,0,unsigned>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace NoneotgHsHcsplt1{    ///<OTG_HS host channel-1 split control
          register
        using Addr = Register::Address<0x40040524,0x7ffe0000,0,unsigned>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace NoneotgHsHcsplt2{    ///<OTG_HS host channel-2 split control
          register
        using Addr = Register::Address<0x40040544,0x7ffe0000,0,unsigned>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace NoneotgHsHcsplt3{    ///<OTG_HS host channel-3 split control
          register
        using Addr = Register::Address<0x40040564,0x7ffe0000,0,unsigned>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace NoneotgHsHcsplt4{    ///<OTG_HS host channel-4 split control
          register
        using Addr = Register::Address<0x40040584,0x7ffe0000,0,unsigned>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace NoneotgHsHcsplt5{    ///<OTG_HS host channel-5 split control
          register
        using Addr = Register::Address<0x400405a4,0x7ffe0000,0,unsigned>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace NoneotgHsHcsplt6{    ///<OTG_HS host channel-6 split control
          register
        using Addr = Register::Address<0x400405c4,0x7ffe0000,0,unsigned>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace NoneotgHsHcsplt7{    ///<OTG_HS host channel-7 split control
          register
        using Addr = Register::Address<0x400405e4,0x7ffe0000,0,unsigned>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace NoneotgHsHcsplt8{    ///<OTG_HS host channel-8 split control
          register
        using Addr = Register::Address<0x40040604,0x7ffe0000,0,unsigned>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace NoneotgHsHcsplt9{    ///<OTG_HS host channel-9 split control
          register
        using Addr = Register::Address<0x40040624,0x7ffe0000,0,unsigned>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace NoneotgHsHcsplt10{    ///<OTG_HS host channel-10 split control
          register
        using Addr = Register::Address<0x40040644,0x7ffe0000,0,unsigned>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace NoneotgHsHcsplt11{    ///<OTG_HS host channel-11 split control
          register
        using Addr = Register::Address<0x40040664,0x7ffe0000,0,unsigned>;
        ///Port address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> prtaddr{}; 
        ///Hub address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,7),Register::ReadWriteAccess,unsigned> hubaddr{}; 
        ///XACTPOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> xactpos{}; 
        ///Do complete split
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> complsplt{}; 
        ///Split enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> spliten{}; 
    }
    namespace NoneotgHsHcint0{    ///<OTG_HS host channel-11 interrupt
          register
        using Addr = Register::Address<0x40040508,0xfffff800,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace NoneotgHsHcint1{    ///<OTG_HS host channel-1 interrupt
          register
        using Addr = Register::Address<0x40040528,0xfffff800,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace NoneotgHsHcint2{    ///<OTG_HS host channel-2 interrupt
          register
        using Addr = Register::Address<0x40040548,0xfffff800,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace NoneotgHsHcint3{    ///<OTG_HS host channel-3 interrupt
          register
        using Addr = Register::Address<0x40040568,0xfffff800,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace NoneotgHsHcint4{    ///<OTG_HS host channel-4 interrupt
          register
        using Addr = Register::Address<0x40040588,0xfffff800,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace NoneotgHsHcint5{    ///<OTG_HS host channel-5 interrupt
          register
        using Addr = Register::Address<0x400405a8,0xfffff800,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace NoneotgHsHcint6{    ///<OTG_HS host channel-6 interrupt
          register
        using Addr = Register::Address<0x400405c8,0xfffff800,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace NoneotgHsHcint7{    ///<OTG_HS host channel-7 interrupt
          register
        using Addr = Register::Address<0x400405e8,0xfffff800,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace NoneotgHsHcint8{    ///<OTG_HS host channel-8 interrupt
          register
        using Addr = Register::Address<0x40040608,0xfffff800,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace NoneotgHsHcint9{    ///<OTG_HS host channel-9 interrupt
          register
        using Addr = Register::Address<0x40040628,0xfffff800,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace NoneotgHsHcint10{    ///<OTG_HS host channel-10 interrupt
          register
        using Addr = Register::Address<0x40040648,0xfffff800,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace NoneotgHsHcint11{    ///<OTG_HS host channel-11 interrupt
          register
        using Addr = Register::Address<0x40040668,0xfffff800,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace NoneotgHsHcintmsk0{    ///<OTG_HS host channel-11 interrupt mask
          register
        using Addr = Register::Address<0x4004050c,0xfffff800,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace NoneotgHsHcintmsk1{    ///<OTG_HS host channel-1 interrupt mask
          register
        using Addr = Register::Address<0x4004052c,0xfffff800,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace NoneotgHsHcintmsk2{    ///<OTG_HS host channel-2 interrupt mask
          register
        using Addr = Register::Address<0x4004054c,0xfffff800,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace NoneotgHsHcintmsk3{    ///<OTG_HS host channel-3 interrupt mask
          register
        using Addr = Register::Address<0x4004056c,0xfffff800,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace NoneotgHsHcintmsk4{    ///<OTG_HS host channel-4 interrupt mask
          register
        using Addr = Register::Address<0x4004058c,0xfffff800,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace NoneotgHsHcintmsk5{    ///<OTG_HS host channel-5 interrupt mask
          register
        using Addr = Register::Address<0x400405ac,0xfffff800,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace NoneotgHsHcintmsk6{    ///<OTG_HS host channel-6 interrupt mask
          register
        using Addr = Register::Address<0x400405cc,0xfffff800,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace NoneotgHsHcintmsk7{    ///<OTG_HS host channel-7 interrupt mask
          register
        using Addr = Register::Address<0x400405ec,0xfffff800,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace NoneotgHsHcintmsk8{    ///<OTG_HS host channel-8 interrupt mask
          register
        using Addr = Register::Address<0x4004060c,0xfffff800,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace NoneotgHsHcintmsk9{    ///<OTG_HS host channel-9 interrupt mask
          register
        using Addr = Register::Address<0x4004062c,0xfffff800,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace NoneotgHsHcintmsk10{    ///<OTG_HS host channel-10 interrupt mask
          register
        using Addr = Register::Address<0x4004064c,0xfffff800,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace NoneotgHsHcintmsk11{    ///<OTG_HS host channel-11 interrupt mask
          register
        using Addr = Register::Address<0x4004066c,0xfffff800,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///AHB error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ahberr{}; 
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
    }
    namespace NoneotgHsHctsiz0{    ///<OTG_HS host channel-11 transfer size
          register
        using Addr = Register::Address<0x40040510,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace NoneotgHsHctsiz1{    ///<OTG_HS host channel-1 transfer size
          register
        using Addr = Register::Address<0x40040530,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace NoneotgHsHctsiz2{    ///<OTG_HS host channel-2 transfer size
          register
        using Addr = Register::Address<0x40040550,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace NoneotgHsHctsiz3{    ///<OTG_HS host channel-3 transfer size
          register
        using Addr = Register::Address<0x40040570,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace NoneotgHsHctsiz4{    ///<OTG_HS host channel-4 transfer size
          register
        using Addr = Register::Address<0x40040590,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace NoneotgHsHctsiz5{    ///<OTG_HS host channel-5 transfer size
          register
        using Addr = Register::Address<0x400405b0,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace NoneotgHsHctsiz6{    ///<OTG_HS host channel-6 transfer size
          register
        using Addr = Register::Address<0x400405d0,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace NoneotgHsHctsiz7{    ///<OTG_HS host channel-7 transfer size
          register
        using Addr = Register::Address<0x400405f0,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace NoneotgHsHctsiz8{    ///<OTG_HS host channel-8 transfer size
          register
        using Addr = Register::Address<0x40040610,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace NoneotgHsHctsiz9{    ///<OTG_HS host channel-9 transfer size
          register
        using Addr = Register::Address<0x40040630,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace NoneotgHsHctsiz10{    ///<OTG_HS host channel-10 transfer size
          register
        using Addr = Register::Address<0x40040650,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace NoneotgHsHctsiz11{    ///<OTG_HS host channel-11 transfer size
          register
        using Addr = Register::Address<0x40040670,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace NoneotgHsHcdma0{    ///<OTG_HS host channel-0 DMA address
          register
        using Addr = Register::Address<0x40040514,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsHcdma1{    ///<OTG_HS host channel-1 DMA address
          register
        using Addr = Register::Address<0x40040534,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsHcdma2{    ///<OTG_HS host channel-2 DMA address
          register
        using Addr = Register::Address<0x40040554,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsHcdma3{    ///<OTG_HS host channel-3 DMA address
          register
        using Addr = Register::Address<0x40040574,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsHcdma4{    ///<OTG_HS host channel-4 DMA address
          register
        using Addr = Register::Address<0x40040594,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsHcdma5{    ///<OTG_HS host channel-5 DMA address
          register
        using Addr = Register::Address<0x400405b4,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsHcdma6{    ///<OTG_HS host channel-6 DMA address
          register
        using Addr = Register::Address<0x400405d4,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsHcdma7{    ///<OTG_HS host channel-7 DMA address
          register
        using Addr = Register::Address<0x400405f4,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsHcdma8{    ///<OTG_HS host channel-8 DMA address
          register
        using Addr = Register::Address<0x40040614,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsHcdma9{    ///<OTG_HS host channel-9 DMA address
          register
        using Addr = Register::Address<0x40040634,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsHcdma10{    ///<OTG_HS host channel-10 DMA address
          register
        using Addr = Register::Address<0x40040654,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsHcdma11{    ///<OTG_HS host channel-11 DMA address
          register
        using Addr = Register::Address<0x40040674,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
}
