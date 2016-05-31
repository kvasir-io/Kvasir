#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//CAN acceptance filter RAM
    namespace CanaframMask0{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038000,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask1{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038004,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask2{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038008,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask3{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003800c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask4{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038010,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask5{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038014,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask6{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038018,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask7{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003801c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask8{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038020,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask9{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038024,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask10{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038028,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask11{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003802c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask12{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038030,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask13{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038034,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask14{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038038,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask15{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003803c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask16{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038040,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask17{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038044,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask18{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038048,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask19{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003804c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask20{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038050,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask21{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038054,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask22{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038058,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask23{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003805c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask24{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038060,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask25{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038064,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask26{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038068,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask27{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003806c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask28{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038070,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask29{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038074,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask30{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038078,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask31{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003807c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask32{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038080,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask33{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038084,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask34{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038088,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask35{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003808c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask36{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038090,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask37{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038094,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask38{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038098,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask39{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003809c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask40{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380a0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask41{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380a4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask42{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380a8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask43{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380ac,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask44{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380b0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask45{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380b4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask46{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380b8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask47{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380bc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask48{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380c0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask49{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380c4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask50{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380c8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask51{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380cc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask52{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380d0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask53{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380d4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask54{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380d8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask55{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380dc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask56{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380e0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask57{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380e4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask58{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380e8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask59{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380ec,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask60{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380f0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask61{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380f4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask62{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380f8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask63{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400380fc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask64{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038100,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask65{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038104,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask66{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038108,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask67{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003810c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask68{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038110,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask69{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038114,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask70{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038118,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask71{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003811c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask72{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038120,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask73{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038124,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask74{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038128,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask75{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003812c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask76{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038130,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask77{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038134,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask78{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038138,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask79{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003813c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask80{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038140,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask81{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038144,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask82{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038148,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask83{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003814c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask84{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038150,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask85{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038154,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask86{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038158,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask87{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003815c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask88{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038160,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask89{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038164,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask90{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038168,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask91{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003816c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask92{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038170,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask93{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038174,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask94{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038178,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask95{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003817c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask96{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038180,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask97{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038184,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask98{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038188,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask99{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003818c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask100{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038190,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask101{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038194,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask102{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038198,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask103{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003819c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask104{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381a0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask105{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381a4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask106{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381a8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask107{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381ac,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask108{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381b0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask109{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381b4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask110{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381b8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask111{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381bc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask112{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381c0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask113{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381c4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask114{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381c8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask115{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381cc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask116{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381d0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask117{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381d4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask118{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381d8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask119{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381dc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask120{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381e0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask121{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381e4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask122{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381e8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask123{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381ec,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask124{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381f0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask125{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381f4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask126{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381f8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask127{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400381fc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask128{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038200,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask129{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038204,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask130{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038208,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask131{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003820c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask132{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038210,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask133{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038214,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask134{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038218,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask135{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003821c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask136{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038220,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask137{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038224,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask138{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038228,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask139{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003822c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask140{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038230,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask141{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038234,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask142{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038238,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask143{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003823c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask144{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038240,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask145{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038244,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask146{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038248,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask147{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003824c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask148{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038250,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask149{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038254,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask150{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038258,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask151{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003825c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask152{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038260,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask153{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038264,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask154{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038268,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask155{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003826c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask156{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038270,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask157{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038274,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask158{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038278,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask159{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003827c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask160{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038280,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask161{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038284,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask162{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038288,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask163{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003828c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask164{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038290,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask165{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038294,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask166{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038298,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask167{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003829c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask168{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382a0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask169{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382a4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask170{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382a8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask171{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382ac,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask172{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382b0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask173{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382b4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask174{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382b8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask175{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382bc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask176{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382c0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask177{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382c4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask178{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382c8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask179{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382cc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask180{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382d0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask181{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382d4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask182{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382d8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask183{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382dc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask184{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382e0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask185{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382e4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask186{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382e8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask187{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382ec,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask188{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382f0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask189{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382f4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask190{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382f8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask191{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400382fc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask192{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038300,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask193{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038304,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask194{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038308,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask195{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003830c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask196{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038310,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask197{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038314,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask198{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038318,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask199{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003831c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask200{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038320,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask201{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038324,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask202{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038328,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask203{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003832c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask204{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038330,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask205{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038334,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask206{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038338,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask207{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003833c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask208{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038340,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask209{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038344,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask210{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038348,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask211{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003834c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask212{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038350,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask213{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038354,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask214{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038358,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask215{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003835c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask216{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038360,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask217{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038364,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask218{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038368,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask219{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003836c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask220{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038370,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask221{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038374,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask222{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038378,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask223{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003837c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask224{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038380,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask225{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038384,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask226{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038388,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask227{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003838c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask228{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038390,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask229{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038394,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask230{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038398,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask231{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003839c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask232{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383a0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask233{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383a4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask234{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383a8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask235{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383ac,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask236{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383b0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask237{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383b4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask238{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383b8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask239{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383bc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask240{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383c0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask241{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383c4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask242{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383c8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask243{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383cc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask244{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383d0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask245{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383d4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask246{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383d8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask247{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383dc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask248{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383e0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask249{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383e4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask250{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383e8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask251{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383ec,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask252{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383f0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask253{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383f4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask254{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383f8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask255{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400383fc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask256{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038400,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask257{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038404,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask258{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038408,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask259{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003840c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask260{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038410,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask261{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038414,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask262{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038418,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask263{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003841c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask264{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038420,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask265{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038424,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask266{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038428,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask267{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003842c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask268{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038430,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask269{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038434,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask270{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038438,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask271{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003843c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask272{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038440,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask273{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038444,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask274{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038448,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask275{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003844c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask276{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038450,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask277{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038454,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask278{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038458,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask279{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003845c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask280{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038460,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask281{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038464,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask282{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038468,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask283{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003846c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask284{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038470,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask285{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038474,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask286{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038478,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask287{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003847c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask288{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038480,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask289{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038484,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask290{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038488,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask291{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003848c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask292{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038490,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask293{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038494,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask294{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038498,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask295{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003849c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask296{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384a0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask297{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384a4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask298{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384a8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask299{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384ac,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask300{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384b0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask301{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384b4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask302{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384b8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask303{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384bc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask304{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384c0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask305{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384c4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask306{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384c8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask307{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384cc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask308{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384d0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask309{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384d4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask310{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384d8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask311{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384dc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask312{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384e0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask313{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384e4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask314{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384e8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask315{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384ec,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask316{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384f0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask317{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384f4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask318{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384f8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask319{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400384fc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask320{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038500,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask321{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038504,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask322{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038508,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask323{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003850c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask324{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038510,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask325{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038514,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask326{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038518,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask327{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003851c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask328{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038520,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask329{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038524,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask330{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038528,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask331{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003852c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask332{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038530,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask333{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038534,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask334{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038538,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask335{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003853c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask336{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038540,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask337{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038544,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask338{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038548,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask339{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003854c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask340{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038550,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask341{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038554,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask342{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038558,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask343{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003855c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask344{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038560,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask345{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038564,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask346{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038568,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask347{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003856c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask348{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038570,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask349{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038574,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask350{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038578,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask351{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003857c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask352{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038580,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask353{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038584,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask354{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038588,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask355{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003858c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask356{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038590,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask357{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038594,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask358{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038598,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask359{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003859c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask360{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385a0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask361{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385a4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask362{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385a8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask363{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385ac,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask364{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385b0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask365{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385b4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask366{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385b8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask367{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385bc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask368{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385c0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask369{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385c4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask370{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385c8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask371{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385cc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask372{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385d0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask373{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385d4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask374{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385d8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask375{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385dc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask376{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385e0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask377{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385e4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask378{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385e8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask379{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385ec,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask380{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385f0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask381{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385f4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask382{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385f8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask383{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400385fc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask384{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038600,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask385{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038604,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask386{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038608,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask387{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003860c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask388{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038610,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask389{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038614,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask390{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038618,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask391{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003861c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask392{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038620,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask393{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038624,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask394{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038628,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask395{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003862c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask396{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038630,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask397{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038634,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask398{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038638,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask399{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003863c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask400{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038640,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask401{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038644,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask402{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038648,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask403{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003864c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask404{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038650,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask405{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038654,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask406{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038658,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask407{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003865c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask408{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038660,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask409{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038664,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask410{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038668,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask411{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003866c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask412{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038670,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask413{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038674,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask414{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038678,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask415{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003867c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask416{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038680,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask417{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038684,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask418{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038688,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask419{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003868c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask420{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038690,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask421{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038694,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask422{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038698,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask423{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003869c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask424{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386a0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask425{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386a4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask426{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386a8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask427{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386ac,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask428{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386b0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask429{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386b4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask430{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386b8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask431{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386bc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask432{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386c0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask433{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386c4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask434{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386c8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask435{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386cc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask436{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386d0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask437{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386d4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask438{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386d8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask439{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386dc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask440{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386e0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask441{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386e4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask442{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386e8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask443{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386ec,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask444{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386f0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask445{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386f4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask446{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386f8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask447{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400386fc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask448{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038700,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask449{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038704,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask450{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038708,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask451{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003870c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask452{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038710,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask453{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038714,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask454{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038718,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask455{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003871c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask456{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038720,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask457{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038724,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask458{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038728,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask459{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003872c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask460{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038730,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask461{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038734,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask462{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038738,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask463{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003873c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask464{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038740,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask465{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038744,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask466{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038748,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask467{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003874c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask468{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038750,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask469{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038754,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask470{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038758,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask471{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003875c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask472{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038760,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask473{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038764,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask474{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038768,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask475{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003876c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask476{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038770,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask477{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038774,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask478{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038778,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask479{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003877c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask480{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038780,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask481{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038784,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask482{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038788,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask483{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003878c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask484{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038790,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask485{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038794,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask486{    ///<CAN AF ram access register
        using Addr = Register::Address<0x40038798,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask487{    ///<CAN AF ram access register
        using Addr = Register::Address<0x4003879c,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask488{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387a0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask489{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387a4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask490{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387a8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask491{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387ac,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask492{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387b0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask493{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387b4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask494{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387b8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask495{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387bc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask496{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387c0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask497{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387c4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask498{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387c8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask499{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387cc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask500{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387d0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask501{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387d4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask502{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387d8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask503{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387dc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask504{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387e0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask505{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387e4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask506{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387e8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask507{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387ec,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask508{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387f0,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask509{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387f4,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask510{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387f8,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace CanaframMask511{    ///<CAN AF ram access register
        using Addr = Register::Address<0x400387fc,0x00000000,0x00000000,unsigned>;
        ///CAN AF RAM mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
}
