#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Routing interface
    namespace Noneicr{    ///<RI input capture register
        using Addr = Register::Address<0x40007c08,0xffc00000,0,unsigned>;
        ///IC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ic4{}; 
        namespace Ic4ValC{
        }
        ///IC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ic3{}; 
        namespace Ic3ValC{
        }
        ///IC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ic2{}; 
        namespace Ic2ValC{
        }
        ///IC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ic1{}; 
        namespace Ic1ValC{
        }
        ///Timer select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> tim{}; 
        namespace TimValC{
        }
        ///Input capture 4 select
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic4ios{}; 
        namespace Ic4iosValC{
        }
        ///Input capture 3 select
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> ic3ios{}; 
        namespace Ic3iosValC{
        }
        ///Input capture 2 select
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic2ios{}; 
        namespace Ic2iosValC{
        }
        ///Input capture 1 select
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ic1ios{}; 
        namespace Ic1iosValC{
        }
    }
    namespace Noneascr1{    ///<RI analog switches control register
          1
        using Addr = Register::Address<0x40007c0c,0x00020000,0,unsigned>;
        ///Switch control mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> scm{}; 
        namespace ScmValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ch30gr114{}; 
        namespace Ch30gr114ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ch29gr113{}; 
        namespace Ch29gr113ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ch28gr112{}; 
        namespace Ch28gr112ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ch27gr111{}; 
        namespace Ch27gr111ValC{
        }
        ///ADC analog switch selection for internal
              node to comparator 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> vcomp{}; 
        namespace VcompValC{
        }
        ///Analog I/O switch control of channel
              CH25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ch25{}; 
        namespace Ch25ValC{
        }
        ///Analog I/O switch control of channel
              CH24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ch24{}; 
        namespace Ch24ValC{
        }
        ///Analog I/O switch control of channel
              CH23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ch23{}; 
        namespace Ch23ValC{
        }
        ///Analog I/O switch control of channel
              CH22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ch22{}; 
        namespace Ch22ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ch21gr74{}; 
        namespace Ch21gr74ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ch20gr73{}; 
        namespace Ch20gr73ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ch19gr72{}; 
        namespace Ch19gr72ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ch18gr71{}; 
        namespace Ch18gr71ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ch31gr71{}; 
        namespace Ch31gr71ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ch15gr92{}; 
        namespace Ch15gr92ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ch14gr91{}; 
        namespace Ch14gr91ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ch13gr84{}; 
        namespace Ch13gr84ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ch12gr83{}; 
        namespace Ch12gr83ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11gr82{}; 
        namespace Ch11gr82ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10gr81{}; 
        namespace Ch10gr81ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9gr32{}; 
        namespace Ch9gr32ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8gr31{}; 
        namespace Ch8gr31ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7gr22{}; 
        namespace Ch7gr22ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6gr21{}; 
        namespace Ch6gr21ValC{
        }
        ///Comparator 1 analog switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comp1Sw1{}; 
        namespace Comp1sw1ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch31gr115{}; 
        namespace Ch31gr115ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3gr14{}; 
        namespace Ch3gr14ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2gr13{}; 
        namespace Ch2gr13ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1gr12{}; 
        namespace Ch1gr12ValC{
        }
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0gr11{}; 
        namespace Ch0gr11ValC{
        }
    }
    namespace Noneascr2{    ///<RI analog switches control register
          2
        using Addr = Register::Address<0x40007c10,0xc000f000,0,unsigned>;
        ///GR5_4 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> gr54{}; 
        namespace Gr54ValC{
        }
        ///GR6_4 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> gr64{}; 
        namespace Gr64ValC{
        }
        ///GR6_3 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> gr63{}; 
        namespace Gr63ValC{
        }
        ///GR7_7 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> gr77{}; 
        namespace Gr77ValC{
        }
        ///GR7_6 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> gr76{}; 
        namespace Gr76ValC{
        }
        ///GR7_5 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> gr75{}; 
        namespace Gr75ValC{
        }
        ///GR2_5 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> gr25{}; 
        namespace Gr25ValC{
        }
        ///GR2_4 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> gr24{}; 
        namespace Gr24ValC{
        }
        ///GR2_3 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> gr23{}; 
        namespace Gr23ValC{
        }
        ///GR9_4 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> gr94{}; 
        namespace Gr94ValC{
        }
        ///GR9_3 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> gr93{}; 
        namespace Gr93ValC{
        }
        ///GR3_5 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> gr35{}; 
        namespace Gr35ValC{
        }
        ///GR3_4 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> gr34{}; 
        namespace Gr34ValC{
        }
        ///GR3_3 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> gr33{}; 
        namespace Gr33ValC{
        }
        ///GR4_3 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gr43{}; 
        namespace Gr43ValC{
        }
        ///GR4_2 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gr42{}; 
        namespace Gr42ValC{
        }
        ///GR4_1 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gr41{}; 
        namespace Gr41ValC{
        }
        ///GR5_3 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gr53{}; 
        namespace Gr53ValC{
        }
        ///GR5_2 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gr52{}; 
        namespace Gr52ValC{
        }
        ///GR5_1 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gr51{}; 
        namespace Gr51ValC{
        }
        ///GR6_2 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gr62{}; 
        namespace Gr62ValC{
        }
        ///GR6_1 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gr61{}; 
        namespace Gr61ValC{
        }
        ///GR10_4 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gr104{}; 
        namespace Gr104ValC{
        }
        ///GR10_3 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gr103{}; 
        namespace Gr103ValC{
        }
        ///GR10_2 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gr102{}; 
        namespace Gr102ValC{
        }
        ///GR10_1 analog switch
              control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gr101{}; 
        namespace Gr101ValC{
        }
    }
    namespace Nonehyscr1{    ///<RI hysteresis control register
          1
        using Addr = Register::Address<0x40007c14,0x00000000,0,unsigned>;
        ///Port B hysteresis control
              on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        ///Port A hysteresis control
              on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nonehyscr2{    ///<RI hysteresis control register
          2
        using Addr = Register::Address<0x40007c18,0x00000000,0,unsigned>;
        ///Port D hysteresis control
              on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        ///Port C hysteresis control
              on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
    }
    namespace Nonehyscr3{    ///<RI hysteresis control register
          3
        using Addr = Register::Address<0x40007c1c,0x00000000,0,unsigned>;
        ///Port F hysteresis control
              on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        ///Port E hysteresis control
              on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
    }
    namespace Nonehyscr4{    ///<Hysteresis control register
        using Addr = Register::Address<0x40007c20,0xffff0000,0,unsigned>;
        ///Port G hysteresis control
              on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pg{}; 
        namespace PgValC{
        }
    }
}
