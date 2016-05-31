#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Power control
    namespace PwrCr1{    ///<Power control register 1
        using Addr = Register::Address<0x40007000,0xffffb8f8,0x00000000,unsigned>;
        ///Low-power run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> lpr{}; 
        ///Voltage scaling range              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> vos{}; 
        ///Disable backup domain write              protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbp{}; 
        ///Low-power mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> lpms{}; 
    }
    namespace PwrCr2{    ///<Power control register 2
        using Addr = Register::Address<0x40007004,0xfffff900,0x00000000,unsigned>;
        ///VDDUSB USB supply valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usv{}; 
        ///VDDIO2 Independent I/Os supply              valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iosv{}; 
        ///Peripheral voltage monitoring 4 enable:              VDDA vs. 2.2V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pvme4{}; 
        ///Peripheral voltage monitoring 3 enable:              VDDA vs. 1.62V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pvme3{}; 
        ///Peripheral voltage monitoring 2 enable:              VDDIO2 vs. 0.9V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pvme2{}; 
        ///Peripheral voltage monitoring 1 enable:              VDDUSB vs. 1.2V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pvme1{}; 
        ///Power voltage detector level              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> pls{}; 
        ///Power voltage detector              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pvde{}; 
    }
    namespace PwrCr3{    ///<Power control register 3
        using Addr = Register::Address<0x40007008,0xffff7ae0,0x00000000,unsigned>;
        ///Enable internal wakeup              line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ewf{}; 
        ///Apply pull-up and pull-down              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> apc{}; 
        ///SRAM2 retention in Standby              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rrs{}; 
        ///Enable Wakeup pin WKUP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ewup5{}; 
        ///Enable Wakeup pin WKUP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ewup4{}; 
        ///Enable Wakeup pin WKUP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ewup3{}; 
        ///Enable Wakeup pin WKUP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ewup2{}; 
        ///Enable Wakeup pin WKUP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ewup1{}; 
    }
    namespace PwrCr4{    ///<Power control register 4
        using Addr = Register::Address<0x4000700c,0xfffffce0,0x00000000,unsigned>;
        ///VBAT battery charging resistor              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> vbrs{}; 
        ///VBAT battery charging              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vbe{}; 
        ///Wakeup pin WKUP5 polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wp5{}; 
        ///Wakeup pin WKUP4 polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wp4{}; 
        ///Wakeup pin WKUP3 polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wp3{}; 
        ///Wakeup pin WKUP2 polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wp2{}; 
        ///Wakeup pin WKUP1 polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wp1{}; 
    }
    namespace PwrSr1{    ///<Power status register 1
        using Addr = Register::Address<0x40007010,0xffff7ee0,0x00000000,unsigned>;
        ///Wakeup flag internal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wufi{}; 
        ///Standby flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csbf{}; 
        ///Wakeup flag 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cwuf5{}; 
        ///Wakeup flag 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cwuf4{}; 
        ///Wakeup flag 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cwuf3{}; 
        ///Wakeup flag 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cwuf2{}; 
        ///Wakeup flag 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cwuf1{}; 
    }
    namespace PwrSr2{    ///<Power status register 2
        using Addr = Register::Address<0x40007014,0xffff00ff,0x00000000,unsigned>;
        ///Peripheral voltage monitoring output:              VDDA vs. 2.2 V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pvmo4{}; 
        ///Peripheral voltage monitoring output:              VDDA vs. 1.62 V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pvmo3{}; 
        ///Peripheral voltage monitoring output:              VDDIO2 vs. 0.9 V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pvmo2{}; 
        ///Peripheral voltage monitoring output:              VDDUSB vs. 1.2 V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pvmo1{}; 
        ///Power voltage detector              output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pvdo{}; 
        ///Voltage scaling flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vosf{}; 
        ///Low-power regulator flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reglpf{}; 
        ///Low-power regulator              started
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reglps{}; 
    }
    namespace PwrScr{    ///<Power status clear register
        using Addr = Register::Address<0x40007018,0xfffffee0,0x00000000,unsigned>;
        ///Clear standby flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sbf{}; 
        ///Clear wakeup flag 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wuf5{}; 
        ///Clear wakeup flag 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wuf4{}; 
        ///Clear wakeup flag 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wuf3{}; 
        ///Clear wakeup flag 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wuf2{}; 
        ///Clear wakeup flag 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wuf1{}; 
    }
    namespace PwrPucra{    ///<Power Port A pull-up control          register
        using Addr = Register::Address<0x40007020,0xffff0000,0x00000000,unsigned>;
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        ///Port A pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
    }
    namespace PwrPdcra{    ///<Power Port A pull-down control          register
        using Addr = Register::Address<0x40007024,0xffff0000,0x00000000,unsigned>;
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        ///Port A pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
    }
    namespace PwrPucrb{    ///<Power Port B pull-up control          register
        using Addr = Register::Address<0x40007028,0xffff0000,0x00000000,unsigned>;
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        ///Port B pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
    }
    namespace PwrPdcrb{    ///<Power Port B pull-down control          register
        using Addr = Register::Address<0x4000702c,0xffff0000,0x00000000,unsigned>;
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        ///Port B pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
    }
    namespace PwrPucrc{    ///<Power Port C pull-up control          register
        using Addr = Register::Address<0x40007030,0xffff0000,0x00000000,unsigned>;
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        ///Port C pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
    }
    namespace PwrPdcrc{    ///<Power Port C pull-down control          register
        using Addr = Register::Address<0x40007034,0xffff0000,0x00000000,unsigned>;
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        ///Port C pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
    }
    namespace PwrPucrd{    ///<Power Port D pull-up control          register
        using Addr = Register::Address<0x40007038,0xffff0000,0x00000000,unsigned>;
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        ///Port D pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
    }
    namespace PwrPdcrd{    ///<Power Port D pull-down control          register
        using Addr = Register::Address<0x4000703c,0xffff0000,0x00000000,unsigned>;
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        ///Port D pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
    }
    namespace PwrPucre{    ///<Power Port E pull-up control          register
        using Addr = Register::Address<0x40007040,0xffff0000,0x00000000,unsigned>;
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        ///Port E pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
    }
    namespace PwrPdcre{    ///<Power Port E pull-down control          register
        using Addr = Register::Address<0x40007044,0xffff0000,0x00000000,unsigned>;
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        ///Port E pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
    }
    namespace PwrPucrf{    ///<Power Port F pull-up control          register
        using Addr = Register::Address<0x40007048,0xffff0000,0x00000000,unsigned>;
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        ///Port F pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
    }
    namespace PwrPdcrf{    ///<Power Port F pull-down control          register
        using Addr = Register::Address<0x4000704c,0xffff0000,0x00000000,unsigned>;
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        ///Port F pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
    }
    namespace PwrPucrg{    ///<Power Port G pull-up control          register
        using Addr = Register::Address<0x40007050,0xffff0000,0x00000000,unsigned>;
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        ///Port G pull-up bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
    }
    namespace PwrPdcrg{    ///<Power Port G pull-down control          register
        using Addr = Register::Address<0x40007054,0xffff0000,0x00000000,unsigned>;
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        ///Port G pull-down bit y              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
    }
    namespace PwrPucrh{    ///<Power Port H pull-up control          register
        using Addr = Register::Address<0x40007058,0xfffffffc,0x00000000,unsigned>;
        ///Port H pull-up bit y              (y=0..1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        ///Port H pull-up bit y              (y=0..1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
    }
    namespace PwrPdcrh{    ///<Power Port H pull-down control          register
        using Addr = Register::Address<0x4000705c,0xfffffffc,0x00000000,unsigned>;
        ///Port H pull-down bit y              (y=0..1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        ///Port H pull-down bit y              (y=0..1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
    }
}
