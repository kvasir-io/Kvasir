#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Port control and interrupts
    namespace PortIoflt{    ///<Port Filter Register
        using Addr = Register::Address<0x40049000,0x00000000,0,unsigned>;
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
        }
        ///Filter Selection for Input from PTD
        enum class FltdVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,FltdVal> fltd{}; 
        namespace FltdValC{
            constexpr Register::FieldValue<decltype(fltd)::Type,FltdVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fltd)::Type,FltdVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fltd)::Type,FltdVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fltd)::Type,FltdVal::v11> v11{};
        }
        }
        ///Filter Selection for Input from PTD
        enum class FlteVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,FlteVal> flte{}; 
        namespace FlteValC{
            constexpr Register::FieldValue<decltype(flte)::Type,FlteVal::v00> v00{};
            constexpr Register::FieldValue<decltype(flte)::Type,FlteVal::v01> v01{};
            constexpr Register::FieldValue<decltype(flte)::Type,FlteVal::v10> v10{};
            constexpr Register::FieldValue<decltype(flte)::Type,FlteVal::v11> v11{};
        }
        }
        ///Filter Selection for Input from PTF
        enum class FltfVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,FltfVal> fltf{}; 
        namespace FltfValC{
            constexpr Register::FieldValue<decltype(fltf)::Type,FltfVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fltf)::Type,FltfVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fltf)::Type,FltfVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fltf)::Type,FltfVal::v11> v11{};
        }
        }
        ///Filter Selection for Input from PTG
        enum class FltgVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,FltgVal> fltg{}; 
        namespace FltgValC{
            constexpr Register::FieldValue<decltype(fltg)::Type,FltgVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fltg)::Type,FltgVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fltg)::Type,FltgVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fltg)::Type,FltgVal::v11> v11{};
        }
        }
        ///Filter Selection for Input from PTH
        enum class FlthVal {
            v00=0x00000000,     ///<BUSCLK
            v01=0x00000001,     ///<FLTDIV1
            v10=0x00000002,     ///<FLTDIV2
            v11=0x00000003,     ///<FLTDIV3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,FlthVal> flth{}; 
        namespace FlthValC{
            constexpr Register::FieldValue<decltype(flth)::Type,FlthVal::v00> v00{};
            constexpr Register::FieldValue<decltype(flth)::Type,FlthVal::v01> v01{};
            constexpr Register::FieldValue<decltype(flth)::Type,FlthVal::v10> v10{};
            constexpr Register::FieldValue<decltype(flth)::Type,FlthVal::v11> v11{};
        }
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
    }
    namespace PortPuel{    ///<Port Pullup Enable Low Register
        using Addr = Register::Address<0x40049004,0x00000000,0,unsigned>;
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
        ///Pull Enable for Port C Bit 6
        enum class Ptcpe6Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Ptcpe6Val> ptcpe6{}; 
        namespace Ptcpe6ValC{
            constexpr Register::FieldValue<decltype(ptcpe6)::Type,Ptcpe6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptcpe6)::Type,Ptcpe6Val::v1> v1{};
        }
        }
        ///Pull Enable for Port C Bit 7
        enum class Ptcpe7Val {
            v0=0x00000000,     ///<Pullup is disabled for port C bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port C bit 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Ptcpe7Val> ptcpe7{}; 
        namespace Ptcpe7ValC{
            constexpr Register::FieldValue<decltype(ptcpe7)::Type,Ptcpe7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptcpe7)::Type,Ptcpe7Val::v1> v1{};
        }
        }
        ///Pull Enable for Port D Bit 0
        enum class Ptdpe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ptdpe0Val> ptdpe0{}; 
        namespace Ptdpe0ValC{
            constexpr Register::FieldValue<decltype(ptdpe0)::Type,Ptdpe0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptdpe0)::Type,Ptdpe0Val::v1> v1{};
        }
        }
        ///Pull Enable for Port D Bit 1
        enum class Ptdpe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ptdpe1Val> ptdpe1{}; 
        namespace Ptdpe1ValC{
            constexpr Register::FieldValue<decltype(ptdpe1)::Type,Ptdpe1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptdpe1)::Type,Ptdpe1Val::v1> v1{};
        }
        }
        ///Pull Enable for Port D Bit 2
        enum class Ptdpe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Ptdpe2Val> ptdpe2{}; 
        namespace Ptdpe2ValC{
            constexpr Register::FieldValue<decltype(ptdpe2)::Type,Ptdpe2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptdpe2)::Type,Ptdpe2Val::v1> v1{};
        }
        }
        ///Pull Enable for Port D Bit 3
        enum class Ptdpe3Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Ptdpe3Val> ptdpe3{}; 
        namespace Ptdpe3ValC{
            constexpr Register::FieldValue<decltype(ptdpe3)::Type,Ptdpe3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptdpe3)::Type,Ptdpe3Val::v1> v1{};
        }
        }
        ///Pull Enable for Port D Bit 4
        enum class Ptdpe4Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Ptdpe4Val> ptdpe4{}; 
        namespace Ptdpe4ValC{
            constexpr Register::FieldValue<decltype(ptdpe4)::Type,Ptdpe4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptdpe4)::Type,Ptdpe4Val::v1> v1{};
        }
        }
        ///Pull Enable for Port D Bit 5
        enum class Ptdpe5Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Ptdpe5Val> ptdpe5{}; 
        namespace Ptdpe5ValC{
            constexpr Register::FieldValue<decltype(ptdpe5)::Type,Ptdpe5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptdpe5)::Type,Ptdpe5Val::v1> v1{};
        }
        }
        ///Pull Enable for Port D Bit 6
        enum class Ptdpe6Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Ptdpe6Val> ptdpe6{}; 
        namespace Ptdpe6ValC{
            constexpr Register::FieldValue<decltype(ptdpe6)::Type,Ptdpe6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptdpe6)::Type,Ptdpe6Val::v1> v1{};
        }
        }
        ///Pull Enable for Port D Bit 7
        enum class Ptdpe7Val {
            v0=0x00000000,     ///<Pullup is disabled for port D bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port D bit 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Ptdpe7Val> ptdpe7{}; 
        namespace Ptdpe7ValC{
            constexpr Register::FieldValue<decltype(ptdpe7)::Type,Ptdpe7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptdpe7)::Type,Ptdpe7Val::v1> v1{};
        }
        }
    }
    namespace PortPueh{    ///<Port Pullup Enable High Register
        using Addr = Register::Address<0x40049008,0x38f00000,0,unsigned>;
        ///Pull Enable for Port E Bit 0
        enum class Ptepe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ptepe0Val> ptepe0{}; 
        namespace Ptepe0ValC{
            constexpr Register::FieldValue<decltype(ptepe0)::Type,Ptepe0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptepe0)::Type,Ptepe0Val::v1> v1{};
        }
        }
        ///Pull Enable for Port E Bit 1
        enum class Ptepe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ptepe1Val> ptepe1{}; 
        namespace Ptepe1ValC{
            constexpr Register::FieldValue<decltype(ptepe1)::Type,Ptepe1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptepe1)::Type,Ptepe1Val::v1> v1{};
        }
        }
        ///Pull Enable for Port E Bit 2
        enum class Ptepe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ptepe2Val> ptepe2{}; 
        namespace Ptepe2ValC{
            constexpr Register::FieldValue<decltype(ptepe2)::Type,Ptepe2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptepe2)::Type,Ptepe2Val::v1> v1{};
        }
        }
        ///Pull Enable for Port E Bit 3
        enum class Ptepe3Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ptepe3Val> ptepe3{}; 
        namespace Ptepe3ValC{
            constexpr Register::FieldValue<decltype(ptepe3)::Type,Ptepe3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptepe3)::Type,Ptepe3Val::v1> v1{};
        }
        }
        ///Pull Enable for Port E Bit 4
        enum class Ptepe4Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ptepe4Val> ptepe4{}; 
        namespace Ptepe4ValC{
            constexpr Register::FieldValue<decltype(ptepe4)::Type,Ptepe4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptepe4)::Type,Ptepe4Val::v1> v1{};
        }
        }
        ///Pull Enable for Port E Bit 5
        enum class Ptepe5Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ptepe5Val> ptepe5{}; 
        namespace Ptepe5ValC{
            constexpr Register::FieldValue<decltype(ptepe5)::Type,Ptepe5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptepe5)::Type,Ptepe5Val::v1> v1{};
        }
        }
        ///Pull Enable for Port E Bit 6
        enum class Ptepe6Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ptepe6Val> ptepe6{}; 
        namespace Ptepe6ValC{
            constexpr Register::FieldValue<decltype(ptepe6)::Type,Ptepe6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptepe6)::Type,Ptepe6Val::v1> v1{};
        }
        }
        ///Pull Enable for Port E Bit 7
        enum class Ptepe7Val {
            v0=0x00000000,     ///<Pullup is disabled for port E bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port E bit 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ptepe7Val> ptepe7{}; 
        namespace Ptepe7ValC{
            constexpr Register::FieldValue<decltype(ptepe7)::Type,Ptepe7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptepe7)::Type,Ptepe7Val::v1> v1{};
        }
        }
        ///Pull Enable for Port F Bit 0
        enum class Ptfpe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Ptfpe0Val> ptfpe0{}; 
        namespace Ptfpe0ValC{
            constexpr Register::FieldValue<decltype(ptfpe0)::Type,Ptfpe0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptfpe0)::Type,Ptfpe0Val::v1> v1{};
        }
        }
        ///Pull Enable for Port F Bit 1
        enum class Ptfpe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Ptfpe1Val> ptfpe1{}; 
        namespace Ptfpe1ValC{
            constexpr Register::FieldValue<decltype(ptfpe1)::Type,Ptfpe1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptfpe1)::Type,Ptfpe1Val::v1> v1{};
        }
        }
        ///Pull Enable for Port F Bit 2
        enum class Ptfpe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Ptfpe2Val> ptfpe2{}; 
        namespace Ptfpe2ValC{
            constexpr Register::FieldValue<decltype(ptfpe2)::Type,Ptfpe2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptfpe2)::Type,Ptfpe2Val::v1> v1{};
        }
        }
        ///Pull Enable for Port F Bit 3
        enum class Ptfpe3Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Ptfpe3Val> ptfpe3{}; 
        namespace Ptfpe3ValC{
            constexpr Register::FieldValue<decltype(ptfpe3)::Type,Ptfpe3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptfpe3)::Type,Ptfpe3Val::v1> v1{};
        }
        }
        ///Pull Enable for Port F Bit 4
        enum class Ptfpe4Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 4.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Ptfpe4Val> ptfpe4{}; 
        namespace Ptfpe4ValC{
            constexpr Register::FieldValue<decltype(ptfpe4)::Type,Ptfpe4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptfpe4)::Type,Ptfpe4Val::v1> v1{};
        }
        }
        ///Pull Enable for Port F Bit 5
        enum class Ptfpe5Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 5.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Ptfpe5Val> ptfpe5{}; 
        namespace Ptfpe5ValC{
            constexpr Register::FieldValue<decltype(ptfpe5)::Type,Ptfpe5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptfpe5)::Type,Ptfpe5Val::v1> v1{};
        }
        }
        ///Pull Enable for Port F Bit 6
        enum class Ptfpe6Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Ptfpe6Val> ptfpe6{}; 
        namespace Ptfpe6ValC{
            constexpr Register::FieldValue<decltype(ptfpe6)::Type,Ptfpe6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptfpe6)::Type,Ptfpe6Val::v1> v1{};
        }
        }
        ///Pull Enable for Port F Bit 7
        enum class Ptfpe7Val {
            v0=0x00000000,     ///<Pullup is disabled for port F bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port F bit 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Ptfpe7Val> ptfpe7{}; 
        namespace Ptfpe7ValC{
            constexpr Register::FieldValue<decltype(ptfpe7)::Type,Ptfpe7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptfpe7)::Type,Ptfpe7Val::v1> v1{};
        }
        }
        ///Pull Enable for Port G Bit 0
        enum class Ptgpe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port G bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port G bit 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Ptgpe0Val> ptgpe0{}; 
        namespace Ptgpe0ValC{
            constexpr Register::FieldValue<decltype(ptgpe0)::Type,Ptgpe0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptgpe0)::Type,Ptgpe0Val::v1> v1{};
        }
        }
        ///Pull Enable for Port G Bit 1
        enum class Ptgpe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port G bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port G bit 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Ptgpe1Val> ptgpe1{}; 
        namespace Ptgpe1ValC{
            constexpr Register::FieldValue<decltype(ptgpe1)::Type,Ptgpe1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptgpe1)::Type,Ptgpe1Val::v1> v1{};
        }
        }
        ///Pull Enable for Port G Bit 2
        enum class Ptgpe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port G bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port G bit 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Ptgpe2Val> ptgpe2{}; 
        namespace Ptgpe2ValC{
            constexpr Register::FieldValue<decltype(ptgpe2)::Type,Ptgpe2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptgpe2)::Type,Ptgpe2Val::v1> v1{};
        }
        }
        ///Pull Enable for Port G Bit 3
        enum class Ptgpe3Val {
            v0=0x00000000,     ///<Pullup is disabled for port G bit 3.
            v1=0x00000001,     ///<Pullup is enabled for port G bit 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Ptgpe3Val> ptgpe3{}; 
        namespace Ptgpe3ValC{
            constexpr Register::FieldValue<decltype(ptgpe3)::Type,Ptgpe3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptgpe3)::Type,Ptgpe3Val::v1> v1{};
        }
        }
        ///Pull Enable for Port H Bit 0
        enum class Pthpe0Val {
            v0=0x00000000,     ///<Pullup is disabled for port H bit 0.
            v1=0x00000001,     ///<Pullup is enabled for port H bit 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Pthpe0Val> pthpe0{}; 
        namespace Pthpe0ValC{
            constexpr Register::FieldValue<decltype(pthpe0)::Type,Pthpe0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pthpe0)::Type,Pthpe0Val::v1> v1{};
        }
        }
        ///Pull Enable for Port H Bit 1
        enum class Pthpe1Val {
            v0=0x00000000,     ///<Pullup is disabled for port H bit 1.
            v1=0x00000001,     ///<Pullup is enabled for port H bit 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Pthpe1Val> pthpe1{}; 
        namespace Pthpe1ValC{
            constexpr Register::FieldValue<decltype(pthpe1)::Type,Pthpe1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pthpe1)::Type,Pthpe1Val::v1> v1{};
        }
        }
        ///Pull Enable for Port H Bit 2
        enum class Pthpe2Val {
            v0=0x00000000,     ///<Pullup is disabled for port H bit 2.
            v1=0x00000001,     ///<Pullup is enabled for port H bit 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Pthpe2Val> pthpe2{}; 
        namespace Pthpe2ValC{
            constexpr Register::FieldValue<decltype(pthpe2)::Type,Pthpe2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pthpe2)::Type,Pthpe2Val::v1> v1{};
        }
        }
        ///Pull Enable for Port H Bit 6
        enum class Pthpe6Val {
            v0=0x00000000,     ///<Pullup is disabled for port H bit 6.
            v1=0x00000001,     ///<Pullup is enabled for port H bit 6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Pthpe6Val> pthpe6{}; 
        namespace Pthpe6ValC{
            constexpr Register::FieldValue<decltype(pthpe6)::Type,Pthpe6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pthpe6)::Type,Pthpe6Val::v1> v1{};
        }
        }
        ///Pull Enable for Port H Bit 7
        enum class Pthpe7Val {
            v0=0x00000000,     ///<Pullup is disabled for port H bit 7.
            v1=0x00000001,     ///<Pullup is enabled for port H bit 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Pthpe7Val> pthpe7{}; 
        namespace Pthpe7ValC{
            constexpr Register::FieldValue<decltype(pthpe7)::Type,Pthpe7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pthpe7)::Type,Pthpe7Val::v1> v1{};
        }
        }
    }
    namespace PortHdrve{    ///<Port High Drive Enable Register
        using Addr = Register::Address<0x4004900c,0xffffff00,0,unsigned>;
        ///High Current Drive Capability of PTB4
        enum class Ptb4Val {
            v0=0x00000000,     ///<PTB4 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTB4 is enabled to offer high current drive capability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ptb4Val> ptb4{}; 
        namespace Ptb4ValC{
            constexpr Register::FieldValue<decltype(ptb4)::Type,Ptb4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptb4)::Type,Ptb4Val::v1> v1{};
        }
        }
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
        }
        ///High Current Drive Capability of PTD0
        enum class Ptd0Val {
            v0=0x00000000,     ///<PTD0 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTD0 is enabled to offer high current drive capability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ptd0Val> ptd0{}; 
        namespace Ptd0ValC{
            constexpr Register::FieldValue<decltype(ptd0)::Type,Ptd0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptd0)::Type,Ptd0Val::v1> v1{};
        }
        }
        ///High Current Drive Capability of PTD1
        enum class Ptd1Val {
            v0=0x00000000,     ///<PTD1 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTD1 is enable to offer high current drive capability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ptd1Val> ptd1{}; 
        namespace Ptd1ValC{
            constexpr Register::FieldValue<decltype(ptd1)::Type,Ptd1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ptd1)::Type,Ptd1Val::v1> v1{};
        }
        }
        ///High Current Drive Capability of PTE0
        enum class Pte0Val {
            v0=0x00000000,     ///<PTE0 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTE0 is enable to offer high current drive capability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Pte0Val> pte0{}; 
        namespace Pte0ValC{
            constexpr Register::FieldValue<decltype(pte0)::Type,Pte0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pte0)::Type,Pte0Val::v1> v1{};
        }
        }
        ///High Current Drive Capability of PTE1
        enum class Pte1Val {
            v0=0x00000000,     ///<PTE1 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTE1 is enabled to offer high current drive capability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Pte1Val> pte1{}; 
        namespace Pte1ValC{
            constexpr Register::FieldValue<decltype(pte1)::Type,Pte1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pte1)::Type,Pte1Val::v1> v1{};
        }
        }
        ///High Current Drive Capability of PTH0
        enum class Pth0Val {
            v0=0x00000000,     ///<PTH0 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTH0 is enabled to offer high current drive capability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Pth0Val> pth0{}; 
        namespace Pth0ValC{
            constexpr Register::FieldValue<decltype(pth0)::Type,Pth0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pth0)::Type,Pth0Val::v1> v1{};
        }
        }
        ///High Current Drive Capability of PTH1
        enum class Pth1Val {
            v0=0x00000000,     ///<PTH1 is disabled to offer high current drive capability.
            v1=0x00000001,     ///<PTH1 is enabled to offer high current drive capability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Pth1Val> pth1{}; 
        namespace Pth1ValC{
            constexpr Register::FieldValue<decltype(pth1)::Type,Pth1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(pth1)::Type,Pth1Val::v1> v1{};
        }
        }
    }
}
