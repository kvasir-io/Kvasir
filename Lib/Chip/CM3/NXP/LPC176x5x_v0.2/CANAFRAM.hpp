#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CAN acceptance filter RAM
    namespace Nonemask0{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038000,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask1{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038004,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask2{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038008,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask3{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003800c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask4{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038010,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask5{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038014,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask6{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038018,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask7{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003801c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask8{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038020,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask9{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038024,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask10{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038028,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask11{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003802c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask12{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038030,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask13{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038034,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask14{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038038,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask15{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003803c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask16{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038040,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask17{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038044,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask18{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038048,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask19{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003804c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask20{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038050,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask21{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038054,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask22{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038058,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask23{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003805c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask24{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038060,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask25{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038064,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask26{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038068,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask27{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003806c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask28{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038070,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask29{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038074,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask30{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038078,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask31{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003807c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask32{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038080,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask33{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038084,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask34{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038088,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask35{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003808c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask36{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038090,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask37{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038094,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask38{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038098,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask39{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003809c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask40{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380a0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask41{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380a4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask42{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380a8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask43{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380ac,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask44{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380b0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask45{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380b4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask46{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380b8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask47{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380bc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask48{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380c0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask49{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380c4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask50{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380c8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask51{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380cc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask52{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380d0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask53{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380d4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask54{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380d8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask55{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380dc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask56{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380e0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask57{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380e4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask58{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380e8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask59{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380ec,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask60{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380f0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask61{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380f4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask62{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380f8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask63{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380fc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask64{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038100,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask65{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038104,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask66{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038108,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask67{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003810c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask68{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038110,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask69{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038114,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask70{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038118,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask71{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003811c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask72{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038120,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask73{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038124,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask74{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038128,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask75{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003812c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask76{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038130,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask77{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038134,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask78{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038138,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask79{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003813c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask80{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038140,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask81{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038144,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask82{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038148,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask83{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003814c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask84{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038150,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask85{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038154,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask86{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038158,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask87{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003815c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask88{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038160,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask89{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038164,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask90{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038168,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask91{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003816c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask92{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038170,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask93{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038174,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask94{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038178,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask95{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003817c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask96{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038180,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask97{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038184,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask98{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038188,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask99{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003818c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask100{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038190,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask101{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038194,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask102{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038198,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask103{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003819c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask104{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381a0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask105{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381a4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask106{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381a8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask107{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381ac,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask108{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381b0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask109{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381b4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask110{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381b8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask111{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381bc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask112{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381c0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask113{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381c4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask114{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381c8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask115{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381cc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask116{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381d0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask117{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381d4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask118{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381d8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask119{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381dc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask120{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381e0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask121{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381e4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask122{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381e8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask123{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381ec,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask124{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381f0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask125{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381f4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask126{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381f8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask127{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381fc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask128{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038200,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask129{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038204,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask130{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038208,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask131{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003820c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask132{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038210,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask133{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038214,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask134{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038218,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask135{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003821c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask136{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038220,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask137{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038224,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask138{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038228,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask139{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003822c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask140{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038230,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask141{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038234,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask142{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038238,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask143{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003823c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask144{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038240,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask145{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038244,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask146{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038248,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask147{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003824c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask148{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038250,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask149{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038254,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask150{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038258,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask151{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003825c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask152{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038260,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask153{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038264,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask154{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038268,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask155{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003826c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask156{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038270,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask157{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038274,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask158{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038278,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask159{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003827c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask160{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038280,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask161{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038284,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask162{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038288,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask163{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003828c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask164{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038290,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask165{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038294,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask166{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038298,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask167{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003829c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask168{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382a0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask169{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382a4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask170{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382a8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask171{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382ac,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask172{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382b0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask173{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382b4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask174{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382b8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask175{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382bc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask176{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382c0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask177{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382c4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask178{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382c8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask179{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382cc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask180{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382d0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask181{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382d4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask182{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382d8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask183{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382dc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask184{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382e0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask185{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382e4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask186{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382e8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask187{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382ec,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask188{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382f0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask189{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382f4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask190{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382f8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask191{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382fc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask192{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038300,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask193{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038304,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask194{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038308,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask195{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003830c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask196{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038310,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask197{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038314,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask198{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038318,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask199{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003831c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask200{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038320,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask201{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038324,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask202{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038328,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask203{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003832c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask204{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038330,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask205{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038334,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask206{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038338,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask207{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003833c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask208{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038340,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask209{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038344,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask210{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038348,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask211{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003834c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask212{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038350,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask213{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038354,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask214{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038358,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask215{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003835c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask216{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038360,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask217{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038364,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask218{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038368,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask219{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003836c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask220{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038370,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask221{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038374,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask222{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038378,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask223{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003837c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask224{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038380,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask225{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038384,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask226{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038388,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask227{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003838c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask228{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038390,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask229{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038394,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask230{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038398,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask231{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003839c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask232{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383a0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask233{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383a4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask234{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383a8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask235{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383ac,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask236{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383b0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask237{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383b4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask238{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383b8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask239{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383bc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask240{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383c0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask241{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383c4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask242{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383c8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask243{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383cc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask244{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383d0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask245{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383d4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask246{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383d8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask247{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383dc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask248{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383e0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask249{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383e4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask250{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383e8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask251{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383ec,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask252{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383f0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask253{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383f4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask254{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383f8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask255{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383fc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask256{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038400,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask257{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038404,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask258{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038408,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask259{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003840c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask260{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038410,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask261{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038414,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask262{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038418,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask263{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003841c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask264{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038420,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask265{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038424,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask266{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038428,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask267{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003842c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask268{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038430,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask269{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038434,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask270{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038438,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask271{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003843c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask272{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038440,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask273{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038444,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask274{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038448,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask275{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003844c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask276{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038450,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask277{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038454,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask278{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038458,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask279{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003845c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask280{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038460,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask281{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038464,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask282{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038468,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask283{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003846c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask284{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038470,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask285{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038474,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask286{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038478,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask287{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003847c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask288{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038480,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask289{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038484,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask290{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038488,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask291{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003848c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask292{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038490,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask293{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038494,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask294{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038498,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask295{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003849c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask296{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384a0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask297{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384a4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask298{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384a8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask299{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384ac,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask300{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384b0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask301{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384b4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask302{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384b8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask303{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384bc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask304{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384c0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask305{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384c4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask306{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384c8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask307{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384cc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask308{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384d0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask309{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384d4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask310{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384d8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask311{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384dc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask312{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384e0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask313{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384e4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask314{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384e8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask315{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384ec,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask316{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384f0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask317{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384f4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask318{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384f8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask319{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384fc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask320{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038500,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask321{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038504,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask322{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038508,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask323{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003850c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask324{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038510,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask325{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038514,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask326{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038518,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask327{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003851c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask328{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038520,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask329{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038524,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask330{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038528,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask331{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003852c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask332{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038530,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask333{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038534,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask334{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038538,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask335{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003853c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask336{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038540,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask337{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038544,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask338{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038548,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask339{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003854c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask340{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038550,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask341{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038554,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask342{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038558,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask343{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003855c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask344{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038560,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask345{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038564,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask346{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038568,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask347{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003856c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask348{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038570,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask349{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038574,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask350{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038578,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask351{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003857c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask352{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038580,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask353{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038584,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask354{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038588,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask355{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003858c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask356{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038590,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask357{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038594,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask358{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038598,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask359{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003859c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask360{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385a0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask361{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385a4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask362{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385a8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask363{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385ac,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask364{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385b0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask365{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385b4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask366{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385b8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask367{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385bc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask368{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385c0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask369{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385c4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask370{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385c8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask371{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385cc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask372{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385d0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask373{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385d4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask374{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385d8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask375{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385dc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask376{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385e0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask377{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385e4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask378{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385e8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask379{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385ec,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask380{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385f0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask381{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385f4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask382{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385f8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask383{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385fc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask384{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038600,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask385{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038604,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask386{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038608,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask387{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003860c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask388{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038610,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask389{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038614,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask390{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038618,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask391{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003861c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask392{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038620,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask393{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038624,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask394{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038628,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask395{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003862c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask396{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038630,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask397{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038634,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask398{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038638,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask399{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003863c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask400{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038640,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask401{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038644,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask402{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038648,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask403{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003864c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask404{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038650,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask405{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038654,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask406{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038658,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask407{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003865c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask408{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038660,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask409{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038664,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask410{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038668,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask411{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003866c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask412{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038670,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask413{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038674,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask414{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038678,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask415{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003867c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask416{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038680,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask417{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038684,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask418{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038688,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask419{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003868c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask420{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038690,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask421{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038694,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask422{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038698,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask423{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003869c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask424{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386a0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask425{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386a4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask426{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386a8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask427{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386ac,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask428{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386b0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask429{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386b4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask430{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386b8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask431{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386bc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask432{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386c0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask433{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386c4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask434{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386c8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask435{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386cc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask436{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386d0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask437{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386d4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask438{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386d8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask439{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386dc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask440{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386e0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask441{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386e4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask442{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386e8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask443{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386ec,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask444{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386f0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask445{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386f4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask446{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386f8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask447{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386fc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask448{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038700,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask449{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038704,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask450{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038708,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask451{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003870c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask452{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038710,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask453{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038714,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask454{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038718,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask455{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003871c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask456{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038720,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask457{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038724,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask458{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038728,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask459{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003872c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask460{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038730,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask461{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038734,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask462{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038738,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask463{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003873c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask464{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038740,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask465{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038744,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask466{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038748,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask467{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003874c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask468{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038750,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask469{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038754,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask470{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038758,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask471{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003875c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask472{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038760,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask473{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038764,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask474{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038768,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask475{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003876c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask476{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038770,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask477{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038774,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask478{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038778,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask479{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003877c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask480{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038780,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask481{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038784,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask482{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038788,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask483{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003878c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask484{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038790,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask485{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038794,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask486{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038798,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask487{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003879c,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask488{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387a0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask489{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387a4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask490{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387a8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask491{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387ac,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask492{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387b0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask493{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387b4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask494{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387b8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask495{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387bc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask496{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387c0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask497{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387c4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask498{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387c8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask499{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387cc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask500{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387d0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask501{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387d4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask502{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387d8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask503{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387dc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask504{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387e0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask505{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387e4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask506{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387e8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask507{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387ec,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask508{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387f0,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask509{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387f4,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask510{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387f8,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace Nonemask511{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387fc,0x00000000,0,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
}
