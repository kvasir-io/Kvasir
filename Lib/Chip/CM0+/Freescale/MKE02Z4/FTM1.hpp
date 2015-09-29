#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FlexTimer Module
    namespace Ftm1Sc{    ///<Status And Control
        using Addr = Register::Address<0x40039000,0xffffff00,0,unsigned>;
        ///Prescale Factor Selection
        enum class psVal {
            v000=0x00000000,     ///<Divide by 1
            v001=0x00000001,     ///<Divide by 2
            v010=0x00000002,     ///<Divide by 4
            v011=0x00000003,     ///<Divide by 8
            v100=0x00000004,     ///<Divide by 16
            v101=0x00000005,     ///<Divide by 32
            v110=0x00000006,     ///<Divide by 64
            v111=0x00000007,     ///<Divide by 128
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v000> v000{};
            constexpr MPL::Value<psVal,psVal::v001> v001{};
            constexpr MPL::Value<psVal,psVal::v010> v010{};
            constexpr MPL::Value<psVal,psVal::v011> v011{};
            constexpr MPL::Value<psVal,psVal::v100> v100{};
            constexpr MPL::Value<psVal,psVal::v101> v101{};
            constexpr MPL::Value<psVal,psVal::v110> v110{};
            constexpr MPL::Value<psVal,psVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,psVal> ps{}; 
        ///Clock Source Selection
        enum class clksVal {
            v00=0x00000000,     ///<No clock selected. This in effect disables the FTM counter.
            v01=0x00000001,     ///<System clock
            v10=0x00000002,     ///<Fixed frequency clock
            v11=0x00000003,     ///<External clock
        };
        namespace clksValC{
            constexpr MPL::Value<clksVal,clksVal::v00> v00{};
            constexpr MPL::Value<clksVal,clksVal::v01> v01{};
            constexpr MPL::Value<clksVal,clksVal::v10> v10{};
            constexpr MPL::Value<clksVal,clksVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,clksVal> clks{}; 
        ///Center-Aligned PWM Select
        enum class cpwmsVal {
            v0=0x00000000,     ///<FTM counter operates in Up Counting mode.
            v1=0x00000001,     ///<FTM counter operates in Up-Down Counting mode.
        };
        namespace cpwmsValC{
            constexpr MPL::Value<cpwmsVal,cpwmsVal::v0> v0{};
            constexpr MPL::Value<cpwmsVal,cpwmsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,cpwmsVal> cpwms{}; 
        ///Timer Overflow Interrupt Enable
        enum class toieVal {
            v0=0x00000000,     ///<Disable TOF interrupts. Use software polling.
            v1=0x00000001,     ///<Enable TOF interrupts. An interrupt is generated when TOF equals one.
        };
        namespace toieValC{
            constexpr MPL::Value<toieVal,toieVal::v0> v0{};
            constexpr MPL::Value<toieVal,toieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,toieVal> toie{}; 
        ///Timer Overflow Flag
        enum class tofVal {
            v0=0x00000000,     ///<FTM counter has not overflowed.
            v1=0x00000001,     ///<FTM counter has overflowed.
        };
        namespace tofValC{
            constexpr MPL::Value<tofVal,tofVal::v0> v0{};
            constexpr MPL::Value<tofVal,tofVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tofVal> tof{}; 
    }
    namespace Ftm1Cnt{    ///<Counter
        using Addr = Register::Address<0x40039004,0xffff0000,0,unsigned>;
        ///Counter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Ftm1Mod{    ///<Modulo
        using Addr = Register::Address<0x40039008,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mod{}; 
    }
    namespace Ftm1C0sc{    ///<Channel (n) Status And Control
        using Addr = Register::Address<0x4003900c,0xffffff03,0,unsigned>;
        ///Edge or Level Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> elsa{}; 
        ///Edge or Level Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> elsb{}; 
        ///Channel Mode Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msa{}; 
        ///Channel Mode Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msb{}; 
        ///Channel Interrupt Enable
        enum class chieVal {
            v0=0x00000000,     ///<Disable channel interrupts. Use software polling.
            v1=0x00000001,     ///<Enable channel interrupts.
        };
        namespace chieValC{
            constexpr MPL::Value<chieVal,chieVal::v0> v0{};
            constexpr MPL::Value<chieVal,chieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,chieVal> chie{}; 
        ///Channel Flag
        enum class chfVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        namespace chfValC{
            constexpr MPL::Value<chfVal,chfVal::v0> v0{};
            constexpr MPL::Value<chfVal,chfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,chfVal> chf{}; 
    }
    namespace Ftm1C1sc{    ///<Channel (n) Status And Control
        using Addr = Register::Address<0x40039014,0xffffff03,0,unsigned>;
        ///Edge or Level Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> elsa{}; 
        ///Edge or Level Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> elsb{}; 
        ///Channel Mode Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msa{}; 
        ///Channel Mode Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msb{}; 
        ///Channel Interrupt Enable
        enum class chieVal {
            v0=0x00000000,     ///<Disable channel interrupts. Use software polling.
            v1=0x00000001,     ///<Enable channel interrupts.
        };
        namespace chieValC{
            constexpr MPL::Value<chieVal,chieVal::v0> v0{};
            constexpr MPL::Value<chieVal,chieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,chieVal> chie{}; 
        ///Channel Flag
        enum class chfVal {
            v0=0x00000000,     ///<No channel event has occurred.
            v1=0x00000001,     ///<A channel event has occurred.
        };
        namespace chfValC{
            constexpr MPL::Value<chfVal,chfVal::v0> v0{};
            constexpr MPL::Value<chfVal,chfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,chfVal> chf{}; 
    }
    namespace Ftm1C0v{    ///<Channel (n) Value
        using Addr = Register::Address<0x40039010,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
    namespace Ftm1C1v{    ///<Channel (n) Value
        using Addr = Register::Address<0x40039018,0xffff0000,0,unsigned>;
        ///Channel Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val{}; 
    }
}
