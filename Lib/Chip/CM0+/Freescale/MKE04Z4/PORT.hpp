#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Port control and interrupts
    namespace PortIoflt{    ///<Port Filter Register
        using Addr = Register::Address<0x40049000,0x000003c0,0,unsigned>;
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
        ///Filter Selection For Input from SCL/SDA
        enum class fltiicVal {
            v00=0x00000000,     ///<No filter
            v01=0x00000001,     ///<Select FLTDIV1
            v10=0x00000002,     ///<Select FLTDIV2
            v11=0x00000003,     ///<Select BUSCLK
        };
        namespace fltiicValC{
            constexpr MPL::Value<fltiicVal,fltiicVal::v00> v00{};
            constexpr MPL::Value<fltiicVal,fltiicVal::v01> v01{};
            constexpr MPL::Value<fltiicVal,fltiicVal::v10> v10{};
            constexpr MPL::Value<fltiicVal,fltiicVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,fltiicVal> fltiic{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,fltftm0Val> fltftm0{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,fltpwtVal> fltpwt{}; 
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
    namespace PortPuel{    ///<Port Pullup Enable Low Register
        using Addr = Register::Address<0x40049004,0xffc00000,0,unsigned>;
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
    }
    namespace PortHdrve{    ///<Port High Drive Enable Register
        using Addr = Register::Address<0x4004900c,0xfffffff1,0,unsigned>;
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
        ///High Current Drive Capability of PTC1
        enum class ptc1Val {
            v0=0x00000000,     ///<PTC1 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTC1 is enabled to offer high current drive capability.
        };
        namespace ptc1ValC{
            constexpr MPL::Value<ptc1Val,ptc1Val::v0> v0{};
            constexpr MPL::Value<ptc1Val,ptc1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ptc1Val> ptc1{}; 
        ///High Current Drive Capability of PTC5
        enum class ptc5Val {
            v0=0x00000000,     ///<PTC5 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTC5 is enabled to offer high current drive capability.
        };
        namespace ptc5ValC{
            constexpr MPL::Value<ptc5Val,ptc5Val::v0> v0{};
            constexpr MPL::Value<ptc5Val,ptc5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ptc5Val> ptc5{}; 
    }
}
