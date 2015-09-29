#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Reset control module
    namespace RcmSrsl{    ///<RCM System Reset Status Low Register
        using Addr = Register::Address<0x40057000,0xffffff19,0,unsigned char>;
        ///Low Voltage Detect
        enum class lvdVal {
            v0=0x00000000,     ///<Reset not caused by LVD trip or POR.
            v1=0x00000001,     ///<Reset caused by LVD trip or POR.
        };
        namespace lvdValC{
            constexpr MPL::Value<lvdVal,lvdVal::v0> v0{};
            constexpr MPL::Value<lvdVal,lvdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lvdVal> lvd{}; 
        ///Loss Of Clock Reset
        enum class locVal {
            v0=0x00000000,     ///<Reset not caused by Watchdog Reset.
            v1=0x00000001,     ///<Reset caused by loss of external clock.
        };
        namespace locValC{
            constexpr MPL::Value<locVal,locVal::v0> v0{};
            constexpr MPL::Value<locVal,locVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,locVal> loc{}; 
        ///COP Watchdog Reset
        enum class copVal {
            v0=0x00000000,     ///<Reset not caused by Watchdog Reset.
            v1=0x00000001,     ///<Reset caused by Watchdog Reset.
        };
        namespace copValC{
            constexpr MPL::Value<copVal,copVal::v0> v0{};
            constexpr MPL::Value<copVal,copVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,copVal> cop{}; 
        ///External RESETb Pin
        enum class pinVal {
            v0=0x00000000,     ///<Reset not caused by external RESETb pin.
            v1=0x00000001,     ///<Reset caused by external RESETb pin.
        };
        namespace pinValC{
            constexpr MPL::Value<pinVal,pinVal::v0> v0{};
            constexpr MPL::Value<pinVal,pinVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pinVal> pin{}; 
        ///Power On Reset
        enum class porVal {
            v0=0x00000000,     ///<Reset not caused by POR.
            v1=0x00000001,     ///<Reset caused by POR.
        };
        namespace porValC{
            constexpr MPL::Value<porVal,porVal::v0> v0{};
            constexpr MPL::Value<porVal,porVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,porVal> por{}; 
    }
    namespace RcmSrsh{    ///<RCM System Reset Status High Register
        using Addr = Register::Address<0x40057001,0xffffffd0,0,unsigned char>;
        ///JTAG Reset
        enum class jtagVal {
            v0=0x00000000,     ///<Reset not caused by JTAG.
            v1=0x00000001,     ///<Reset caused by JTAG.
        };
        namespace jtagValC{
            constexpr MPL::Value<jtagVal,jtagVal::v0> v0{};
            constexpr MPL::Value<jtagVal,jtagVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,jtagVal> jtag{}; 
        ///CPU LOCKUP Reset
        enum class lockupVal {
            v0=0x00000000,     ///<Reset not caused by CPU LOCKUP.
            v1=0x00000001,     ///<Reset caused by CPU LOCKUP.
        };
        namespace lockupValC{
            constexpr MPL::Value<lockupVal,lockupVal::v0> v0{};
            constexpr MPL::Value<lockupVal,lockupVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lockupVal> lockup{}; 
        ///Software Reset
        enum class swVal {
            v0=0x00000000,     ///<Reset not caused by Software Reset.
            v1=0x00000001,     ///<Reset caused by Software Reset.
        };
        namespace swValC{
            constexpr MPL::Value<swVal,swVal::v0> v0{};
            constexpr MPL::Value<swVal,swVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swVal> sw{}; 
        ///MDM-AP system reset request
        enum class mdmapVal {
            v0=0x00000000,     ///<Reset not caused by MDM-AP request.
            v1=0x00000001,     ///<Reset caused by MDM-AP request.
        };
        namespace mdmapValC{
            constexpr MPL::Value<mdmapVal,mdmapVal::v0> v0{};
            constexpr MPL::Value<mdmapVal,mdmapVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,mdmapVal> mdmap{}; 
        ///Stop Mode Acknowledge Error Reset
        enum class sackerrVal {
            v0=0x00000000,     ///<Reset not caused by peripheral failure to acknowledge attempt to enter stop mode.
            v1=0x00000001,     ///<Reset caused by peripheral failure to acknowledge attempt to enter stop mode.
        };
        namespace sackerrValC{
            constexpr MPL::Value<sackerrVal,sackerrVal::v0> v0{};
            constexpr MPL::Value<sackerrVal,sackerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sackerrVal> sackerr{}; 
    }
    namespace RcmRpfc{    ///<RCM RESETb Pin Filter Control Register
        using Addr = Register::Address<0x40057004,0xfffffff8,0,unsigned char>;
        ///Reset Pin Filter Select in Run and Wait Modes
        enum class rstfltsrwVal {
            v00=0x00000000,     ///<All filtering disabled.
            v01=0x00000001,     ///<Bus Clock filter enabled.
            v10=0x00000002,     ///<LPO clock filter enabled.
            v11=0x00000003,     ///<All filtering disabled.
        };
        namespace rstfltsrwValC{
            constexpr MPL::Value<rstfltsrwVal,rstfltsrwVal::v00> v00{};
            constexpr MPL::Value<rstfltsrwVal,rstfltsrwVal::v01> v01{};
            constexpr MPL::Value<rstfltsrwVal,rstfltsrwVal::v10> v10{};
            constexpr MPL::Value<rstfltsrwVal,rstfltsrwVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,rstfltsrwVal> rstfltsrw{}; 
        ///Reset Pin Filter Select in Stop Modes
        enum class rstfltssVal {
            v0=0x00000000,     ///<All filtering disabled.
            v1=0x00000001,     ///<LPO clock filter enabled.
        };
        namespace rstfltssValC{
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v0> v0{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rstfltssVal> rstfltss{}; 
    }
    namespace RcmRpfw{    ///<RCM RESETb Pin Filter Width Register
        using Addr = Register::Address<0x40057005,0xffffffe0,0,unsigned char>;
        ///RESETb Pin bus clock filter width
        enum class rstfltssVal {
            v00000=0x00000000,     ///<Bus Clock Filter Width is 1.
            v00001=0x00000001,     ///<Bus Clock Filter Width is 2.
            v00010=0x00000002,     ///<Bus Clock Filter Width is 3.
            v00011=0x00000003,     ///<Bus Clock Filter Width is 4.
            v00100=0x00000004,     ///<Bus Clock Filter Width is 5.
            v00101=0x00000005,     ///<Bus Clock Filter Width is 6.
            v00110=0x00000006,     ///<Bus Clock Filter Width is 7.
            v00111=0x00000007,     ///<Bus Clock Filter Width is 8.
            v01000=0x00000008,     ///<Bus Clock Filter Width is 9.
            v01001=0x00000009,     ///<Bus Clock Filter Width is 10.
            v01010=0x0000000a,     ///<Bus Clock Filter Width is 11.
            v01011=0x0000000b,     ///<Bus Clock Filter Width is 12.
            v01100=0x0000000c,     ///<Bus Clock Filter Width is 13.
            v01101=0x0000000d,     ///<Bus Clock Filter Width is 14.
            v01110=0x0000000e,     ///<Bus Clock Filter Width is 15.
            v01111=0x0000000f,     ///<Bus Clock Filter Width is 16.
            v10000=0x00000010,     ///<Bus Clock Filter Width is 17.
            v10001=0x00000011,     ///<Bus Clock Filter Width is 18.
            v10010=0x00000012,     ///<Bus Clock Filter Width is 19.
            v10011=0x00000013,     ///<Bus Clock Filter Width is 20.
            v10100=0x00000014,     ///<Bus Clock Filter Width is 21.
            v10101=0x00000015,     ///<Bus Clock Filter Width is 22.
            v10110=0x00000016,     ///<Bus Clock Filter Width is 23.
            v10111=0x00000017,     ///<Bus Clock Filter Width is 24.
            v11000=0x00000018,     ///<Bus Clock Filter Width is 25.
            v11001=0x00000019,     ///<Bus Clock Filter Width is 26.
            v11010=0x0000001a,     ///<Bus Clock Filter Width is 27.
            v11011=0x0000001b,     ///<Bus Clock Filter Width is 28.
            v11100=0x0000001c,     ///<Bus Clock Filter Width is 29.
            v11101=0x0000001d,     ///<Bus Clock Filter Width is 30.
            v11110=0x0000001e,     ///<Bus Clock Filter Width is 31.
            v11111=0x0000001f,     ///<Bus Clock Filter Width is 32.
        };
        namespace rstfltssValC{
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v00000> v00000{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v00001> v00001{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v00010> v00010{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v00011> v00011{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v00100> v00100{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v00101> v00101{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v00110> v00110{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v00111> v00111{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v01000> v01000{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v01001> v01001{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v01010> v01010{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v01011> v01011{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v01100> v01100{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v01101> v01101{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v01110> v01110{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v01111> v01111{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v10000> v10000{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v10001> v10001{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v10010> v10010{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v10011> v10011{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v10100> v10100{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v10101> v10101{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v10110> v10110{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v10111> v10111{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v11000> v11000{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v11001> v11001{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v11010> v11010{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v11011> v11011{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v11100> v11100{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v11101> v11101{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v11110> v11110{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v11111> v11111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,rstfltssVal> rstfltss{}; 
    }
}
