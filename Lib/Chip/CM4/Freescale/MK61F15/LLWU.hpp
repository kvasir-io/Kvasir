#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low leakage wakeup unit
    namespace LlwuPe1{    ///<LLWU Pin Enable 1 Register
        using Addr = Register::Address<0x4007c000,0xffffff00,0,unsigned char>;
        ///Wakeup Pin Enable for LLWU_P0
        enum class Wupe0Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Wupe0Val> wupe0{}; 
        namespace Wupe0ValC{
            constexpr Register::FieldValue<decltype(wupe0),Wupe0Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe0),Wupe0Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe0),Wupe0Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe0),Wupe0Val::v11> v11{};
        }
        ///Wakeup Pin Enable for LLWU_P1
        enum class Wupe1Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Wupe1Val> wupe1{}; 
        namespace Wupe1ValC{
            constexpr Register::FieldValue<decltype(wupe1),Wupe1Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe1),Wupe1Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe1),Wupe1Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe1),Wupe1Val::v11> v11{};
        }
        ///Wakeup Pin Enable for LLWU_P2
        enum class Wupe2Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Wupe2Val> wupe2{}; 
        namespace Wupe2ValC{
            constexpr Register::FieldValue<decltype(wupe2),Wupe2Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe2),Wupe2Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe2),Wupe2Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe2),Wupe2Val::v11> v11{};
        }
        ///Wakeup Pin Enable for LLWU_P3
        enum class Wupe3Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Wupe3Val> wupe3{}; 
        namespace Wupe3ValC{
            constexpr Register::FieldValue<decltype(wupe3),Wupe3Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe3),Wupe3Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe3),Wupe3Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe3),Wupe3Val::v11> v11{};
        }
    }
    namespace LlwuPe2{    ///<LLWU Pin Enable 2 Register
        using Addr = Register::Address<0x4007c001,0xffffff00,0,unsigned char>;
        ///Wakeup Pin Enable for LLWU_P4
        enum class Wupe4Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Wupe4Val> wupe4{}; 
        namespace Wupe4ValC{
            constexpr Register::FieldValue<decltype(wupe4),Wupe4Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe4),Wupe4Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe4),Wupe4Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe4),Wupe4Val::v11> v11{};
        }
        ///Wakeup Pin Enable for LLWU_P5
        enum class Wupe5Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Wupe5Val> wupe5{}; 
        namespace Wupe5ValC{
            constexpr Register::FieldValue<decltype(wupe5),Wupe5Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe5),Wupe5Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe5),Wupe5Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe5),Wupe5Val::v11> v11{};
        }
        ///Wakeup Pin Enable for LLWU_P6
        enum class Wupe6Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Wupe6Val> wupe6{}; 
        namespace Wupe6ValC{
            constexpr Register::FieldValue<decltype(wupe6),Wupe6Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe6),Wupe6Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe6),Wupe6Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe6),Wupe6Val::v11> v11{};
        }
        ///Wakeup Pin Enable for LLWU_P7
        enum class Wupe7Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Wupe7Val> wupe7{}; 
        namespace Wupe7ValC{
            constexpr Register::FieldValue<decltype(wupe7),Wupe7Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe7),Wupe7Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe7),Wupe7Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe7),Wupe7Val::v11> v11{};
        }
    }
    namespace LlwuPe3{    ///<LLWU Pin Enable 3 Register
        using Addr = Register::Address<0x4007c002,0xffffff00,0,unsigned char>;
        ///Wakeup Pin Enable for LLWU_P8
        enum class Wupe8Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Wupe8Val> wupe8{}; 
        namespace Wupe8ValC{
            constexpr Register::FieldValue<decltype(wupe8),Wupe8Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe8),Wupe8Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe8),Wupe8Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe8),Wupe8Val::v11> v11{};
        }
        ///Wakeup Pin Enable for LLWU_P9
        enum class Wupe9Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Wupe9Val> wupe9{}; 
        namespace Wupe9ValC{
            constexpr Register::FieldValue<decltype(wupe9),Wupe9Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe9),Wupe9Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe9),Wupe9Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe9),Wupe9Val::v11> v11{};
        }
        ///Wakeup Pin Enable for LLWU_P10
        enum class Wupe10Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Wupe10Val> wupe10{}; 
        namespace Wupe10ValC{
            constexpr Register::FieldValue<decltype(wupe10),Wupe10Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe10),Wupe10Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe10),Wupe10Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe10),Wupe10Val::v11> v11{};
        }
        ///Wakeup Pin Enable for LLWU_P11
        enum class Wupe11Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Wupe11Val> wupe11{}; 
        namespace Wupe11ValC{
            constexpr Register::FieldValue<decltype(wupe11),Wupe11Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe11),Wupe11Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe11),Wupe11Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe11),Wupe11Val::v11> v11{};
        }
    }
    namespace LlwuPe4{    ///<LLWU Pin Enable 4 Register
        using Addr = Register::Address<0x4007c003,0xffffff00,0,unsigned char>;
        ///Wakeup Pin Enable for LLWU_P12
        enum class Wupe12Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Wupe12Val> wupe12{}; 
        namespace Wupe12ValC{
            constexpr Register::FieldValue<decltype(wupe12),Wupe12Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe12),Wupe12Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe12),Wupe12Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe12),Wupe12Val::v11> v11{};
        }
        ///Wakeup Pin Enable for LLWU_P13
        enum class Wupe13Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Wupe13Val> wupe13{}; 
        namespace Wupe13ValC{
            constexpr Register::FieldValue<decltype(wupe13),Wupe13Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe13),Wupe13Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe13),Wupe13Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe13),Wupe13Val::v11> v11{};
        }
        ///Wakeup Pin Enable for LLWU_P14
        enum class Wupe14Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Wupe14Val> wupe14{}; 
        namespace Wupe14ValC{
            constexpr Register::FieldValue<decltype(wupe14),Wupe14Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe14),Wupe14Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe14),Wupe14Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe14),Wupe14Val::v11> v11{};
        }
        ///Wakeup Pin Enable for LLWU_P15
        enum class Wupe15Val {
            v00=0x00000000,     ///<External input pin disabled as wakeup input
            v01=0x00000001,     ///<External input pin enabled with rising edge detection
            v10=0x00000002,     ///<External input pin enabled with falling edge detection
            v11=0x00000003,     ///<External input pin enabled with any change detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Wupe15Val> wupe15{}; 
        namespace Wupe15ValC{
            constexpr Register::FieldValue<decltype(wupe15),Wupe15Val::v00> v00{};
            constexpr Register::FieldValue<decltype(wupe15),Wupe15Val::v01> v01{};
            constexpr Register::FieldValue<decltype(wupe15),Wupe15Val::v10> v10{};
            constexpr Register::FieldValue<decltype(wupe15),Wupe15Val::v11> v11{};
        }
    }
    namespace LlwuMe{    ///<LLWU Module Enable Register
        using Addr = Register::Address<0x4007c004,0xffffff00,0,unsigned char>;
        ///Wakeup Module Enable for Module 0
        enum class Wume0Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Wume0Val> wume0{}; 
        namespace Wume0ValC{
            constexpr Register::FieldValue<decltype(wume0),Wume0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wume0),Wume0Val::v1> v1{};
        }
        ///Wakeup Module Enable for Module 1
        enum class Wume1Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wume1Val> wume1{}; 
        namespace Wume1ValC{
            constexpr Register::FieldValue<decltype(wume1),Wume1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wume1),Wume1Val::v1> v1{};
        }
        ///Wakeup Module Enable for Module 2
        enum class Wume2Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Wume2Val> wume2{}; 
        namespace Wume2ValC{
            constexpr Register::FieldValue<decltype(wume2),Wume2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wume2),Wume2Val::v1> v1{};
        }
        ///Wakeup Module Enable for Module 3
        enum class Wume3Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Wume3Val> wume3{}; 
        namespace Wume3ValC{
            constexpr Register::FieldValue<decltype(wume3),Wume3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wume3),Wume3Val::v1> v1{};
        }
        ///Wakeup Module Enable for Module 4
        enum class Wume4Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Wume4Val> wume4{}; 
        namespace Wume4ValC{
            constexpr Register::FieldValue<decltype(wume4),Wume4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wume4),Wume4Val::v1> v1{};
        }
        ///Wakeup Module Enable for Module 5
        enum class Wume5Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wume5Val> wume5{}; 
        namespace Wume5ValC{
            constexpr Register::FieldValue<decltype(wume5),Wume5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wume5),Wume5Val::v1> v1{};
        }
        ///Wakeup Module Enable for Module 6
        enum class Wume6Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Wume6Val> wume6{}; 
        namespace Wume6ValC{
            constexpr Register::FieldValue<decltype(wume6),Wume6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wume6),Wume6Val::v1> v1{};
        }
        ///Wakeup Module Enable for Module 7
        enum class Wume7Val {
            v0=0x00000000,     ///<Internal module flag not used as wakeup source
            v1=0x00000001,     ///<Internal module flag used as wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Wume7Val> wume7{}; 
        namespace Wume7ValC{
            constexpr Register::FieldValue<decltype(wume7),Wume7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wume7),Wume7Val::v1> v1{};
        }
    }
    namespace LlwuF1{    ///<LLWU Flag 1 Register
        using Addr = Register::Address<0x4007c005,0xffffff00,0,unsigned char>;
        ///Wakeup Flag for LLWU_P0
        enum class Wuf0Val {
            v0=0x00000000,     ///<LLWU_P0 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P0 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Wuf0Val> wuf0{}; 
        namespace Wuf0ValC{
            constexpr Register::FieldValue<decltype(wuf0),Wuf0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf0),Wuf0Val::v1> v1{};
        }
        ///Wakeup Flag for LLWU_P1
        enum class Wuf1Val {
            v0=0x00000000,     ///<LLWU_P1 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P1 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wuf1Val> wuf1{}; 
        namespace Wuf1ValC{
            constexpr Register::FieldValue<decltype(wuf1),Wuf1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf1),Wuf1Val::v1> v1{};
        }
        ///Wakeup Flag for LLWU_P2
        enum class Wuf2Val {
            v0=0x00000000,     ///<LLWU_P2 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P2 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Wuf2Val> wuf2{}; 
        namespace Wuf2ValC{
            constexpr Register::FieldValue<decltype(wuf2),Wuf2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf2),Wuf2Val::v1> v1{};
        }
        ///Wakeup Flag for LLWU_P3
        enum class Wuf3Val {
            v0=0x00000000,     ///<LLWU_P3 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P3 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Wuf3Val> wuf3{}; 
        namespace Wuf3ValC{
            constexpr Register::FieldValue<decltype(wuf3),Wuf3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf3),Wuf3Val::v1> v1{};
        }
        ///Wakeup Flag for LLWU_P4
        enum class Wuf4Val {
            v0=0x00000000,     ///<LLWU_P4 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P4 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Wuf4Val> wuf4{}; 
        namespace Wuf4ValC{
            constexpr Register::FieldValue<decltype(wuf4),Wuf4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf4),Wuf4Val::v1> v1{};
        }
        ///Wakeup Flag for LLWU_P5
        enum class Wuf5Val {
            v0=0x00000000,     ///<LLWU_P5 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P5 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wuf5Val> wuf5{}; 
        namespace Wuf5ValC{
            constexpr Register::FieldValue<decltype(wuf5),Wuf5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf5),Wuf5Val::v1> v1{};
        }
        ///Wakeup Flag for LLWU_P6
        enum class Wuf6Val {
            v0=0x00000000,     ///<LLWU_P6 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P6 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Wuf6Val> wuf6{}; 
        namespace Wuf6ValC{
            constexpr Register::FieldValue<decltype(wuf6),Wuf6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf6),Wuf6Val::v1> v1{};
        }
        ///Wakeup Flag for LLWU_P7
        enum class Wuf7Val {
            v0=0x00000000,     ///<LLWU_P7 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P7 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Wuf7Val> wuf7{}; 
        namespace Wuf7ValC{
            constexpr Register::FieldValue<decltype(wuf7),Wuf7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf7),Wuf7Val::v1> v1{};
        }
    }
    namespace LlwuF2{    ///<LLWU Flag 2 Register
        using Addr = Register::Address<0x4007c006,0xffffff00,0,unsigned char>;
        ///Wakeup Flag for LLWU_P8
        enum class Wuf8Val {
            v0=0x00000000,     ///<LLWU_P8 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P8 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Wuf8Val> wuf8{}; 
        namespace Wuf8ValC{
            constexpr Register::FieldValue<decltype(wuf8),Wuf8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf8),Wuf8Val::v1> v1{};
        }
        ///Wakeup Flag for LLWU_P9
        enum class Wuf9Val {
            v0=0x00000000,     ///<LLWU_P9 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P9 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wuf9Val> wuf9{}; 
        namespace Wuf9ValC{
            constexpr Register::FieldValue<decltype(wuf9),Wuf9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf9),Wuf9Val::v1> v1{};
        }
        ///Wakeup Flag for LLWU_P10
        enum class Wuf10Val {
            v0=0x00000000,     ///<LLWU_P10 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P10 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Wuf10Val> wuf10{}; 
        namespace Wuf10ValC{
            constexpr Register::FieldValue<decltype(wuf10),Wuf10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf10),Wuf10Val::v1> v1{};
        }
        ///Wakeup Flag for LLWU_P11
        enum class Wuf11Val {
            v0=0x00000000,     ///<LLWU_P11 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P11 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Wuf11Val> wuf11{}; 
        namespace Wuf11ValC{
            constexpr Register::FieldValue<decltype(wuf11),Wuf11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf11),Wuf11Val::v1> v1{};
        }
        ///Wakeup Flag for LLWU_P12
        enum class Wuf12Val {
            v0=0x00000000,     ///<LLWU_P12 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P12 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Wuf12Val> wuf12{}; 
        namespace Wuf12ValC{
            constexpr Register::FieldValue<decltype(wuf12),Wuf12Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf12),Wuf12Val::v1> v1{};
        }
        ///Wakeup Flag for LLWU_P13
        enum class Wuf13Val {
            v0=0x00000000,     ///<LLWU_P13 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P13 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Wuf13Val> wuf13{}; 
        namespace Wuf13ValC{
            constexpr Register::FieldValue<decltype(wuf13),Wuf13Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf13),Wuf13Val::v1> v1{};
        }
        ///Wakeup Flag for LLWU_P14
        enum class Wuf14Val {
            v0=0x00000000,     ///<LLWU_P14 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P14 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Wuf14Val> wuf14{}; 
        namespace Wuf14ValC{
            constexpr Register::FieldValue<decltype(wuf14),Wuf14Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf14),Wuf14Val::v1> v1{};
        }
        ///Wakeup Flag for LLWU_P15
        enum class Wuf15Val {
            v0=0x00000000,     ///<LLWU_P15 input was not a wakeup source
            v1=0x00000001,     ///<LLWU_P15 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Wuf15Val> wuf15{}; 
        namespace Wuf15ValC{
            constexpr Register::FieldValue<decltype(wuf15),Wuf15Val::v0> v0{};
            constexpr Register::FieldValue<decltype(wuf15),Wuf15Val::v1> v1{};
        }
    }
    namespace LlwuF3{    ///<LLWU Flag 3 Register
        using Addr = Register::Address<0x4007c007,0xffffff00,0,unsigned char>;
        ///Wakeup flag for module 0
        enum class Mwuf0Val {
            v0=0x00000000,     ///<Module 0 input was not a wakeup source
            v1=0x00000001,     ///<Module 0 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Mwuf0Val> mwuf0{}; 
        namespace Mwuf0ValC{
            constexpr Register::FieldValue<decltype(mwuf0),Mwuf0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mwuf0),Mwuf0Val::v1> v1{};
        }
        ///Wakeup flag for module 1
        enum class Mwuf1Val {
            v0=0x00000000,     ///<Module 1 input was not a wakeup source
            v1=0x00000001,     ///<Module 1 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Mwuf1Val> mwuf1{}; 
        namespace Mwuf1ValC{
            constexpr Register::FieldValue<decltype(mwuf1),Mwuf1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mwuf1),Mwuf1Val::v1> v1{};
        }
        ///Wakeup flag for module 2
        enum class Mwuf2Val {
            v0=0x00000000,     ///<Module 2 input was not a wakeup source
            v1=0x00000001,     ///<Module 2 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Mwuf2Val> mwuf2{}; 
        namespace Mwuf2ValC{
            constexpr Register::FieldValue<decltype(mwuf2),Mwuf2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mwuf2),Mwuf2Val::v1> v1{};
        }
        ///Wakeup flag for module 3
        enum class Mwuf3Val {
            v0=0x00000000,     ///<Module 3 input was not a wakeup source
            v1=0x00000001,     ///<Module 3 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Mwuf3Val> mwuf3{}; 
        namespace Mwuf3ValC{
            constexpr Register::FieldValue<decltype(mwuf3),Mwuf3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mwuf3),Mwuf3Val::v1> v1{};
        }
        ///Wakeup flag for module 4
        enum class Mwuf4Val {
            v0=0x00000000,     ///<Module 4 input was not a wakeup source
            v1=0x00000001,     ///<Module 4 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Mwuf4Val> mwuf4{}; 
        namespace Mwuf4ValC{
            constexpr Register::FieldValue<decltype(mwuf4),Mwuf4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mwuf4),Mwuf4Val::v1> v1{};
        }
        ///Wakeup flag for module 5
        enum class Mwuf5Val {
            v0=0x00000000,     ///<Module 5 input was not a wakeup source
            v1=0x00000001,     ///<Module 5 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Mwuf5Val> mwuf5{}; 
        namespace Mwuf5ValC{
            constexpr Register::FieldValue<decltype(mwuf5),Mwuf5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mwuf5),Mwuf5Val::v1> v1{};
        }
        ///Wakeup flag for module 6
        enum class Mwuf6Val {
            v0=0x00000000,     ///<Module 6 input was not a wakeup source
            v1=0x00000001,     ///<Module 6 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Mwuf6Val> mwuf6{}; 
        namespace Mwuf6ValC{
            constexpr Register::FieldValue<decltype(mwuf6),Mwuf6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mwuf6),Mwuf6Val::v1> v1{};
        }
        ///Wakeup flag for module 7
        enum class Mwuf7Val {
            v0=0x00000000,     ///<Module 7 input was not a wakeup source
            v1=0x00000001,     ///<Module 7 input was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Mwuf7Val> mwuf7{}; 
        namespace Mwuf7ValC{
            constexpr Register::FieldValue<decltype(mwuf7),Mwuf7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(mwuf7),Mwuf7Val::v1> v1{};
        }
    }
    namespace LlwuFilt1{    ///<LLWU Pin Filter 1 Register
        using Addr = Register::Address<0x4007c008,0xffffff10,0,unsigned char>;
        ///Filter pin select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> filtsel{}; 
        namespace FiltselValC{
        }
        ///Digital Filter on External Pin
        enum class FilteVal {
            v00=0x00000000,     ///<Filter disabled
            v01=0x00000001,     ///<Filter posedge detect enabled
            v10=0x00000002,     ///<Filter negedge detect enabled
            v11=0x00000003,     ///<Filter any edge detect enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,FilteVal> filte{}; 
        namespace FilteValC{
            constexpr Register::FieldValue<decltype(filte),FilteVal::v00> v00{};
            constexpr Register::FieldValue<decltype(filte),FilteVal::v01> v01{};
            constexpr Register::FieldValue<decltype(filte),FilteVal::v10> v10{};
            constexpr Register::FieldValue<decltype(filte),FilteVal::v11> v11{};
        }
        ///Filter Detect Flag
        enum class FiltfVal {
            v0=0x00000000,     ///<Pin Filter 1 was not a wakeup source
            v1=0x00000001,     ///<Pin Filter 1 was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FiltfVal> filtf{}; 
        namespace FiltfValC{
            constexpr Register::FieldValue<decltype(filtf),FiltfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(filtf),FiltfVal::v1> v1{};
        }
    }
    namespace LlwuFilt2{    ///<LLWU Pin Filter 2 Register
        using Addr = Register::Address<0x4007c009,0xffffff10,0,unsigned char>;
        ///Filter pin select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> filtsel{}; 
        namespace FiltselValC{
        }
        ///Digital Filter on External Pin
        enum class FilteVal {
            v00=0x00000000,     ///<Filter disabled
            v01=0x00000001,     ///<Filter posedge detect enabled
            v10=0x00000002,     ///<Filter negedge detect enabled
            v11=0x00000003,     ///<Filter any edge detect enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,FilteVal> filte{}; 
        namespace FilteValC{
            constexpr Register::FieldValue<decltype(filte),FilteVal::v00> v00{};
            constexpr Register::FieldValue<decltype(filte),FilteVal::v01> v01{};
            constexpr Register::FieldValue<decltype(filte),FilteVal::v10> v10{};
            constexpr Register::FieldValue<decltype(filte),FilteVal::v11> v11{};
        }
        ///Filter Detect Flag
        enum class FiltfVal {
            v0=0x00000000,     ///<Pin Filter 2 was not a wakeup source
            v1=0x00000001,     ///<Pin Filter 2 was a wakeup source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,FiltfVal> filtf{}; 
        namespace FiltfValC{
            constexpr Register::FieldValue<decltype(filtf),FiltfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(filtf),FiltfVal::v1> v1{};
        }
    }
    namespace LlwuRst{    ///<LLWU Reset Enable Register
        using Addr = Register::Address<0x4007c00a,0xfffffffc,0,unsigned char>;
        ///Digital Filter on RESET Pin
        enum class RstfiltVal {
            v0=0x00000000,     ///<Filter not enabled
            v1=0x00000001,     ///<Filter enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RstfiltVal> rstfilt{}; 
        namespace RstfiltValC{
            constexpr Register::FieldValue<decltype(rstfilt),RstfiltVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rstfilt),RstfiltVal::v1> v1{};
        }
        ///Low Leakage mode RESET enable
        enum class LlrsteVal {
            v0=0x00000000,     ///<RESET pin not enabled as a leakage mode exit source
            v1=0x00000001,     ///<RESET pin enabled as a low leakage mode exit source
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LlrsteVal> llrste{}; 
        namespace LlrsteValC{
            constexpr Register::FieldValue<decltype(llrste),LlrsteVal::v0> v0{};
            constexpr Register::FieldValue<decltype(llrste),LlrsteVal::v1> v1{};
        }
    }
}
