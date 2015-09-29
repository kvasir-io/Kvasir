#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Reset Control Module
    namespace RcmSrs0{    ///<System Reset Status Register 0
        using Addr = Register::Address<0x4007f000,0xffffff10,0,unsigned char>;
        ///Low Leakage Wakeup Reset
        enum class wakeupVal {
            v0=0x00000000,     ///<Reset not caused by LLWU module wakeup source
            v1=0x00000001,     ///<Reset caused by LLWU module wakeup source
        };
        namespace wakeupValC{
            constexpr MPL::Value<wakeupVal,wakeupVal::v0> v0{};
            constexpr MPL::Value<wakeupVal,wakeupVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wakeupVal> wakeup{}; 
        ///Low-Voltage Detect Reset
        enum class lvdVal {
            v0=0x00000000,     ///<Reset not caused by LVD trip or POR
            v1=0x00000001,     ///<Reset caused by LVD trip or POR
        };
        namespace lvdValC{
            constexpr MPL::Value<lvdVal,lvdVal::v0> v0{};
            constexpr MPL::Value<lvdVal,lvdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lvdVal> lvd{}; 
        ///Loss-of-Clock Reset
        enum class locVal {
            v0=0x00000000,     ///<Reset not caused by a loss of external clock.
            v1=0x00000001,     ///<Reset caused by a loss of external clock.
        };
        namespace locValC{
            constexpr MPL::Value<locVal,locVal::v0> v0{};
            constexpr MPL::Value<locVal,locVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,locVal> loc{}; 
        ///Loss-of-Lock Reset
        enum class lolVal {
            v0=0x00000000,     ///<Reset not caused by a loss of lock in the PLL
            v1=0x00000001,     ///<Reset caused by a loss of lock in the PLL
        };
        namespace lolValC{
            constexpr MPL::Value<lolVal,lolVal::v0> v0{};
            constexpr MPL::Value<lolVal,lolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,lolVal> lol{}; 
        ///Watchdog
        enum class wdogVal {
            v0=0x00000000,     ///<Reset not caused by watchdog timeout
            v1=0x00000001,     ///<Reset caused by watchdog timeout
        };
        namespace wdogValC{
            constexpr MPL::Value<wdogVal,wdogVal::v0> v0{};
            constexpr MPL::Value<wdogVal,wdogVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wdogVal> wdog{}; 
        ///External Reset Pin
        enum class pinVal {
            v0=0x00000000,     ///<Reset not caused by external reset pin
            v1=0x00000001,     ///<Reset caused by external reset pin
        };
        namespace pinValC{
            constexpr MPL::Value<pinVal,pinVal::v0> v0{};
            constexpr MPL::Value<pinVal,pinVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pinVal> pin{}; 
        ///Power-On Reset
        enum class porVal {
            v0=0x00000000,     ///<Reset not caused by POR
            v1=0x00000001,     ///<Reset caused by POR
        };
        namespace porValC{
            constexpr MPL::Value<porVal,porVal::v0> v0{};
            constexpr MPL::Value<porVal,porVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,porVal> por{}; 
    }
    namespace RcmSrs1{    ///<System Reset Status Register 1
        using Addr = Register::Address<0x4007f001,0xffffff40,0,unsigned char>;
        ///JTAG Generated Reset
        enum class jtagVal {
            v0=0x00000000,     ///<Reset not caused by JTAG
            v1=0x00000001,     ///<Reset caused by JTAG
        };
        namespace jtagValC{
            constexpr MPL::Value<jtagVal,jtagVal::v0> v0{};
            constexpr MPL::Value<jtagVal,jtagVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,jtagVal> jtag{}; 
        ///Core Lockup
        enum class lockupVal {
            v0=0x00000000,     ///<Reset not caused by core LOCKUP event
            v1=0x00000001,     ///<Reset caused by core LOCKUP event
        };
        namespace lockupValC{
            constexpr MPL::Value<lockupVal,lockupVal::v0> v0{};
            constexpr MPL::Value<lockupVal,lockupVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lockupVal> lockup{}; 
        ///Software
        enum class swVal {
            v0=0x00000000,     ///<Reset not caused by software setting of SYSRESETREQ bit
            v1=0x00000001,     ///<Reset caused by software setting of SYSRESETREQ bit
        };
        namespace swValC{
            constexpr MPL::Value<swVal,swVal::v0> v0{};
            constexpr MPL::Value<swVal,swVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,swVal> sw{}; 
        ///MDM-AP System Reset Request
        enum class mdmApVal {
            v0=0x00000000,     ///<Reset not caused by host debugger system setting of the System Reset Request bit
            v1=0x00000001,     ///<Reset caused by host debugger system setting of the System Reset Request bit
        };
        namespace mdmApValC{
            constexpr MPL::Value<mdmApVal,mdmApVal::v0> v0{};
            constexpr MPL::Value<mdmApVal,mdmApVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,mdmApVal> mdmAp{}; 
        ///EzPort Reset
        enum class ezptVal {
            v0=0x00000000,     ///<Reset not caused by EzPort receiving the RESET command while the device is in EzPort mode
            v1=0x00000001,     ///<Reset caused by EzPort receiving the RESET command while the device is in EzPort mode
        };
        namespace ezptValC{
            constexpr MPL::Value<ezptVal,ezptVal::v0> v0{};
            constexpr MPL::Value<ezptVal,ezptVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ezptVal> ezpt{}; 
        ///Stop Mode Acknowledge Error Reset
        enum class sackerrVal {
            v0=0x00000000,     ///<Reset not caused by peripheral failure to acknowledge attempt to enter stop mode
            v1=0x00000001,     ///<Reset caused by peripheral failure to acknowledge attempt to enter stop mode
        };
        namespace sackerrValC{
            constexpr MPL::Value<sackerrVal,sackerrVal::v0> v0{};
            constexpr MPL::Value<sackerrVal,sackerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sackerrVal> sackerr{}; 
        ///Tamper detect
        enum class tamperVal {
            v0=0x00000000,     ///<Reset not caused by tamper detect
            v1=0x00000001,     ///<Reset caused by tamper detect.
        };
        namespace tamperValC{
            constexpr MPL::Value<tamperVal,tamperVal::v0> v0{};
            constexpr MPL::Value<tamperVal,tamperVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tamperVal> tamper{}; 
    }
    namespace RcmRpfc{    ///<Reset Pin Filter Control register
        using Addr = Register::Address<0x4007f004,0xfffffff8,0,unsigned char>;
        ///Reset Pin Filter Select in Run and Wait Modes
        enum class rstfltsrwVal {
            v00=0x00000000,     ///<All filtering disabled
            v01=0x00000001,     ///<Bus clock filter enabled for normal operation
            v10=0x00000002,     ///<LPO clock filter enabled for normal operation
            v11=0x00000003,     ///<Reserved
        };
        namespace rstfltsrwValC{
            constexpr MPL::Value<rstfltsrwVal,rstfltsrwVal::v00> v00{};
            constexpr MPL::Value<rstfltsrwVal,rstfltsrwVal::v01> v01{};
            constexpr MPL::Value<rstfltsrwVal,rstfltsrwVal::v10> v10{};
            constexpr MPL::Value<rstfltsrwVal,rstfltsrwVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,rstfltsrwVal> rstfltsrw{}; 
        ///Reset Pin Filter Select in Stop Mode
        enum class rstfltssVal {
            v0=0x00000000,     ///<All filtering disabled
            v1=0x00000001,     ///<LPO clock filter enabled
        };
        namespace rstfltssValC{
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v0> v0{};
            constexpr MPL::Value<rstfltssVal,rstfltssVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rstfltssVal> rstfltss{}; 
    }
    namespace RcmRpfw{    ///<Reset Pin Filter Width register
        using Addr = Register::Address<0x4007f005,0xffffffe0,0,unsigned char>;
        ///Reset Pin Filter Bus Clock Select
        enum class rstfltselVal {
            v00000=0x00000000,     ///<Bus clock filter count is 1
            v00001=0x00000001,     ///<Bus clock filter count is 2
            v00010=0x00000002,     ///<Bus clock filter count is 3
            v00011=0x00000003,     ///<Bus clock filter count is 4
            v00100=0x00000004,     ///<Bus clock filter count is 5
            v00101=0x00000005,     ///<Bus clock filter count is 6
            v00110=0x00000006,     ///<Bus clock filter count is 7
            v00111=0x00000007,     ///<Bus clock filter count is 8
            v01000=0x00000008,     ///<Bus clock filter count is 9
            v01001=0x00000009,     ///<Bus clock filter count is 10
            v01010=0x0000000a,     ///<Bus clock filter count is 11
            v01011=0x0000000b,     ///<Bus clock filter count is 12
            v01100=0x0000000c,     ///<Bus clock filter count is 13
            v01101=0x0000000d,     ///<Bus clock filter count is 14
            v01110=0x0000000e,     ///<Bus clock filter count is 15
            v01111=0x0000000f,     ///<Bus clock filter count is 16
            v10000=0x00000010,     ///<Bus clock filter count is 17
            v10001=0x00000011,     ///<Bus clock filter count is 18
            v10010=0x00000012,     ///<Bus clock filter count is 19
            v10011=0x00000013,     ///<Bus clock filter count is 20
            v10100=0x00000014,     ///<Bus clock filter count is 21
            v10101=0x00000015,     ///<Bus clock filter count is 22
            v10110=0x00000016,     ///<Bus clock filter count is 23
            v10111=0x00000017,     ///<Bus clock filter count is 24
            v11000=0x00000018,     ///<Bus clock filter count is 25
            v11001=0x00000019,     ///<Bus clock filter count is 26
            v11010=0x0000001a,     ///<Bus clock filter count is 27
            v11011=0x0000001b,     ///<Bus clock filter count is 28
            v11100=0x0000001c,     ///<Bus clock filter count is 29
            v11101=0x0000001d,     ///<Bus clock filter count is 30
            v11110=0x0000001e,     ///<Bus clock filter count is 31
            v11111=0x0000001f,     ///<Bus clock filter count is 32
        };
        namespace rstfltselValC{
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v00000> v00000{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v00001> v00001{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v00010> v00010{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v00011> v00011{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v00100> v00100{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v00101> v00101{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v00110> v00110{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v00111> v00111{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v01000> v01000{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v01001> v01001{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v01010> v01010{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v01011> v01011{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v01100> v01100{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v01101> v01101{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v01110> v01110{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v01111> v01111{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v10000> v10000{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v10001> v10001{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v10010> v10010{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v10011> v10011{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v10100> v10100{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v10101> v10101{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v10110> v10110{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v10111> v10111{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v11000> v11000{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v11001> v11001{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v11010> v11010{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v11011> v11011{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v11100> v11100{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v11101> v11101{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v11110> v11110{};
            constexpr MPL::Value<rstfltselVal,rstfltselVal::v11111> v11111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,rstfltselVal> rstfltsel{}; 
    }
    namespace RcmMr{    ///<Mode Register
        using Addr = Register::Address<0x4007f007,0xfffffffd,0,unsigned char>;
        ///EZP_MS_B pin state
        enum class ezpMsVal {
            v0=0x00000000,     ///<Pin deasserted (logic 1)
            v1=0x00000001,     ///<Pin asserted (logic 0)
        };
        namespace ezpMsValC{
            constexpr MPL::Value<ezpMsVal,ezpMsVal::v0> v0{};
            constexpr MPL::Value<ezpMsVal,ezpMsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ezpMsVal> ezpMs{}; 
    }
}
