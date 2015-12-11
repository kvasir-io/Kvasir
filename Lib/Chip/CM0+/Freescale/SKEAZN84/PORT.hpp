#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Port control and interrupts
    namespace PortIoflt{    ///<Port Filter Register
        using Addr = Register::Address<0x40049000,0x000003c0,0,unsigned>;
        ///Filter Selection for Input from PTA
        enum class FltaVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,FltaVal> flta{}; 
        namespace FltaValC{
            constexpr Register::FieldValue<decltype(flta)::Type,FltaVal::v00> v00{};
            constexpr Register::FieldValue<decltype(flta)::Type,FltaVal::v01> v01{};
            constexpr Register::FieldValue<decltype(flta)::Type,FltaVal::v10> v10{};
            constexpr Register::FieldValue<decltype(flta)::Type,FltaVal::v11> v11{};
        }
        ///Filter Selection for Input from PTB
        enum class FltbVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,FltbVal> fltb{}; 
        namespace FltbValC{
            constexpr Register::FieldValue<decltype(fltb)::Type,FltbVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fltb)::Type,FltbVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fltb)::Type,FltbVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fltb)::Type,FltbVal::v11> v11{};
        }
        ///Filter Selection for Input from PTC
        enum class FltcVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,FltcVal> fltc{}; 
        namespace FltcValC{
            constexpr Register::FieldValue<decltype(fltc)::Type,FltcVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fltc)::Type,FltcVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fltc)::Type,FltcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fltc)::Type,FltcVal::v11> v11{};
        }
        ///Filter Selection For Input from SCL/SDA
        enum class FltiicVal {
            v00=0x00000000,     ///<No filter
            v01=0x00000001,     ///<Select FLTDIV1
            v10=0x00000002,     ///<Select FLTDIV2
            v11=0x00000003,     ///<Select BUSCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,FltiicVal> fltiic{}; 
        namespace FltiicValC{
            constexpr Register::FieldValue<decltype(fltiic)::Type,FltiicVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fltiic)::Type,FltiicVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fltiic)::Type,FltiicVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fltiic)::Type,FltiicVal::v11> v11{};
        }
        ///Filter Selection For Input from FTM0CH0/FTM0CH1
        enum class Fltftm0Val {
            v00=0x00000000,     ///<No filter
            v01=0x00000001,     ///<Select FLTDIV1
            v10=0x00000002,     ///<Select FLTDIV2
            v11=0x00000003,     ///<Select FLTDIV3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,Fltftm0Val> fltftm0{}; 
        namespace Fltftm0ValC{
            constexpr Register::FieldValue<decltype(fltftm0)::Type,Fltftm0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(fltftm0)::Type,Fltftm0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(fltftm0)::Type,Fltftm0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(fltftm0)::Type,Fltftm0Val::v11> v11{};
        }
        ///Filter Selection For Input from PWT_IN1/PWT_IN0
        enum class FltpwtVal {
            v00=0x00000000,     ///<No filter
            v01=0x00000001,     ///<Select FLTDIV1
            v10=0x00000002,     ///<Select FLTDIV2
            v11=0x00000003,     ///<Select FLTDIV3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,FltpwtVal> fltpwt{}; 
        namespace FltpwtValC{
            constexpr Register::FieldValue<decltype(fltpwt)::Type,FltpwtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fltpwt)::Type,FltpwtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fltpwt)::Type,FltpwtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fltpwt)::Type,FltpwtVal::v11> v11{};
        }
        ///Filter Selection for Input from RESET/IRQ
        enum class FltrstVal {
            v00=0x00000000,     ///<No filter.
            v01=0x00000001,     ///<Selects FLTDIV1, and will switch to FLTDIV3 in Stop mode automatically.
            v10=0x00000002,     ///<Selects FLTDIV2, and will switch to FLTDIV3 in Stop mode automatically.
            v11=0x00000003,     ///<FLTDIV3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,FltrstVal> fltrst{}; 
        namespace FltrstValC{
            constexpr Register::FieldValue<decltype(fltrst)::Type,FltrstVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fltrst)::Type,FltrstVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fltrst)::Type,FltrstVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fltrst)::Type,FltrstVal::v11> v11{};
        }
        ///Filter selection for Input from KBI0
        enum class Fltkbi0Val {
            v00=0x00000000,     ///<No filter.
            v01=0x00000001,     ///<Selects FLTDIV1, and will switch to FLTDIV3 in Stop mode automatically.
            v10=0x00000002,     ///<Selects FLTDIV2, and will switch to FLTDIV3 in Stop mode automatically.
            v11=0x00000003,     ///<FLTDIV3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,Fltkbi0Val> fltkbi0{}; 
        namespace Fltkbi0ValC{
            constexpr Register::FieldValue<decltype(fltkbi0)::Type,Fltkbi0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(fltkbi0)::Type,Fltkbi0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(fltkbi0)::Type,Fltkbi0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(fltkbi0)::Type,Fltkbi0Val::v11> v11{};
        }
        ///Filter Selection for Input from KBI1
        enum class Fltkbi1Val {
            v00=0x00000000,     ///<No filter
            v01=0x00000001,     ///<Selects FLTDIV1, and will switch to FLTDIV3 in Stop mode automatically.
            v10=0x00000002,     ///<Selects FLTDIV2, and will switch to FLTDIV3 in Stop mode automatically.
            v11=0x00000003,     ///<FLTDIV3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,Fltkbi1Val> fltkbi1{}; 
        namespace Fltkbi1ValC{
            constexpr Register::FieldValue<decltype(fltkbi1)::Type,Fltkbi1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(fltkbi1)::Type,Fltkbi1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(fltkbi1)::Type,Fltkbi1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(fltkbi1)::Type,Fltkbi1Val::v11> v11{};
        }
        ///Filter Selection for Input from NMI
        enum class FltnmiVal {
            v00=0x00000000,     ///<No filter.
            v01=0x00000001,     ///<Selects FLTDIV1, and will switch to FLTDIV3 in Stop mode automatically.
            v10=0x00000002,     ///<Selects FLTDIV2, and will switch to FLTDIV3 in Stop mode automatically.
            v11=0x00000003,     ///<FLTDIV3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,FltnmiVal> fltnmi{}; 
        namespace FltnmiValC{
            constexpr Register::FieldValue<decltype(fltnmi)::Type,FltnmiVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fltnmi)::Type,FltnmiVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fltnmi)::Type,FltnmiVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fltnmi)::Type,FltnmiVal::v11> v11{};
        }
        ///Filter Division Set 1
        enum class Fltdiv1Val {
            v00=0x00000000,     ///<BUSCLK/2
            v01=0x00000001,     ///<BUSCLK/4
            v10=0x00000002,     ///<BUSCLK/8
            v11=0x00000003,     ///<BUSCLK/16
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,Fltdiv1Val> fltdiv1{}; 
        namespace Fltdiv1ValC{
            constexpr Register::FieldValue<decltype(fltdiv1)::Type,Fltdiv1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(fltdiv1)::Type,Fltdiv1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(fltdiv1)::Type,Fltdiv1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(fltdiv1)::Type,Fltdiv1Val::v11> v11{};
        }
        ///Filter Division Set 2
        enum class Fltdiv2Val {
            v000=0x00000000,     ///<BUSCLK/32
            v001=0x00000001,     ///<BUSCLK/64
            v010=0x00000002,     ///<BUSCLK/128
            v011=0x00000003,     ///<BUSCLK/256
            v100=0x00000004,     ///<BUSCLK/512
            v101=0x00000005,     ///<BUSCLK/1024
            v110=0x00000006,     ///<BUSCLK/2048
            v111=0x00000007,     ///<BUSCLK/4096
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,Fltdiv2Val> fltdiv2{}; 
        namespace Fltdiv2ValC{
            constexpr Register::FieldValue<decltype(fltdiv2)::Type,Fltdiv2Val::v000> v000{};
            constexpr Register::FieldValue<decltype(fltdiv2)::Type,Fltdiv2Val::v001> v001{};
            constexpr Register::FieldValue<decltype(fltdiv2)::Type,Fltdiv2Val::v010> v010{};
            constexpr Register::FieldValue<decltype(fltdiv2)::Type,Fltdiv2Val::v011> v011{};
            constexpr Register::FieldValue<decltype(fltdiv2)::Type,Fltdiv2Val::v100> v100{};
            constexpr Register::FieldValue<decltype(fltdiv2)::Type,Fltdiv2Val::v101> v101{};
            constexpr Register::FieldValue<decltype(fltdiv2)::Type,Fltdiv2Val::v110> v110{};
            constexpr Register::FieldValue<decltype(fltdiv2)::Type,Fltdiv2Val::v111> v111{};
        }
        ///Filter Division Set 3
        enum class Fltdiv3Val {
            v000=0x00000000,     ///<LPOCLK
            v001=0x00000001,     ///<LPOCLK/2
            v010=0x00000002,     ///<LPOCLK/4
            v011=0x00000003,     ///<LPOCLK/8
            v100=0x00000004,     ///<LPOCLK/16
            v101=0x00000005,     ///<LPOCLK/32
            v110=0x00000006,     ///<LPOCLK/64
            v111=0x00000007,     ///<LPOCLK/128
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,Fltdiv3Val> fltdiv3{}; 
        namespace Fltdiv3ValC{
            constexpr Register::FieldValue<decltype(fltdiv3)::Type,Fltdiv3Val::v000> v000{};
            constexpr Register::FieldValue<decltype(fltdiv3)::Type,Fltdiv3Val::v001> v001{};
            constexpr Register::FieldValue<decltype(fltdiv3)::Type,Fltdiv3Val::v010> v010{};
            constexpr Register::FieldValue<decltype(fltdiv3)::Type,Fltdiv3Val::v011> v011{};
            constexpr Register::FieldValue<decltype(fltdiv3)::Type,Fltdiv3Val::v100> v100{};
            constexpr Register::FieldValue<decltype(fltdiv3)::Type,Fltdiv3Val::v101> v101{};
            constexpr Register::FieldValue<decltype(fltdiv3)::Type,Fltdiv3Val::v110> v110{};
            constexpr Register::FieldValue<decltype(fltdiv3)::Type,Fltdiv3Val::v111> v111{};
        }
    }
    namespace PortPuel{    ///<Port Pullup Enable Low Register
        using Addr = Register::Address<0x40049004,0xffc00000,0,unsigned>;
        ///Pull Enable for Port A Bit 0
        enum class Ptape0Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ptape0Val> ptape0{}; 
        namespace Ptape0ValC{
            constexpr Register::FieldValue<decltype(ptape0)::Type,Ptape0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptape0)::Type,Ptape0Val::v1> v1{};
        }
        ///Pull Enable for Port A Bit 1
        enum class Ptape1Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ptape1Val> ptape1{}; 
        namespace Ptape1ValC{
            constexpr Register::FieldValue<decltype(ptape1)::Type,Ptape1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptape1)::Type,Ptape1Val::v1> v1{};
        }
        ///Pull Enable for Port A Bit 2
        enum class Ptape2Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ptape2Val> ptape2{}; 
        namespace Ptape2ValC{
            constexpr Register::FieldValue<decltype(ptape2)::Type,Ptape2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptape2)::Type,Ptape2Val::v1> v1{};
        }
        ///Pull Enable for Port A Bit 3
        enum class Ptape3Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ptape3Val> ptape3{}; 
        namespace Ptape3ValC{
            constexpr Register::FieldValue<decltype(ptape3)::Type,Ptape3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptape3)::Type,Ptape3Val::v1> v1{};
        }
        ///Pull Enable for Port A Bit 4
        enum class Ptape4Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ptape4Val> ptape4{}; 
        namespace Ptape4ValC{
            constexpr Register::FieldValue<decltype(ptape4)::Type,Ptape4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptape4)::Type,Ptape4Val::v1> v1{};
        }
        ///Pull Enable for Port A Bit 5
        enum class Ptape5Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ptape5Val> ptape5{}; 
        namespace Ptape5ValC{
            constexpr Register::FieldValue<decltype(ptape5)::Type,Ptape5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptape5)::Type,Ptape5Val::v1> v1{};
        }
        ///Pull Enable for Port A Bit 6
        enum class Ptape6Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ptape6Val> ptape6{}; 
        namespace Ptape6ValC{
            constexpr Register::FieldValue<decltype(ptape6)::Type,Ptape6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptape6)::Type,Ptape6Val::v1> v1{};
        }
        ///Pull Enable for Port A Bit 7
        enum class Ptape7Val {
            v0=0x00000000,     ///<Pullup is disabled for port A bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port A bit 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ptape7Val> ptape7{}; 
        namespace Ptape7ValC{
            constexpr Register::FieldValue<decltype(ptape7)::Type,Ptape7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptape7)::Type,Ptape7Val::v1> v1{};
        }
        ///Pull Enable for Port B Bit 0
        enum class Ptbpe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ptbpe0Val> ptbpe0{}; 
        namespace Ptbpe0ValC{
            constexpr Register::FieldValue<decltype(ptbpe0)::Type,Ptbpe0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptbpe0)::Type,Ptbpe0Val::v1> v1{};
        }
        ///Pull Enable for Port B Bit 1
        enum class Ptbpe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ptbpe1Val> ptbpe1{}; 
        namespace Ptbpe1ValC{
            constexpr Register::FieldValue<decltype(ptbpe1)::Type,Ptbpe1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptbpe1)::Type,Ptbpe1Val::v1> v1{};
        }
        ///Pull Enable for Port B Bit 2
        enum class Ptbpe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ptbpe2Val> ptbpe2{}; 
        namespace Ptbpe2ValC{
            constexpr Register::FieldValue<decltype(ptbpe2)::Type,Ptbpe2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptbpe2)::Type,Ptbpe2Val::v1> v1{};
        }
        ///Pull Enable for Port B Bit 3
        enum class Ptbpe3Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ptbpe3Val> ptbpe3{}; 
        namespace Ptbpe3ValC{
            constexpr Register::FieldValue<decltype(ptbpe3)::Type,Ptbpe3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptbpe3)::Type,Ptbpe3Val::v1> v1{};
        }
        ///Pull Enable for Port B Bit 4
        enum class Ptbpe4Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ptbpe4Val> ptbpe4{}; 
        namespace Ptbpe4ValC{
            constexpr Register::FieldValue<decltype(ptbpe4)::Type,Ptbpe4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptbpe4)::Type,Ptbpe4Val::v1> v1{};
        }
        ///Pull Enable for Port B Bit 5
        enum class Ptbpe5Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ptbpe5Val> ptbpe5{}; 
        namespace Ptbpe5ValC{
            constexpr Register::FieldValue<decltype(ptbpe5)::Type,Ptbpe5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptbpe5)::Type,Ptbpe5Val::v1> v1{};
        }
        ///Pull Enable for Port B Bit 6
        enum class Ptbpe6Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ptbpe6Val> ptbpe6{}; 
        namespace Ptbpe6ValC{
            constexpr Register::FieldValue<decltype(ptbpe6)::Type,Ptbpe6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptbpe6)::Type,Ptbpe6Val::v1> v1{};
        }
        ///Pull Enable for Port B Bit 7
        enum class Ptbpe7Val {
            v0=0x00000000,     ///<Pullup is disabled for port B bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port B bit 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ptbpe7Val> ptbpe7{}; 
        namespace Ptbpe7ValC{
            constexpr Register::FieldValue<decltype(ptbpe7)::Type,Ptbpe7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptbpe7)::Type,Ptbpe7Val::v1> v1{};
        }
        ///Pull Enable for Port C Bit 0
        enum class Ptcpe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ptcpe0Val> ptcpe0{}; 
        namespace Ptcpe0ValC{
            constexpr Register::FieldValue<decltype(ptcpe0)::Type,Ptcpe0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptcpe0)::Type,Ptcpe0Val::v1> v1{};
        }
        ///Pull Enable for Port C Bit 1
        enum class Ptcpe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ptcpe1Val> ptcpe1{}; 
        namespace Ptcpe1ValC{
            constexpr Register::FieldValue<decltype(ptcpe1)::Type,Ptcpe1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptcpe1)::Type,Ptcpe1Val::v1> v1{};
        }
        ///Pull Enable for Port C Bit 2
        enum class Ptcpe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ptcpe2Val> ptcpe2{}; 
        namespace Ptcpe2ValC{
            constexpr Register::FieldValue<decltype(ptcpe2)::Type,Ptcpe2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptcpe2)::Type,Ptcpe2Val::v1> v1{};
        }
        ///Pull Enable for Port C Bit 3
        enum class Ptcpe3Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ptcpe3Val> ptcpe3{}; 
        namespace Ptcpe3ValC{
            constexpr Register::FieldValue<decltype(ptcpe3)::Type,Ptcpe3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptcpe3)::Type,Ptcpe3Val::v1> v1{};
        }
        ///Pull Enable for Port C Bit 4
        enum class Ptcpe4Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Ptcpe4Val> ptcpe4{}; 
        namespace Ptcpe4ValC{
            constexpr Register::FieldValue<decltype(ptcpe4)::Type,Ptcpe4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptcpe4)::Type,Ptcpe4Val::v1> v1{};
        }
        ///Pull Enable for Port C Bit 5
        enum class Ptcpe5Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Ptcpe5Val> ptcpe5{}; 
        namespace Ptcpe5ValC{
            constexpr Register::FieldValue<decltype(ptcpe5)::Type,Ptcpe5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptcpe5)::Type,Ptcpe5Val::v1> v1{};
        }
    }
    namespace PortHdrve{    ///<Port High Drive Enable Register
        using Addr = Register::Address<0x4004900c,0xfffffff1,0,unsigned>;
        ///High Current Drive Capability of PTB5
        enum class Ptb5Val {
            v0=0x00000000,     ///<PTB5 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTB5 is enabled to offer high current drive capability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ptb5Val> ptb5{}; 
        namespace Ptb5ValC{
            constexpr Register::FieldValue<decltype(ptb5)::Type,Ptb5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptb5)::Type,Ptb5Val::v1> v1{};
        }
        ///High Current Drive Capability of PTC1
        enum class Ptc1Val {
            v0=0x00000000,     ///<PTC1 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTC1 is enabled to offer high current drive capability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ptc1Val> ptc1{}; 
        namespace Ptc1ValC{
            constexpr Register::FieldValue<decltype(ptc1)::Type,Ptc1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptc1)::Type,Ptc1Val::v1> v1{};
        }
        ///High Current Drive Capability of PTC5
        enum class Ptc5Val {
            v0=0x00000000,     ///<PTC5 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTC5 is enabled to offer high current drive capability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ptc5Val> ptc5{}; 
        namespace Ptc5ValC{
            constexpr Register::FieldValue<decltype(ptc5)::Type,Ptc5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptc5)::Type,Ptc5Val::v1> v1{};
        }
    }
}
