#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USB on the go full speed
    namespace OtgFsHostFsHcfg{    ///<OTG_FS host configuration register           (OTG_FS_HCFG)
        using Addr = Register::Address<0x50000400,0xfffffff8,0x00000000,unsigned>;
        ///FS/LS PHY clock select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fslspcs{}; 
        ///FS- and LS-only support
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fslss{}; 
    }
    namespace OtgFsHostHfir{    ///<OTG_FS Host frame interval           register
        using Addr = Register::Address<0x50000404,0xffff0000,0x00000000,unsigned>;
        ///Frame interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frivl{}; 
    }
    namespace OtgFsHostFsHfnum{    ///<OTG_FS host frame number/frame time           remaining register (OTG_FS_HFNUM)
        using Addr = Register::Address<0x50000408,0x00000000,0x00000000,unsigned>;
        ///Frame number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frnum{}; 
        ///Frame time remaining
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ftrem{}; 
    }
    namespace OtgFsHostFsHptxsts{    ///<OTG_FS_Host periodic transmit FIFO/queue           status register (OTG_FS_HPTXSTS)
        using Addr = Register::Address<0x50000410,0x00000000,0x00000000,unsigned>;
        ///Periodic transmit data FIFO space               available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ptxfsavl{}; 
        ///Periodic transmit request queue space               available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptxqsav{}; 
        ///Top of the periodic transmit request               queue
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptxqtop{}; 
    }
    namespace OtgFsHostHaint{    ///<OTG_FS Host all channels interrupt           register
        using Addr = Register::Address<0x50000414,0xffff0000,0x00000000,unsigned>;
        ///Channel interrupts
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> haint{}; 
    }
    namespace OtgFsHostHaintmsk{    ///<OTG_FS host all channels interrupt mask           register
        using Addr = Register::Address<0x50000418,0xffff0000,0x00000000,unsigned>;
        ///Channel interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> haintm{}; 
    }
    namespace OtgFsHostFsHprt{    ///<OTG_FS host port control and status register           (OTG_FS_HPRT)
        using Addr = Register::Address<0x50000440,0xfff80200,0x00000000,unsigned>;
        ///Port connect status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pcsts{}; 
        ///Port connect detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pcdet{}; 
        ///Port enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pena{}; 
        ///Port enable/disable change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> penchng{}; 
        ///Port overcurrent active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> poca{}; 
        ///Port overcurrent change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pocchng{}; 
        ///Port resume
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pres{}; 
        ///Port suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> psusp{}; 
        ///Port reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> prst{}; 
        ///Port line status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> plsts{}; 
        ///Port power
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ppwr{}; 
        ///Port test control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> ptctl{}; 
        ///Port speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pspd{}; 
    }
    namespace OtgFsHostFsHcchar0{    ///<OTG_FS host channel-0 characteristics           register (OTG_FS_HCCHAR0)
        using Addr = Register::Address<0x50000500,0x00010000,0x00000000,unsigned>;
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
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace OtgFsHostFsHcchar1{    ///<OTG_FS host channel-1 characteristics           register (OTG_FS_HCCHAR1)
        using Addr = Register::Address<0x50000520,0x00010000,0x00000000,unsigned>;
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
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace OtgFsHostFsHcchar2{    ///<OTG_FS host channel-2 characteristics           register (OTG_FS_HCCHAR2)
        using Addr = Register::Address<0x50000540,0x00010000,0x00000000,unsigned>;
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
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace OtgFsHostFsHcchar3{    ///<OTG_FS host channel-3 characteristics           register (OTG_FS_HCCHAR3)
        using Addr = Register::Address<0x50000560,0x00010000,0x00000000,unsigned>;
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
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace OtgFsHostFsHcchar4{    ///<OTG_FS host channel-4 characteristics           register (OTG_FS_HCCHAR4)
        using Addr = Register::Address<0x50000580,0x00010000,0x00000000,unsigned>;
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
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace OtgFsHostFsHcchar5{    ///<OTG_FS host channel-5 characteristics           register (OTG_FS_HCCHAR5)
        using Addr = Register::Address<0x500005a0,0x00010000,0x00000000,unsigned>;
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
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace OtgFsHostFsHcchar6{    ///<OTG_FS host channel-6 characteristics           register (OTG_FS_HCCHAR6)
        using Addr = Register::Address<0x500005c0,0x00010000,0x00000000,unsigned>;
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
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace OtgFsHostFsHcchar7{    ///<OTG_FS host channel-7 characteristics           register (OTG_FS_HCCHAR7)
        using Addr = Register::Address<0x500005e0,0x00010000,0x00000000,unsigned>;
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
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
    }
    namespace OtgFsHostFsHcint0{    ///<OTG_FS host channel-0 interrupt register           (OTG_FS_HCINT0)
        using Addr = Register::Address<0x50000508,0xfffff844,0x00000000,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///STALL response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace OtgFsHostFsHcint1{    ///<OTG_FS host channel-1 interrupt register           (OTG_FS_HCINT1)
        using Addr = Register::Address<0x50000528,0xfffff844,0x00000000,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///STALL response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace OtgFsHostFsHcint2{    ///<OTG_FS host channel-2 interrupt register           (OTG_FS_HCINT2)
        using Addr = Register::Address<0x50000548,0xfffff844,0x00000000,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///STALL response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace OtgFsHostFsHcint3{    ///<OTG_FS host channel-3 interrupt register           (OTG_FS_HCINT3)
        using Addr = Register::Address<0x50000568,0xfffff844,0x00000000,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///STALL response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace OtgFsHostFsHcint4{    ///<OTG_FS host channel-4 interrupt register           (OTG_FS_HCINT4)
        using Addr = Register::Address<0x50000588,0xfffff844,0x00000000,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///STALL response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace OtgFsHostFsHcint5{    ///<OTG_FS host channel-5 interrupt register           (OTG_FS_HCINT5)
        using Addr = Register::Address<0x500005a8,0xfffff844,0x00000000,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///STALL response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace OtgFsHostFsHcint6{    ///<OTG_FS host channel-6 interrupt register           (OTG_FS_HCINT6)
        using Addr = Register::Address<0x500005c8,0xfffff844,0x00000000,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///STALL response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace OtgFsHostFsHcint7{    ///<OTG_FS host channel-7 interrupt register           (OTG_FS_HCINT7)
        using Addr = Register::Address<0x500005e8,0xfffff844,0x00000000,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        ///STALL response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        ///NAK response received               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        ///ACK response received/transmitted               interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
    }
    namespace OtgFsHostFsHcintmsk0{    ///<OTG_FS host channel-0 mask register           (OTG_FS_HCINTMSK0)
        using Addr = Register::Address<0x5000050c,0xfffff804,0x00000000,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///STALL response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted               interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt               mask
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
    namespace OtgFsHostFsHcintmsk1{    ///<OTG_FS host channel-1 mask register           (OTG_FS_HCINTMSK1)
        using Addr = Register::Address<0x5000052c,0xfffff804,0x00000000,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///STALL response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted               interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt               mask
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
    namespace OtgFsHostFsHcintmsk2{    ///<OTG_FS host channel-2 mask register           (OTG_FS_HCINTMSK2)
        using Addr = Register::Address<0x5000054c,0xfffff804,0x00000000,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///STALL response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted               interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt               mask
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
    namespace OtgFsHostFsHcintmsk3{    ///<OTG_FS host channel-3 mask register           (OTG_FS_HCINTMSK3)
        using Addr = Register::Address<0x5000056c,0xfffff804,0x00000000,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///STALL response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted               interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt               mask
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
    namespace OtgFsHostFsHcintmsk4{    ///<OTG_FS host channel-4 mask register           (OTG_FS_HCINTMSK4)
        using Addr = Register::Address<0x5000058c,0xfffff804,0x00000000,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///STALL response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted               interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt               mask
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
    namespace OtgFsHostFsHcintmsk5{    ///<OTG_FS host channel-5 mask register           (OTG_FS_HCINTMSK5)
        using Addr = Register::Address<0x500005ac,0xfffff804,0x00000000,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///STALL response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted               interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt               mask
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
    namespace OtgFsHostFsHcintmsk6{    ///<OTG_FS host channel-6 mask register           (OTG_FS_HCINTMSK6)
        using Addr = Register::Address<0x500005cc,0xfffff804,0x00000000,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///STALL response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted               interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt               mask
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
    namespace OtgFsHostFsHcintmsk7{    ///<OTG_FS host channel-7 mask register           (OTG_FS_HCINTMSK7)
        using Addr = Register::Address<0x500005ec,0xfffff804,0x00000000,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        ///STALL response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        ///NAK response received interrupt               mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///ACK response received/transmitted               interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        ///response received interrupt               mask
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
    namespace OtgFsHostFsHctsiz0{    ///<OTG_FS host channel-0 transfer size           register
        using Addr = Register::Address<0x50000510,0x80000000,0x00000000,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace OtgFsHostFsHctsiz1{    ///<OTG_FS host channel-1 transfer size           register
        using Addr = Register::Address<0x50000530,0x80000000,0x00000000,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace OtgFsHostFsHctsiz2{    ///<OTG_FS host channel-2 transfer size           register
        using Addr = Register::Address<0x50000550,0x80000000,0x00000000,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace OtgFsHostFsHctsiz3{    ///<OTG_FS host channel-3 transfer size           register
        using Addr = Register::Address<0x50000570,0x80000000,0x00000000,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace OtgFsHostFsHctsiz4{    ///<OTG_FS host channel-x transfer size           register
        using Addr = Register::Address<0x50000590,0x80000000,0x00000000,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace OtgFsHostFsHctsiz5{    ///<OTG_FS host channel-5 transfer size           register
        using Addr = Register::Address<0x500005b0,0x80000000,0x00000000,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace OtgFsHostFsHctsiz6{    ///<OTG_FS host channel-6 transfer size           register
        using Addr = Register::Address<0x500005d0,0x80000000,0x00000000,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
    namespace OtgFsHostFsHctsiz7{    ///<OTG_FS host channel-7 transfer size           register
        using Addr = Register::Address<0x500005f0,0x80000000,0x00000000,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
    }
}
