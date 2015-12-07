#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CSIF
    namespace NonecsifEnr{    ///<CSIF_ENR
        using Addr = Register::Address<0x400cc000,0x7fffffff,0,unsigned>;
        ///CSIF_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> csifEn{}; 
        namespace CsifenValC{
        }
    }
    namespace NonecsifCr{    ///<CSIF_CR
        using Addr = Register::Address<0x400cc004,0xff000021,0,unsigned>;
        ///VSYNCTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vsynctyp{}; 
        namespace VsynctypValC{
        }
        ///HSYNCTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsynctyp{}; 
        namespace HsynctypValC{
        }
        ///CLKEDGE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clkedge{}; 
        namespace ClkedgeValC{
        }
        ///IMG_FMT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> imgFmt{}; 
        namespace ImgfmtValC{
        }
        ///VSYNCPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> vsyncpol{}; 
        namespace VsyncpolValC{
        }
        ///HSYNCPOL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hsyncpol{}; 
        namespace HsyncpolValC{
        }
        ///IMG_SLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> imgSld{}; 
        namespace ImgsldValC{
        }
        ///IMG_SFD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> imgSfd{}; 
        namespace ImgsfdValC{
        }
    }
    namespace NonecsifImgwh{    ///<CSIF_IMGWH
        using Addr = Register::Address<0x400cc008,0xf800f800,0,unsigned>;
        ///IMG_WID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> imgWid{}; 
        namespace ImgwidValC{
        }
        ///IMG_HGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> imgHgh{}; 
        namespace ImghghValC{
        }
    }
    namespace NonecsifWcr0{    ///<CSIF_WCR0
        using Addr = Register::Address<0x400cc00c,0x7800f800,0,unsigned>;
        ///WIN_HSTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> winHstr{}; 
        namespace WinhstrValC{
        }
        ///WIN_VSTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> winVstr{}; 
        namespace WinvstrValC{
        }
        ///WIN_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> winEn{}; 
        namespace WinenValC{
        }
    }
    namespace NonecsifWcr1{    ///<CSIF_WCR1
        using Addr = Register::Address<0x400cc010,0xf800f800,0,unsigned>;
        ///WIN_WID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> winWid{}; 
        namespace WinwidValC{
        }
        ///WIN_HGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> winHgh{}; 
        namespace WinhghValC{
        }
    }
    namespace NonecsifSmp{    ///<CSIF_SMP
        using Addr = Register::Address<0x400cc014,0x7fe0e0ff,0,unsigned>;
        ///CSML
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> csml{}; 
        namespace CsmlValC{
        }
        ///RSML
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> rsml{}; 
        namespace RsmlValC{
        }
        ///SMP_EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> smpEn{}; 
        namespace SmpenValC{
        }
    }
    namespace NonecsifSmpcol{    ///<CSIF_SMPCOL
        using Addr = Register::Address<0x400cc018,0x00000000,0,unsigned>;
        ///CSM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csm{}; 
        namespace CsmValC{
        }
    }
    namespace NonecsifSmprow{    ///<CSIF_SMPROW
        using Addr = Register::Address<0x400cc01c,0x00000000,0,unsigned>;
        ///RSM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rsm{}; 
        namespace RsmValC{
        }
    }
    namespace NonecsifFifo0{    ///<CSIF_FIFO0
        using Addr = Register::Address<0x400cc020,0x00000000,0,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
        namespace FifodataValC{
        }
    }
    namespace NonecsifFifo1{    ///<CSIF_FIFO1
        using Addr = Register::Address<0x400cc024,0x00000000,0,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
        namespace FifodataValC{
        }
    }
    namespace NonecsifFifo2{    ///<CSIF_FIFO2
        using Addr = Register::Address<0x400cc028,0x00000000,0,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
        namespace FifodataValC{
        }
    }
    namespace NonecsifFifo3{    ///<CSIF_FIFO3
        using Addr = Register::Address<0x400cc02c,0x00000000,0,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
        namespace FifodataValC{
        }
    }
    namespace NonecsifFifo4{    ///<CSIF_FIFO4
        using Addr = Register::Address<0x400cc030,0x00000000,0,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
        namespace FifodataValC{
        }
    }
    namespace NonecsifFifo5{    ///<CSIF_FIFO5
        using Addr = Register::Address<0x400cc034,0x00000000,0,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
        namespace FifodataValC{
        }
    }
    namespace NonecsifFifo6{    ///<CSIF_FIFO6
        using Addr = Register::Address<0x400cc038,0x00000000,0,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
        namespace FifodataValC{
        }
    }
    namespace NonecsifFifo7{    ///<CSIF_FIFO7
        using Addr = Register::Address<0x400cc03c,0x00000000,0,unsigned>;
        ///FIFODATA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> fifodata{}; 
        namespace FifodataValC{
        }
    }
    namespace NonecsifIer{    ///<CSIF_IER
        using Addr = Register::Address<0x400cc040,0xfffff8e0,0,unsigned>;
        ///SOFFLGE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofflge{}; 
        namespace SofflgeValC{
        }
        ///EOFFLGE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eofflge{}; 
        namespace EofflgeValC{
        }
        ///CAPSTAE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capstae{}; 
        namespace CapstaeValC{
        }
        ///CAPSTSE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capstse{}; 
        namespace CapstseValC{
        }
        ///BADFRME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> badfrme{}; 
        namespace BadfrmeValC{
        }
        ///FIFOOVRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fifoovre{}; 
        namespace FifoovreValC{
        }
        ///FIFOEMPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fifoempe{}; 
        namespace FifoempeValC{
        }
        ///FIFOFULE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fifofule{}; 
        namespace FifofuleValC{
        }
    }
    namespace NonecsifSr{    ///<CSIF_SR
        using Addr = Register::Address<0x400cc044,0xfffff8e0,0,unsigned>;
        ///SOF_FLG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sofFlg{}; 
        namespace SofflgValC{
        }
        ///EOF_FLG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eofFlg{}; 
        namespace EofflgValC{
        }
        ///CAP_STA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> capSta{}; 
        namespace CapstaValC{
        }
        ///CAP_STS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> capSts{}; 
        namespace CapstsValC{
        }
        ///BAD_FRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> badFrm{}; 
        namespace BadfrmValC{
        }
        ///FIFO_OVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fifoOvr{}; 
        namespace FifoovrValC{
        }
        ///FIFO_EMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fifoEmp{}; 
        namespace FifoempValC{
        }
        ///FIFO_FUL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fifoFul{}; 
        namespace FifofulValC{
        }
    }
}
