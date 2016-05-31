#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General-purpose I/O ports
    namespace GpioPfr0{    ///<Port function setting register 0
        using Addr = Register::Address<0x40033000,0xffff7fe5,0x00000000,unsigned>;
        ///Bit15 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        ///Bit4 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit1 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
    }
    namespace GpioPfr1{    ///<Port function setting register 1
        using Addr = Register::Address<0x40033004,0xffffffc1,0x00000000,unsigned>;
        ///Bit5 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
    }
    namespace GpioPfr2{    ///<Port function setting register 2
        using Addr = Register::Address<0x40033008,0xfffffff1,0x00000000,unsigned>;
        ///Bit3 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
    }
    namespace GpioPfr3{    ///<Port function setting register 3
        using Addr = Register::Address<0x4003300c,0xffff03ff,0x00000000,unsigned>;
        ///Bit15 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        ///Bit14 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        ///Bit13 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        ///Bit12 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        ///Bit11 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        ///Bit10 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
    }
    namespace GpioPfr4{    ///<Port function setting register 4
        using Addr = Register::Address<0x40033010,0xffffff3f,0x00000000,unsigned>;
        ///Bit7 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        ///Bit6 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
    }
    namespace GpioPfre{    ///<Port function setting register E
        using Addr = Register::Address<0x40033038,0xfffffff2,0x00000000,unsigned>;
        ///Bit3 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit0 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
    }
    namespace GpioPcr0{    ///<Pull-up Setting Register 0
        using Addr = Register::Address<0x40033100,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr1{    ///<Pull-up Setting Register 1
        using Addr = Register::Address<0x40033104,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr2{    ///<Pull-up Setting Register 2
        using Addr = Register::Address<0x40033108,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr3{    ///<Pull-up Setting Register 3
        using Addr = Register::Address<0x4003310c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcr4{    ///<Pull-up Setting Register 4
        using Addr = Register::Address<0x40033110,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPcre{    ///<Pull-up Setting Register E
        using Addr = Register::Address<0x40033138,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr0{    ///<Port input/output direction setting register 0
        using Addr = Register::Address<0x40033200,0xffff7fe5,0x00000000,unsigned>;
        ///Bit15 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        ///Bit4 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit1 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
    }
    namespace GpioDdr1{    ///<Port input/output direction setting register 1
        using Addr = Register::Address<0x40033204,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr2{    ///<Port input/output direction setting register 2
        using Addr = Register::Address<0x40033208,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr3{    ///<Port input/output direction setting register 3
        using Addr = Register::Address<0x4003320c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdr4{    ///<Port input/output direction setting register 4
        using Addr = Register::Address<0x40033210,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioDdre{    ///<Port input/output direction setting register E
        using Addr = Register::Address<0x40033238,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir0{    ///<Port input data register 0
        using Addr = Register::Address<0x40033300,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir1{    ///<Port input data register 1
        using Addr = Register::Address<0x40033304,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir2{    ///<Port input data register 2
        using Addr = Register::Address<0x40033308,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir3{    ///<Port input data register 3
        using Addr = Register::Address<0x4003330c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdir4{    ///<Port input data register 4
        using Addr = Register::Address<0x40033310,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdire{    ///<Port input data register E
        using Addr = Register::Address<0x40033338,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor0{    ///<Port output data register 0
        using Addr = Register::Address<0x40033400,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor1{    ///<Port output data register 1
        using Addr = Register::Address<0x40033404,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor2{    ///<Port output data register 2
        using Addr = Register::Address<0x40033408,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor3{    ///<Port output data register 3
        using Addr = Register::Address<0x4003340c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdor4{    ///<Port output data register 4
        using Addr = Register::Address<0x40033410,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPdore{    ///<Port output data register E
        using Addr = Register::Address<0x40033438,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioAde{    ///<Analog input setting register
        using Addr = Register::Address<0x40033500,0xffff8fc1,0x00000000,unsigned>;
        ///Bit14 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> an14{}; 
        ///Bit13 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> an13{}; 
        ///Bit12 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> an12{}; 
        ///Bit5 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        ///Bit4 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        ///Bit3 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an3{}; 
        ///Bit2 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        ///Bit1 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
    }
    namespace GpioSpsr{    ///<Special port setting register
        using Addr = Register::Address<0x40033580,0xfffffff0,0x00000000,unsigned>;
        ///Main clock(oscillation) pin setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mainxc{}; 
        ///Sub clock(oscillation) pin setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> subxc{}; 
    }
    namespace GpioEpfr00{    ///<Extended pin function setting register 00
        using Addr = Register::Address<0x40033600,0xffffff08,0x00000000,unsigned>;
        ///Sub clock divide output function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> suboute{}; 
        ///RTC clock output select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rtccoe{}; 
        ///Internal high-speed CR oscillation output function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> croute{}; 
        ///NMIX function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmis{}; 
    }
    namespace GpioEpfr01{    ///<Extended pin function setting register 01
        using Addr = Register::Address<0x40033604,0x0000e000,0x00000000,unsigned>;
        ///IC03 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic03s{}; 
        ///IC02 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic02s{}; 
        ///IC01 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic01s{}; 
        ///IC00 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic00s{}; 
        ///FRCK0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck0s{}; 
        ///DTTIX0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti0s{}; 
        ///DTTIX0 function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti0c{}; 
        ///RTO05E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto05e{}; 
        ///RTO04E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto04e{}; 
        ///RTO03E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto03e{}; 
        ///RTO02E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto02e{}; 
        ///RTO01E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto01e{}; 
        ///RTO00E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto00e{}; 
    }
    namespace GpioEpfr02{    ///<Extended pin function setting register 02
        using Addr = Register::Address<0x40033608,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr03{    ///<Extended pin function setting register 03
        using Addr = Register::Address<0x4003360c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr04{    ///<Extended pin function setting register 04
        using Addr = Register::Address<0x40033610,0xc0c3c083,0x00000000,unsigned>;
        ///TIOB3 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob3s{}; 
        ///TIOA3E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa3e{}; 
        ///TIOA3 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa3s{}; 
        ///TIOB2 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob2s{}; 
        ///TIOA2 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa2e{}; 
        ///TIOB1 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob1s{}; 
        ///TIOA1E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa1e{}; 
        ///TIOA1 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa1s{}; 
        ///TIOB0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tiob0s{}; 
        ///TIOA0 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa0e{}; 
    }
    namespace GpioEpfr05{    ///<Extended pin function setting register 05
        using Addr = Register::Address<0x40033614,0xc0c3c0c3,0x00000000,unsigned>;
        ///TIOB7 input select Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob7s{}; 
        ///TIOA7E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa7e{}; 
        ///TIOA7 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa7s{}; 
        ///TIOB6 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob6s{}; 
        ///TIOA6 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa6e{}; 
        ///TIOB5 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob5s{}; 
        ///TIOA5E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa5e{}; 
        ///TIOA5 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa5s{}; 
        ///TIOB4 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob4s{}; 
        ///TIOA4 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa4e{}; 
    }
    namespace GpioEpfr06{    ///<Extended pin function setting register 06
        using Addr = Register::Address<0x40033618,0xcfff0f0f,0x00000000,unsigned>;
        ///External interrupt 14 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint14s{}; 
        ///External interrupt 7 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint07s{}; 
        ///External interrupt 6 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint06s{}; 
        ///External interrupt 3 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint03s{}; 
        ///External interrupt 2 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint02s{}; 
    }
    namespace GpioEpfr07{    ///<Extended pin function setting register 07
        using Addr = Register::Address<0x4003361c,0xffc0000f,0x00000000,unsigned>;
        ///SCK2 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck2b{}; 
        ///SOT2B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot2b{}; 
        ///SIN2S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin2s{}; 
        ///SCK1 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck1b{}; 
        ///SCK1B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot1b{}; 
        ///SIN1S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin1s{}; 
        ///SCK0 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck0b{}; 
        ///SOT0B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot0b{}; 
        ///SIN0S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin0s{}; 
    }
    namespace GpioEpfr08{    ///<Extended pin function setting register 08
        using Addr = Register::Address<0x40033620,0xffff03ff,0x00000000,unsigned>;
        ///SCK5 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck5b{}; 
        ///SOT5B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot5b{}; 
        ///SIN5S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin5s{}; 
    }
    namespace GpioEpfr09{    ///<Extended pin function setting register 09
        using Addr = Register::Address<0x40033624,0xffff003f,0x00000000,unsigned>;
        ///ADTRG0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> adtrg0s{}; 
        ///QZIN1S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> qzin1s{}; 
        ///QBIN1S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qbin1s{}; 
        ///QAIN1S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qain1s{}; 
    }
    namespace GpioEpfr10{    ///<Extended pin function setting register 10
        using Addr = Register::Address<0x40033628,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr11{    ///<Extended pin function setting register 11
        using Addr = Register::Address<0x4003362c,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr12{    ///<Extended pin function setting register 12
        using Addr = Register::Address<0x40033630,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr13{    ///<Extended pin function setting register 13
        using Addr = Register::Address<0x40033634,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr14{    ///<Extended pin function setting register 14
        using Addr = Register::Address<0x40033638,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr15{    ///<Extended pin function setting register 15
        using Addr = Register::Address<0x4003363c,0xffffff0f,0x00000000,unsigned>;
        ///External interrupt 19 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint19s{}; 
        ///External interrupt 18 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint18s{}; 
    }
    namespace GpioEpfr16{    ///<Extended pin function setting register 16
        using Addr = Register::Address<0x40033640,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr17{    ///<Extended pin function setting register 17
        using Addr = Register::Address<0x40033644,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioEpfr18{    ///<Extended pin function setting register 18
        using Addr = Register::Address<0x40033648,0xffffffff,0x00000000,unsigned>;
    }
    namespace GpioPzr1{    ///<Port Pseudo Open Drain Setting Register 1
        using Addr = Register::Address<0x40033704,0xffffffc1,0x00000000,unsigned>;
        ///Bit5 of PZR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        ///Bit4 of PZR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        ///Bit3 of PZR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PZR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PZR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
    }
    namespace GpioPzr2{    ///<Port Pseudo Open Drain Setting Register 2
        using Addr = Register::Address<0x40033708,0xfffffff1,0x00000000,unsigned>;
        ///Bit3 of PZR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        ///Bit2 of PZR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        ///Bit1 of PZR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
    }
}
