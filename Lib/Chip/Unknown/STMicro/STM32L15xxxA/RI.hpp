#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Routing interface
    namespace RiIcr{    ///<RI input capture register
        using Addr = Register::Address<0x40007c04,0xffc00000,0x00000000,unsigned>;
        ///IC4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ic4{}; 
        ///IC3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ic3{}; 
        ///IC2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ic2{}; 
        ///IC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ic1{}; 
        ///Timer select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> tim{}; 
        ///Input capture 4 select               bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ic4ios{}; 
        ///Input capture 3 select               bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> ic3ios{}; 
        ///Input capture 2 select               bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ic2ios{}; 
        ///Input capture 1 select               bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ic1ios{}; 
    }
    namespace RiAscr1{    ///<RI analog switches control register           1
        using Addr = Register::Address<0x40007c08,0x00020000,0x00000000,unsigned>;
        ///Switch control mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> scm{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ch30gr114{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> ch29gr113{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> ch28gr112{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> ch27gr111{}; 
        ///ADC analog switch selection for internal               node to comparator 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> vcomp{}; 
        ///Analog I/O switch control of channel               CH25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ch25{}; 
        ///Analog I/O switch control of channel               CH24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ch24{}; 
        ///Analog I/O switch control of channel               CH23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ch23{}; 
        ///Analog I/O switch control of channel               CH22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ch22{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ch21gr74{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ch20gr73{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ch19gr72{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ch18gr71{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ch31gr71{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ch15gr92{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ch14gr91{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ch13gr84{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ch12gr83{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ch11gr82{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ch10gr81{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ch9gr32{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ch8gr31{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ch7gr22{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ch6gr21{}; 
        ///Comparator 1 analog switch
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> comp1Sw1{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ch31gr115{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ch3gr14{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ch2gr13{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ch1gr12{}; 
        ///Analog switch control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ch0gr11{}; 
    }
    namespace RiAscr2{    ///<RI analog switches control register           2
        using Addr = Register::Address<0x40007c0c,0xc000f000,0x00000000,unsigned>;
        ///GR5_4 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> gr54{}; 
        ///GR6_4 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> gr64{}; 
        ///GR6_3 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> gr63{}; 
        ///GR7_7 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> gr77{}; 
        ///GR7_6 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> gr76{}; 
        ///GR7_5 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> gr75{}; 
        ///GR2_5 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> gr25{}; 
        ///GR2_4 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> gr24{}; 
        ///GR2_3 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> gr23{}; 
        ///GR9_4 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> gr94{}; 
        ///GR9_3 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> gr93{}; 
        ///GR3_5 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> gr35{}; 
        ///GR3_4 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> gr34{}; 
        ///GR3_3 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> gr33{}; 
        ///GR4_3 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gr43{}; 
        ///GR4_2 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gr42{}; 
        ///GR4_1 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gr41{}; 
        ///GR5_3 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gr53{}; 
        ///GR5_2 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gr52{}; 
        ///GR5_1 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gr51{}; 
        ///GR6_2 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gr62{}; 
        ///GR6_1 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gr61{}; 
        ///GR10_4 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gr104{}; 
        ///GR10_3 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gr103{}; 
        ///GR10_2 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gr102{}; 
        ///GR10_1 analog switch               control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gr101{}; 
    }
    namespace RiHyscr1{    ///<RI hysteresis control register           1
        using Addr = Register::Address<0x40007c10,0x00000000,0x00000000,unsigned>;
        ///Port B hysteresis control               on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pb{}; 
        ///Port A hysteresis control               on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace RiHyscr2{    ///<RI hysteresis control register           2
        using Addr = Register::Address<0x40007c14,0x00000000,0x00000000,unsigned>;
        ///Port D hysteresis control               on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pd{}; 
        ///Port C hysteresis control               on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pc{}; 
    }
    namespace RiHyscr3{    ///<RI hysteresis control register           3
        using Addr = Register::Address<0x40007c18,0x00000000,0x00000000,unsigned>;
        ///Port F hysteresis control               on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> pf{}; 
        ///Port E hysteresis control               on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pe{}; 
    }
    namespace RiHyscr4{    ///<Hysteresis control register
        using Addr = Register::Address<0x40007c1c,0xffff0000,0x00000000,unsigned>;
        ///Port G hysteresis control               on/off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pg{}; 
    }
    namespace RiAsmr1{    ///<Analog switch mode register
        using Addr = Register::Address<0x40007c20,0xffff0000,0x00000000,unsigned>;
        ///Port A analog switch mode               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace RiCmr1{    ///<Channel mask register
        using Addr = Register::Address<0x40007c24,0xffff0000,0x00000000,unsigned>;
        ///Port A channel masking
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace RiCicr1{    ///<Channel identification for capture           register
        using Addr = Register::Address<0x40007c28,0xffff0000,0x00000000,unsigned>;
        ///Port A channel identification for               capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace RiAsmr2{    ///<Analog switch mode register
        using Addr = Register::Address<0x40007c2c,0xffff0000,0x00000000,unsigned>;
        ///Port B analog switch mode               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pb{}; 
    }
    namespace RiCmr2{    ///<Channel mask register
        using Addr = Register::Address<0x40007c30,0xffff0000,0x00000000,unsigned>;
        ///Port B channel masking
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pb{}; 
    }
    namespace RiCicr2{    ///<Channel identification for capture           register
        using Addr = Register::Address<0x40007c34,0xffff0000,0x00000000,unsigned>;
        ///Port B channel identification for               capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pb{}; 
    }
    namespace RiAsmr3{    ///<Analog switch mode register
        using Addr = Register::Address<0x40007c38,0xffff0000,0x00000000,unsigned>;
        ///Port C analog switch mode               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pc{}; 
    }
    namespace RiCmr3{    ///<Channel mask register
        using Addr = Register::Address<0x40007c3c,0xffff0000,0x00000000,unsigned>;
        ///Port C channel masking
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pc{}; 
    }
    namespace RiCicr3{    ///<Channel identification for capture           register
        using Addr = Register::Address<0x40007c40,0xffff0000,0x00000000,unsigned>;
        ///Port C channel identification for               capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pc{}; 
    }
    namespace RiAsmr4{    ///<Analog switch mode register
        using Addr = Register::Address<0x40007c44,0xffff0000,0x00000000,unsigned>;
        ///Port F analog switch mode               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pf{}; 
    }
    namespace RiCmr4{    ///<Channel mask register
        using Addr = Register::Address<0x40007c48,0xffff0000,0x00000000,unsigned>;
        ///Port F channel masking
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pf{}; 
    }
    namespace RiCicr4{    ///<Channel identification for capture           register
        using Addr = Register::Address<0x40007c4c,0xffff0000,0x00000000,unsigned>;
        ///Port F channel identification for               capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pf{}; 
    }
    namespace RiAsmr5{    ///<Analog switch mode register
        using Addr = Register::Address<0x40007c50,0xffff0000,0x00000000,unsigned>;
        ///Port G analog switch mode               selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pg{}; 
    }
    namespace RiCmr5{    ///<Channel mask register
        using Addr = Register::Address<0x40007c54,0xffff0000,0x00000000,unsigned>;
        ///Port G channel masking
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pg{}; 
    }
    namespace RiCicr5{    ///<Channel identification for capture           register
        using Addr = Register::Address<0x40007c58,0xffff0000,0x00000000,unsigned>;
        ///Port G channel identification for               capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pg{}; 
    }
}
