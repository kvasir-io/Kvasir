#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power control
    namespace Nonecr1{    ///<Power control register 1
        using Addr = Register::Address<0x40007000,0xffffb8f8,0,unsigned>;
        ///Low-power run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> lpr{}; 
        namespace LprValC{
        }
        ///Voltage scaling range
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> vos{}; 
        namespace VosValC{
        }
        ///Disable backup domain write
              protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbp{}; 
        namespace DbpValC{
        }
        ///Low-power mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> lpms{}; 
        namespace LpmsValC{
        }
    }
    namespace Nonecr2{    ///<Power control register 2
        using Addr = Register::Address<0x40007004,0xfffff900,0,unsigned>;
        ///VDDUSB USB supply valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usv{}; 
        namespace UsvValC{
        }
        ///VDDIO2 Independent I/Os supply
              valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iosv{}; 
        namespace IosvValC{
        }
        ///Peripheral voltage monitoring 4 enable:
              VDDA vs. 2.2V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pvme4{}; 
        namespace Pvme4ValC{
        }
        ///Peripheral voltage monitoring 3 enable:
              VDDA vs. 1.62V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pvme3{}; 
        namespace Pvme3ValC{
        }
        ///Peripheral voltage monitoring 2 enable:
              VDDIO2 vs. 0.9V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pvme2{}; 
        namespace Pvme2ValC{
        }
        ///Peripheral voltage monitoring 1 enable:
              VDDUSB vs. 1.2V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pvme1{}; 
        namespace Pvme1ValC{
        }
        ///Power voltage detector level
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> pls{}; 
        namespace PlsValC{
        }
        ///Power voltage detector
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pvde{}; 
        namespace PvdeValC{
        }
    }
    namespace Nonecr3{    ///<Power control register 3
        using Addr = Register::Address<0x40007008,0xffff7ae0,0,unsigned>;
        ///Enable internal wakeup
              line
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ewf{}; 
        namespace EwfValC{
        }
        ///Apply pull-up and pull-down
              configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> apc{}; 
        namespace ApcValC{
        }
        ///SRAM2 retention in Standby
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rrs{}; 
        namespace RrsValC{
        }
        ///Enable Wakeup pin WKUP5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ewup5{}; 
        namespace Ewup5ValC{
        }
        ///Enable Wakeup pin WKUP4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ewup4{}; 
        namespace Ewup4ValC{
        }
        ///Enable Wakeup pin WKUP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ewup3{}; 
        namespace Ewup3ValC{
        }
        ///Enable Wakeup pin WKUP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ewup2{}; 
        namespace Ewup2ValC{
        }
        ///Enable Wakeup pin WKUP1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ewup1{}; 
        namespace Ewup1ValC{
        }
    }
    namespace Nonecr4{    ///<Power control register 4
        using Addr = Register::Address<0x4000700c,0xfffffce0,0,unsigned>;
        ///VBAT battery charging resistor
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> vbrs{}; 
        namespace VbrsValC{
        }
        ///VBAT battery charging
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> vbe{}; 
        namespace VbeValC{
        }
        ///Wakeup pin WKUP5 polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wp5{}; 
        namespace Wp5ValC{
        }
        ///Wakeup pin WKUP4 polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wp4{}; 
        namespace Wp4ValC{
        }
        ///Wakeup pin WKUP3 polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wp3{}; 
        namespace Wp3ValC{
        }
        ///Wakeup pin WKUP2 polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wp2{}; 
        namespace Wp2ValC{
        }
        ///Wakeup pin WKUP1 polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wp1{}; 
        namespace Wp1ValC{
        }
    }
    namespace Nonesr1{    ///<Power status register 1
        using Addr = Register::Address<0x40007010,0xffff7ee0,0,unsigned>;
        ///Wakeup flag internal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wufi{}; 
        namespace WufiValC{
        }
        ///Standby flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> csbf{}; 
        namespace CsbfValC{
        }
        ///Wakeup flag 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cwuf5{}; 
        namespace Cwuf5ValC{
        }
        ///Wakeup flag 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cwuf4{}; 
        namespace Cwuf4ValC{
        }
        ///Wakeup flag 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cwuf3{}; 
        namespace Cwuf3ValC{
        }
        ///Wakeup flag 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cwuf2{}; 
        namespace Cwuf2ValC{
        }
        ///Wakeup flag 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cwuf1{}; 
        namespace Cwuf1ValC{
        }
    }
    namespace Nonesr2{    ///<Power status register 2
        using Addr = Register::Address<0x40007014,0xffff00ff,0,unsigned>;
        ///Peripheral voltage monitoring output:
              VDDA vs. 2.2 V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pvmo4{}; 
        namespace Pvmo4ValC{
        }
        ///Peripheral voltage monitoring output:
              VDDA vs. 1.62 V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pvmo3{}; 
        namespace Pvmo3ValC{
        }
        ///Peripheral voltage monitoring output:
              VDDIO2 vs. 0.9 V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pvmo2{}; 
        namespace Pvmo2ValC{
        }
        ///Peripheral voltage monitoring output:
              VDDUSB vs. 1.2 V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pvmo1{}; 
        namespace Pvmo1ValC{
        }
        ///Power voltage detector
              output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pvdo{}; 
        namespace PvdoValC{
        }
        ///Voltage scaling flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> vosf{}; 
        namespace VosfValC{
        }
        ///Low-power regulator flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> reglpf{}; 
        namespace ReglpfValC{
        }
        ///Low-power regulator
              started
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> reglps{}; 
        namespace ReglpsValC{
        }
    }
    namespace Nonescr{    ///<Power status clear register
        using Addr = Register::Address<0x40007018,0xfffffee0,0,unsigned>;
        ///Clear standby flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sbf{}; 
        namespace SbfValC{
        }
        ///Clear wakeup flag 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wuf5{}; 
        namespace Wuf5ValC{
        }
        ///Clear wakeup flag 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wuf4{}; 
        namespace Wuf4ValC{
        }
        ///Clear wakeup flag 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wuf3{}; 
        namespace Wuf3ValC{
        }
        ///Clear wakeup flag 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wuf2{}; 
        namespace Wuf2ValC{
        }
        ///Clear wakeup flag 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wuf1{}; 
        namespace Wuf1ValC{
        }
    }
    namespace Nonepucra{    ///<Power Port A pull-up control
          register
        using Addr = Register::Address<0x40007020,0xffff0000,0,unsigned>;
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        namespace Pu15ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        namespace Pu14ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        namespace Pu13ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        namespace Pu12ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        namespace Pu11ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        namespace Pu10ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        namespace Pu9ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        namespace Pu8ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        namespace Pu7ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        namespace Pu6ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        namespace Pu5ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        namespace Pu4ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        namespace Pu3ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        namespace Pu2ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        namespace Pu1ValC{
        }
        ///Port A pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
        namespace Pu0ValC{
        }
    }
    namespace Nonepdcra{    ///<Power Port A pull-down control
          register
        using Addr = Register::Address<0x40007024,0xffff0000,0,unsigned>;
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        namespace Pd15ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        namespace Pd14ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        namespace Pd13ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        namespace Pd12ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        namespace Pd11ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        namespace Pd10ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        namespace Pd9ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        namespace Pd8ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        namespace Pd7ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        namespace Pd6ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        namespace Pd5ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        namespace Pd4ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        namespace Pd3ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        namespace Pd2ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        namespace Pd1ValC{
        }
        ///Port A pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
        namespace Pd0ValC{
        }
    }
    namespace Nonepucrb{    ///<Power Port B pull-up control
          register
        using Addr = Register::Address<0x40007028,0xffff0000,0,unsigned>;
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        namespace Pu15ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        namespace Pu14ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        namespace Pu13ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        namespace Pu12ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        namespace Pu11ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        namespace Pu10ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        namespace Pu9ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        namespace Pu8ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        namespace Pu7ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        namespace Pu6ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        namespace Pu5ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        namespace Pu4ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        namespace Pu3ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        namespace Pu2ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        namespace Pu1ValC{
        }
        ///Port B pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
        namespace Pu0ValC{
        }
    }
    namespace Nonepdcrb{    ///<Power Port B pull-down control
          register
        using Addr = Register::Address<0x4000702c,0xffff0000,0,unsigned>;
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        namespace Pd15ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        namespace Pd14ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        namespace Pd13ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        namespace Pd12ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        namespace Pd11ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        namespace Pd10ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        namespace Pd9ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        namespace Pd8ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        namespace Pd7ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        namespace Pd6ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        namespace Pd5ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        namespace Pd4ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        namespace Pd3ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        namespace Pd2ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        namespace Pd1ValC{
        }
        ///Port B pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
        namespace Pd0ValC{
        }
    }
    namespace Nonepucrc{    ///<Power Port C pull-up control
          register
        using Addr = Register::Address<0x40007030,0xffff0000,0,unsigned>;
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        namespace Pu15ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        namespace Pu14ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        namespace Pu13ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        namespace Pu12ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        namespace Pu11ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        namespace Pu10ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        namespace Pu9ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        namespace Pu8ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        namespace Pu7ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        namespace Pu6ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        namespace Pu5ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        namespace Pu4ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        namespace Pu3ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        namespace Pu2ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        namespace Pu1ValC{
        }
        ///Port C pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
        namespace Pu0ValC{
        }
    }
    namespace Nonepdcrc{    ///<Power Port C pull-down control
          register
        using Addr = Register::Address<0x40007034,0xffff0000,0,unsigned>;
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        namespace Pd15ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        namespace Pd14ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        namespace Pd13ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        namespace Pd12ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        namespace Pd11ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        namespace Pd10ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        namespace Pd9ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        namespace Pd8ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        namespace Pd7ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        namespace Pd6ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        namespace Pd5ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        namespace Pd4ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        namespace Pd3ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        namespace Pd2ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        namespace Pd1ValC{
        }
        ///Port C pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
        namespace Pd0ValC{
        }
    }
    namespace Nonepucrd{    ///<Power Port D pull-up control
          register
        using Addr = Register::Address<0x40007038,0xffff0000,0,unsigned>;
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        namespace Pu15ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        namespace Pu14ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        namespace Pu13ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        namespace Pu12ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        namespace Pu11ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        namespace Pu10ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        namespace Pu9ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        namespace Pu8ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        namespace Pu7ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        namespace Pu6ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        namespace Pu5ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        namespace Pu4ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        namespace Pu3ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        namespace Pu2ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        namespace Pu1ValC{
        }
        ///Port D pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
        namespace Pu0ValC{
        }
    }
    namespace Nonepdcrd{    ///<Power Port D pull-down control
          register
        using Addr = Register::Address<0x4000703c,0xffff0000,0,unsigned>;
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        namespace Pd15ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        namespace Pd14ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        namespace Pd13ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        namespace Pd12ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        namespace Pd11ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        namespace Pd10ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        namespace Pd9ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        namespace Pd8ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        namespace Pd7ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        namespace Pd6ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        namespace Pd5ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        namespace Pd4ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        namespace Pd3ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        namespace Pd2ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        namespace Pd1ValC{
        }
        ///Port D pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
        namespace Pd0ValC{
        }
    }
    namespace Nonepucre{    ///<Power Port E pull-up control
          register
        using Addr = Register::Address<0x40007040,0xffff0000,0,unsigned>;
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        namespace Pu15ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        namespace Pu14ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        namespace Pu13ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        namespace Pu12ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        namespace Pu11ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        namespace Pu10ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        namespace Pu9ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        namespace Pu8ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        namespace Pu7ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        namespace Pu6ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        namespace Pu5ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        namespace Pu4ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        namespace Pu3ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        namespace Pu2ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        namespace Pu1ValC{
        }
        ///Port E pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
        namespace Pu0ValC{
        }
    }
    namespace Nonepdcre{    ///<Power Port E pull-down control
          register
        using Addr = Register::Address<0x40007044,0xffff0000,0,unsigned>;
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        namespace Pd15ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        namespace Pd14ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        namespace Pd13ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        namespace Pd12ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        namespace Pd11ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        namespace Pd10ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        namespace Pd9ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        namespace Pd8ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        namespace Pd7ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        namespace Pd6ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        namespace Pd5ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        namespace Pd4ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        namespace Pd3ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        namespace Pd2ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        namespace Pd1ValC{
        }
        ///Port E pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
        namespace Pd0ValC{
        }
    }
    namespace Nonepucrf{    ///<Power Port F pull-up control
          register
        using Addr = Register::Address<0x40007048,0xffff0000,0,unsigned>;
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        namespace Pu15ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        namespace Pu14ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        namespace Pu13ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        namespace Pu12ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        namespace Pu11ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        namespace Pu10ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        namespace Pu9ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        namespace Pu8ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        namespace Pu7ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        namespace Pu6ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        namespace Pu5ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        namespace Pu4ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        namespace Pu3ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        namespace Pu2ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        namespace Pu1ValC{
        }
        ///Port F pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
        namespace Pu0ValC{
        }
    }
    namespace Nonepdcrf{    ///<Power Port F pull-down control
          register
        using Addr = Register::Address<0x4000704c,0xffff0000,0,unsigned>;
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        namespace Pd15ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        namespace Pd14ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        namespace Pd13ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        namespace Pd12ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        namespace Pd11ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        namespace Pd10ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        namespace Pd9ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        namespace Pd8ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        namespace Pd7ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        namespace Pd6ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        namespace Pd5ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        namespace Pd4ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        namespace Pd3ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        namespace Pd2ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        namespace Pd1ValC{
        }
        ///Port F pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
        namespace Pd0ValC{
        }
    }
    namespace Nonepucrg{    ///<Power Port G pull-up control
          register
        using Addr = Register::Address<0x40007050,0xffff0000,0,unsigned>;
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        namespace Pu15ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        namespace Pu14ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        namespace Pu13ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        namespace Pu12ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        namespace Pu11ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        namespace Pu10ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        namespace Pu9ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        namespace Pu8ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        namespace Pu7ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        namespace Pu6ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        namespace Pu5ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        namespace Pu4ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        namespace Pu3ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        namespace Pu2ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        namespace Pu1ValC{
        }
        ///Port G pull-up bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
        namespace Pu0ValC{
        }
    }
    namespace Nonepdcrg{    ///<Power Port G pull-down control
          register
        using Addr = Register::Address<0x40007054,0xffff0000,0,unsigned>;
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        namespace Pd15ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        namespace Pd14ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        namespace Pd13ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        namespace Pd12ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        namespace Pd11ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        namespace Pd10ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        namespace Pd9ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        namespace Pd8ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        namespace Pd7ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        namespace Pd6ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        namespace Pd5ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        namespace Pd4ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        namespace Pd3ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        namespace Pd2ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        namespace Pd1ValC{
        }
        ///Port G pull-down bit y
              (y=0..15)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
        namespace Pd0ValC{
        }
    }
    namespace Nonepucrh{    ///<Power Port H pull-up control
          register
        using Addr = Register::Address<0x40007058,0xfffffffc,0,unsigned>;
        ///Port H pull-up bit y
              (y=0..1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        namespace Pu1ValC{
        }
        ///Port H pull-up bit y
              (y=0..1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
        namespace Pu0ValC{
        }
    }
    namespace Nonepdcrh{    ///<Power Port H pull-down control
          register
        using Addr = Register::Address<0x4000705c,0xfffffffc,0,unsigned>;
        ///Port H pull-down bit y
              (y=0..1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        namespace Pd1ValC{
        }
        ///Port H pull-down bit y
              (y=0..1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
        namespace Pd0ValC{
        }
    }
}
