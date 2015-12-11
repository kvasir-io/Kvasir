#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog to digital converter
    namespace AdcCtrl1{    ///<ADC Control Register 1
        using Addr = Register::Address<0x4005c000,0xffff0008,0,unsigned>;
        ///ADC Scan Mode Control
        enum class SmodeVal {
            v000=0x00000000,     ///<Once (single) sequential
            v001=0x00000001,     ///<Once parallel
            v010=0x00000002,     ///<Loop sequential
            v011=0x00000003,     ///<Loop parallel
            v100=0x00000004,     ///<Triggered sequential
            v101=0x00000005,     ///<Triggered parallel (default)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,SmodeVal> smode{}; 
        namespace SmodeValC{
            constexpr Register::FieldValue<decltype(smode)::Type,SmodeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(smode)::Type,SmodeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(smode)::Type,SmodeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(smode)::Type,SmodeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(smode)::Type,SmodeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(smode)::Type,SmodeVal::v101> v101{};
        }
        ///CHCNF (Channel Configure Low) bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> chncfgL{}; 
        ///High Limit Interrupt Enable
        enum class HlmtieVal {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,HlmtieVal> hlmtie{}; 
        namespace HlmtieValC{
            constexpr Register::FieldValue<decltype(hlmtie)::Type,HlmtieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hlmtie)::Type,HlmtieVal::v1> v1{};
        }
        ///Low Limit Interrupt Enable
        enum class LlmtieVal {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,LlmtieVal> llmtie{}; 
        namespace LlmtieValC{
            constexpr Register::FieldValue<decltype(llmtie)::Type,LlmtieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(llmtie)::Type,LlmtieVal::v1> v1{};
        }
        ///Zero Crossing Interrupt Enable
        enum class ZcieVal {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ZcieVal> zcie{}; 
        namespace ZcieValC{
            constexpr Register::FieldValue<decltype(zcie)::Type,ZcieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(zcie)::Type,ZcieVal::v1> v1{};
        }
        ///End Of Scan Interrupt Enable
        enum class Eosie0Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Eosie0Val> eosie0{}; 
        namespace Eosie0ValC{
            constexpr Register::FieldValue<decltype(eosie0)::Type,Eosie0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eosie0)::Type,Eosie0Val::v1> v1{};
        }
        ///SYNC0 Enable
        enum class Sync0Val {
            v0=0x00000000,     ///<Scan is initiated by a write to CTRL1[START0] only
            v1=0x00000001,     ///<Use a SYNC0 input pulse or CTRL1[START0] to initiate a scan
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Sync0Val> sync0{}; 
        namespace Sync0ValC{
            constexpr Register::FieldValue<decltype(sync0)::Type,Sync0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sync0)::Type,Sync0Val::v1> v1{};
        }
        ///START0 Conversion
        enum class Start0Val {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<Start command is issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Start0Val> start0{}; 
        namespace Start0ValC{
            constexpr Register::FieldValue<decltype(start0)::Type,Start0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(start0)::Type,Start0Val::v1> v1{};
        }
        ///Stop
        enum class Stop0Val {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Stop mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Stop0Val> stop0{}; 
        namespace Stop0ValC{
            constexpr Register::FieldValue<decltype(stop0)::Type,Stop0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(stop0)::Type,Stop0Val::v1> v1{};
        }
        ///DMA enable
        enum class Dmaen0Val {
            v0=0x00000000,     ///<DMA is not enabled.
            v1=0x00000001,     ///<DMA is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Dmaen0Val> dmaen0{}; 
        namespace Dmaen0ValC{
            constexpr Register::FieldValue<decltype(dmaen0)::Type,Dmaen0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaen0)::Type,Dmaen0Val::v1> v1{};
        }
    }
    namespace AdcCtrl2{    ///<ADC Control Register 2
        using Addr = Register::Address<0x4005c002,0xffff0000,0,unsigned>;
        ///Clock Divisor Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> div0{}; 
        ///Simultaneous mode
        enum class SimultVal {
            v0=0x00000000,     ///<Parallel scans done independently
            v1=0x00000001,     ///<Parallel scans done simultaneously (default)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,SimultVal> simult{}; 
        namespace SimultValC{
            constexpr Register::FieldValue<decltype(simult)::Type,SimultVal::v0> v0{};
            constexpr Register::FieldValue<decltype(simult)::Type,SimultVal::v1> v1{};
        }
        ///CHCNF (Channel Configure High) bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,7),Register::ReadWriteAccess,unsigned> chncfgH{}; 
        ///End Of Scan Interrupt Enable
        enum class Eosie1Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Eosie1Val> eosie1{}; 
        namespace Eosie1ValC{
            constexpr Register::FieldValue<decltype(eosie1)::Type,Eosie1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eosie1)::Type,Eosie1Val::v1> v1{};
        }
        ///SYNC1 Enable
        enum class Sync1Val {
            v0=0x00000000,     ///<B converter parallel scan is initiated by a write to CTRL2[START1] bit only
            v1=0x00000001,     ///<Use a SYNC1 input pulse or CTRL2[START1] bit to initiate a B converter parallel scan
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Sync1Val> sync1{}; 
        namespace Sync1ValC{
            constexpr Register::FieldValue<decltype(sync1)::Type,Sync1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(sync1)::Type,Sync1Val::v1> v1{};
        }
        ///START1 Conversion
        enum class Start1Val {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<Start command is issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Start1Val> start1{}; 
        namespace Start1ValC{
            constexpr Register::FieldValue<decltype(start1)::Type,Start1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(start1)::Type,Start1Val::v1> v1{};
        }
        ///Stop
        enum class Stop1Val {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Stop mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Stop1Val> stop1{}; 
        namespace Stop1ValC{
            constexpr Register::FieldValue<decltype(stop1)::Type,Stop1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(stop1)::Type,Stop1Val::v1> v1{};
        }
        ///DMA enable
        enum class Dmaen1Val {
            v0=0x00000000,     ///<DMA is not enabled.
            v1=0x00000001,     ///<DMA is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Dmaen1Val> dmaen1{}; 
        namespace Dmaen1ValC{
            constexpr Register::FieldValue<decltype(dmaen1)::Type,Dmaen1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaen1)::Type,Dmaen1Val::v1> v1{};
        }
    }
    namespace AdcZxctrl1{    ///<ADC Zero Crossing Control 1 Register
        using Addr = Register::Address<0x4005c004,0xffff0000,0,unsigned>;
        ///Zero crossing enable 0
        enum class Zce0Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Zce0Val> zce0{}; 
        namespace Zce0ValC{
            constexpr Register::FieldValue<decltype(zce0)::Type,Zce0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce0)::Type,Zce0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce0)::Type,Zce0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce0)::Type,Zce0Val::v11> v11{};
        }
        ///Zero crossing enable 1
        enum class Zce1Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Zce1Val> zce1{}; 
        namespace Zce1ValC{
            constexpr Register::FieldValue<decltype(zce1)::Type,Zce1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce1)::Type,Zce1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce1)::Type,Zce1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce1)::Type,Zce1Val::v11> v11{};
        }
        ///Zero crossing enable 2
        enum class Zce2Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Zce2Val> zce2{}; 
        namespace Zce2ValC{
            constexpr Register::FieldValue<decltype(zce2)::Type,Zce2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce2)::Type,Zce2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce2)::Type,Zce2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce2)::Type,Zce2Val::v11> v11{};
        }
        ///Zero crossing enable 3
        enum class Zce3Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Zce3Val> zce3{}; 
        namespace Zce3ValC{
            constexpr Register::FieldValue<decltype(zce3)::Type,Zce3Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce3)::Type,Zce3Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce3)::Type,Zce3Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce3)::Type,Zce3Val::v11> v11{};
        }
        ///Zero crossing enable 4
        enum class Zce4Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Zce4Val> zce4{}; 
        namespace Zce4ValC{
            constexpr Register::FieldValue<decltype(zce4)::Type,Zce4Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce4)::Type,Zce4Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce4)::Type,Zce4Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce4)::Type,Zce4Val::v11> v11{};
        }
        ///Zero crossing enable 5
        enum class Zce5Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Zce5Val> zce5{}; 
        namespace Zce5ValC{
            constexpr Register::FieldValue<decltype(zce5)::Type,Zce5Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce5)::Type,Zce5Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce5)::Type,Zce5Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce5)::Type,Zce5Val::v11> v11{};
        }
        ///Zero crossing enable 6
        enum class Zce6Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Zce6Val> zce6{}; 
        namespace Zce6ValC{
            constexpr Register::FieldValue<decltype(zce6)::Type,Zce6Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce6)::Type,Zce6Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce6)::Type,Zce6Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce6)::Type,Zce6Val::v11> v11{};
        }
        ///Zero crossing enable 7
        enum class Zce7Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Zce7Val> zce7{}; 
        namespace Zce7ValC{
            constexpr Register::FieldValue<decltype(zce7)::Type,Zce7Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce7)::Type,Zce7Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce7)::Type,Zce7Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce7)::Type,Zce7Val::v11> v11{};
        }
    }
    namespace AdcZxctrl2{    ///<ADC Zero Crossing Control 2 Register
        using Addr = Register::Address<0x4005c006,0xffff0000,0,unsigned>;
        ///Zero crossing enable 8
        enum class Zce8Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Zce8Val> zce8{}; 
        namespace Zce8ValC{
            constexpr Register::FieldValue<decltype(zce8)::Type,Zce8Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce8)::Type,Zce8Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce8)::Type,Zce8Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce8)::Type,Zce8Val::v11> v11{};
        }
        ///Zero crossing enable 9
        enum class Zce9Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Zce9Val> zce9{}; 
        namespace Zce9ValC{
            constexpr Register::FieldValue<decltype(zce9)::Type,Zce9Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce9)::Type,Zce9Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce9)::Type,Zce9Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce9)::Type,Zce9Val::v11> v11{};
        }
        ///Zero crossing enable 10
        enum class Zce10Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Zce10Val> zce10{}; 
        namespace Zce10ValC{
            constexpr Register::FieldValue<decltype(zce10)::Type,Zce10Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce10)::Type,Zce10Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce10)::Type,Zce10Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce10)::Type,Zce10Val::v11> v11{};
        }
        ///Zero crossing enable 11
        enum class Zce11Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Zce11Val> zce11{}; 
        namespace Zce11ValC{
            constexpr Register::FieldValue<decltype(zce11)::Type,Zce11Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce11)::Type,Zce11Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce11)::Type,Zce11Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce11)::Type,Zce11Val::v11> v11{};
        }
        ///Zero crossing enable 12
        enum class Zce12Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Zce12Val> zce12{}; 
        namespace Zce12ValC{
            constexpr Register::FieldValue<decltype(zce12)::Type,Zce12Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce12)::Type,Zce12Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce12)::Type,Zce12Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce12)::Type,Zce12Val::v11> v11{};
        }
        ///Zero crossing enable 13
        enum class Zce13Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Zce13Val> zce13{}; 
        namespace Zce13ValC{
            constexpr Register::FieldValue<decltype(zce13)::Type,Zce13Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce13)::Type,Zce13Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce13)::Type,Zce13Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce13)::Type,Zce13Val::v11> v11{};
        }
        ///Zero crossing enable 14
        enum class Zce14Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Zce14Val> zce14{}; 
        namespace Zce14ValC{
            constexpr Register::FieldValue<decltype(zce14)::Type,Zce14Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce14)::Type,Zce14Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce14)::Type,Zce14Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce14)::Type,Zce14Val::v11> v11{};
        }
        ///Zero crossing enable 15
        enum class Zce15Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Zce15Val> zce15{}; 
        namespace Zce15ValC{
            constexpr Register::FieldValue<decltype(zce15)::Type,Zce15Val::v00> v00{};
            constexpr Register::FieldValue<decltype(zce15)::Type,Zce15Val::v01> v01{};
            constexpr Register::FieldValue<decltype(zce15)::Type,Zce15Val::v10> v10{};
            constexpr Register::FieldValue<decltype(zce15)::Type,Zce15Val::v11> v11{};
        }
    }
    namespace AdcClist1{    ///<ADC Channel List Register 1
        using Addr = Register::Address<0x4005c008,0xffff0000,0,unsigned>;
        ///Sample Field 0
        enum class Sample0Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Sample0Val> sample0{}; 
        namespace Sample0ValC{
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample0)::Type,Sample0Val::v1111> v1111{};
        }
        ///Sample Field 1
        enum class Sample1Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,Sample1Val> sample1{}; 
        namespace Sample1ValC{
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample1)::Type,Sample1Val::v1111> v1111{};
        }
        ///Sample Field 2
        enum class Sample2Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Sample2Val> sample2{}; 
        namespace Sample2ValC{
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample2)::Type,Sample2Val::v1111> v1111{};
        }
        ///Sample Field 3
        enum class Sample3Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,Sample3Val> sample3{}; 
        namespace Sample3ValC{
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample3)::Type,Sample3Val::v1111> v1111{};
        }
    }
    namespace AdcClist2{    ///<ADC Channel List Register 2
        using Addr = Register::Address<0x4005c00a,0xffff0000,0,unsigned>;
        ///Sample Field 4
        enum class Sample4Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Sample4Val> sample4{}; 
        namespace Sample4ValC{
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample4)::Type,Sample4Val::v1111> v1111{};
        }
        ///Sample Field 5
        enum class Sample5Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,Sample5Val> sample5{}; 
        namespace Sample5ValC{
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample5)::Type,Sample5Val::v1111> v1111{};
        }
        ///Sample Field 6
        enum class Sample6Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Sample6Val> sample6{}; 
        namespace Sample6ValC{
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample6)::Type,Sample6Val::v1111> v1111{};
        }
        ///Sample Field 7
        enum class Sample7Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,Sample7Val> sample7{}; 
        namespace Sample7ValC{
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample7)::Type,Sample7Val::v1111> v1111{};
        }
    }
    namespace AdcClist3{    ///<ADC Channel List Register 3
        using Addr = Register::Address<0x4005c00c,0xffff0000,0,unsigned>;
        ///Sample Field 8
        enum class Sample8Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Sample8Val> sample8{}; 
        namespace Sample8ValC{
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample8)::Type,Sample8Val::v1111> v1111{};
        }
        ///Sample Field 9
        enum class Sample9Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,Sample9Val> sample9{}; 
        namespace Sample9ValC{
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample9)::Type,Sample9Val::v1111> v1111{};
        }
        ///Sample Field 10
        enum class Sample10Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Sample10Val> sample10{}; 
        namespace Sample10ValC{
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample10)::Type,Sample10Val::v1111> v1111{};
        }
        ///Sample Field 11
        enum class Sample11Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,Sample11Val> sample11{}; 
        namespace Sample11ValC{
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample11)::Type,Sample11Val::v1111> v1111{};
        }
    }
    namespace AdcClist4{    ///<ADC Channel List Register 4
        using Addr = Register::Address<0x4005c00e,0xffff0000,0,unsigned>;
        ///Sample Field 12
        enum class Sample12Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,Sample12Val> sample12{}; 
        namespace Sample12ValC{
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample12)::Type,Sample12Val::v1111> v1111{};
        }
        ///Sample Field 13
        enum class Sample13Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,Sample13Val> sample13{}; 
        namespace Sample13ValC{
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample13)::Type,Sample13Val::v1111> v1111{};
        }
        ///Sample Field 14
        enum class Sample14Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,Sample14Val> sample14{}; 
        namespace Sample14ValC{
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample14)::Type,Sample14Val::v1111> v1111{};
        }
        ///Sample Field 15
        enum class Sample15Val {
            v0000=0x00000000,     ///<Single Ended: ANA0, Differential: ANA0+, ANA1-
            v0001=0x00000001,     ///<Single Ended: ANA1, Differential: ANA0+, ANA1-
            v0010=0x00000002,     ///<Single Ended: ANA2, Differential: ANA2+, ANA3-
            v0011=0x00000003,     ///<Single Ended: ANA3, Differential: ANA2+, ANA3-
            v0100=0x00000004,     ///<Single Ended: ANA4, Differential: ANA4+, ANA5-
            v0101=0x00000005,     ///<Single Ended: ANA5, Differential: ANA4+, ANA5-
            v0110=0x00000006,     ///<Single Ended: ANA6, Differential: ANA6+, ANA7-
            v0111=0x00000007,     ///<Single Ended: ANA7, Differential: ANA6+, ANA7-
            v1000=0x00000008,     ///<Single Ended: ANB0, Differential: ANB0+, ANB1-
            v1001=0x00000009,     ///<Single Ended: ANB1, Differential: ANB0+, ANB1-
            v1010=0x0000000a,     ///<Single Ended: ANB2, Differential: ANB2+, ANB3-
            v1011=0x0000000b,     ///<Single Ended: ANB3, Differential: ANB2+, ANB3-
            v1100=0x0000000c,     ///<Single Ended: ANB4, Differential: ANB4+, ANB5-
            v1101=0x0000000d,     ///<Single Ended: ANB5, Differential: ANB4+, ANB5-
            v1110=0x0000000e,     ///<Single Ended: ANB6, Differential: ANB6+, ANB7-
            v1111=0x0000000f,     ///<Single Ended: ANB7, Differential: ANB6+, ANB7-
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,Sample15Val> sample15{}; 
        namespace Sample15ValC{
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v0000> v0000{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v0001> v0001{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v0010> v0010{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v0011> v0011{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v0100> v0100{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v0101> v0101{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v0110> v0110{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v0111> v0111{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v1001> v1001{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v1010> v1010{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v1011> v1011{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v1100> v1100{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v1101> v1101{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v1110> v1110{};
            constexpr Register::FieldValue<decltype(sample15)::Type,Sample15Val::v1111> v1111{};
        }
    }
    namespace AdcSdis{    ///<ADC Sample Disable Register
        using Addr = Register::Address<0x4005c010,0xffff0000,0,unsigned>;
        ///Disable Sample Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ds{}; 
    }
    namespace AdcStat{    ///<ADC Status Register
        using Addr = Register::Address<0x4005c012,0xffff2000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> undefined{}; 
        ///High Limit Interrupt
        enum class HlmtiVal {
            v0=0x00000000,     ///<No high limit interrupt request
            v1=0x00000001,     ///<High limit exceeded, IRQ pending if CTRL1[HLMTIE] is set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,HlmtiVal> hlmti{}; 
        namespace HlmtiValC{
            constexpr Register::FieldValue<decltype(hlmti)::Type,HlmtiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hlmti)::Type,HlmtiVal::v1> v1{};
        }
        ///Low Limit Interrupt
        enum class LlmtiVal {
            v0=0x00000000,     ///<No low limit interrupt request
            v1=0x00000001,     ///<Low limit exceeded, IRQ pending if CTRL1[LLMTIE] is set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,LlmtiVal> llmti{}; 
        namespace LlmtiValC{
            constexpr Register::FieldValue<decltype(llmti)::Type,LlmtiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(llmti)::Type,LlmtiVal::v1> v1{};
        }
        ///Zero Crossing Interrupt
        enum class ZciVal {
            v0=0x00000000,     ///<No zero crossing interrupt request
            v1=0x00000001,     ///<Zero crossing encountered, IRQ pending if CTRL1[ZCIE] is set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ZciVal> zci{}; 
        namespace ZciValC{
            constexpr Register::FieldValue<decltype(zci)::Type,ZciVal::v0> v0{};
            constexpr Register::FieldValue<decltype(zci)::Type,ZciVal::v1> v1{};
        }
        ///End of Scan Interrupt
        enum class Eosi0Val {
            v0=0x00000000,     ///<A scan cycle has not been completed, no end of scan IRQ pending
            v1=0x00000001,     ///<A scan cycle has been completed, end of scan IRQ pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Eosi0Val> eosi0{}; 
        namespace Eosi0ValC{
            constexpr Register::FieldValue<decltype(eosi0)::Type,Eosi0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eosi0)::Type,Eosi0Val::v1> v1{};
        }
        ///End of Scan Interrupt
        enum class Eosi1Val {
            v0=0x00000000,     ///<A scan cycle has not been completed, no end of scan IRQ pending
            v1=0x00000001,     ///<A scan cycle has been completed, end of scan IRQ pending
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Eosi1Val> eosi1{}; 
        namespace Eosi1ValC{
            constexpr Register::FieldValue<decltype(eosi1)::Type,Eosi1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(eosi1)::Type,Eosi1Val::v1> v1{};
        }
        ///Conversion in Progress
        enum class Cip1Val {
            v0=0x00000000,     ///<Idle state
            v1=0x00000001,     ///<A scan cycle is in progress. The ADC will ignore all sync pulses or start commands
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Cip1Val> cip1{}; 
        namespace Cip1ValC{
            constexpr Register::FieldValue<decltype(cip1)::Type,Cip1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(cip1)::Type,Cip1Val::v1> v1{};
        }
        ///Conversion in Progress
        enum class Cip0Val {
            v0=0x00000000,     ///<Idle state
            v1=0x00000001,     ///<A scan cycle is in progress. The ADC will ignore all sync pulses or start commands
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Cip0Val> cip0{}; 
        namespace Cip0ValC{
            constexpr Register::FieldValue<decltype(cip0)::Type,Cip0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(cip0)::Type,Cip0Val::v1> v1{};
        }
    }
    namespace AdcRdy{    ///<ADC Ready Register
        using Addr = Register::Address<0x4005c014,0xffff0000,0,unsigned>;
        ///Ready Sample
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rdy{}; 
    }
    namespace AdcLolimstat{    ///<ADC Low Limit Status Register
        using Addr = Register::Address<0x4005c016,0xffff0000,0,unsigned>;
        ///Low Limit Status Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lls{}; 
    }
    namespace AdcHilimstat{    ///<ADC High Limit Status Register
        using Addr = Register::Address<0x4005c018,0xffff0000,0,unsigned>;
        ///High Limit Status Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hls{}; 
    }
    namespace AdcZxstat{    ///<ADC Zero Crossing Status Register
        using Addr = Register::Address<0x4005c01a,0xffff0000,0,unsigned>;
        ///Zero Crossing Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> zcs{}; 
    }
    namespace AdcRslt0{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c01c,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt1{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c01e,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt2{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c020,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt3{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c022,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt4{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c024,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt5{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c026,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt6{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c028,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt7{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c02a,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt8{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c02c,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt9{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c02e,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt10{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c030,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt11{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c032,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt12{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c034,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt13{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c036,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt14{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c038,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt15{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c03a,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcLolim0{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c03c,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim1{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c03e,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim2{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c040,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim3{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c042,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim4{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c044,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim5{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c046,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim6{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c048,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim7{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c04a,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim8{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c04c,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim9{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c04e,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim10{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c050,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim11{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c052,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim12{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c054,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim13{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c056,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim14{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c058,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim15{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c05a,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcHilim0{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c05c,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim1{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c05e,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim2{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c060,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim3{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c062,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim4{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c064,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim5{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c066,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim6{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c068,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim7{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c06a,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim8{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c06c,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim9{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c06e,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim10{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c070,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim11{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c072,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim12{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c074,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim13{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c076,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim14{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c078,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim15{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c07a,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcOffst0{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c07c,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst1{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c07e,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst2{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c080,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst3{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c082,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst4{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c084,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst5{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c086,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst6{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c088,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst7{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c08a,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst8{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c08c,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst9{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c08e,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst10{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c090,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst11{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c092,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst12{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c094,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst13{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c096,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst14{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c098,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst15{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c09a,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcPwr{    ///<ADC Power Control Register
        using Addr = Register::Address<0x4005c09c,0xffff7004,0,unsigned>;
        ///Manual Power Down for Converter A
        enum class Pd0Val {
            v0=0x00000000,     ///<Power Up ADC converter A
            v1=0x00000001,     ///<Power Down ADC converter A
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Pd0Val> pd0{}; 
        namespace Pd0ValC{
            constexpr Register::FieldValue<decltype(pd0)::Type,Pd0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pd0)::Type,Pd0Val::v1> v1{};
        }
        ///Manual Power Down for Converter B
        enum class Pd1Val {
            v0=0x00000000,     ///<Power Up ADC converter B
            v1=0x00000001,     ///<Power Down ADC converter B
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Pd1Val> pd1{}; 
        namespace Pd1ValC{
            constexpr Register::FieldValue<decltype(pd1)::Type,Pd1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pd1)::Type,Pd1Val::v1> v1{};
        }
        ///Auto Powerdown
        enum class ApdVal {
            v0=0x00000000,     ///<Auto Powerdown Mode is not active
            v1=0x00000001,     ///<Auto Powerdown Mode is active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ApdVal> apd{}; 
        namespace ApdValC{
            constexpr Register::FieldValue<decltype(apd)::Type,ApdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(apd)::Type,ApdVal::v1> v1{};
        }
        ///Power Up Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,4),Register::ReadWriteAccess,unsigned> pudelay{}; 
        ///ADC Converter A Power Status
        enum class Psts0Val {
            v0=0x00000000,     ///<ADC Converter A is currently powered up
            v1=0x00000001,     ///<ADC Converter A is currently powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Psts0Val> psts0{}; 
        namespace Psts0ValC{
            constexpr Register::FieldValue<decltype(psts0)::Type,Psts0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(psts0)::Type,Psts0Val::v1> v1{};
        }
        ///ADC Converter B Power Status
        enum class Psts1Val {
            v0=0x00000000,     ///<ADC Converter B is currently powered up
            v1=0x00000001,     ///<ADC Converter B is currently powered down
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Psts1Val> psts1{}; 
        namespace Psts1ValC{
            constexpr Register::FieldValue<decltype(psts1)::Type,Psts1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(psts1)::Type,Psts1Val::v1> v1{};
        }
        ///Auto Standby
        enum class AsbVal {
            v0=0x00000000,     ///<Auto standby mode disabled
            v1=0x00000001,     ///<Auto standby mode enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AsbVal> asb{}; 
        namespace AsbValC{
            constexpr Register::FieldValue<decltype(asb)::Type,AsbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(asb)::Type,AsbVal::v1> v1{};
        }
    }
    namespace AdcCal{    ///<ADC Calibration Register
        using Addr = Register::Address<0x4005c09e,0xffff0fff,0,unsigned>;
        ///Select V REFLO Source
        enum class SelvrefloaVal {
            v0=0x00000000,     ///<VREFL pad
            v1=0x00000001,     ///<ANA3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,SelvrefloaVal> selVrefloA{}; 
        namespace SelvrefloaValC{
            constexpr Register::FieldValue<decltype(selVrefloA)::Type,SelvrefloaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(selVrefloA)::Type,SelvrefloaVal::v1> v1{};
        }
        ///Select V REFH Source
        enum class SelvrefhaVal {
            v0=0x00000000,     ///<VREFH pad
            v1=0x00000001,     ///<ANA2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,SelvrefhaVal> selVrefhA{}; 
        namespace SelvrefhaValC{
            constexpr Register::FieldValue<decltype(selVrefhA)::Type,SelvrefhaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(selVrefhA)::Type,SelvrefhaVal::v1> v1{};
        }
        ///Select V REFLO Source
        enum class SelvreflobVal {
            v0=0x00000000,     ///<VREFL pad
            v1=0x00000001,     ///<ANB3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,SelvreflobVal> selVrefloB{}; 
        namespace SelvreflobValC{
            constexpr Register::FieldValue<decltype(selVrefloB)::Type,SelvreflobVal::v0> v0{};
            constexpr Register::FieldValue<decltype(selVrefloB)::Type,SelvreflobVal::v1> v1{};
        }
        ///Select V REFH Source
        enum class SelvrefhbVal {
            v0=0x00000000,     ///<VREFH pad
            v1=0x00000001,     ///<ANB2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,SelvrefhbVal> selVrefhB{}; 
        namespace SelvrefhbValC{
            constexpr Register::FieldValue<decltype(selVrefhB)::Type,SelvrefhbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(selVrefhB)::Type,SelvrefhbVal::v1> v1{};
        }
    }
    namespace AdcGc1{    ///<Gain Control 1 Register
        using Addr = Register::Address<0x4005c0a0,0xffff0000,0,unsigned>;
        ///Gain Control Bit 0
        enum class Gain0Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Gain0Val> gain0{}; 
        namespace Gain0ValC{
            constexpr Register::FieldValue<decltype(gain0)::Type,Gain0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain0)::Type,Gain0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain0)::Type,Gain0Val::v10> v10{};
        }
        ///Gain Control Bit 1
        enum class Gain1Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Gain1Val> gain1{}; 
        namespace Gain1ValC{
            constexpr Register::FieldValue<decltype(gain1)::Type,Gain1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain1)::Type,Gain1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain1)::Type,Gain1Val::v10> v10{};
        }
        ///Gain Control Bit 2
        enum class Gain2Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Gain2Val> gain2{}; 
        namespace Gain2ValC{
            constexpr Register::FieldValue<decltype(gain2)::Type,Gain2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain2)::Type,Gain2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain2)::Type,Gain2Val::v10> v10{};
        }
        ///Gain Control Bit 3
        enum class Gain3Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Gain3Val> gain3{}; 
        namespace Gain3ValC{
            constexpr Register::FieldValue<decltype(gain3)::Type,Gain3Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain3)::Type,Gain3Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain3)::Type,Gain3Val::v10> v10{};
        }
        ///Gain Control Bit 4
        enum class Gain4Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Gain4Val> gain4{}; 
        namespace Gain4ValC{
            constexpr Register::FieldValue<decltype(gain4)::Type,Gain4Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain4)::Type,Gain4Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain4)::Type,Gain4Val::v10> v10{};
        }
        ///Gain Control Bit 5
        enum class Gain5Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Gain5Val> gain5{}; 
        namespace Gain5ValC{
            constexpr Register::FieldValue<decltype(gain5)::Type,Gain5Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain5)::Type,Gain5Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain5)::Type,Gain5Val::v10> v10{};
        }
        ///Gain Control Bit 6
        enum class Gain6Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Gain6Val> gain6{}; 
        namespace Gain6ValC{
            constexpr Register::FieldValue<decltype(gain6)::Type,Gain6Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain6)::Type,Gain6Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain6)::Type,Gain6Val::v10> v10{};
        }
        ///Gain Control Bit 7
        enum class Gain7Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Gain7Val> gain7{}; 
        namespace Gain7ValC{
            constexpr Register::FieldValue<decltype(gain7)::Type,Gain7Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain7)::Type,Gain7Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain7)::Type,Gain7Val::v10> v10{};
        }
    }
    namespace AdcGc2{    ///<Gain Control 2 Register
        using Addr = Register::Address<0x4005c0a2,0xffff0000,0,unsigned>;
        ///Gain Control Bit 8
        enum class Gain8Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Gain8Val> gain8{}; 
        namespace Gain8ValC{
            constexpr Register::FieldValue<decltype(gain8)::Type,Gain8Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain8)::Type,Gain8Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain8)::Type,Gain8Val::v10> v10{};
        }
        ///Gain Control Bit 9
        enum class Gain9Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Gain9Val> gain9{}; 
        namespace Gain9ValC{
            constexpr Register::FieldValue<decltype(gain9)::Type,Gain9Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain9)::Type,Gain9Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain9)::Type,Gain9Val::v10> v10{};
        }
        ///Gain Control Bit 10
        enum class Gain10Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Gain10Val> gain10{}; 
        namespace Gain10ValC{
            constexpr Register::FieldValue<decltype(gain10)::Type,Gain10Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain10)::Type,Gain10Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain10)::Type,Gain10Val::v10> v10{};
        }
        ///Gain Control Bit 11
        enum class Gain11Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Gain11Val> gain11{}; 
        namespace Gain11ValC{
            constexpr Register::FieldValue<decltype(gain11)::Type,Gain11Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain11)::Type,Gain11Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain11)::Type,Gain11Val::v10> v10{};
        }
        ///Gain Control Bit 12
        enum class Gain12Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Gain12Val> gain12{}; 
        namespace Gain12ValC{
            constexpr Register::FieldValue<decltype(gain12)::Type,Gain12Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain12)::Type,Gain12Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain12)::Type,Gain12Val::v10> v10{};
        }
        ///Gain Control Bit 13
        enum class Gain13Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Gain13Val> gain13{}; 
        namespace Gain13ValC{
            constexpr Register::FieldValue<decltype(gain13)::Type,Gain13Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain13)::Type,Gain13Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain13)::Type,Gain13Val::v10> v10{};
        }
        ///Gain Control Bit 14
        enum class Gain14Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Gain14Val> gain14{}; 
        namespace Gain14ValC{
            constexpr Register::FieldValue<decltype(gain14)::Type,Gain14Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain14)::Type,Gain14Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain14)::Type,Gain14Val::v10> v10{};
        }
        ///Gain Control Bit 15
        enum class Gain15Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,Gain15Val> gain15{}; 
        namespace Gain15ValC{
            constexpr Register::FieldValue<decltype(gain15)::Type,Gain15Val::v00> v00{};
            constexpr Register::FieldValue<decltype(gain15)::Type,Gain15Val::v01> v01{};
            constexpr Register::FieldValue<decltype(gain15)::Type,Gain15Val::v10> v10{};
        }
    }
    namespace AdcSctrl{    ///<ADC Scan Control Register
        using Addr = Register::Address<0x4005c0a4,0xffff0000,0,unsigned>;
        ///Scan Control Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> sc{}; 
    }
    namespace AdcPwr2{    ///<ADC Power Control Register
        using Addr = Register::Address<0x4005c0a6,0xffffc0f0,0,unsigned>;
        ///ADCA Speed Control Bits
        enum class SpeedaVal {
            v00=0x00000000,     ///<Conversion clock frequency <= 6.25 MHz; current consumption per converter = 6 mA
            v01=0x00000001,     ///<Conversion clock frequency <= 12.5 MHz; current consumption per converter = 10.8 mA
            v10=0x00000002,     ///<Conversion clock frequency <= 18.75 MHz; current consumption per converter = 18 mA
            v11=0x00000003,     ///<Conversion clock frequency <= 25 MHz; current consumption per converter = 25.2 mA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SpeedaVal> speeda{}; 
        namespace SpeedaValC{
            constexpr Register::FieldValue<decltype(speeda)::Type,SpeedaVal::v00> v00{};
            constexpr Register::FieldValue<decltype(speeda)::Type,SpeedaVal::v01> v01{};
            constexpr Register::FieldValue<decltype(speeda)::Type,SpeedaVal::v10> v10{};
            constexpr Register::FieldValue<decltype(speeda)::Type,SpeedaVal::v11> v11{};
        }
        ///ADCB Speed Control Bits
        enum class SpeedbVal {
            v00=0x00000000,     ///<Conversion clock frequency <= 6.25 MHz; current consumption per converter = 6 mA
            v01=0x00000001,     ///<Conversion clock frequency <= 12.5 MHz; current consumption per converter = 10.8 mA
            v10=0x00000002,     ///<Conversion clock frequency <= 18.75 MHz; current consumption per converter = 18 mA
            v11=0x00000003,     ///<Conversion clock frequency <= 25 MHz; current consumption per converter = 25.2 mA
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,SpeedbVal> speedb{}; 
        namespace SpeedbValC{
            constexpr Register::FieldValue<decltype(speedb)::Type,SpeedbVal::v00> v00{};
            constexpr Register::FieldValue<decltype(speedb)::Type,SpeedbVal::v01> v01{};
            constexpr Register::FieldValue<decltype(speedb)::Type,SpeedbVal::v10> v10{};
            constexpr Register::FieldValue<decltype(speedb)::Type,SpeedbVal::v11> v11{};
        }
        ///Clock Divisor Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> div1{}; 
    }
    namespace AdcCtrl3{    ///<ADC Control Register 3
        using Addr = Register::Address<0x4005c0a8,0xffffff80,0,unsigned>;
        ///Sample Window Count 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> scnt0{}; 
        ///Sample Window Count 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> scnt1{}; 
        ///DMA Trigger Source
        enum class DmasrcVal {
            v0=0x00000000,     ///<DMA trigger source is end of scan interrupt
            v1=0x00000001,     ///<DMA trigger source is RDY bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DmasrcVal> dmasrc{}; 
        namespace DmasrcValC{
            constexpr Register::FieldValue<decltype(dmasrc)::Type,DmasrcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmasrc)::Type,DmasrcVal::v1> v1{};
        }
    }
    namespace AdcSchlten{    ///<ADC Scan Interrupt Enable Register
        using Addr = Register::Address<0x4005c0aa,0xffff0000,0,unsigned>;
        ///Scan Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> schlten{}; 
    }
}
