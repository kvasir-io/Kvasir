#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog to digital converter
    namespace AdcCtrl1{    ///<ADC Control Register 1
        using Addr = Register::Address<0x4005c000,0xffff0008,0,unsigned>;
        ///ADC Scan Mode Control
        enum class smodeVal {
            v000=0x00000000,     ///<Once (single) sequential
            v001=0x00000001,     ///<Once parallel
            v010=0x00000002,     ///<Loop sequential
            v011=0x00000003,     ///<Loop parallel
            v100=0x00000004,     ///<Triggered sequential
            v101=0x00000005,     ///<Triggered parallel (default)
        };
        namespace smodeValC{
            constexpr MPL::Value<smodeVal,smodeVal::v000> v000{};
            constexpr MPL::Value<smodeVal,smodeVal::v001> v001{};
            constexpr MPL::Value<smodeVal,smodeVal::v010> v010{};
            constexpr MPL::Value<smodeVal,smodeVal::v011> v011{};
            constexpr MPL::Value<smodeVal,smodeVal::v100> v100{};
            constexpr MPL::Value<smodeVal,smodeVal::v101> v101{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,smodeVal> smode{}; 
        ///CHCNF (Channel Configure Low) bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> chncfgL{}; 
        ///High Limit Interrupt Enable
        enum class hlmtieVal {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        namespace hlmtieValC{
            constexpr MPL::Value<hlmtieVal,hlmtieVal::v0> v0{};
            constexpr MPL::Value<hlmtieVal,hlmtieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,hlmtieVal> hlmtie{}; 
        ///Low Limit Interrupt Enable
        enum class llmtieVal {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        namespace llmtieValC{
            constexpr MPL::Value<llmtieVal,llmtieVal::v0> v0{};
            constexpr MPL::Value<llmtieVal,llmtieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,llmtieVal> llmtie{}; 
        ///Zero Crossing Interrupt Enable
        enum class zcieVal {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        namespace zcieValC{
            constexpr MPL::Value<zcieVal,zcieVal::v0> v0{};
            constexpr MPL::Value<zcieVal,zcieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,zcieVal> zcie{}; 
        ///End Of Scan Interrupt Enable
        enum class eosie0Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        namespace eosie0ValC{
            constexpr MPL::Value<eosie0Val,eosie0Val::v0> v0{};
            constexpr MPL::Value<eosie0Val,eosie0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,eosie0Val> eosie0{}; 
        ///SYNC0 Enable
        enum class sync0Val {
            v0=0x00000000,     ///<Scan is initiated by a write to CTRL1[START0] only
            v1=0x00000001,     ///<Use a SYNC0 input pulse or CTRL1[START0] to initiate a scan
        };
        namespace sync0ValC{
            constexpr MPL::Value<sync0Val,sync0Val::v0> v0{};
            constexpr MPL::Value<sync0Val,sync0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,sync0Val> sync0{}; 
        ///START0 Conversion
        enum class start0Val {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<Start command is issued
        };
        namespace start0ValC{
            constexpr MPL::Value<start0Val,start0Val::v0> v0{};
            constexpr MPL::Value<start0Val,start0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,start0Val> start0{}; 
        ///Stop
        enum class stop0Val {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Stop mode
        };
        namespace stop0ValC{
            constexpr MPL::Value<stop0Val,stop0Val::v0> v0{};
            constexpr MPL::Value<stop0Val,stop0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,stop0Val> stop0{}; 
        ///DMA enable
        enum class dmaen0Val {
            v0=0x00000000,     ///<DMA is not enabled.
            v1=0x00000001,     ///<DMA is enabled.
        };
        namespace dmaen0ValC{
            constexpr MPL::Value<dmaen0Val,dmaen0Val::v0> v0{};
            constexpr MPL::Value<dmaen0Val,dmaen0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dmaen0Val> dmaen0{}; 
    }
    namespace AdcCtrl2{    ///<ADC Control Register 2
        using Addr = Register::Address<0x4005c002,0xffff0000,0,unsigned>;
        ///Clock Divisor Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> div0{}; 
        ///Simultaneous mode
        enum class simultVal {
            v0=0x00000000,     ///<Parallel scans done independently
            v1=0x00000001,     ///<Parallel scans done simultaneously (default)
        };
        namespace simultValC{
            constexpr MPL::Value<simultVal,simultVal::v0> v0{};
            constexpr MPL::Value<simultVal,simultVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,simultVal> simult{}; 
        ///CHCNF (Channel Configure High) bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,7),Register::ReadWriteAccess,unsigned> chncfgH{}; 
        ///End Of Scan Interrupt Enable
        enum class eosie1Val {
            v0=0x00000000,     ///<Interrupt disabled
            v1=0x00000001,     ///<Interrupt enabled
        };
        namespace eosie1ValC{
            constexpr MPL::Value<eosie1Val,eosie1Val::v0> v0{};
            constexpr MPL::Value<eosie1Val,eosie1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,eosie1Val> eosie1{}; 
        ///SYNC1 Enable
        enum class sync1Val {
            v0=0x00000000,     ///<B converter parallel scan is initiated by a write to CTRL2[START1] bit only
            v1=0x00000001,     ///<Use a SYNC1 input pulse or CTRL2[START1] bit to initiate a B converter parallel scan
        };
        namespace sync1ValC{
            constexpr MPL::Value<sync1Val,sync1Val::v0> v0{};
            constexpr MPL::Value<sync1Val,sync1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,sync1Val> sync1{}; 
        ///START1 Conversion
        enum class start1Val {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<Start command is issued
        };
        namespace start1ValC{
            constexpr MPL::Value<start1Val,start1Val::v0> v0{};
            constexpr MPL::Value<start1Val,start1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,start1Val> start1{}; 
        ///Stop
        enum class stop1Val {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Stop mode
        };
        namespace stop1ValC{
            constexpr MPL::Value<stop1Val,stop1Val::v0> v0{};
            constexpr MPL::Value<stop1Val,stop1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,stop1Val> stop1{}; 
        ///DMA enable
        enum class dmaen1Val {
            v0=0x00000000,     ///<DMA is not enabled.
            v1=0x00000001,     ///<DMA is enabled.
        };
        namespace dmaen1ValC{
            constexpr MPL::Value<dmaen1Val,dmaen1Val::v0> v0{};
            constexpr MPL::Value<dmaen1Val,dmaen1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,dmaen1Val> dmaen1{}; 
    }
    namespace AdcZxctrl1{    ///<ADC Zero Crossing Control 1 Register
        using Addr = Register::Address<0x4005c004,0xffff0000,0,unsigned>;
        ///Zero crossing enable 0
        enum class zce0Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce0ValC{
            constexpr MPL::Value<zce0Val,zce0Val::v00> v00{};
            constexpr MPL::Value<zce0Val,zce0Val::v01> v01{};
            constexpr MPL::Value<zce0Val,zce0Val::v10> v10{};
            constexpr MPL::Value<zce0Val,zce0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,zce0Val> zce0{}; 
        ///Zero crossing enable 1
        enum class zce1Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce1ValC{
            constexpr MPL::Value<zce1Val,zce1Val::v00> v00{};
            constexpr MPL::Value<zce1Val,zce1Val::v01> v01{};
            constexpr MPL::Value<zce1Val,zce1Val::v10> v10{};
            constexpr MPL::Value<zce1Val,zce1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,zce1Val> zce1{}; 
        ///Zero crossing enable 2
        enum class zce2Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce2ValC{
            constexpr MPL::Value<zce2Val,zce2Val::v00> v00{};
            constexpr MPL::Value<zce2Val,zce2Val::v01> v01{};
            constexpr MPL::Value<zce2Val,zce2Val::v10> v10{};
            constexpr MPL::Value<zce2Val,zce2Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,zce2Val> zce2{}; 
        ///Zero crossing enable 3
        enum class zce3Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce3ValC{
            constexpr MPL::Value<zce3Val,zce3Val::v00> v00{};
            constexpr MPL::Value<zce3Val,zce3Val::v01> v01{};
            constexpr MPL::Value<zce3Val,zce3Val::v10> v10{};
            constexpr MPL::Value<zce3Val,zce3Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,zce3Val> zce3{}; 
        ///Zero crossing enable 4
        enum class zce4Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce4ValC{
            constexpr MPL::Value<zce4Val,zce4Val::v00> v00{};
            constexpr MPL::Value<zce4Val,zce4Val::v01> v01{};
            constexpr MPL::Value<zce4Val,zce4Val::v10> v10{};
            constexpr MPL::Value<zce4Val,zce4Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,zce4Val> zce4{}; 
        ///Zero crossing enable 5
        enum class zce5Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce5ValC{
            constexpr MPL::Value<zce5Val,zce5Val::v00> v00{};
            constexpr MPL::Value<zce5Val,zce5Val::v01> v01{};
            constexpr MPL::Value<zce5Val,zce5Val::v10> v10{};
            constexpr MPL::Value<zce5Val,zce5Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,zce5Val> zce5{}; 
        ///Zero crossing enable 6
        enum class zce6Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce6ValC{
            constexpr MPL::Value<zce6Val,zce6Val::v00> v00{};
            constexpr MPL::Value<zce6Val,zce6Val::v01> v01{};
            constexpr MPL::Value<zce6Val,zce6Val::v10> v10{};
            constexpr MPL::Value<zce6Val,zce6Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,zce6Val> zce6{}; 
        ///Zero crossing enable 7
        enum class zce7Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce7ValC{
            constexpr MPL::Value<zce7Val,zce7Val::v00> v00{};
            constexpr MPL::Value<zce7Val,zce7Val::v01> v01{};
            constexpr MPL::Value<zce7Val,zce7Val::v10> v10{};
            constexpr MPL::Value<zce7Val,zce7Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,zce7Val> zce7{}; 
    }
    namespace AdcZxctrl2{    ///<ADC Zero Crossing Control 2 Register
        using Addr = Register::Address<0x4005c006,0xffff0000,0,unsigned>;
        ///Zero crossing enable 8
        enum class zce8Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce8ValC{
            constexpr MPL::Value<zce8Val,zce8Val::v00> v00{};
            constexpr MPL::Value<zce8Val,zce8Val::v01> v01{};
            constexpr MPL::Value<zce8Val,zce8Val::v10> v10{};
            constexpr MPL::Value<zce8Val,zce8Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,zce8Val> zce8{}; 
        ///Zero crossing enable 9
        enum class zce9Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce9ValC{
            constexpr MPL::Value<zce9Val,zce9Val::v00> v00{};
            constexpr MPL::Value<zce9Val,zce9Val::v01> v01{};
            constexpr MPL::Value<zce9Val,zce9Val::v10> v10{};
            constexpr MPL::Value<zce9Val,zce9Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,zce9Val> zce9{}; 
        ///Zero crossing enable 10
        enum class zce10Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce10ValC{
            constexpr MPL::Value<zce10Val,zce10Val::v00> v00{};
            constexpr MPL::Value<zce10Val,zce10Val::v01> v01{};
            constexpr MPL::Value<zce10Val,zce10Val::v10> v10{};
            constexpr MPL::Value<zce10Val,zce10Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,zce10Val> zce10{}; 
        ///Zero crossing enable 11
        enum class zce11Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce11ValC{
            constexpr MPL::Value<zce11Val,zce11Val::v00> v00{};
            constexpr MPL::Value<zce11Val,zce11Val::v01> v01{};
            constexpr MPL::Value<zce11Val,zce11Val::v10> v10{};
            constexpr MPL::Value<zce11Val,zce11Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,zce11Val> zce11{}; 
        ///Zero crossing enable 12
        enum class zce12Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce12ValC{
            constexpr MPL::Value<zce12Val,zce12Val::v00> v00{};
            constexpr MPL::Value<zce12Val,zce12Val::v01> v01{};
            constexpr MPL::Value<zce12Val,zce12Val::v10> v10{};
            constexpr MPL::Value<zce12Val,zce12Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,zce12Val> zce12{}; 
        ///Zero crossing enable 13
        enum class zce13Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce13ValC{
            constexpr MPL::Value<zce13Val,zce13Val::v00> v00{};
            constexpr MPL::Value<zce13Val,zce13Val::v01> v01{};
            constexpr MPL::Value<zce13Val,zce13Val::v10> v10{};
            constexpr MPL::Value<zce13Val,zce13Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,zce13Val> zce13{}; 
        ///Zero crossing enable 14
        enum class zce14Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce14ValC{
            constexpr MPL::Value<zce14Val,zce14Val::v00> v00{};
            constexpr MPL::Value<zce14Val,zce14Val::v01> v01{};
            constexpr MPL::Value<zce14Val,zce14Val::v10> v10{};
            constexpr MPL::Value<zce14Val,zce14Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,zce14Val> zce14{}; 
        ///Zero crossing enable 15
        enum class zce15Val {
            v00=0x00000000,     ///<Zero Crossing disabled
            v01=0x00000001,     ///<Zero Crossing enabled for positive to negative sign change
            v10=0x00000002,     ///<Zero Crossing enabled for negative to positive sign change
            v11=0x00000003,     ///<Zero Crossing enabled for any sign change
        };
        namespace zce15ValC{
            constexpr MPL::Value<zce15Val,zce15Val::v00> v00{};
            constexpr MPL::Value<zce15Val,zce15Val::v01> v01{};
            constexpr MPL::Value<zce15Val,zce15Val::v10> v10{};
            constexpr MPL::Value<zce15Val,zce15Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,zce15Val> zce15{}; 
    }
    namespace AdcClist1{    ///<ADC Channel List Register 1
        using Addr = Register::Address<0x4005c008,0xffff0000,0,unsigned>;
        ///Sample Field 0
        enum class sample0Val {
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
        namespace sample0ValC{
            constexpr MPL::Value<sample0Val,sample0Val::v0000> v0000{};
            constexpr MPL::Value<sample0Val,sample0Val::v0001> v0001{};
            constexpr MPL::Value<sample0Val,sample0Val::v0010> v0010{};
            constexpr MPL::Value<sample0Val,sample0Val::v0011> v0011{};
            constexpr MPL::Value<sample0Val,sample0Val::v0100> v0100{};
            constexpr MPL::Value<sample0Val,sample0Val::v0101> v0101{};
            constexpr MPL::Value<sample0Val,sample0Val::v0110> v0110{};
            constexpr MPL::Value<sample0Val,sample0Val::v0111> v0111{};
            constexpr MPL::Value<sample0Val,sample0Val::v1000> v1000{};
            constexpr MPL::Value<sample0Val,sample0Val::v1001> v1001{};
            constexpr MPL::Value<sample0Val,sample0Val::v1010> v1010{};
            constexpr MPL::Value<sample0Val,sample0Val::v1011> v1011{};
            constexpr MPL::Value<sample0Val,sample0Val::v1100> v1100{};
            constexpr MPL::Value<sample0Val,sample0Val::v1101> v1101{};
            constexpr MPL::Value<sample0Val,sample0Val::v1110> v1110{};
            constexpr MPL::Value<sample0Val,sample0Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,sample0Val> sample0{}; 
        ///Sample Field 1
        enum class sample1Val {
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
        namespace sample1ValC{
            constexpr MPL::Value<sample1Val,sample1Val::v0000> v0000{};
            constexpr MPL::Value<sample1Val,sample1Val::v0001> v0001{};
            constexpr MPL::Value<sample1Val,sample1Val::v0010> v0010{};
            constexpr MPL::Value<sample1Val,sample1Val::v0011> v0011{};
            constexpr MPL::Value<sample1Val,sample1Val::v0100> v0100{};
            constexpr MPL::Value<sample1Val,sample1Val::v0101> v0101{};
            constexpr MPL::Value<sample1Val,sample1Val::v0110> v0110{};
            constexpr MPL::Value<sample1Val,sample1Val::v0111> v0111{};
            constexpr MPL::Value<sample1Val,sample1Val::v1000> v1000{};
            constexpr MPL::Value<sample1Val,sample1Val::v1001> v1001{};
            constexpr MPL::Value<sample1Val,sample1Val::v1010> v1010{};
            constexpr MPL::Value<sample1Val,sample1Val::v1011> v1011{};
            constexpr MPL::Value<sample1Val,sample1Val::v1100> v1100{};
            constexpr MPL::Value<sample1Val,sample1Val::v1101> v1101{};
            constexpr MPL::Value<sample1Val,sample1Val::v1110> v1110{};
            constexpr MPL::Value<sample1Val,sample1Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,sample1Val> sample1{}; 
        ///Sample Field 2
        enum class sample2Val {
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
        namespace sample2ValC{
            constexpr MPL::Value<sample2Val,sample2Val::v0000> v0000{};
            constexpr MPL::Value<sample2Val,sample2Val::v0001> v0001{};
            constexpr MPL::Value<sample2Val,sample2Val::v0010> v0010{};
            constexpr MPL::Value<sample2Val,sample2Val::v0011> v0011{};
            constexpr MPL::Value<sample2Val,sample2Val::v0100> v0100{};
            constexpr MPL::Value<sample2Val,sample2Val::v0101> v0101{};
            constexpr MPL::Value<sample2Val,sample2Val::v0110> v0110{};
            constexpr MPL::Value<sample2Val,sample2Val::v0111> v0111{};
            constexpr MPL::Value<sample2Val,sample2Val::v1000> v1000{};
            constexpr MPL::Value<sample2Val,sample2Val::v1001> v1001{};
            constexpr MPL::Value<sample2Val,sample2Val::v1010> v1010{};
            constexpr MPL::Value<sample2Val,sample2Val::v1011> v1011{};
            constexpr MPL::Value<sample2Val,sample2Val::v1100> v1100{};
            constexpr MPL::Value<sample2Val,sample2Val::v1101> v1101{};
            constexpr MPL::Value<sample2Val,sample2Val::v1110> v1110{};
            constexpr MPL::Value<sample2Val,sample2Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,sample2Val> sample2{}; 
        ///Sample Field 3
        enum class sample3Val {
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
        namespace sample3ValC{
            constexpr MPL::Value<sample3Val,sample3Val::v0000> v0000{};
            constexpr MPL::Value<sample3Val,sample3Val::v0001> v0001{};
            constexpr MPL::Value<sample3Val,sample3Val::v0010> v0010{};
            constexpr MPL::Value<sample3Val,sample3Val::v0011> v0011{};
            constexpr MPL::Value<sample3Val,sample3Val::v0100> v0100{};
            constexpr MPL::Value<sample3Val,sample3Val::v0101> v0101{};
            constexpr MPL::Value<sample3Val,sample3Val::v0110> v0110{};
            constexpr MPL::Value<sample3Val,sample3Val::v0111> v0111{};
            constexpr MPL::Value<sample3Val,sample3Val::v1000> v1000{};
            constexpr MPL::Value<sample3Val,sample3Val::v1001> v1001{};
            constexpr MPL::Value<sample3Val,sample3Val::v1010> v1010{};
            constexpr MPL::Value<sample3Val,sample3Val::v1011> v1011{};
            constexpr MPL::Value<sample3Val,sample3Val::v1100> v1100{};
            constexpr MPL::Value<sample3Val,sample3Val::v1101> v1101{};
            constexpr MPL::Value<sample3Val,sample3Val::v1110> v1110{};
            constexpr MPL::Value<sample3Val,sample3Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,sample3Val> sample3{}; 
    }
    namespace AdcClist2{    ///<ADC Channel List Register 2
        using Addr = Register::Address<0x4005c00a,0xffff0000,0,unsigned>;
        ///Sample Field 4
        enum class sample4Val {
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
        namespace sample4ValC{
            constexpr MPL::Value<sample4Val,sample4Val::v0000> v0000{};
            constexpr MPL::Value<sample4Val,sample4Val::v0001> v0001{};
            constexpr MPL::Value<sample4Val,sample4Val::v0010> v0010{};
            constexpr MPL::Value<sample4Val,sample4Val::v0011> v0011{};
            constexpr MPL::Value<sample4Val,sample4Val::v0100> v0100{};
            constexpr MPL::Value<sample4Val,sample4Val::v0101> v0101{};
            constexpr MPL::Value<sample4Val,sample4Val::v0110> v0110{};
            constexpr MPL::Value<sample4Val,sample4Val::v0111> v0111{};
            constexpr MPL::Value<sample4Val,sample4Val::v1000> v1000{};
            constexpr MPL::Value<sample4Val,sample4Val::v1001> v1001{};
            constexpr MPL::Value<sample4Val,sample4Val::v1010> v1010{};
            constexpr MPL::Value<sample4Val,sample4Val::v1011> v1011{};
            constexpr MPL::Value<sample4Val,sample4Val::v1100> v1100{};
            constexpr MPL::Value<sample4Val,sample4Val::v1101> v1101{};
            constexpr MPL::Value<sample4Val,sample4Val::v1110> v1110{};
            constexpr MPL::Value<sample4Val,sample4Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,sample4Val> sample4{}; 
        ///Sample Field 5
        enum class sample5Val {
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
        namespace sample5ValC{
            constexpr MPL::Value<sample5Val,sample5Val::v0000> v0000{};
            constexpr MPL::Value<sample5Val,sample5Val::v0001> v0001{};
            constexpr MPL::Value<sample5Val,sample5Val::v0010> v0010{};
            constexpr MPL::Value<sample5Val,sample5Val::v0011> v0011{};
            constexpr MPL::Value<sample5Val,sample5Val::v0100> v0100{};
            constexpr MPL::Value<sample5Val,sample5Val::v0101> v0101{};
            constexpr MPL::Value<sample5Val,sample5Val::v0110> v0110{};
            constexpr MPL::Value<sample5Val,sample5Val::v0111> v0111{};
            constexpr MPL::Value<sample5Val,sample5Val::v1000> v1000{};
            constexpr MPL::Value<sample5Val,sample5Val::v1001> v1001{};
            constexpr MPL::Value<sample5Val,sample5Val::v1010> v1010{};
            constexpr MPL::Value<sample5Val,sample5Val::v1011> v1011{};
            constexpr MPL::Value<sample5Val,sample5Val::v1100> v1100{};
            constexpr MPL::Value<sample5Val,sample5Val::v1101> v1101{};
            constexpr MPL::Value<sample5Val,sample5Val::v1110> v1110{};
            constexpr MPL::Value<sample5Val,sample5Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,sample5Val> sample5{}; 
        ///Sample Field 6
        enum class sample6Val {
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
        namespace sample6ValC{
            constexpr MPL::Value<sample6Val,sample6Val::v0000> v0000{};
            constexpr MPL::Value<sample6Val,sample6Val::v0001> v0001{};
            constexpr MPL::Value<sample6Val,sample6Val::v0010> v0010{};
            constexpr MPL::Value<sample6Val,sample6Val::v0011> v0011{};
            constexpr MPL::Value<sample6Val,sample6Val::v0100> v0100{};
            constexpr MPL::Value<sample6Val,sample6Val::v0101> v0101{};
            constexpr MPL::Value<sample6Val,sample6Val::v0110> v0110{};
            constexpr MPL::Value<sample6Val,sample6Val::v0111> v0111{};
            constexpr MPL::Value<sample6Val,sample6Val::v1000> v1000{};
            constexpr MPL::Value<sample6Val,sample6Val::v1001> v1001{};
            constexpr MPL::Value<sample6Val,sample6Val::v1010> v1010{};
            constexpr MPL::Value<sample6Val,sample6Val::v1011> v1011{};
            constexpr MPL::Value<sample6Val,sample6Val::v1100> v1100{};
            constexpr MPL::Value<sample6Val,sample6Val::v1101> v1101{};
            constexpr MPL::Value<sample6Val,sample6Val::v1110> v1110{};
            constexpr MPL::Value<sample6Val,sample6Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,sample6Val> sample6{}; 
        ///Sample Field 7
        enum class sample7Val {
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
        namespace sample7ValC{
            constexpr MPL::Value<sample7Val,sample7Val::v0000> v0000{};
            constexpr MPL::Value<sample7Val,sample7Val::v0001> v0001{};
            constexpr MPL::Value<sample7Val,sample7Val::v0010> v0010{};
            constexpr MPL::Value<sample7Val,sample7Val::v0011> v0011{};
            constexpr MPL::Value<sample7Val,sample7Val::v0100> v0100{};
            constexpr MPL::Value<sample7Val,sample7Val::v0101> v0101{};
            constexpr MPL::Value<sample7Val,sample7Val::v0110> v0110{};
            constexpr MPL::Value<sample7Val,sample7Val::v0111> v0111{};
            constexpr MPL::Value<sample7Val,sample7Val::v1000> v1000{};
            constexpr MPL::Value<sample7Val,sample7Val::v1001> v1001{};
            constexpr MPL::Value<sample7Val,sample7Val::v1010> v1010{};
            constexpr MPL::Value<sample7Val,sample7Val::v1011> v1011{};
            constexpr MPL::Value<sample7Val,sample7Val::v1100> v1100{};
            constexpr MPL::Value<sample7Val,sample7Val::v1101> v1101{};
            constexpr MPL::Value<sample7Val,sample7Val::v1110> v1110{};
            constexpr MPL::Value<sample7Val,sample7Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,sample7Val> sample7{}; 
    }
    namespace AdcClist3{    ///<ADC Channel List Register 3
        using Addr = Register::Address<0x4005c00c,0xffff0000,0,unsigned>;
        ///Sample Field 8
        enum class sample8Val {
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
        namespace sample8ValC{
            constexpr MPL::Value<sample8Val,sample8Val::v0000> v0000{};
            constexpr MPL::Value<sample8Val,sample8Val::v0001> v0001{};
            constexpr MPL::Value<sample8Val,sample8Val::v0010> v0010{};
            constexpr MPL::Value<sample8Val,sample8Val::v0011> v0011{};
            constexpr MPL::Value<sample8Val,sample8Val::v0100> v0100{};
            constexpr MPL::Value<sample8Val,sample8Val::v0101> v0101{};
            constexpr MPL::Value<sample8Val,sample8Val::v0110> v0110{};
            constexpr MPL::Value<sample8Val,sample8Val::v0111> v0111{};
            constexpr MPL::Value<sample8Val,sample8Val::v1000> v1000{};
            constexpr MPL::Value<sample8Val,sample8Val::v1001> v1001{};
            constexpr MPL::Value<sample8Val,sample8Val::v1010> v1010{};
            constexpr MPL::Value<sample8Val,sample8Val::v1011> v1011{};
            constexpr MPL::Value<sample8Val,sample8Val::v1100> v1100{};
            constexpr MPL::Value<sample8Val,sample8Val::v1101> v1101{};
            constexpr MPL::Value<sample8Val,sample8Val::v1110> v1110{};
            constexpr MPL::Value<sample8Val,sample8Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,sample8Val> sample8{}; 
        ///Sample Field 9
        enum class sample9Val {
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
        namespace sample9ValC{
            constexpr MPL::Value<sample9Val,sample9Val::v0000> v0000{};
            constexpr MPL::Value<sample9Val,sample9Val::v0001> v0001{};
            constexpr MPL::Value<sample9Val,sample9Val::v0010> v0010{};
            constexpr MPL::Value<sample9Val,sample9Val::v0011> v0011{};
            constexpr MPL::Value<sample9Val,sample9Val::v0100> v0100{};
            constexpr MPL::Value<sample9Val,sample9Val::v0101> v0101{};
            constexpr MPL::Value<sample9Val,sample9Val::v0110> v0110{};
            constexpr MPL::Value<sample9Val,sample9Val::v0111> v0111{};
            constexpr MPL::Value<sample9Val,sample9Val::v1000> v1000{};
            constexpr MPL::Value<sample9Val,sample9Val::v1001> v1001{};
            constexpr MPL::Value<sample9Val,sample9Val::v1010> v1010{};
            constexpr MPL::Value<sample9Val,sample9Val::v1011> v1011{};
            constexpr MPL::Value<sample9Val,sample9Val::v1100> v1100{};
            constexpr MPL::Value<sample9Val,sample9Val::v1101> v1101{};
            constexpr MPL::Value<sample9Val,sample9Val::v1110> v1110{};
            constexpr MPL::Value<sample9Val,sample9Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,sample9Val> sample9{}; 
        ///Sample Field 10
        enum class sample10Val {
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
        namespace sample10ValC{
            constexpr MPL::Value<sample10Val,sample10Val::v0000> v0000{};
            constexpr MPL::Value<sample10Val,sample10Val::v0001> v0001{};
            constexpr MPL::Value<sample10Val,sample10Val::v0010> v0010{};
            constexpr MPL::Value<sample10Val,sample10Val::v0011> v0011{};
            constexpr MPL::Value<sample10Val,sample10Val::v0100> v0100{};
            constexpr MPL::Value<sample10Val,sample10Val::v0101> v0101{};
            constexpr MPL::Value<sample10Val,sample10Val::v0110> v0110{};
            constexpr MPL::Value<sample10Val,sample10Val::v0111> v0111{};
            constexpr MPL::Value<sample10Val,sample10Val::v1000> v1000{};
            constexpr MPL::Value<sample10Val,sample10Val::v1001> v1001{};
            constexpr MPL::Value<sample10Val,sample10Val::v1010> v1010{};
            constexpr MPL::Value<sample10Val,sample10Val::v1011> v1011{};
            constexpr MPL::Value<sample10Val,sample10Val::v1100> v1100{};
            constexpr MPL::Value<sample10Val,sample10Val::v1101> v1101{};
            constexpr MPL::Value<sample10Val,sample10Val::v1110> v1110{};
            constexpr MPL::Value<sample10Val,sample10Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,sample10Val> sample10{}; 
        ///Sample Field 11
        enum class sample11Val {
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
        namespace sample11ValC{
            constexpr MPL::Value<sample11Val,sample11Val::v0000> v0000{};
            constexpr MPL::Value<sample11Val,sample11Val::v0001> v0001{};
            constexpr MPL::Value<sample11Val,sample11Val::v0010> v0010{};
            constexpr MPL::Value<sample11Val,sample11Val::v0011> v0011{};
            constexpr MPL::Value<sample11Val,sample11Val::v0100> v0100{};
            constexpr MPL::Value<sample11Val,sample11Val::v0101> v0101{};
            constexpr MPL::Value<sample11Val,sample11Val::v0110> v0110{};
            constexpr MPL::Value<sample11Val,sample11Val::v0111> v0111{};
            constexpr MPL::Value<sample11Val,sample11Val::v1000> v1000{};
            constexpr MPL::Value<sample11Val,sample11Val::v1001> v1001{};
            constexpr MPL::Value<sample11Val,sample11Val::v1010> v1010{};
            constexpr MPL::Value<sample11Val,sample11Val::v1011> v1011{};
            constexpr MPL::Value<sample11Val,sample11Val::v1100> v1100{};
            constexpr MPL::Value<sample11Val,sample11Val::v1101> v1101{};
            constexpr MPL::Value<sample11Val,sample11Val::v1110> v1110{};
            constexpr MPL::Value<sample11Val,sample11Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,sample11Val> sample11{}; 
    }
    namespace AdcClist4{    ///<ADC Channel List Register 4
        using Addr = Register::Address<0x4005c00e,0xffff0000,0,unsigned>;
        ///Sample Field 12
        enum class sample12Val {
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
        namespace sample12ValC{
            constexpr MPL::Value<sample12Val,sample12Val::v0000> v0000{};
            constexpr MPL::Value<sample12Val,sample12Val::v0001> v0001{};
            constexpr MPL::Value<sample12Val,sample12Val::v0010> v0010{};
            constexpr MPL::Value<sample12Val,sample12Val::v0011> v0011{};
            constexpr MPL::Value<sample12Val,sample12Val::v0100> v0100{};
            constexpr MPL::Value<sample12Val,sample12Val::v0101> v0101{};
            constexpr MPL::Value<sample12Val,sample12Val::v0110> v0110{};
            constexpr MPL::Value<sample12Val,sample12Val::v0111> v0111{};
            constexpr MPL::Value<sample12Val,sample12Val::v1000> v1000{};
            constexpr MPL::Value<sample12Val,sample12Val::v1001> v1001{};
            constexpr MPL::Value<sample12Val,sample12Val::v1010> v1010{};
            constexpr MPL::Value<sample12Val,sample12Val::v1011> v1011{};
            constexpr MPL::Value<sample12Val,sample12Val::v1100> v1100{};
            constexpr MPL::Value<sample12Val,sample12Val::v1101> v1101{};
            constexpr MPL::Value<sample12Val,sample12Val::v1110> v1110{};
            constexpr MPL::Value<sample12Val,sample12Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,sample12Val> sample12{}; 
        ///Sample Field 13
        enum class sample13Val {
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
        namespace sample13ValC{
            constexpr MPL::Value<sample13Val,sample13Val::v0000> v0000{};
            constexpr MPL::Value<sample13Val,sample13Val::v0001> v0001{};
            constexpr MPL::Value<sample13Val,sample13Val::v0010> v0010{};
            constexpr MPL::Value<sample13Val,sample13Val::v0011> v0011{};
            constexpr MPL::Value<sample13Val,sample13Val::v0100> v0100{};
            constexpr MPL::Value<sample13Val,sample13Val::v0101> v0101{};
            constexpr MPL::Value<sample13Val,sample13Val::v0110> v0110{};
            constexpr MPL::Value<sample13Val,sample13Val::v0111> v0111{};
            constexpr MPL::Value<sample13Val,sample13Val::v1000> v1000{};
            constexpr MPL::Value<sample13Val,sample13Val::v1001> v1001{};
            constexpr MPL::Value<sample13Val,sample13Val::v1010> v1010{};
            constexpr MPL::Value<sample13Val,sample13Val::v1011> v1011{};
            constexpr MPL::Value<sample13Val,sample13Val::v1100> v1100{};
            constexpr MPL::Value<sample13Val,sample13Val::v1101> v1101{};
            constexpr MPL::Value<sample13Val,sample13Val::v1110> v1110{};
            constexpr MPL::Value<sample13Val,sample13Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,sample13Val> sample13{}; 
        ///Sample Field 14
        enum class sample14Val {
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
        namespace sample14ValC{
            constexpr MPL::Value<sample14Val,sample14Val::v0000> v0000{};
            constexpr MPL::Value<sample14Val,sample14Val::v0001> v0001{};
            constexpr MPL::Value<sample14Val,sample14Val::v0010> v0010{};
            constexpr MPL::Value<sample14Val,sample14Val::v0011> v0011{};
            constexpr MPL::Value<sample14Val,sample14Val::v0100> v0100{};
            constexpr MPL::Value<sample14Val,sample14Val::v0101> v0101{};
            constexpr MPL::Value<sample14Val,sample14Val::v0110> v0110{};
            constexpr MPL::Value<sample14Val,sample14Val::v0111> v0111{};
            constexpr MPL::Value<sample14Val,sample14Val::v1000> v1000{};
            constexpr MPL::Value<sample14Val,sample14Val::v1001> v1001{};
            constexpr MPL::Value<sample14Val,sample14Val::v1010> v1010{};
            constexpr MPL::Value<sample14Val,sample14Val::v1011> v1011{};
            constexpr MPL::Value<sample14Val,sample14Val::v1100> v1100{};
            constexpr MPL::Value<sample14Val,sample14Val::v1101> v1101{};
            constexpr MPL::Value<sample14Val,sample14Val::v1110> v1110{};
            constexpr MPL::Value<sample14Val,sample14Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,sample14Val> sample14{}; 
        ///Sample Field 15
        enum class sample15Val {
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
        namespace sample15ValC{
            constexpr MPL::Value<sample15Val,sample15Val::v0000> v0000{};
            constexpr MPL::Value<sample15Val,sample15Val::v0001> v0001{};
            constexpr MPL::Value<sample15Val,sample15Val::v0010> v0010{};
            constexpr MPL::Value<sample15Val,sample15Val::v0011> v0011{};
            constexpr MPL::Value<sample15Val,sample15Val::v0100> v0100{};
            constexpr MPL::Value<sample15Val,sample15Val::v0101> v0101{};
            constexpr MPL::Value<sample15Val,sample15Val::v0110> v0110{};
            constexpr MPL::Value<sample15Val,sample15Val::v0111> v0111{};
            constexpr MPL::Value<sample15Val,sample15Val::v1000> v1000{};
            constexpr MPL::Value<sample15Val,sample15Val::v1001> v1001{};
            constexpr MPL::Value<sample15Val,sample15Val::v1010> v1010{};
            constexpr MPL::Value<sample15Val,sample15Val::v1011> v1011{};
            constexpr MPL::Value<sample15Val,sample15Val::v1100> v1100{};
            constexpr MPL::Value<sample15Val,sample15Val::v1101> v1101{};
            constexpr MPL::Value<sample15Val,sample15Val::v1110> v1110{};
            constexpr MPL::Value<sample15Val,sample15Val::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,sample15Val> sample15{}; 
    }
    namespace AdcSdis{    ///<ADC Sample Disable Register
        using Addr = Register::Address<0x4005c010,0xffff0000,0,unsigned>;
        ///Disable Sample Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ds{}; 
    }
    namespace AdcStat{    ///<ADC Status Register
        using Addr = Register::Address<0x4005c012,0xffff2000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> undefined{}; 
        ///High Limit Interrupt
        enum class hlmtiVal {
            v0=0x00000000,     ///<No high limit interrupt request
            v1=0x00000001,     ///<High limit exceeded, IRQ pending if CTRL1[HLMTIE] is set
        };
        namespace hlmtiValC{
            constexpr MPL::Value<hlmtiVal,hlmtiVal::v0> v0{};
            constexpr MPL::Value<hlmtiVal,hlmtiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,hlmtiVal> hlmti{}; 
        ///Low Limit Interrupt
        enum class llmtiVal {
            v0=0x00000000,     ///<No low limit interrupt request
            v1=0x00000001,     ///<Low limit exceeded, IRQ pending if CTRL1[LLMTIE] is set
        };
        namespace llmtiValC{
            constexpr MPL::Value<llmtiVal,llmtiVal::v0> v0{};
            constexpr MPL::Value<llmtiVal,llmtiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,llmtiVal> llmti{}; 
        ///Zero Crossing Interrupt
        enum class zciVal {
            v0=0x00000000,     ///<No zero crossing interrupt request
            v1=0x00000001,     ///<Zero crossing encountered, IRQ pending if CTRL1[ZCIE] is set
        };
        namespace zciValC{
            constexpr MPL::Value<zciVal,zciVal::v0> v0{};
            constexpr MPL::Value<zciVal,zciVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,zciVal> zci{}; 
        ///End of Scan Interrupt
        enum class eosi0Val {
            v0=0x00000000,     ///<A scan cycle has not been completed, no end of scan IRQ pending
            v1=0x00000001,     ///<A scan cycle has been completed, end of scan IRQ pending
        };
        namespace eosi0ValC{
            constexpr MPL::Value<eosi0Val,eosi0Val::v0> v0{};
            constexpr MPL::Value<eosi0Val,eosi0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,eosi0Val> eosi0{}; 
        ///End of Scan Interrupt
        enum class eosi1Val {
            v0=0x00000000,     ///<A scan cycle has not been completed, no end of scan IRQ pending
            v1=0x00000001,     ///<A scan cycle has been completed, end of scan IRQ pending
        };
        namespace eosi1ValC{
            constexpr MPL::Value<eosi1Val,eosi1Val::v0> v0{};
            constexpr MPL::Value<eosi1Val,eosi1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,eosi1Val> eosi1{}; 
        ///Conversion in Progress
        enum class cip1Val {
            v0=0x00000000,     ///<Idle state
            v1=0x00000001,     ///<A scan cycle is in progress. The ADC will ignore all sync pulses or start commands
        };
        namespace cip1ValC{
            constexpr MPL::Value<cip1Val,cip1Val::v0> v0{};
            constexpr MPL::Value<cip1Val,cip1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,cip1Val> cip1{}; 
        ///Conversion in Progress
        enum class cip0Val {
            v0=0x00000000,     ///<Idle state
            v1=0x00000001,     ///<A scan cycle is in progress. The ADC will ignore all sync pulses or start commands
        };
        namespace cip0ValC{
            constexpr MPL::Value<cip0Val,cip0Val::v0> v0{};
            constexpr MPL::Value<cip0Val,cip0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,cip0Val> cip0{}; 
    }
    namespace AdcRdy{    ///<ADC Ready Register
        using Addr = Register::Address<0x4005c014,0xffff0000,0,unsigned>;
        ///Ready Sample
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rdy{}; 
    }
    namespace AdcLolimstat{    ///<ADC Low Limit Status Register
        using Addr = Register::Address<0x4005c016,0xffff0000,0,unsigned>;
        ///Low Limit Status Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lls{}; 
    }
    namespace AdcHilimstat{    ///<ADC High Limit Status Register
        using Addr = Register::Address<0x4005c018,0xffff0000,0,unsigned>;
        ///High Limit Status Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hls{}; 
    }
    namespace AdcZxstat{    ///<ADC Zero Crossing Status Register
        using Addr = Register::Address<0x4005c01a,0xffff0000,0,unsigned>;
        ///Zero Crossing Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> zcs{}; 
    }
    namespace AdcRslt0{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c01c,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt1{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c01e,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt2{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c020,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt3{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c022,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt4{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c024,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt5{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c026,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt6{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c028,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt7{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c02a,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt8{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c02c,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt9{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c02e,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt10{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c030,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt11{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c032,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt12{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c034,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt13{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c036,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt14{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c038,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcRslt15{    ///<ADC Result Registers with sign extension
        using Addr = Register::Address<0x4005c03a,0xffff0007,0,unsigned>;
        ///Digital Result of the Conversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> rslt{}; 
        ///Sign Extend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sext{}; 
    }
    namespace AdcLolim0{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c03c,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim1{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c03e,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim2{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c040,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim3{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c042,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim4{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c044,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim5{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c046,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim6{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c048,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim7{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c04a,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim8{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c04c,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim9{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c04e,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim10{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c050,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim11{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c052,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim12{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c054,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim13{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c056,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim14{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c058,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcLolim15{    ///<ADC Low Limit Registers
        using Addr = Register::Address<0x4005c05a,0xffff8007,0,unsigned>;
        ///Low Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> llmt{}; 
    }
    namespace AdcHilim0{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c05c,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim1{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c05e,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim2{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c060,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim3{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c062,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim4{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c064,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim5{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c066,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim6{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c068,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim7{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c06a,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim8{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c06c,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim9{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c06e,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim10{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c070,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim11{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c072,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim12{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c074,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim13{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c076,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim14{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c078,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcHilim15{    ///<ADC High Limit Registers
        using Addr = Register::Address<0x4005c07a,0xffff8007,0,unsigned>;
        ///High Limit Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> hlmt{}; 
    }
    namespace AdcOffst0{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c07c,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst1{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c07e,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst2{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c080,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst3{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c082,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst4{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c084,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst5{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c086,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst6{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c088,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst7{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c08a,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst8{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c08c,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst9{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c08e,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst10{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c090,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst11{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c092,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst12{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c094,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst13{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c096,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst14{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c098,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcOffst15{    ///<ADC Offset Registers
        using Addr = Register::Address<0x4005c09a,0xffff8007,0,unsigned>;
        ///ADC Offset Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,3),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace AdcPwr{    ///<ADC Power Control Register
        using Addr = Register::Address<0x4005c09c,0xffff7004,0,unsigned>;
        ///Manual Power Down for Converter A
        enum class pd0Val {
            v0=0x00000000,     ///<Power Up ADC converter A
            v1=0x00000001,     ///<Power Down ADC converter A
        };
        namespace pd0ValC{
            constexpr MPL::Value<pd0Val,pd0Val::v0> v0{};
            constexpr MPL::Value<pd0Val,pd0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,pd0Val> pd0{}; 
        ///Manual Power Down for Converter B
        enum class pd1Val {
            v0=0x00000000,     ///<Power Up ADC converter B
            v1=0x00000001,     ///<Power Down ADC converter B
        };
        namespace pd1ValC{
            constexpr MPL::Value<pd1Val,pd1Val::v0> v0{};
            constexpr MPL::Value<pd1Val,pd1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,pd1Val> pd1{}; 
        ///Auto Powerdown
        enum class apdVal {
            v0=0x00000000,     ///<Auto Powerdown Mode is not active
            v1=0x00000001,     ///<Auto Powerdown Mode is active
        };
        namespace apdValC{
            constexpr MPL::Value<apdVal,apdVal::v0> v0{};
            constexpr MPL::Value<apdVal,apdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,apdVal> apd{}; 
        ///Power Up Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,4),Register::ReadWriteAccess,unsigned> pudelay{}; 
        ///ADC Converter A Power Status
        enum class psts0Val {
            v0=0x00000000,     ///<ADC Converter A is currently powered up
            v1=0x00000001,     ///<ADC Converter A is currently powered down
        };
        namespace psts0ValC{
            constexpr MPL::Value<psts0Val,psts0Val::v0> v0{};
            constexpr MPL::Value<psts0Val,psts0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,psts0Val> psts0{}; 
        ///ADC Converter B Power Status
        enum class psts1Val {
            v0=0x00000000,     ///<ADC Converter B is currently powered up
            v1=0x00000001,     ///<ADC Converter B is currently powered down
        };
        namespace psts1ValC{
            constexpr MPL::Value<psts1Val,psts1Val::v0> v0{};
            constexpr MPL::Value<psts1Val,psts1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,psts1Val> psts1{}; 
        ///Auto Standby
        enum class asbVal {
            v0=0x00000000,     ///<Auto standby mode disabled
            v1=0x00000001,     ///<Auto standby mode enabled
        };
        namespace asbValC{
            constexpr MPL::Value<asbVal,asbVal::v0> v0{};
            constexpr MPL::Value<asbVal,asbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,asbVal> asb{}; 
    }
    namespace AdcCal{    ///<ADC Calibration Register
        using Addr = Register::Address<0x4005c09e,0xffff0fff,0,unsigned>;
        ///Select V REFLO Source
        enum class selVrefloAVal {
            v0=0x00000000,     ///<VREFL pad
            v1=0x00000001,     ///<ANA3
        };
        namespace selVrefloAValC{
            constexpr MPL::Value<selVrefloAVal,selVrefloAVal::v0> v0{};
            constexpr MPL::Value<selVrefloAVal,selVrefloAVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,selVrefloAVal> selVrefloA{}; 
        ///Select V REFH Source
        enum class selVrefhAVal {
            v0=0x00000000,     ///<VREFH pad
            v1=0x00000001,     ///<ANA2
        };
        namespace selVrefhAValC{
            constexpr MPL::Value<selVrefhAVal,selVrefhAVal::v0> v0{};
            constexpr MPL::Value<selVrefhAVal,selVrefhAVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,selVrefhAVal> selVrefhA{}; 
        ///Select V REFLO Source
        enum class selVrefloBVal {
            v0=0x00000000,     ///<VREFL pad
            v1=0x00000001,     ///<ANB3
        };
        namespace selVrefloBValC{
            constexpr MPL::Value<selVrefloBVal,selVrefloBVal::v0> v0{};
            constexpr MPL::Value<selVrefloBVal,selVrefloBVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,selVrefloBVal> selVrefloB{}; 
        ///Select V REFH Source
        enum class selVrefhBVal {
            v0=0x00000000,     ///<VREFH pad
            v1=0x00000001,     ///<ANB2
        };
        namespace selVrefhBValC{
            constexpr MPL::Value<selVrefhBVal,selVrefhBVal::v0> v0{};
            constexpr MPL::Value<selVrefhBVal,selVrefhBVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,selVrefhBVal> selVrefhB{}; 
    }
    namespace AdcGc1{    ///<Gain Control 1 Register
        using Addr = Register::Address<0x4005c0a0,0xffff0000,0,unsigned>;
        ///Gain Control Bit 0
        enum class gain0Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain0ValC{
            constexpr MPL::Value<gain0Val,gain0Val::v00> v00{};
            constexpr MPL::Value<gain0Val,gain0Val::v01> v01{};
            constexpr MPL::Value<gain0Val,gain0Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,gain0Val> gain0{}; 
        ///Gain Control Bit 1
        enum class gain1Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain1ValC{
            constexpr MPL::Value<gain1Val,gain1Val::v00> v00{};
            constexpr MPL::Value<gain1Val,gain1Val::v01> v01{};
            constexpr MPL::Value<gain1Val,gain1Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,gain1Val> gain1{}; 
        ///Gain Control Bit 2
        enum class gain2Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain2ValC{
            constexpr MPL::Value<gain2Val,gain2Val::v00> v00{};
            constexpr MPL::Value<gain2Val,gain2Val::v01> v01{};
            constexpr MPL::Value<gain2Val,gain2Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,gain2Val> gain2{}; 
        ///Gain Control Bit 3
        enum class gain3Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain3ValC{
            constexpr MPL::Value<gain3Val,gain3Val::v00> v00{};
            constexpr MPL::Value<gain3Val,gain3Val::v01> v01{};
            constexpr MPL::Value<gain3Val,gain3Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,gain3Val> gain3{}; 
        ///Gain Control Bit 4
        enum class gain4Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain4ValC{
            constexpr MPL::Value<gain4Val,gain4Val::v00> v00{};
            constexpr MPL::Value<gain4Val,gain4Val::v01> v01{};
            constexpr MPL::Value<gain4Val,gain4Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,gain4Val> gain4{}; 
        ///Gain Control Bit 5
        enum class gain5Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain5ValC{
            constexpr MPL::Value<gain5Val,gain5Val::v00> v00{};
            constexpr MPL::Value<gain5Val,gain5Val::v01> v01{};
            constexpr MPL::Value<gain5Val,gain5Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,gain5Val> gain5{}; 
        ///Gain Control Bit 6
        enum class gain6Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain6ValC{
            constexpr MPL::Value<gain6Val,gain6Val::v00> v00{};
            constexpr MPL::Value<gain6Val,gain6Val::v01> v01{};
            constexpr MPL::Value<gain6Val,gain6Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,gain6Val> gain6{}; 
        ///Gain Control Bit 7
        enum class gain7Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain7ValC{
            constexpr MPL::Value<gain7Val,gain7Val::v00> v00{};
            constexpr MPL::Value<gain7Val,gain7Val::v01> v01{};
            constexpr MPL::Value<gain7Val,gain7Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,gain7Val> gain7{}; 
    }
    namespace AdcGc2{    ///<Gain Control 2 Register
        using Addr = Register::Address<0x4005c0a2,0xffff0000,0,unsigned>;
        ///Gain Control Bit 8
        enum class gain8Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain8ValC{
            constexpr MPL::Value<gain8Val,gain8Val::v00> v00{};
            constexpr MPL::Value<gain8Val,gain8Val::v01> v01{};
            constexpr MPL::Value<gain8Val,gain8Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,gain8Val> gain8{}; 
        ///Gain Control Bit 9
        enum class gain9Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain9ValC{
            constexpr MPL::Value<gain9Val,gain9Val::v00> v00{};
            constexpr MPL::Value<gain9Val,gain9Val::v01> v01{};
            constexpr MPL::Value<gain9Val,gain9Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,gain9Val> gain9{}; 
        ///Gain Control Bit 10
        enum class gain10Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain10ValC{
            constexpr MPL::Value<gain10Val,gain10Val::v00> v00{};
            constexpr MPL::Value<gain10Val,gain10Val::v01> v01{};
            constexpr MPL::Value<gain10Val,gain10Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,gain10Val> gain10{}; 
        ///Gain Control Bit 11
        enum class gain11Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain11ValC{
            constexpr MPL::Value<gain11Val,gain11Val::v00> v00{};
            constexpr MPL::Value<gain11Val,gain11Val::v01> v01{};
            constexpr MPL::Value<gain11Val,gain11Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,gain11Val> gain11{}; 
        ///Gain Control Bit 12
        enum class gain12Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain12ValC{
            constexpr MPL::Value<gain12Val,gain12Val::v00> v00{};
            constexpr MPL::Value<gain12Val,gain12Val::v01> v01{};
            constexpr MPL::Value<gain12Val,gain12Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,gain12Val> gain12{}; 
        ///Gain Control Bit 13
        enum class gain13Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain13ValC{
            constexpr MPL::Value<gain13Val,gain13Val::v00> v00{};
            constexpr MPL::Value<gain13Val,gain13Val::v01> v01{};
            constexpr MPL::Value<gain13Val,gain13Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,gain13Val> gain13{}; 
        ///Gain Control Bit 14
        enum class gain14Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain14ValC{
            constexpr MPL::Value<gain14Val,gain14Val::v00> v00{};
            constexpr MPL::Value<gain14Val,gain14Val::v01> v01{};
            constexpr MPL::Value<gain14Val,gain14Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,gain14Val> gain14{}; 
        ///Gain Control Bit 15
        enum class gain15Val {
            v00=0x00000000,     ///<x1 amplification
            v01=0x00000001,     ///<x2 amplification
            v10=0x00000002,     ///<x4 amplification
        };
        namespace gain15ValC{
            constexpr MPL::Value<gain15Val,gain15Val::v00> v00{};
            constexpr MPL::Value<gain15Val,gain15Val::v01> v01{};
            constexpr MPL::Value<gain15Val,gain15Val::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,gain15Val> gain15{}; 
    }
    namespace AdcSctrl{    ///<ADC Scan Control Register
        using Addr = Register::Address<0x4005c0a4,0xffff0000,0,unsigned>;
        ///Scan Control Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> sc{}; 
    }
    namespace AdcPwr2{    ///<ADC Power Control Register
        using Addr = Register::Address<0x4005c0a6,0xffffc0f0,0,unsigned>;
        ///ADCA Speed Control Bits
        enum class speedaVal {
            v00=0x00000000,     ///<Conversion clock frequency <= 6.25 MHz; current consumption per converter = 6 mA
            v01=0x00000001,     ///<Conversion clock frequency <= 12.5 MHz; current consumption per converter = 10.8 mA
            v10=0x00000002,     ///<Conversion clock frequency <= 18.75 MHz; current consumption per converter = 18 mA
            v11=0x00000003,     ///<Conversion clock frequency <= 25 MHz; current consumption per converter = 25.2 mA
        };
        namespace speedaValC{
            constexpr MPL::Value<speedaVal,speedaVal::v00> v00{};
            constexpr MPL::Value<speedaVal,speedaVal::v01> v01{};
            constexpr MPL::Value<speedaVal,speedaVal::v10> v10{};
            constexpr MPL::Value<speedaVal,speedaVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,speedaVal> speeda{}; 
        ///ADCB Speed Control Bits
        enum class speedbVal {
            v00=0x00000000,     ///<Conversion clock frequency <= 6.25 MHz; current consumption per converter = 6 mA
            v01=0x00000001,     ///<Conversion clock frequency <= 12.5 MHz; current consumption per converter = 10.8 mA
            v10=0x00000002,     ///<Conversion clock frequency <= 18.75 MHz; current consumption per converter = 18 mA
            v11=0x00000003,     ///<Conversion clock frequency <= 25 MHz; current consumption per converter = 25.2 mA
        };
        namespace speedbValC{
            constexpr MPL::Value<speedbVal,speedbVal::v00> v00{};
            constexpr MPL::Value<speedbVal,speedbVal::v01> v01{};
            constexpr MPL::Value<speedbVal,speedbVal::v10> v10{};
            constexpr MPL::Value<speedbVal,speedbVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,speedbVal> speedb{}; 
        ///Clock Divisor Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> div1{}; 
    }
    namespace AdcCtrl3{    ///<ADC Control Register 3
        using Addr = Register::Address<0x4005c0a8,0xffffff80,0,unsigned>;
        ///Sample Window Count 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> scnt0{}; 
        ///Sample Window Count 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> scnt1{}; 
        ///DMA Trigger Source
        enum class dmasrcVal {
            v0=0x00000000,     ///<DMA trigger source is end of scan interrupt
            v1=0x00000001,     ///<DMA trigger source is RDY bits
        };
        namespace dmasrcValC{
            constexpr MPL::Value<dmasrcVal,dmasrcVal::v0> v0{};
            constexpr MPL::Value<dmasrcVal,dmasrcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dmasrcVal> dmasrc{}; 
    }
    namespace AdcSchlten{    ///<ADC Scan Interrupt Enable Register
        using Addr = Register::Address<0x4005c0aa,0xffff0000,0,unsigned>;
        ///Scan Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> schlten{}; 
    }
}
