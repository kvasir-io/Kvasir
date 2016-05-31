#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//CSIF
    namespace CsifCsifEnr{    ///<CSIF_ENR
        using Addr = Register::Address<0x400cc000,0x00000000,0x00000000,unsigned>;
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///CSIF_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> csifEn{}; 
    }
    namespace CsifCsifCr{    ///<CSIF_CR
        using Addr = Register::Address<0x400cc004,0x00000021,0x00000000,unsigned>;
        ///VSYNCTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vsynctyp{}; 
        ///HSYNCTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsynctyp{}; 
        ///CLKEDGE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clkedge{}; 
        ///IMG_FMT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> imgFmt{}; 
        ///VSYNCPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> vsyncpol{}; 
        ///HSYNCPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hsyncpol{}; 
        ///IMG_SLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> imgSld{}; 
        ///IMG_SFD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> imgSfd{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CsifCsifImgwh{    ///<CSIF_IMGWH
        using Addr = Register::Address<0x400cc008,0x0000f800,0x00000000,unsigned>;
        ///IMG_WID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> imgWid{}; 
        ///IMG_HGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> imgHgh{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CsifCsifWcr0{    ///<CSIF_WCR0
        using Addr = Register::Address<0x400cc00c,0x7800f800,0x00000000,unsigned>;
        ///WIN_HSTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> winHstr{}; 
        ///WIN_VSTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> winVstr{}; 
        ///WIN_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> winEn{}; 
    }
    namespace CsifCsifWcr1{    ///<CSIF_WCR1
        using Addr = Register::Address<0x400cc010,0x0000f800,0x00000000,unsigned>;
        ///WIN_WID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> winWid{}; 
        ///WIN_HGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> winHgh{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,27),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CsifCsifSmp{    ///<CSIF_SMP
        using Addr = Register::Address<0x400cc014,0x7fe0e0ff,0x00000000,unsigned>;
        ///CSML
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> csml{}; 
        ///RSML
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> rsml{}; 
        ///SMP_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> smpEn{}; 
    }
    namespace CsifCsifSmpcol{    ///<CSIF_SMPCOL
        using Addr = Register::Address<0x400cc018,0x00000000,0x00000000,unsigned>;
        ///CSM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csm{}; 
    }
    namespace CsifCsifSmprow{    ///<CSIF_SMPROW
        using Addr = Register::Address<0x400cc01c,0x00000000,0x00000000,unsigned>;
        ///RSM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsm{}; 
    }
    namespace CsifCsifFifo0{    ///<CSIF_FIFO0
        using Addr = Register::Address<0x400cc020,0x00000000,0x00000000,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
    }
    namespace CsifCsifFifo1{    ///<CSIF_FIFO1
        using Addr = Register::Address<0x400cc024,0x00000000,0x00000000,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
    }
    namespace CsifCsifFifo2{    ///<CSIF_FIFO2
        using Addr = Register::Address<0x400cc028,0x00000000,0x00000000,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
    }
    namespace CsifCsifFifo3{    ///<CSIF_FIFO3
        using Addr = Register::Address<0x400cc02c,0x00000000,0x00000000,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
    }
    namespace CsifCsifFifo4{    ///<CSIF_FIFO4
        using Addr = Register::Address<0x400cc030,0x00000000,0x00000000,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
    }
    namespace CsifCsifFifo5{    ///<CSIF_FIFO5
        using Addr = Register::Address<0x400cc034,0x00000000,0x00000000,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
    }
    namespace CsifCsifFifo6{    ///<CSIF_FIFO6
        using Addr = Register::Address<0x400cc038,0x00000000,0x00000000,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
    }
    namespace CsifCsifFifo7{    ///<CSIF_FIFO7
        using Addr = Register::Address<0x400cc03c,0x00000000,0x00000000,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
    }
    namespace CsifCsifIer{    ///<CSIF_IER
        using Addr = Register::Address<0x400cc040,0x000000e0,0x00000000,unsigned>;
        ///SOFFLGE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofflge{}; 
        ///EOFFLGE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eofflge{}; 
        ///CAPSTAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capstae{}; 
        ///CAPSTSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capstse{}; 
        ///BADFRME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> badfrme{}; 
        ///FIFOOVRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fifoovre{}; 
        ///FIFOEMPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fifoempe{}; 
        ///FIFOFULE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fifofule{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace CsifCsifSr{    ///<CSIF_SR
        using Addr = Register::Address<0x400cc044,0x000000e0,0x00000000,unsigned>;
        ///SOF_FLG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofFlg{}; 
        ///EOF_FLG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eofFlg{}; 
        ///CAP_STA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capSta{}; 
        ///CAP_STS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capSts{}; 
        ///BAD_FRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> badFrm{}; 
        ///FIFO_OVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fifoOvr{}; 
        ///FIFO_EMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fifoEmp{}; 
        ///FIFO_FUL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fifoFul{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
