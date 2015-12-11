#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Secure Hash Algorithm
    namespace ShaCr{    ///<Control Register
        using Addr = Register::Address<0xf0014000,0xfffffeee,0,unsigned>;
        ///Start Processing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        ///First Block of a Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> first{}; 
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace ShaMr{    ///<Mode Register
        using Addr = Register::Address<0xf0014004,0xfffef8ec,0,unsigned>;
        ///Start Mode
        enum class SmodVal {
            manualStart=0x00000000,     ///<Manual Mode
            autoStart=0x00000001,     ///<Auto Mode
            idatar0Start=0x00000002,     ///<SHA_IDATAR0 access only Auto Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SmodVal> smod{}; 
        namespace SmodValC{
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::manualStart> manualStart{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::autoStart> autoStart{};
            constexpr Register::FieldValue<decltype(smod)::Type,SmodVal::idatar0Start> idatar0Start{};
        }
        ///Processing Delay
        enum class ProcdlyVal {
            shortest=0x00000000,     ///<SHA processing runtime is the shortest one
            longest=0x00000001,     ///<SHA processing runtime is the longest one
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ProcdlyVal> procdly{}; 
        namespace ProcdlyValC{
            constexpr Register::FieldValue<decltype(procdly)::Type,ProcdlyVal::shortest> shortest{};
            constexpr Register::FieldValue<decltype(procdly)::Type,ProcdlyVal::longest> longest{};
        }
        ///SHA Algorithm.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> algo{}; 
        ///Dual Input BUFFer
        enum class DualbuffVal {
            inactive=0x00000000,     ///<SHA_IDATARx and SHA_IODATARx cannot be written during processing of previous block.
            active=0x00000001,     ///<SHA_IDATARx and SHA_IODATARx can be written during processing of previous block when SMOD=0x2. It speeds up the overall runtime of large files.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,DualbuffVal> dualbuff{}; 
        namespace DualbuffValC{
            constexpr Register::FieldValue<decltype(dualbuff)::Type,DualbuffVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(dualbuff)::Type,DualbuffVal::active> active{};
        }
    }
    namespace ShaIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf0014010,0xfffffefe,0,unsigned>;
        ///Data Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        ///Unspecified Register Access Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urad{}; 
    }
    namespace ShaIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf0014014,0xfffffefe,0,unsigned>;
        ///Data Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        ///Unspecified Register Access Detection Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urad{}; 
    }
    namespace ShaImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf0014018,0xfffffefe,0,unsigned>;
        ///Data Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        ///Unspecified Register Access Detection Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urad{}; 
    }
    namespace ShaIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xf001401c,0xffff8efe,0,unsigned>;
        ///Data Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        ///Unspecified Register Access Detection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urad{}; 
        ///Unspecified Register Access Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> urat{}; 
    }
    namespace ShaIdatar0{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf0014040,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar1{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf0014044,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar2{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf0014048,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar3{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf001404c,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar4{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf0014050,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar5{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf0014054,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar6{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf0014058,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar7{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf001405c,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar8{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf0014060,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar9{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf0014064,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar10{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf0014068,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar11{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf001406c,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar12{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf0014070,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar13{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf0014074,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar14{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf0014078,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaIdatar15{    ///<Input Data 0 Register
        using Addr = Register::Address<0xf001407c,0x00000000,0,unsigned>;
        ///Input Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
    }
    namespace ShaOdatar0{    ///<Output Data 0 Register
        using Addr = Register::Address<0xf0014080,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
    }
    namespace ShaOdatar1{    ///<Output Data 0 Register
        using Addr = Register::Address<0xf0014084,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
    }
    namespace ShaOdatar2{    ///<Output Data 0 Register
        using Addr = Register::Address<0xf0014088,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
    }
    namespace ShaOdatar3{    ///<Output Data 0 Register
        using Addr = Register::Address<0xf001408c,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
    }
    namespace ShaOdatar4{    ///<Output Data 0 Register
        using Addr = Register::Address<0xf0014090,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
    }
    namespace ShaOdatar5{    ///<Output Data 0 Register
        using Addr = Register::Address<0xf0014094,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
    }
    namespace ShaOdatar6{    ///<Output Data 0 Register
        using Addr = Register::Address<0xf0014098,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
    }
    namespace ShaOdatar7{    ///<Output Data 0 Register
        using Addr = Register::Address<0xf001409c,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
    }
}
