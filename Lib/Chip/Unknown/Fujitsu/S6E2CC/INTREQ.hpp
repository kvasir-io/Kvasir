#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedrqsel{
        using Addr = Register::Address<0x40031000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> EXINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> EXINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> EXINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> EXINT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> MFS7TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> MFS7RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> MFS6TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> MFS6RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> MFS5TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> MFS5RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> MFS4TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> MFS4RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> MFS3TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> MFS3RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> MFS2TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> MFS2RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> MFS1TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> MFS1RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> MFS0TX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> MFS0RX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IRQ0BT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IRQ0BT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IRQ0BT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IRQ0BT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADCSCAN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ADCSCAN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ADCSCAN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USBEP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USBEP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USBEP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USBEP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USBEP1; 
    }
    namespace Noneoddpks{
        using Addr = Register::Address<0x40031010,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ODDPKS4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ODDPKS3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODDPKS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODDPKS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ODDPKS0; 
    }
    namespace Noneoddpks1{
        using Addr = Register::Address<0x40031014,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ODDPKS14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ODDPKS13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ODDPKS12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ODDPKS11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ODDPKS10; 
    }
    namespace Noneirq003sel{
        using Addr = Register::Address<0x40031110,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SELBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SELIRQ; 
    }
    namespace Noneirq004sel{
        using Addr = Register::Address<0x40031114,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SELBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SELIRQ; 
    }
    namespace Noneirq005sel{
        using Addr = Register::Address<0x40031118,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SELBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SELIRQ; 
    }
    namespace Noneirq006sel{
        using Addr = Register::Address<0x4003111c,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SELBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SELIRQ; 
    }
    namespace Noneirq007sel{
        using Addr = Register::Address<0x40031120,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SELBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SELIRQ; 
    }
    namespace Noneirq008sel{
        using Addr = Register::Address<0x40031124,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SELBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SELIRQ; 
    }
    namespace Noneirq009sel{
        using Addr = Register::Address<0x40031128,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SELBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SELIRQ; 
    }
    namespace Noneirq010sel{
        using Addr = Register::Address<0x4003112c,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> SELBIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> SELIRQ; 
    }
    namespace Noneexc02mon{
        using Addr = Register::Address<0x40031200,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NMI; 
    }
    namespace Noneirq000mon{
        using Addr = Register::Address<0x40031204,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FCSINT; 
    }
    namespace Noneirq001mon{
        using Addr = Register::Address<0x40031208,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWWDTINT; 
    }
    namespace Noneirq002mon{
        using Addr = Register::Address<0x4003120c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LVDINT; 
    }
    namespace Noneirq003mon{
        using Addr = Register::Address<0x40031210,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IRQBIT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IRQBIT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IRQBIT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IRQBIT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IRQBIT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IRQBIT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRQBIT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRQBIT0; 
    }
    namespace Noneirq004mon{
        using Addr = Register::Address<0x40031214,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IRQBIT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IRQBIT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IRQBIT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IRQBIT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IRQBIT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IRQBIT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRQBIT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRQBIT0; 
    }
    namespace Noneirq005mon{
        using Addr = Register::Address<0x40031218,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IRQBIT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IRQBIT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IRQBIT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IRQBIT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IRQBIT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IRQBIT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRQBIT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRQBIT0; 
    }
    namespace Noneirq006mon{
        using Addr = Register::Address<0x4003121c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IRQBIT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IRQBIT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IRQBIT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IRQBIT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IRQBIT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IRQBIT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRQBIT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRQBIT0; 
    }
    namespace Noneirq007mon{
        using Addr = Register::Address<0x40031220,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IRQBIT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IRQBIT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IRQBIT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IRQBIT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IRQBIT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IRQBIT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRQBIT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRQBIT0; 
    }
    namespace Noneirq008mon{
        using Addr = Register::Address<0x40031224,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IRQBIT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IRQBIT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IRQBIT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IRQBIT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IRQBIT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IRQBIT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRQBIT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRQBIT0; 
    }
    namespace Noneirq009mon{
        using Addr = Register::Address<0x40031228,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IRQBIT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IRQBIT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IRQBIT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IRQBIT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IRQBIT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IRQBIT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRQBIT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRQBIT0; 
    }
    namespace Noneirq010mon{
        using Addr = Register::Address<0x4003122c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IRQBIT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IRQBIT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IRQBIT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IRQBIT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IRQBIT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IRQBIT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IRQBIT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IRQBIT0; 
    }
    namespace Noneirq011mon{
        using Addr = Register::Address<0x40031230,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq012mon{
        using Addr = Register::Address<0x40031234,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq013mon{
        using Addr = Register::Address<0x40031238,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq014mon{
        using Addr = Register::Address<0x4003123c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq015mon{
        using Addr = Register::Address<0x40031240,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq016mon{
        using Addr = Register::Address<0x40031244,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq017mon{
        using Addr = Register::Address<0x40031248,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq018mon{
        using Addr = Register::Address<0x4003124c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq019mon{
        using Addr = Register::Address<0x40031250,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> QUDINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> QUDINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> QUDINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> QUDINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> QUDINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> QUDINT0; 
    }
    namespace Noneirq020mon{
        using Addr = Register::Address<0x40031254,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> QUDINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> QUDINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> QUDINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> QUDINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> QUDINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> QUDINT0; 
    }
    namespace Noneirq021mon{
        using Addr = Register::Address<0x40031258,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAVEINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAVEINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAVEINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAVEINT0; 
    }
    namespace Noneirq022mon{
        using Addr = Register::Address<0x4003125c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAVEINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAVEINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAVEINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAVEINT0; 
    }
    namespace Noneirq023mon{
        using Addr = Register::Address<0x40031260,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAVEINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAVEINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAVEINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAVEINT0; 
    }
    namespace Noneirq024mon{
        using Addr = Register::Address<0x40031264,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FRT_PEAK_INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FRT_PEAK_INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRT_PEAK_INT0; 
    }
    namespace Noneirq025mon{
        using Addr = Register::Address<0x40031268,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FRT_ZERO_INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FRT_ZERO_INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRT_ZERO_INT0; 
    }
    namespace Noneirq026mon{
        using Addr = Register::Address<0x4003126c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ICUINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ICUINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ICUINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ICUINT0; 
    }
    namespace Noneirq027mon{
        using Addr = Register::Address<0x40031270,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OCUINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OCUINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OCUINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OCUINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OCUINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OCUINT0; 
    }
    namespace Noneirq028mon{
        using Addr = Register::Address<0x40031274,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FRT_PEAK_INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FRT_PEAK_INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRT_PEAK_INT0; 
    }
    namespace Noneirq029mon{
        using Addr = Register::Address<0x40031278,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FRT_ZERO_INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FRT_ZERO_INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRT_ZERO_INT0; 
    }
    namespace Noneirq030mon{
        using Addr = Register::Address<0x4003127c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ICUINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ICUINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ICUINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ICUINT0; 
    }
    namespace Noneirq031mon{
        using Addr = Register::Address<0x40031280,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OCUINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OCUINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OCUINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OCUINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OCUINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OCUINT0; 
    }
    namespace Noneirq032mon{
        using Addr = Register::Address<0x40031284,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FRT_PEAK_INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FRT_PEAK_INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRT_PEAK_INT0; 
    }
    namespace Noneirq033mon{
        using Addr = Register::Address<0x40031288,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FRT_ZERO_INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FRT_ZERO_INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRT_ZERO_INT0; 
    }
    namespace Noneirq034mon{
        using Addr = Register::Address<0x4003128c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ICUINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ICUINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ICUINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ICUINT0; 
    }
    namespace Noneirq035mon{
        using Addr = Register::Address<0x40031290,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OCUINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OCUINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OCUINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OCUINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OCUINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OCUINT0; 
    }
    namespace Noneirq036mon{
        using Addr = Register::Address<0x40031294,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PPGINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PPGINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PPGINT0; 
    }
    namespace Noneirq037mon{
        using Addr = Register::Address<0x40031298,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PPGINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PPGINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PPGINT0; 
    }
    namespace Noneirq038mon{
        using Addr = Register::Address<0x4003129c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PPGINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PPGINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PPGINT0; 
    }
    namespace Noneirq039mon{
        using Addr = Register::Address<0x400312a0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq040mon{
        using Addr = Register::Address<0x400312a4,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq041mon{
        using Addr = Register::Address<0x400312a8,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq042mon{
        using Addr = Register::Address<0x400312ac,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq043mon{
        using Addr = Register::Address<0x400312b0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq044mon{
        using Addr = Register::Address<0x400312b4,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq045mon{
        using Addr = Register::Address<0x400312b8,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq046mon{
        using Addr = Register::Address<0x400312bc,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq047mon{
        using Addr = Register::Address<0x400312c0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TIMINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TIMINT1; 
    }
    namespace Noneirq048mon{
        using Addr = Register::Address<0x400312c4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WCINT; 
    }
    namespace Noneirq049mon{
        using Addr = Register::Address<0x400312c8,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BMEMCS; 
    }
    namespace Noneirq050mon{
        using Addr = Register::Address<0x400312cc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RTCINT; 
    }
    namespace Noneirq051mon{
        using Addr = Register::Address<0x400312d0,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq052mon{
        using Addr = Register::Address<0x400312d4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq053mon{
        using Addr = Register::Address<0x400312d8,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq054mon{
        using Addr = Register::Address<0x400312dc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq055mon{
        using Addr = Register::Address<0x400312e0,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq056mon{
        using Addr = Register::Address<0x400312e4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq057mon{
        using Addr = Register::Address<0x400312e8,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq058mon{
        using Addr = Register::Address<0x400312ec,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT; 
    }
    namespace Noneirq059mon{
        using Addr = Register::Address<0x400312f0,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IPLLINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> UPLLINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MPLLINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SOSCINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCINT; 
    }
    namespace Noneirq060mon{
        using Addr = Register::Address<0x400312f4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq061mon{
        using Addr = Register::Address<0x400312f8,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq062mon{
        using Addr = Register::Address<0x400312fc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq063mon{
        using Addr = Register::Address<0x40031300,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq064mon{
        using Addr = Register::Address<0x40031304,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq065mon{
        using Addr = Register::Address<0x40031308,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq066mon{
        using Addr = Register::Address<0x4003130c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq067mon{
        using Addr = Register::Address<0x40031310,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq068mon{
        using Addr = Register::Address<0x40031314,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq069mon{
        using Addr = Register::Address<0x40031318,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq070mon{
        using Addr = Register::Address<0x4003131c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq071mon{
        using Addr = Register::Address<0x40031320,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq072mon{
        using Addr = Register::Address<0x40031324,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq073mon{
        using Addr = Register::Address<0x40031328,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq074mon{
        using Addr = Register::Address<0x4003132c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq075mon{
        using Addr = Register::Address<0x40031330,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq076mon{
        using Addr = Register::Address<0x40031334,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADCINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADCINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADCINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADCINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADCINT0; 
    }
    namespace Noneirq077mon{
        using Addr = Register::Address<0x40031338,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADCINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADCINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADCINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADCINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADCINT0; 
    }
    namespace Noneirq078mon{
        using Addr = Register::Address<0x4003133c,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USB_DRQ_INT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USB_DRQ_INT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USB_DRQ_INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USB_DRQ_INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USB_DRQ_INT0; 
    }
    namespace Noneirq079mon{
        using Addr = Register::Address<0x40031340,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USB_INT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USB_INT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USB_INT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USB_INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USB_INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USB_INT0; 
    }
    namespace Noneirq080mon{
        using Addr = Register::Address<0x40031344,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CANINT; 
    }
    namespace Noneirq081mon{
        using Addr = Register::Address<0x40031348,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CAN1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CAN0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CANSEINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CANDEINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CANINT; 
    }
    namespace Noneirq082mon{
        using Addr = Register::Address<0x4003134c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MACLPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MACPMT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MACSBD; 
    }
    namespace Noneirq083mon{
        using Addr = Register::Address<0x40031350,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMACINT; 
    }
    namespace Noneirq084mon{
        using Addr = Register::Address<0x40031354,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMACINT; 
    }
    namespace Noneirq085mon{
        using Addr = Register::Address<0x40031358,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMACINT; 
    }
    namespace Noneirq086mon{
        using Addr = Register::Address<0x4003135c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMACINT; 
    }
    namespace Noneirq087mon{
        using Addr = Register::Address<0x40031360,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMACINT; 
    }
    namespace Noneirq088mon{
        using Addr = Register::Address<0x40031364,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMACINT; 
    }
    namespace Noneirq089mon{
        using Addr = Register::Address<0x40031368,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMACINT; 
    }
    namespace Noneirq090mon{
        using Addr = Register::Address<0x4003136c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMACINT; 
    }
    namespace Noneirq091mon{
        using Addr = Register::Address<0x40031370,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DSTCINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DSTCINT0; 
    }
    namespace Noneirq092mon{
        using Addr = Register::Address<0x40031374,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT0; 
    }
    namespace Noneirq093mon{
        using Addr = Register::Address<0x40031378,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT0; 
    }
    namespace Noneirq094mon{
        using Addr = Register::Address<0x4003137c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT0; 
    }
    namespace Noneirq095mon{
        using Addr = Register::Address<0x40031380,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT0; 
    }
    namespace Noneirq096mon{
        using Addr = Register::Address<0x40031384,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> QUDINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> QUDINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> QUDINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> QUDINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> QUDINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> QUDINT0; 
    }
    namespace Noneirq097mon{
        using Addr = Register::Address<0x40031388,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> QUDINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> QUDINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> QUDINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> QUDINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> QUDINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> QUDINT0; 
    }
    namespace Noneirq098mon{
        using Addr = Register::Address<0x4003138c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq099mon{
        using Addr = Register::Address<0x40031390,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq100mon{
        using Addr = Register::Address<0x40031394,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq101mon{
        using Addr = Register::Address<0x40031398,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq102mon{
        using Addr = Register::Address<0x4003139c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BTINT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BTINT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BTINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BTINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq103mon{
        using Addr = Register::Address<0x400313a0,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq104mon{
        using Addr = Register::Address<0x400313a4,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq105mon{
        using Addr = Register::Address<0x400313a8,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq106mon{
        using Addr = Register::Address<0x400313ac,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq107mon{
        using Addr = Register::Address<0x400313b0,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq108mon{
        using Addr = Register::Address<0x400313b4,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq109mon{
        using Addr = Register::Address<0x400313b8,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq110mon{
        using Addr = Register::Address<0x400313bc,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq111mon{
        using Addr = Register::Address<0x400313c0,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADCINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADCINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADCINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADCINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADCINT0; 
    }
    namespace Noneirq112mon{
        using Addr = Register::Address<0x400313c4,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CANDINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PCRCDINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> QSPIDINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> QSPIDINT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> I2SDINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> I2SDINT0; 
    }
    namespace Noneirq113mon{
        using Addr = Register::Address<0x400313c8,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RCEC0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USB_DRQ_INT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USB_DRQ_INT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USB_DRQ_INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USB_DRQ_INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USB_DRQ_INT0; 
    }
    namespace Noneirq114mon{
        using Addr = Register::Address<0x400313cc,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RCEC1INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USB_INT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> USB_INT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> USB_INT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> USB_INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> USB_INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> USB_INT0; 
    }
    namespace Noneirq115mon{
        using Addr = Register::Address<0x400313d0,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> QSPIINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> QSPIINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> QSPIINT0; 
    }
    namespace Noneirq116mon{
        using Addr = Register::Address<0x400313d4,0xffffffff>;
    }
    namespace Noneirq117mon{
        using Addr = Register::Address<0x400313d8,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PRGCRC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> I2SINT; 
    }
    namespace Noneirq118mon{
        using Addr = Register::Address<0x400313dc,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SDINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SDINT0; 
    }
    namespace Noneirq119mon{
        using Addr = Register::Address<0x400313e0,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FLINT; 
    }
    namespace Noneirq120mon{
        using Addr = Register::Address<0x400313e4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq121mon{
        using Addr = Register::Address<0x400313e8,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq122mon{
        using Addr = Register::Address<0x400313ec,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq123mon{
        using Addr = Register::Address<0x400313f0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq124mon{
        using Addr = Register::Address<0x400313f4,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq125mon{
        using Addr = Register::Address<0x400313f8,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq126mon{
        using Addr = Register::Address<0x400313fc,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSRINT; 
    }
    namespace Noneirq127mon{
        using Addr = Register::Address<0x40031400,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
}
