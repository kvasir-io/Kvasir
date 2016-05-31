#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//RTC
    namespace RtcRtcCnt{    ///<RTC_CNT
        using Addr = Register::Address<0x4006a000,0x00000000,0x00000000,unsigned>;
        ///RTCCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rtccnt{}; 
    }
    namespace RtcRtcCmp{    ///<RTC_CMP
        using Addr = Register::Address<0x4006a004,0x00000000,0x00000000,unsigned>;
        ///RTCCMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rtccmp{}; 
    }
    namespace RtcRtcCr{    ///<RTC_CR
        using Addr = Register::Address<0x4006a008,0x0000f0c0,0x00000000,unsigned>;
        ///RTCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtcen{}; 
        ///RTCSRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtcsrc{}; 
        ///LSIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lsien{}; 
        ///LSEEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lseen{}; 
        ///CMPCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmpclr{}; 
        ///LSESM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lsesm{}; 
        ///RPRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rpre{}; 
        ///ROEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> roen{}; 
        ///ROES
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> roes{}; 
        ///ROWM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rowm{}; 
        ///ROAP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> roap{}; 
        ///ROLF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rolf{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcRtcSr{    ///<RTC_SR
        using Addr = Register::Address<0x4006a00c,0x00000000,0x00000000,unsigned>;
        ///CSECFLAG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csecflag{}; 
        ///CMFLAG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmflag{}; 
        ///OVFLAG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovflag{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace RtcRtcIwen{    ///<RTC_IWEN
        using Addr = Register::Address<0x4006a010,0x000000f8,0x00000000,unsigned>;
        ///CSECIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csecien{}; 
        ///CMIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmien{}; 
        ///OVIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ovien{}; 
        ///CSECWEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csecwen{}; 
        ///CMWEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cmwen{}; 
        ///OVWEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ovwen{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
