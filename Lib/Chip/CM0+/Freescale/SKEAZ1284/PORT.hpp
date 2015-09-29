#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Port control and interrupts
    namespace PortIoflt0{    ///<Port Filter Register 0
        using Addr = Register::Address<0x40049000,0x00000000,0,unsigned>;
        ///Filter Selection for Input from PTA
        enum class fltaVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        namespace fltaValC{
            constexpr MPL::Value<fltaVal,fltaVal::v00> v00{};
            constexpr MPL::Value<fltaVal,fltaVal::v01> v01{};
            constexpr MPL::Value<fltaVal,fltaVal::v10> v10{};
            constexpr MPL::Value<fltaVal,fltaVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,fltaVal> flta{}; 
        ///Filter Selection for Input from PTB
        enum class fltbVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        namespace fltbValC{
            constexpr MPL::Value<fltbVal,fltbVal::v00> v00{};
            constexpr MPL::Value<fltbVal,fltbVal::v01> v01{};
            constexpr MPL::Value<fltbVal,fltbVal::v10> v10{};
            constexpr MPL::Value<fltbVal,fltbVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,fltbVal> fltb{}; 
        ///Filter Selection for Input from PTC
        enum class fltcVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        namespace fltcValC{
            constexpr MPL::Value<fltcVal,fltcVal::v00> v00{};
            constexpr MPL::Value<fltcVal,fltcVal::v01> v01{};
            constexpr MPL::Value<fltcVal,fltcVal::v10> v10{};
            constexpr MPL::Value<fltcVal,fltcVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,fltcVal> fltc{}; 
        ///Filter Selection for Input from PTD
        enum class fltdVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        namespace fltdValC{
            constexpr MPL::Value<fltdVal,fltdVal::v00> v00{};
            constexpr MPL::Value<fltdVal,fltdVal::v01> v01{};
            constexpr MPL::Value<fltdVal,fltdVal::v10> v10{};
            constexpr MPL::Value<fltdVal,fltdVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,fltdVal> fltd{}; 
        ///Filter Selection for Input from PTD
        enum class flteVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        namespace flteValC{
            constexpr MPL::Value<flteVal,flteVal::v00> v00{};
            constexpr MPL::Value<flteVal,flteVal::v01> v01{};
            constexpr MPL::Value<flteVal,flteVal::v10> v10{};
            constexpr MPL::Value<flteVal,flteVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,flteVal> flte{}; 
        ///Filter Selection for Input from PTF
        enum class fltfVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        namespace fltfValC{
            constexpr MPL::Value<fltfVal,fltfVal::v00> v00{};
            constexpr MPL::Value<fltfVal,fltfVal::v01> v01{};
            constexpr MPL::Value<fltfVal,fltfVal::v10> v10{};
            constexpr MPL::Value<fltfVal,fltfVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,fltfVal> fltf{}; 
        ///Filter Selection for Input from PTG
        enum class fltgVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        namespace fltgValC{
            constexpr MPL::Value<fltgVal,fltgVal::v00> v00{};
            constexpr MPL::Value<fltgVal,fltgVal::v01> v01{};
            constexpr MPL::Value<fltgVal,fltgVal::v10> v10{};
            constexpr MPL::Value<fltgVal,fltgVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,fltgVal> fltg{}; 
        ///Filter Selection for Input from PTH
        enum class flthVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        namespace flthValC{
            constexpr MPL::Value<flthVal,flthVal::v00> v00{};
            constexpr MPL::Value<flthVal,flthVal::v01> v01{};
            constexpr MPL::Value<flthVal,flthVal::v10> v10{};
            constexpr MPL::Value<flthVal,flthVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,flthVal> flth{}; 
        ///Filter Selection for Input from RESET/IRQ
        enum class fltrstVal {
            v00=0x00000000,     ///<No filter.
            v01=0x00000001,     ///<Selects FLTDIV1, and will switch to FLTDIV3 in Stop mode automatically.
            v10=0x00000002,     ///<Selects FLTDIV2, and will switch to FLTDIV3 in Stop mode automatically.
            v11=0x00000003,     ///<FLTDIV3
        };
        namespace fltrstValC{
            constexpr MPL::Value<fltrstVal,fltrstVal::v00> v00{};
            constexpr MPL::Value<fltrstVal,fltrstVal::v01> v01{};
            constexpr MPL::Value<fltrstVal,fltrstVal::v10> v10{};
            constexpr MPL::Value<fltrstVal,fltrstVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,fltrstVal> fltrst{}; 
        ///Filter selection for Input from KBI0
        enum class fltkbi0Val {
            v00=0x00000000,     ///<No filter.
            v01=0x00000001,     ///<Selects FLTDIV1, and will switch to FLTDIV3 in Stop mode automatically.
            v10=0x00000002,     ///<Selects FLTDIV2, and will switch to FLTDIV3 in Stop mode automatically.
            v11=0x00000003,     ///<FLTDIV3
        };
        namespace fltkbi0ValC{
            constexpr MPL::Value<fltkbi0Val,fltkbi0Val::v00> v00{};
            constexpr MPL::Value<fltkbi0Val,fltkbi0Val::v01> v01{};
            constexpr MPL::Value<fltkbi0Val,fltkbi0Val::v10> v10{};
            constexpr MPL::Value<fltkbi0Val,fltkbi0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,fltkbi0Val> fltkbi0{}; 
        ///Filter Selection for Input from KBI1
        enum class fltkbi1Val {
            v00=0x00000000,     ///<No filter
            v01=0x00000001,     ///<Selects FLTDIV1, and will switch to FLTDIV3 in Stop mode automatically.
            v10=0x00000002,     ///<Selects FLTDIV2, and will switch to FLTDIV3 in Stop mode automatically.
            v11=0x00000003,     ///<FLTDIV3
        };
        namespace fltkbi1ValC{
            constexpr MPL::Value<fltkbi1Val,fltkbi1Val::v00> v00{};
            constexpr MPL::Value<fltkbi1Val,fltkbi1Val::v01> v01{};
            constexpr MPL::Value<fltkbi1Val,fltkbi1Val::v10> v10{};
            constexpr MPL::Value<fltkbi1Val,fltkbi1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,fltkbi1Val> fltkbi1{}; 
        ///Filter Selection for Input from NMI
        enum class fltnmiVal {
            v00=0x00000000,     ///<No filter.
            v01=0x00000001,     ///<Selects FLTDIV1, and will switch to FLTDIV3 in Stop mode automatically.
            v10=0x00000002,     ///<Selects FLTDIV2, and will switch to FLTDIV3 in Stop mode automatically.
            v11=0x00000003,     ///<FLTDIV3
        };
        namespace fltnmiValC{
            constexpr MPL::Value<fltnmiVal,fltnmiVal::v00> v00{};
            constexpr MPL::Value<fltnmiVal,fltnmiVal::v01> v01{};
            constexpr MPL::Value<fltnmiVal,fltnmiVal::v10> v10{};
            constexpr MPL::Value<fltnmiVal,fltnmiVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,fltnmiVal> fltnmi{}; 
        ///Filter Division Set 1
        enum class fltdiv1Val {
            v00=0x00000000,     ///<BUSCLK/2
            v01=0x00000001,     ///<BUSCLK/4
            v10=0x00000002,     ///<BUSCLK/8
            v11=0x00000003,     ///<BUSCLK/16
        };
        namespace fltdiv1ValC{
            constexpr MPL::Value<fltdiv1Val,fltdiv1Val::v00> v00{};
            constexpr MPL::Value<fltdiv1Val,fltdiv1Val::v01> v01{};
            constexpr MPL::Value<fltdiv1Val,fltdiv1Val::v10> v10{};
            constexpr MPL::Value<fltdiv1Val,fltdiv1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,fltdiv1Val> fltdiv1{}; 
        ///Filter Division Set 2
        enum class fltdiv2Val {
            v000=0x00000000,     ///<BUSCLK/32
            v001=0x00000001,     ///<BUSCLK/64
            v010=0x00000002,     ///<BUSCLK/128
            v011=0x00000003,     ///<BUSCLK/256
            v100=0x00000004,     ///<BUSCLK/512
            v101=0x00000005,     ///<BUSCLK/1024
            v110=0x00000006,     ///<BUSCLK/2048
            v111=0x00000007,     ///<BUSCLK/4096
        };
        namespace fltdiv2ValC{
            constexpr MPL::Value<fltdiv2Val,fltdiv2Val::v000> v000{};
            constexpr MPL::Value<fltdiv2Val,fltdiv2Val::v001> v001{};
            constexpr MPL::Value<fltdiv2Val,fltdiv2Val::v010> v010{};
            constexpr MPL::Value<fltdiv2Val,fltdiv2Val::v011> v011{};
            constexpr MPL::Value<fltdiv2Val,fltdiv2Val::v100> v100{};
            constexpr MPL::Value<fltdiv2Val,fltdiv2Val::v101> v101{};
            constexpr MPL::Value<fltdiv2Val,fltdiv2Val::v110> v110{};
            constexpr MPL::Value<fltdiv2Val,fltdiv2Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,fltdiv2Val> fltdiv2{}; 
        ///Filter Division Set 3
        enum class fltdiv3Val {
            v000=0x00000000,     ///<LPOCLK
            v001=0x00000001,     ///<LPOCLK/2
            v010=0x00000002,     ///<LPOCLK/4
            v011=0x00000003,     ///<LPOCLK/8
            v100=0x00000004,     ///<LPOCLK/16
            v101=0x00000005,     ///<LPOCLK/32
            v110=0x00000006,     ///<LPOCLK/64
            v111=0x00000007,     ///<LPOCLK/128
        };
        namespace fltdiv3ValC{
            constexpr MPL::Value<fltdiv3Val,fltdiv3Val::v000> v000{};
            constexpr MPL::Value<fltdiv3Val,fltdiv3Val::v001> v001{};
            constexpr MPL::Value<fltdiv3Val,fltdiv3Val::v010> v010{};
            constexpr MPL::Value<fltdiv3Val,fltdiv3Val::v011> v011{};
            constexpr MPL::Value<fltdiv3Val,fltdiv3Val::v100> v100{};
            constexpr MPL::Value<fltdiv3Val,fltdiv3Val::v101> v101{};
            constexpr MPL::Value<fltdiv3Val,fltdiv3Val::v110> v110{};
            constexpr MPL::Value<fltdiv3Val,fltdiv3Val::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,fltdiv3Val> fltdiv3{}; 
    }
    namespace PortIoflt1{    ///<Port Filter Register 1
        using Addr = Register::Address<0x40049004,0xffff000c,0,unsigned>;
        ///Filter Selection for Input from PTI
        enum class fltiVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        namespace fltiValC{
            constexpr MPL::Value<fltiVal,fltiVal::v00> v00{};
            constexpr MPL::Value<fltiVal,fltiVal::v01> v01{};
            constexpr MPL::Value<fltiVal,fltiVal::v10> v10{};
            constexpr MPL::Value<fltiVal,fltiVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,fltiVal> flti{}; 
        ///Filter Selection for Input from IRQ
        enum class fltirqVal {
            v00=0x00000000,     ///<No filter
            v01=0x00000001,     ///<Selects FLTDIV1, and will switch to FLTDIV3 in Stop mode automatically.
            v10=0x00000002,     ///<Selects FLTDIV2, and will switch to FLTDIV3 in Stop mode automatically.
            v11=0x00000003,     ///<FLTDIV3
        };
        namespace fltirqValC{
            constexpr MPL::Value<fltirqVal,fltirqVal::v00> v00{};
            constexpr MPL::Value<fltirqVal,fltirqVal::v01> v01{};
            constexpr MPL::Value<fltirqVal,fltirqVal::v10> v10{};
            constexpr MPL::Value<fltirqVal,fltirqVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,fltirqVal> fltirq{}; 
        ///Filter Selection For Input from FTM0CH0/FTM0CH1
        enum class fltftm0Val {
            v00=0x00000000,     ///<No filter
            v01=0x00000001,     ///<Select FLTDIV1
            v10=0x00000002,     ///<Select FLTDIV2
            v11=0x00000003,     ///<Select FLTDIV3
        };
        namespace fltftm0ValC{
            constexpr MPL::Value<fltftm0Val,fltftm0Val::v00> v00{};
            constexpr MPL::Value<fltftm0Val,fltftm0Val::v01> v01{};
            constexpr MPL::Value<fltftm0Val,fltftm0Val::v10> v10{};
            constexpr MPL::Value<fltftm0Val,fltftm0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,fltftm0Val> fltftm0{}; 
        ///Filter Selection For Input from FTM1CH0/FTM1CH1
        enum class fltftm1Val {
            v00=0x00000000,     ///<No filter
            v01=0x00000001,     ///<Select FLTDIV1
            v10=0x00000002,     ///<Select FLTDIV2
            v11=0x00000003,     ///<Select FLTDIV3
        };
        namespace fltftm1ValC{
            constexpr MPL::Value<fltftm1Val,fltftm1Val::v00> v00{};
            constexpr MPL::Value<fltftm1Val,fltftm1Val::v01> v01{};
            constexpr MPL::Value<fltftm1Val,fltftm1Val::v10> v10{};
            constexpr MPL::Value<fltftm1Val,fltftm1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,fltftm1Val> fltftm1{}; 
        ///Filter Selection For Input from PWT_IN1/PWT_IN0
        enum class fltpwtVal {
            v00=0x00000000,     ///<No filter
            v01=0x00000001,     ///<Select FLTDIV1
            v10=0x00000002,     ///<Select FLTDIV2
            v11=0x00000003,     ///<Select FLTDIV3
        };
        namespace fltpwtValC{
            constexpr MPL::Value<fltpwtVal,fltpwtVal::v00> v00{};
            constexpr MPL::Value<fltpwtVal,fltpwtVal::v01> v01{};
            constexpr MPL::Value<fltpwtVal,fltpwtVal::v10> v10{};
            constexpr MPL::Value<fltpwtVal,fltpwtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,fltpwtVal> fltpwt{}; 
        ///Filter Selection For Input from SCL0/SDA0
        enum class flti2c0Val {
            v00=0x00000000,     ///<No filter
            v01=0x00000001,     ///<Select FLTDIV1
            v10=0x00000002,     ///<Select FLTDIV2
            v11=0x00000003,     ///<Select BUSCLK
        };
        namespace flti2c0ValC{
            constexpr MPL::Value<flti2c0Val,flti2c0Val::v00> v00{};
            constexpr MPL::Value<flti2c0Val,flti2c0Val::v01> v01{};
            constexpr MPL::Value<flti2c0Val,flti2c0Val::v10> v10{};
            constexpr MPL::Value<flti2c0Val,flti2c0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,flti2c0Val> flti2c0{}; 
        ///Filter Selection For Input from SCL1/SDA1
        enum class flti2c1Val {
            v00=0x00000000,     ///<No filter
            v01=0x00000001,     ///<Select FLTDIV1
            v10=0x00000002,     ///<Select FLTDIV2
            v11=0x00000003,     ///<Select BUSCLK
        };
        namespace flti2c1ValC{
            constexpr MPL::Value<flti2c1Val,flti2c1Val::v00> v00{};
            constexpr MPL::Value<flti2c1Val,flti2c1Val::v01> v01{};
            constexpr MPL::Value<flti2c1Val,flti2c1Val::v10> v10{};
            constexpr MPL::Value<flti2c1Val,flti2c1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,flti2c1Val> flti2c1{}; 
    }
    namespace PortPue0{    ///<Port Pullup Enable Register 0
        using Addr = Register::Address<0x40049008,0x00000000,0,unsigned>;
        ///Pull Enable for Port A Bit 0
        enum class ptape0Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 0.
        };
        namespace ptape0ValC{
            constexpr MPL::Value<ptape0Val,ptape0Val::v0> v0{};
            constexpr MPL::Value<ptape0Val,ptape0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ptape0Val> ptape0{}; 
        ///Pull Enable for Port A Bit 1
        enum class ptape1Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 1.
        };
        namespace ptape1ValC{
            constexpr MPL::Value<ptape1Val,ptape1Val::v0> v0{};
            constexpr MPL::Value<ptape1Val,ptape1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ptape1Val> ptape1{}; 
        ///Pull Enable for Port A Bit 2
        enum class ptape2Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 2.
        };
        namespace ptape2ValC{
            constexpr MPL::Value<ptape2Val,ptape2Val::v0> v0{};
            constexpr MPL::Value<ptape2Val,ptape2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ptape2Val> ptape2{}; 
        ///Pull Enable for Port A Bit 3
        enum class ptape3Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 3.
        };
        namespace ptape3ValC{
            constexpr MPL::Value<ptape3Val,ptape3Val::v0> v0{};
            constexpr MPL::Value<ptape3Val,ptape3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ptape3Val> ptape3{}; 
        ///Pull Enable for Port A Bit 4
        enum class ptape4Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 4.
        };
        namespace ptape4ValC{
            constexpr MPL::Value<ptape4Val,ptape4Val::v0> v0{};
            constexpr MPL::Value<ptape4Val,ptape4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ptape4Val> ptape4{}; 
        ///Pull Enable for Port A Bit 5
        enum class ptape5Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 5.
        };
        namespace ptape5ValC{
            constexpr MPL::Value<ptape5Val,ptape5Val::v0> v0{};
            constexpr MPL::Value<ptape5Val,ptape5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ptape5Val> ptape5{}; 
        ///Pull Enable for Port A Bit 6
        enum class ptape6Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 6.
        };
        namespace ptape6ValC{
            constexpr MPL::Value<ptape6Val,ptape6Val::v0> v0{};
            constexpr MPL::Value<ptape6Val,ptape6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ptape6Val> ptape6{}; 
        ///Pull Enable for Port A Bit 7
        enum class ptape7Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 7.
        };
        namespace ptape7ValC{
            constexpr MPL::Value<ptape7Val,ptape7Val::v0> v0{};
            constexpr MPL::Value<ptape7Val,ptape7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ptape7Val> ptape7{}; 
        ///Pull Enable for Port B Bit 0
        enum class ptbpe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 0.
        };
        namespace ptbpe0ValC{
            constexpr MPL::Value<ptbpe0Val,ptbpe0Val::v0> v0{};
            constexpr MPL::Value<ptbpe0Val,ptbpe0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ptbpe0Val> ptbpe0{}; 
        ///Pull Enable for Port B Bit 1
        enum class ptbpe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 1.
        };
        namespace ptbpe1ValC{
            constexpr MPL::Value<ptbpe1Val,ptbpe1Val::v0> v0{};
            constexpr MPL::Value<ptbpe1Val,ptbpe1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ptbpe1Val> ptbpe1{}; 
        ///Pull Enable for Port B Bit 2
        enum class ptbpe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 2.
        };
        namespace ptbpe2ValC{
            constexpr MPL::Value<ptbpe2Val,ptbpe2Val::v0> v0{};
            constexpr MPL::Value<ptbpe2Val,ptbpe2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ptbpe2Val> ptbpe2{}; 
        ///Pull Enable for Port B Bit 3
        enum class ptbpe3Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 3.
        };
        namespace ptbpe3ValC{
            constexpr MPL::Value<ptbpe3Val,ptbpe3Val::v0> v0{};
            constexpr MPL::Value<ptbpe3Val,ptbpe3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ptbpe3Val> ptbpe3{}; 
        ///Pull Enable for Port B Bit 4
        enum class ptbpe4Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 4.
        };
        namespace ptbpe4ValC{
            constexpr MPL::Value<ptbpe4Val,ptbpe4Val::v0> v0{};
            constexpr MPL::Value<ptbpe4Val,ptbpe4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ptbpe4Val> ptbpe4{}; 
        ///Pull Enable for Port B Bit 5
        enum class ptbpe5Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 5.
        };
        namespace ptbpe5ValC{
            constexpr MPL::Value<ptbpe5Val,ptbpe5Val::v0> v0{};
            constexpr MPL::Value<ptbpe5Val,ptbpe5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ptbpe5Val> ptbpe5{}; 
        ///Pull Enable for Port B Bit 6
        enum class ptbpe6Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 6.
        };
        namespace ptbpe6ValC{
            constexpr MPL::Value<ptbpe6Val,ptbpe6Val::v0> v0{};
            constexpr MPL::Value<ptbpe6Val,ptbpe6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ptbpe6Val> ptbpe6{}; 
        ///Pull Enable for Port B Bit 7
        enum class ptbpe7Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 7.
        };
        namespace ptbpe7ValC{
            constexpr MPL::Value<ptbpe7Val,ptbpe7Val::v0> v0{};
            constexpr MPL::Value<ptbpe7Val,ptbpe7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ptbpe7Val> ptbpe7{}; 
        ///Pull Enable for Port C Bit 0
        enum class ptcpe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 0.
        };
        namespace ptcpe0ValC{
            constexpr MPL::Value<ptcpe0Val,ptcpe0Val::v0> v0{};
            constexpr MPL::Value<ptcpe0Val,ptcpe0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ptcpe0Val> ptcpe0{}; 
        ///Pull Enable for Port C Bit 1
        enum class ptcpe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 1.
        };
        namespace ptcpe1ValC{
            constexpr MPL::Value<ptcpe1Val,ptcpe1Val::v0> v0{};
            constexpr MPL::Value<ptcpe1Val,ptcpe1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ptcpe1Val> ptcpe1{}; 
        ///Pull Enable for Port C Bit 2
        enum class ptcpe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 2.
        };
        namespace ptcpe2ValC{
            constexpr MPL::Value<ptcpe2Val,ptcpe2Val::v0> v0{};
            constexpr MPL::Value<ptcpe2Val,ptcpe2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ptcpe2Val> ptcpe2{}; 
        ///Pull Enable for Port C Bit 3
        enum class ptcpe3Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 3.
        };
        namespace ptcpe3ValC{
            constexpr MPL::Value<ptcpe3Val,ptcpe3Val::v0> v0{};
            constexpr MPL::Value<ptcpe3Val,ptcpe3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ptcpe3Val> ptcpe3{}; 
        ///Pull Enable for Port C Bit 4
        enum class ptcpe4Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 4.
        };
        namespace ptcpe4ValC{
            constexpr MPL::Value<ptcpe4Val,ptcpe4Val::v0> v0{};
            constexpr MPL::Value<ptcpe4Val,ptcpe4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ptcpe4Val> ptcpe4{}; 
        ///Pull Enable for Port C Bit 5
        enum class ptcpe5Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 5.
        };
        namespace ptcpe5ValC{
            constexpr MPL::Value<ptcpe5Val,ptcpe5Val::v0> v0{};
            constexpr MPL::Value<ptcpe5Val,ptcpe5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ptcpe5Val> ptcpe5{}; 
        ///Pull Enable for Port C Bit 6
        enum class ptcpe6Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 6.
        };
        namespace ptcpe6ValC{
            constexpr MPL::Value<ptcpe6Val,ptcpe6Val::v0> v0{};
            constexpr MPL::Value<ptcpe6Val,ptcpe6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ptcpe6Val> ptcpe6{}; 
        ///Pull Enable for Port C Bit 7
        enum class ptcpe7Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 7.
        };
        namespace ptcpe7ValC{
            constexpr MPL::Value<ptcpe7Val,ptcpe7Val::v0> v0{};
            constexpr MPL::Value<ptcpe7Val,ptcpe7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ptcpe7Val> ptcpe7{}; 
        ///Pull Enable for Port D Bit 0
        enum class ptdpe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 0.
        };
        namespace ptdpe0ValC{
            constexpr MPL::Value<ptdpe0Val,ptdpe0Val::v0> v0{};
            constexpr MPL::Value<ptdpe0Val,ptdpe0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ptdpe0Val> ptdpe0{}; 
        ///Pull Enable for Port D Bit 1
        enum class ptdpe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 1.
        };
        namespace ptdpe1ValC{
            constexpr MPL::Value<ptdpe1Val,ptdpe1Val::v0> v0{};
            constexpr MPL::Value<ptdpe1Val,ptdpe1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ptdpe1Val> ptdpe1{}; 
        ///Pull Enable for Port D Bit 2
        enum class ptdpe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 2.
        };
        namespace ptdpe2ValC{
            constexpr MPL::Value<ptdpe2Val,ptdpe2Val::v0> v0{};
            constexpr MPL::Value<ptdpe2Val,ptdpe2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,ptdpe2Val> ptdpe2{}; 
        ///Pull Enable for Port D Bit 3
        enum class ptdpe3Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 3.
        };
        namespace ptdpe3ValC{
            constexpr MPL::Value<ptdpe3Val,ptdpe3Val::v0> v0{};
            constexpr MPL::Value<ptdpe3Val,ptdpe3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,ptdpe3Val> ptdpe3{}; 
        ///Pull Enable for Port D Bit 4
        enum class ptdpe4Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 4.
        };
        namespace ptdpe4ValC{
            constexpr MPL::Value<ptdpe4Val,ptdpe4Val::v0> v0{};
            constexpr MPL::Value<ptdpe4Val,ptdpe4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,ptdpe4Val> ptdpe4{}; 
        ///Pull Enable for Port D Bit 5
        enum class ptdpe5Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 5.
        };
        namespace ptdpe5ValC{
            constexpr MPL::Value<ptdpe5Val,ptdpe5Val::v0> v0{};
            constexpr MPL::Value<ptdpe5Val,ptdpe5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,ptdpe5Val> ptdpe5{}; 
        ///Pull Enable for Port D Bit 6
        enum class ptdpe6Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 6.
        };
        namespace ptdpe6ValC{
            constexpr MPL::Value<ptdpe6Val,ptdpe6Val::v0> v0{};
            constexpr MPL::Value<ptdpe6Val,ptdpe6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,ptdpe6Val> ptdpe6{}; 
        ///Pull Enable for Port D Bit 7
        enum class ptdpe7Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 7.
        };
        namespace ptdpe7ValC{
            constexpr MPL::Value<ptdpe7Val,ptdpe7Val::v0> v0{};
            constexpr MPL::Value<ptdpe7Val,ptdpe7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ptdpe7Val> ptdpe7{}; 
    }
    namespace PortPue1{    ///<Port Pullup Enable Register 1
        using Addr = Register::Address<0x4004900c,0x00000000,0,unsigned>;
        ///Pull Enable for Port E Bit 0
        enum class ptepe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 0.
        };
        namespace ptepe0ValC{
            constexpr MPL::Value<ptepe0Val,ptepe0Val::v0> v0{};
            constexpr MPL::Value<ptepe0Val,ptepe0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ptepe0Val> ptepe0{}; 
        ///Pull Enable for Port E Bit 1
        enum class ptepe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 1.
        };
        namespace ptepe1ValC{
            constexpr MPL::Value<ptepe1Val,ptepe1Val::v0> v0{};
            constexpr MPL::Value<ptepe1Val,ptepe1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ptepe1Val> ptepe1{}; 
        ///Pull Enable for Port E Bit 2
        enum class ptepe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 2.
        };
        namespace ptepe2ValC{
            constexpr MPL::Value<ptepe2Val,ptepe2Val::v0> v0{};
            constexpr MPL::Value<ptepe2Val,ptepe2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ptepe2Val> ptepe2{}; 
        ///Pull Enable for Port E Bit 3
        enum class ptepe3Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 3.
        };
        namespace ptepe3ValC{
            constexpr MPL::Value<ptepe3Val,ptepe3Val::v0> v0{};
            constexpr MPL::Value<ptepe3Val,ptepe3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ptepe3Val> ptepe3{}; 
        ///Pull Enable for Port E Bit 4
        enum class ptepe4Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 4.
        };
        namespace ptepe4ValC{
            constexpr MPL::Value<ptepe4Val,ptepe4Val::v0> v0{};
            constexpr MPL::Value<ptepe4Val,ptepe4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ptepe4Val> ptepe4{}; 
        ///Pull Enable for Port E Bit 5
        enum class ptepe5Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 5.
        };
        namespace ptepe5ValC{
            constexpr MPL::Value<ptepe5Val,ptepe5Val::v0> v0{};
            constexpr MPL::Value<ptepe5Val,ptepe5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ptepe5Val> ptepe5{}; 
        ///Pull Enable for Port E Bit 6
        enum class ptepe6Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 6.
        };
        namespace ptepe6ValC{
            constexpr MPL::Value<ptepe6Val,ptepe6Val::v0> v0{};
            constexpr MPL::Value<ptepe6Val,ptepe6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ptepe6Val> ptepe6{}; 
        ///Pull Enable for Port E Bit 7
        enum class ptepe7Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 7.
        };
        namespace ptepe7ValC{
            constexpr MPL::Value<ptepe7Val,ptepe7Val::v0> v0{};
            constexpr MPL::Value<ptepe7Val,ptepe7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ptepe7Val> ptepe7{}; 
        ///Pull Enable for Port F Bit 0
        enum class ptfpe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 0.
        };
        namespace ptfpe0ValC{
            constexpr MPL::Value<ptfpe0Val,ptfpe0Val::v0> v0{};
            constexpr MPL::Value<ptfpe0Val,ptfpe0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ptfpe0Val> ptfpe0{}; 
        ///Pull Enable for Port F Bit 1
        enum class ptfpe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 1.
        };
        namespace ptfpe1ValC{
            constexpr MPL::Value<ptfpe1Val,ptfpe1Val::v0> v0{};
            constexpr MPL::Value<ptfpe1Val,ptfpe1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ptfpe1Val> ptfpe1{}; 
        ///Pull Enable for Port F Bit 2
        enum class ptfpe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 2.
        };
        namespace ptfpe2ValC{
            constexpr MPL::Value<ptfpe2Val,ptfpe2Val::v0> v0{};
            constexpr MPL::Value<ptfpe2Val,ptfpe2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ptfpe2Val> ptfpe2{}; 
        ///Pull Enable for Port F Bit 3
        enum class ptfpe3Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 3.
        };
        namespace ptfpe3ValC{
            constexpr MPL::Value<ptfpe3Val,ptfpe3Val::v0> v0{};
            constexpr MPL::Value<ptfpe3Val,ptfpe3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ptfpe3Val> ptfpe3{}; 
        ///Pull Enable for Port F Bit 4
        enum class ptfpe4Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 4.
        };
        namespace ptfpe4ValC{
            constexpr MPL::Value<ptfpe4Val,ptfpe4Val::v0> v0{};
            constexpr MPL::Value<ptfpe4Val,ptfpe4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,ptfpe4Val> ptfpe4{}; 
        ///Pull Enable for Port F Bit 5
        enum class ptfpe5Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 5.
        };
        namespace ptfpe5ValC{
            constexpr MPL::Value<ptfpe5Val,ptfpe5Val::v0> v0{};
            constexpr MPL::Value<ptfpe5Val,ptfpe5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,ptfpe5Val> ptfpe5{}; 
        ///Pull Enable for Port F Bit 6
        enum class ptfpe6Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 6.
        };
        namespace ptfpe6ValC{
            constexpr MPL::Value<ptfpe6Val,ptfpe6Val::v0> v0{};
            constexpr MPL::Value<ptfpe6Val,ptfpe6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ptfpe6Val> ptfpe6{}; 
        ///Pull Enable for Port F Bit 7
        enum class ptfpe7Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 7.
        };
        namespace ptfpe7ValC{
            constexpr MPL::Value<ptfpe7Val,ptfpe7Val::v0> v0{};
            constexpr MPL::Value<ptfpe7Val,ptfpe7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,ptfpe7Val> ptfpe7{}; 
        ///Pull Enable for Port G Bit 0
        enum class ptgpe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port G bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port G bit 0.
        };
        namespace ptgpe0ValC{
            constexpr MPL::Value<ptgpe0Val,ptgpe0Val::v0> v0{};
            constexpr MPL::Value<ptgpe0Val,ptgpe0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ptgpe0Val> ptgpe0{}; 
        ///Pull Enable for Port G Bit 1
        enum class ptgpe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port G bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port G bit 1.
        };
        namespace ptgpe1ValC{
            constexpr MPL::Value<ptgpe1Val,ptgpe1Val::v0> v0{};
            constexpr MPL::Value<ptgpe1Val,ptgpe1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ptgpe1Val> ptgpe1{}; 
        ///Pull Enable for Port G Bit 2
        enum class ptgpe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port G bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port G bit 2.
        };
        namespace ptgpe2ValC{
            constexpr MPL::Value<ptgpe2Val,ptgpe2Val::v0> v0{};
            constexpr MPL::Value<ptgpe2Val,ptgpe2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,ptgpe2Val> ptgpe2{}; 
        ///Pull Enable for Port G Bit 3
        enum class ptgpe3Val {
            v0=0x00000000,     ///<Pullup is disabled for port G bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port G bit 3.
        };
        namespace ptgpe3ValC{
            constexpr MPL::Value<ptgpe3Val,ptgpe3Val::v0> v0{};
            constexpr MPL::Value<ptgpe3Val,ptgpe3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ptgpe3Val> ptgpe3{}; 
        ///Pull Enable for Port G Bit 4
        enum class ptgpe4Val {
            v0=0x00000000,     ///<Pullup is disabled for port G bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port G bit 4.
        };
        namespace ptgpe4ValC{
            constexpr MPL::Value<ptgpe4Val,ptgpe4Val::v0> v0{};
            constexpr MPL::Value<ptgpe4Val,ptgpe4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,ptgpe4Val> ptgpe4{}; 
        ///Pull Enable for Port G Bit 5
        enum class ptgpe5Val {
            v0=0x00000000,     ///<Pullup is disabled for port G bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port G bit 5.
        };
        namespace ptgpe5ValC{
            constexpr MPL::Value<ptgpe5Val,ptgpe5Val::v0> v0{};
            constexpr MPL::Value<ptgpe5Val,ptgpe5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ptgpe5Val> ptgpe5{}; 
        ///Pull Enable for Port G Bit 6
        enum class ptgpe6Val {
            v0=0x00000000,     ///<Pullup is disabled for port G bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port G bit 6.
        };
        namespace ptgpe6ValC{
            constexpr MPL::Value<ptgpe6Val,ptgpe6Val::v0> v0{};
            constexpr MPL::Value<ptgpe6Val,ptgpe6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,ptgpe6Val> ptgpe6{}; 
        ///Pull Enable for Port G Bit 7
        enum class ptgpe7Val {
            v0=0x00000000,     ///<Pullup is disabled for port G bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port G bit 7.
        };
        namespace ptgpe7ValC{
            constexpr MPL::Value<ptgpe7Val,ptgpe7Val::v0> v0{};
            constexpr MPL::Value<ptgpe7Val,ptgpe7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,ptgpe7Val> ptgpe7{}; 
        ///Pull Enable for Port H Bit 0
        enum class pthpe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port H bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port H bit 0.
        };
        namespace pthpe0ValC{
            constexpr MPL::Value<pthpe0Val,pthpe0Val::v0> v0{};
            constexpr MPL::Value<pthpe0Val,pthpe0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pthpe0Val> pthpe0{}; 
        ///Pull Enable for Port H Bit 1
        enum class pthpe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port H bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port H bit 1.
        };
        namespace pthpe1ValC{
            constexpr MPL::Value<pthpe1Val,pthpe1Val::v0> v0{};
            constexpr MPL::Value<pthpe1Val,pthpe1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,pthpe1Val> pthpe1{}; 
        ///Pull Enable for Port H Bit 2
        enum class pthpe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port H bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port H bit 2.
        };
        namespace pthpe2ValC{
            constexpr MPL::Value<pthpe2Val,pthpe2Val::v0> v0{};
            constexpr MPL::Value<pthpe2Val,pthpe2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,pthpe2Val> pthpe2{}; 
        ///Pull Enable for Port H Bit 3
        enum class pthpe3Val {
            v0=0x00000000,     ///<Pullup is disabled for port H bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port H bit 3.
        };
        namespace pthpe3ValC{
            constexpr MPL::Value<pthpe3Val,pthpe3Val::v0> v0{};
            constexpr MPL::Value<pthpe3Val,pthpe3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,pthpe3Val> pthpe3{}; 
        ///Pull Enable for Port H Bit 4
        enum class pthpe4Val {
            v0=0x00000000,     ///<Pullup is disabled for port H bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port H bit 4.
        };
        namespace pthpe4ValC{
            constexpr MPL::Value<pthpe4Val,pthpe4Val::v0> v0{};
            constexpr MPL::Value<pthpe4Val,pthpe4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,pthpe4Val> pthpe4{}; 
        ///Pull Enable for Port H Bit 5
        enum class pthpe5Val {
            v0=0x00000000,     ///<Pullup is disabled for port H bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port H bit 5.
        };
        namespace pthpe5ValC{
            constexpr MPL::Value<pthpe5Val,pthpe5Val::v0> v0{};
            constexpr MPL::Value<pthpe5Val,pthpe5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,pthpe5Val> pthpe5{}; 
        ///Pull Enable for Port H Bit 6
        enum class pthpe6Val {
            v0=0x00000000,     ///<Pullup is disabled for port H bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port H bit 6.
        };
        namespace pthpe6ValC{
            constexpr MPL::Value<pthpe6Val,pthpe6Val::v0> v0{};
            constexpr MPL::Value<pthpe6Val,pthpe6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,pthpe6Val> pthpe6{}; 
        ///Pull Enable for Port H Bit 7
        enum class pthpe7Val {
            v0=0x00000000,     ///<Pullup is disabled for port H bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port H bit 7.
        };
        namespace pthpe7ValC{
            constexpr MPL::Value<pthpe7Val,pthpe7Val::v0> v0{};
            constexpr MPL::Value<pthpe7Val,pthpe7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,pthpe7Val> pthpe7{}; 
    }
    namespace PortPue2{    ///<Port Pullup Enable Register 2
        using Addr = Register::Address<0x40049010,0xffffff80,0,unsigned>;
        ///Pull Enable for Port I Bit 0
        enum class ptipe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port I bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port I bit 0.
        };
        namespace ptipe0ValC{
            constexpr MPL::Value<ptipe0Val,ptipe0Val::v0> v0{};
            constexpr MPL::Value<ptipe0Val,ptipe0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ptipe0Val> ptipe0{}; 
        ///Pull Enable for Port I Bit 1
        enum class ptipe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port I bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port I bit 1.
        };
        namespace ptipe1ValC{
            constexpr MPL::Value<ptipe1Val,ptipe1Val::v0> v0{};
            constexpr MPL::Value<ptipe1Val,ptipe1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ptipe1Val> ptipe1{}; 
        ///Pull Enable for Port I Bit 2
        enum class ptipe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port I bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port I bit 2.
        };
        namespace ptipe2ValC{
            constexpr MPL::Value<ptipe2Val,ptipe2Val::v0> v0{};
            constexpr MPL::Value<ptipe2Val,ptipe2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ptipe2Val> ptipe2{}; 
        ///Pull Enable for Port I Bit 3
        enum class ptipe3Val {
            v0=0x00000000,     ///<Pullup is disabled for port I bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port I bit 3.
        };
        namespace ptipe3ValC{
            constexpr MPL::Value<ptipe3Val,ptipe3Val::v0> v0{};
            constexpr MPL::Value<ptipe3Val,ptipe3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ptipe3Val> ptipe3{}; 
        ///Pull Enable for Port I Bit 4
        enum class ptipe4Val {
            v0=0x00000000,     ///<Pullup is disabled for port I bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port I bit 4.
        };
        namespace ptipe4ValC{
            constexpr MPL::Value<ptipe4Val,ptipe4Val::v0> v0{};
            constexpr MPL::Value<ptipe4Val,ptipe4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ptipe4Val> ptipe4{}; 
        ///Pull Enable for Port I Bit 5
        enum class ptipe5Val {
            v0=0x00000000,     ///<Pullup is disabled for port I bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port I bit 5.
        };
        namespace ptipe5ValC{
            constexpr MPL::Value<ptipe5Val,ptipe5Val::v0> v0{};
            constexpr MPL::Value<ptipe5Val,ptipe5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ptipe5Val> ptipe5{}; 
        ///Pull Enable for Port I Bit 6
        enum class ptipe6Val {
            v0=0x00000000,     ///<Pullup is disabled for port I bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port I bit 6.
        };
        namespace ptipe6ValC{
            constexpr MPL::Value<ptipe6Val,ptipe6Val::v0> v0{};
            constexpr MPL::Value<ptipe6Val,ptipe6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ptipe6Val> ptipe6{}; 
    }
    namespace PortHdrve{    ///<Port High Drive Enable Register
        using Addr = Register::Address<0x40049014,0xffffff00,0,unsigned>;
        ///High Current Drive Capability of PTB4
        enum class ptb4Val {
            v0=0x00000000,     ///<PTB4 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTB4 is enabled to offer high current drive capability.
        };
        namespace ptb4ValC{
            constexpr MPL::Value<ptb4Val,ptb4Val::v0> v0{};
            constexpr MPL::Value<ptb4Val,ptb4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ptb4Val> ptb4{}; 
        ///High Current Drive Capability of PTB5
        enum class ptb5Val {
            v0=0x00000000,     ///<PTB5 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTB5 is enabled to offer high current drive capability.
        };
        namespace ptb5ValC{
            constexpr MPL::Value<ptb5Val,ptb5Val::v0> v0{};
            constexpr MPL::Value<ptb5Val,ptb5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ptb5Val> ptb5{}; 
        ///High Current Drive Capability of PTD0
        enum class ptd0Val {
            v0=0x00000000,     ///<PTD0 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTD0 is enabled to offer high current drive capability.
        };
        namespace ptd0ValC{
            constexpr MPL::Value<ptd0Val,ptd0Val::v0> v0{};
            constexpr MPL::Value<ptd0Val,ptd0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ptd0Val> ptd0{}; 
        ///High Current Drive Capability of PTD1
        enum class ptd1Val {
            v0=0x00000000,     ///<PTD1 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTD1 is enable to offer high current drive capability.
        };
        namespace ptd1ValC{
            constexpr MPL::Value<ptd1Val,ptd1Val::v0> v0{};
            constexpr MPL::Value<ptd1Val,ptd1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ptd1Val> ptd1{}; 
        ///High Current Drive Capability of PTE0
        enum class pte0Val {
            v0=0x00000000,     ///<PTE0 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTE0 is enable to offer high current drive capability.
        };
        namespace pte0ValC{
            constexpr MPL::Value<pte0Val,pte0Val::v0> v0{};
            constexpr MPL::Value<pte0Val,pte0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pte0Val> pte0{}; 
        ///High Current Drive Capability of PTE1
        enum class pte1Val {
            v0=0x00000000,     ///<PTE1 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTE1 is enabled to offer high current drive capability.
        };
        namespace pte1ValC{
            constexpr MPL::Value<pte1Val,pte1Val::v0> v0{};
            constexpr MPL::Value<pte1Val,pte1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,pte1Val> pte1{}; 
        ///High Current Drive Capability of PTH0
        enum class pth0Val {
            v0=0x00000000,     ///<PTH0 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTH0 is enabled to offer high current drive capability.
        };
        namespace pth0ValC{
            constexpr MPL::Value<pth0Val,pth0Val::v0> v0{};
            constexpr MPL::Value<pth0Val,pth0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pth0Val> pth0{}; 
        ///High Current Drive Capability of PTH1
        enum class pth1Val {
            v0=0x00000000,     ///<PTH1 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTH1 is enabled to offer high current drive capability.
        };
        namespace pth1ValC{
            constexpr MPL::Value<pth1Val,pth1Val::v0> v0{};
            constexpr MPL::Value<pth1Val,pth1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pth1Val> pth1{}; 
    }
}
