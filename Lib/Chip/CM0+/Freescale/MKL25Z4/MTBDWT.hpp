#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//MTB data watchpoint and trace
    namespace MtbdwtCtrl{    ///<MTB DWT Control Register
        using Addr = Register::Address<0xf0001000,0x00000000,0,unsigned>;
        ///DWT configuration controls
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dwtcfgctrl{}; 
        ///Number of comparators
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> numcmp{}; 
    }
    namespace MtbdwtComp0{    ///<MTB_DWT Comparator Register
        using Addr = Register::Address<0xf0001020,0x00000000,0,unsigned>;
        ///Reference value for comparison
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> comp{}; 
    }
    namespace MtbdwtComp1{    ///<MTB_DWT Comparator Register
        using Addr = Register::Address<0xf0001030,0x00000000,0,unsigned>;
        ///Reference value for comparison
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> comp{}; 
    }
    namespace MtbdwtMask0{    ///<MTB_DWT Comparator Mask Register
        using Addr = Register::Address<0xf0001024,0xffffffe0,0,unsigned>;
        ///MASK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace MtbdwtMask1{    ///<MTB_DWT Comparator Mask Register
        using Addr = Register::Address<0xf0001034,0xffffffe0,0,unsigned>;
        ///MASK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> mask{}; 
    }
    namespace MtbdwtFct0{    ///<MTB_DWT Comparator Function Register 0
        using Addr = Register::Address<0xf0001028,0xfeff02f0,0,unsigned>;
        ///Function
        enum class functionVal {
            v0000=0x00000000,     ///<Disabled.
            v0100=0x00000004,     ///<Instruction fetch.
            v0101=0x00000005,     ///<Data operand read.
            v0110=0x00000006,     ///<Data operand write.
            v0111=0x00000007,     ///<Data operand (read + write).
        };
        namespace functionValC{
            constexpr MPL::Value<functionVal,functionVal::v0000> v0000{};
            constexpr MPL::Value<functionVal,functionVal::v0100> v0100{};
            constexpr MPL::Value<functionVal,functionVal::v0101> v0101{};
            constexpr MPL::Value<functionVal,functionVal::v0110> v0110{};
            constexpr MPL::Value<functionVal,functionVal::v0111> v0111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,functionVal> function{}; 
        ///Data Value Match
        enum class datavmatchVal {
            v0=0x00000000,     ///<Perform address comparison.
            v1=0x00000001,     ///<Perform data value comparison.
        };
        namespace datavmatchValC{
            constexpr MPL::Value<datavmatchVal,datavmatchVal::v0> v0{};
            constexpr MPL::Value<datavmatchVal,datavmatchVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,datavmatchVal> datavmatch{}; 
        ///Data Value Size
        enum class datavsizeVal {
            v00=0x00000000,     ///<Byte.
            v01=0x00000001,     ///<Halfword.
            v10=0x00000002,     ///<Word.
            v11=0x00000003,     ///<Reserved. Any attempts to use this value results in UNPREDICTABLE behavior.
        };
        namespace datavsizeValC{
            constexpr MPL::Value<datavsizeVal,datavsizeVal::v00> v00{};
            constexpr MPL::Value<datavsizeVal,datavsizeVal::v01> v01{};
            constexpr MPL::Value<datavsizeVal,datavsizeVal::v10> v10{};
            constexpr MPL::Value<datavsizeVal,datavsizeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,datavsizeVal> datavsize{}; 
        ///Data Value Address 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> datavaddr0{}; 
        ///Comparator match
        enum class matchedVal {
            v0=0x00000000,     ///<No match.
            v1=0x00000001,     ///<Match occurred.
        };
        namespace matchedValC{
            constexpr MPL::Value<matchedVal,matchedVal::v0> v0{};
            constexpr MPL::Value<matchedVal,matchedVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,matchedVal> matched{}; 
    }
    namespace MtbdwtFct1{    ///<MTB_DWT Comparator Function Register 1
        using Addr = Register::Address<0xf0001038,0xfefffff0,0,unsigned>;
        ///Function
        enum class functionVal {
            v0000=0x00000000,     ///<Disabled.
            v0100=0x00000004,     ///<Instruction fetch.
            v0101=0x00000005,     ///<Data operand read.
            v0110=0x00000006,     ///<Data operand write.
            v0111=0x00000007,     ///<Data operand (read + write).
        };
        namespace functionValC{
            constexpr MPL::Value<functionVal,functionVal::v0000> v0000{};
            constexpr MPL::Value<functionVal,functionVal::v0100> v0100{};
            constexpr MPL::Value<functionVal,functionVal::v0101> v0101{};
            constexpr MPL::Value<functionVal,functionVal::v0110> v0110{};
            constexpr MPL::Value<functionVal,functionVal::v0111> v0111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,functionVal> function{}; 
        ///Comparator match
        enum class matchedVal {
            v0=0x00000000,     ///<No match.
            v1=0x00000001,     ///<Match occurred.
        };
        namespace matchedValC{
            constexpr MPL::Value<matchedVal,matchedVal::v0> v0{};
            constexpr MPL::Value<matchedVal,matchedVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,matchedVal> matched{}; 
    }
    namespace MtbdwtTbctrl{    ///<MTB_DWT Trace Buffer Control Register
        using Addr = Register::Address<0xf0001200,0x0ffffffc,0,unsigned>;
        ///Action based on Comparator 0 match
        enum class acomp0Val {
            v0=0x00000000,     ///<Trigger TSTOP based on the assertion of MTBDWT_FCT0[MATCHED].
            v1=0x00000001,     ///<Trigger TSTART based on the assertion of MTBDWT_FCT0[MATCHED].
        };
        namespace acomp0ValC{
            constexpr MPL::Value<acomp0Val,acomp0Val::v0> v0{};
            constexpr MPL::Value<acomp0Val,acomp0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,acomp0Val> acomp0{}; 
        ///Action based on Comparator 1 match
        enum class acomp1Val {
            v0=0x00000000,     ///<Trigger TSTOP based on the assertion of MTBDWT_FCT1[MATCHED].
            v1=0x00000001,     ///<Trigger TSTART based on the assertion of MTBDWT_FCT1[MATCHED].
        };
        namespace acomp1ValC{
            constexpr MPL::Value<acomp1Val,acomp1Val::v0> v0{};
            constexpr MPL::Value<acomp1Val,acomp1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,acomp1Val> acomp1{}; 
        ///Number of Comparators
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> numcomp{}; 
    }
    namespace MtbdwtDevicecfg{    ///<Device Configuration Register
        using Addr = Register::Address<0xf0001fc8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> devicecfg{}; 
    }
    namespace MtbdwtDevicetypid{    ///<Device Type Identifier Register
        using Addr = Register::Address<0xf0001fcc,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> devicetypid{}; 
    }
    namespace MtbdwtPeriphid4{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fd0,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbdwtPeriphid5{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fd4,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbdwtPeriphid6{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fd8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbdwtPeriphid7{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fdc,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbdwtPeriphid0{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fe0,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbdwtPeriphid1{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fe4,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbdwtPeriphid2{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fe8,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbdwtPeriphid3{    ///<Peripheral ID Register
        using Addr = Register::Address<0xf0001fec,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> periphid{}; 
    }
    namespace MtbdwtCompid0{    ///<Component ID Register
        using Addr = Register::Address<0xf0001ff0,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
    }
    namespace MtbdwtCompid1{    ///<Component ID Register
        using Addr = Register::Address<0xf0001ff4,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
    }
    namespace MtbdwtCompid2{    ///<Component ID Register
        using Addr = Register::Address<0xf0001ff8,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
    }
    namespace MtbdwtCompid3{    ///<Component ID Register
        using Addr = Register::Address<0xf0001ffc,0x00000000,0,unsigned>;
        ///Component ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> compid{}; 
    }
}
