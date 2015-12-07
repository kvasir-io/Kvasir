#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//RTC
    namespace NonertcCnt{    ///<RTC_CNT
        using Addr = Register::Address<0x4006a000,0x00000000,0,unsigned>;
        ///RTCCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rtccnt{}; 
        namespace RtccntValC{
        }
    }
    namespace NonertcCmp{    ///<RTC_CMP
        using Addr = Register::Address<0x4006a004,0x00000000,0,unsigned>;
        ///RTCCMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rtccmp{}; 
        namespace RtccmpValC{
        }
    }
    namespace NonertcCr{    ///<RTC_CR
        using Addr = Register::Address<0x4006a008,0xffe0f0c0,0,unsigned>;
        ///RTCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtcen{}; 
        namespace RtcenValC{
        }
        ///RTCSRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtcsrc{}; 
        namespace RtcsrcValC{
        }
        ///LSIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lsien{}; 
        namespace LsienValC{
        }
        ///LSEEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lseen{}; 
        namespace LseenValC{
        }
        ///CMPCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmpclr{}; 
        namespace CmpclrValC{
        }
        ///LSESM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lsesm{}; 
        namespace LsesmValC{
        }
        ///RPRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rpre{}; 
        namespace RpreValC{
        }
        ///ROEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> roen{}; 
        namespace RoenValC{
        }
        ///ROES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> roes{}; 
        namespace RoesValC{
        }
        ///ROWM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rowm{}; 
        namespace RowmValC{
        }
        ///ROAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> roap{}; 
        namespace RoapValC{
        }
        ///ROLF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rolf{}; 
        namespace RolfValC{
        }
    }
    namespace NonertcSr{    ///<RTC_SR
        using Addr = Register::Address<0x4006a00c,0xfffffff8,0,unsigned>;
        ///CSECFLAG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csecflag{}; 
        namespace CsecflagValC{
        }
        ///CMFLAG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmflag{}; 
        namespace CmflagValC{
        }
        ///OVFLAG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovflag{}; 
        namespace OvflagValC{
        }
    }
    namespace NonertcIwen{    ///<RTC_IWEN
        using Addr = Register::Address<0x4006a010,0xfffff8f8,0,unsigned>;
        ///CSECIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csecien{}; 
        namespace CsecienValC{
        }
        ///CMIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmien{}; 
        namespace CmienValC{
        }
        ///OVIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovien{}; 
        namespace OvienValC{
        }
        ///CSECWEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csecwen{}; 
        namespace CsecwenValC{
        }
        ///CMWEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmwen{}; 
        namespace CmwenValC{
        }
        ///OVWEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovwen{}; 
        namespace OvwenValC{
        }
    }
}
