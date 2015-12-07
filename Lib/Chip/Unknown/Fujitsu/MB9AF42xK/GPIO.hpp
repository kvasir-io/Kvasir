#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General-purpose I/O ports
    namespace Nonepfr0{    ///<Port function setting register 0
        using Addr = Register::Address<0x40033000,0xffff7fe0,0,unsigned>;
        ///Bit15 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        ///Bit4 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr1{    ///<Port function setting register 1
        using Addr = Register::Address<0x40033004,0xffffffc8,0,unsigned>;
        ///Bit5 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        ///Bit4 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit2 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr2{    ///<Port function setting register 2
        using Addr = Register::Address<0x40033008,0xfffffff1,0,unsigned>;
        ///Bit3 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
    }
    namespace Nonepfr3{    ///<Port function setting register 3
        using Addr = Register::Address<0x4003300c,0xffff01ff,0,unsigned>;
        ///Bit15 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        ///Bit14 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///Bit13 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        ///Bit12 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
        ///Bit11 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        ///Bit10 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        ///Bit9 of PFR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
    }
    namespace Nonepfr4{    ///<Port function setting register 4
        using Addr = Register::Address<0x40033010,0xfffff93f,0,unsigned>;
        ///Bit10 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        ///Bit9 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p9{}; 
        namespace P9ValC{
        }
        ///Bit7 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        ///Bit6 of PFR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
    }
    namespace Nonepfr5{    ///<Port function setting register 5
        using Addr = Register::Address<0x40033014,0xfffffff8,0,unsigned>;
        ///Bit2 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr6{    ///<Port function setting register 6
        using Addr = Register::Address<0x40033018,0xfffffffc,0,unsigned>;
        ///Bit1 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfr8{    ///<Port function setting register 8
        using Addr = Register::Address<0x40033020,0xfffffff8,0,unsigned>;
        ///Bit2 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PFR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepfre{    ///<Port function setting register E
        using Addr = Register::Address<0x40033038,0xfffffff2,0,unsigned>;
        ///Bit3 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit0 of PFRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepcr0{    ///<Pull-up Setting Register 0
        using Addr = Register::Address<0x40033100,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr1{    ///<Pull-up Setting Register 1
        using Addr = Register::Address<0x40033104,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr2{    ///<Pull-up Setting Register 2
        using Addr = Register::Address<0x40033108,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr3{    ///<Pull-up Setting Register 3
        using Addr = Register::Address<0x4003310c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr4{    ///<Pull-up Setting Register 4
        using Addr = Register::Address<0x40033110,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr5{    ///<Pull-up Setting Register 5
        using Addr = Register::Address<0x40033114,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr6{    ///<Pull-up Setting Register 6
        using Addr = Register::Address<0x40033118,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr8{    ///<Pull-up Setting Register 8
        using Addr = Register::Address<0x40033120,0xffffffff,0,unsigned>;
    }
    namespace Nonepcre{    ///<Pull-up Setting Register E
        using Addr = Register::Address<0x40033138,0xffffffff,0,unsigned>;
    }
    namespace Noneddr0{    ///<Port input/output direction setting register 0
        using Addr = Register::Address<0x40033200,0xffff7fe0,0,unsigned>;
        ///Bit15 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        ///Bit4 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        ///Bit3 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of DDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Noneddr1{    ///<Port input/output direction setting register 1
        using Addr = Register::Address<0x40033204,0xffffffff,0,unsigned>;
    }
    namespace Noneddr2{    ///<Port input/output direction setting register 2
        using Addr = Register::Address<0x40033208,0xffffffff,0,unsigned>;
    }
    namespace Noneddr3{    ///<Port input/output direction setting register 3
        using Addr = Register::Address<0x4003320c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr4{    ///<Port input/output direction setting register 4
        using Addr = Register::Address<0x40033210,0xffffffff,0,unsigned>;
    }
    namespace Noneddr5{    ///<Port input/output direction setting register 5
        using Addr = Register::Address<0x40033214,0xffffffff,0,unsigned>;
    }
    namespace Noneddr6{    ///<Port input/output direction setting register 6
        using Addr = Register::Address<0x40033218,0xffffffff,0,unsigned>;
    }
    namespace Noneddr8{    ///<Port input/output direction setting register 8
        using Addr = Register::Address<0x40033220,0xffffffff,0,unsigned>;
    }
    namespace Noneddre{    ///<Port input/output direction setting register E
        using Addr = Register::Address<0x40033238,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir0{    ///<Port input data register 0
        using Addr = Register::Address<0x40033300,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir1{    ///<Port input data register 1
        using Addr = Register::Address<0x40033304,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir2{    ///<Port input data register 2
        using Addr = Register::Address<0x40033308,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir3{    ///<Port input data register 3
        using Addr = Register::Address<0x4003330c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir4{    ///<Port input data register 4
        using Addr = Register::Address<0x40033310,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir5{    ///<Port input data register 5
        using Addr = Register::Address<0x40033314,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir6{    ///<Port input data register 6
        using Addr = Register::Address<0x40033318,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir8{    ///<Port input data register 8
        using Addr = Register::Address<0x40033320,0xffffffff,0,unsigned>;
    }
    namespace Nonepdire{    ///<Port input data register E
        using Addr = Register::Address<0x40033338,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor0{    ///<Port output data register 0
        using Addr = Register::Address<0x40033400,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor1{    ///<Port output data register 1
        using Addr = Register::Address<0x40033404,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor2{    ///<Port output data register 2
        using Addr = Register::Address<0x40033408,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor3{    ///<Port output data register 3
        using Addr = Register::Address<0x4003340c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor4{    ///<Port output data register 4
        using Addr = Register::Address<0x40033410,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor5{    ///<Port output data register 5
        using Addr = Register::Address<0x40033414,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor6{    ///<Port output data register 6
        using Addr = Register::Address<0x40033418,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor8{    ///<Port output data register 8
        using Addr = Register::Address<0x40033420,0xffffffff,0,unsigned>;
    }
    namespace Nonepdore{    ///<Port output data register E
        using Addr = Register::Address<0x40033438,0xffffffff,0,unsigned>;
    }
    namespace Noneade{    ///<Analog input setting register
        using Addr = Register::Address<0x40033500,0xffff8fc8,0,unsigned>;
        ///Bit14 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> an14{}; 
        namespace An14ValC{
        }
        ///Bit13 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> an13{}; 
        namespace An13ValC{
        }
        ///Bit12 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> an12{}; 
        namespace An12ValC{
        }
        ///Bit5 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        namespace An5ValC{
        }
        ///Bit4 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        namespace An4ValC{
        }
        ///Bit2 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        namespace An2ValC{
        }
        ///Bit1 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
        namespace An1ValC{
        }
        ///Bit0 of ADE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> an0{}; 
        namespace An0ValC{
        }
    }
    namespace Nonespsr{    ///<Special port setting register
        using Addr = Register::Address<0x40033580,0xfffffff0,0,unsigned>;
        ///Main clock(oscillation) pin setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mainxc{}; 
        namespace MainxcValC{
        }
        ///Sub clock(oscillation) pin setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> subxc{}; 
        namespace SubxcValC{
        }
    }
    namespace Noneepfr00{    ///<Extended pin function setting register 00
        using Addr = Register::Address<0x40033600,0xfffcff08,0,unsigned>;
        ///JTAG function select bit1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> jtagen1s{}; 
        namespace Jtagen1sValC{
        }
        ///JTAG function select bit0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> jtagen0b{}; 
        namespace Jtagen0bValC{
        }
        ///Sub clock divide output function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> suboute{}; 
        namespace SubouteValC{
        }
        ///RTC clock output select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rtccoe{}; 
        namespace RtccoeValC{
        }
        ///Internal high-speed CR oscillation output function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> croute{}; 
        namespace CrouteValC{
        }
        ///NMIX function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmis{}; 
        namespace NmisValC{
        }
    }
    namespace Noneepfr01{    ///<Extended pin function setting register 01
        using Addr = Register::Address<0x40033604,0x0000e000,0,unsigned>;
        ///IC03 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic03s{}; 
        namespace Ic03sValC{
        }
        ///IC02 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic02s{}; 
        namespace Ic02sValC{
        }
        ///IC01 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic01s{}; 
        namespace Ic01sValC{
        }
        ///IC00 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic00s{}; 
        namespace Ic00sValC{
        }
        ///FRCK0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck0s{}; 
        namespace Frck0sValC{
        }
        ///DTTIX0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti0s{}; 
        namespace Dtti0sValC{
        }
        ///DTTIX0 function select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti0c{}; 
        namespace Dtti0cValC{
        }
        ///RTO05E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto05e{}; 
        namespace Rto05eValC{
        }
        ///RTO04E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto04e{}; 
        namespace Rto04eValC{
        }
        ///RTO03E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto03e{}; 
        namespace Rto03eValC{
        }
        ///RTO02E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto02e{}; 
        namespace Rto02eValC{
        }
        ///RTO01E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto01e{}; 
        namespace Rto01eValC{
        }
        ///RTO00E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto00e{}; 
        namespace Rto00eValC{
        }
    }
    namespace Noneepfr02{    ///<Extended pin function setting register 02
        using Addr = Register::Address<0x40033608,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr03{    ///<Extended pin function setting register 03
        using Addr = Register::Address<0x4003360c,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr04{    ///<Extended pin function setting register 04
        using Addr = Register::Address<0x40033610,0xc0c3c083,0,unsigned>;
        ///TIOB3 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob3s{}; 
        namespace Tiob3sValC{
        }
        ///TIOA3E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa3e{}; 
        namespace Tioa3eValC{
        }
        ///TIOA3 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa3s{}; 
        namespace Tioa3sValC{
        }
        ///TIOB2 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob2s{}; 
        namespace Tiob2sValC{
        }
        ///TIOA2 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa2e{}; 
        namespace Tioa2eValC{
        }
        ///TIOB1 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob1s{}; 
        namespace Tiob1sValC{
        }
        ///TIOA1E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa1e{}; 
        namespace Tioa1eValC{
        }
        ///TIOA1 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa1s{}; 
        namespace Tioa1sValC{
        }
        ///TIOB0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tiob0s{}; 
        namespace Tiob0sValC{
        }
        ///TIOA0 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa0e{}; 
        namespace Tioa0eValC{
        }
    }
    namespace Noneepfr05{    ///<Extended pin function setting register 05
        using Addr = Register::Address<0x40033614,0xc0c3c0c3,0,unsigned>;
        ///TIOB7 input select Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob7s{}; 
        namespace Tiob7sValC{
        }
        ///TIOA7E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa7e{}; 
        namespace Tioa7eValC{
        }
        ///TIOA7 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa7s{}; 
        namespace Tioa7sValC{
        }
        ///TIOB6 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob6s{}; 
        namespace Tiob6sValC{
        }
        ///TIOA6 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa6e{}; 
        namespace Tioa6eValC{
        }
        ///TIOB5 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob5s{}; 
        namespace Tiob5sValC{
        }
        ///TIOA5E output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa5e{}; 
        namespace Tioa5eValC{
        }
        ///TIOA5 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa5s{}; 
        namespace Tioa5sValC{
        }
        ///TIOB4 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob4s{}; 
        namespace Tiob4sValC{
        }
        ///TIOA4 output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa4e{}; 
        namespace Tioa4eValC{
        }
    }
    namespace Noneepfr06{    ///<Extended pin function setting register 06
        using Addr = Register::Address<0x40033618,0x0fff0f00,0,unsigned>;
        ///External interrupt 15 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> eint15s{}; 
        namespace Eint15sValC{
        }
        ///External interrupt 14 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint14s{}; 
        namespace Eint14sValC{
        }
        ///External interrupt 7 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint07s{}; 
        namespace Eint07sValC{
        }
        ///External interrupt 6 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint06s{}; 
        namespace Eint06sValC{
        }
        ///External interrupt 3 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint03s{}; 
        namespace Eint03sValC{
        }
        ///External interrupt 2 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint02s{}; 
        namespace Eint02sValC{
        }
        ///External interrupt 1 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint01s{}; 
        namespace Eint01sValC{
        }
        ///External interrupt 0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint00s{}; 
        namespace Eint00sValC{
        }
    }
    namespace Noneepfr07{    ///<Extended pin function setting register 07
        using Addr = Register::Address<0x4003361c,0xf03f000f,0,unsigned>;
        ///SCK3 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> sck3b{}; 
        namespace Sck3bValC{
        }
        ///SOT3B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> sot3b{}; 
        namespace Sot3bValC{
        }
        ///SIN3S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sin3s{}; 
        namespace Sin3sValC{
        }
        ///SCK1 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck1b{}; 
        namespace Sck1bValC{
        }
        ///SCK1B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot1b{}; 
        namespace Sot1bValC{
        }
        ///SIN1S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin1s{}; 
        namespace Sin1sValC{
        }
        ///SCK0 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck0b{}; 
        namespace Sck0bValC{
        }
        ///SOT0B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot0b{}; 
        namespace Sot0bValC{
        }
        ///SIN0S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin0s{}; 
        namespace Sin0sValC{
        }
    }
    namespace Noneepfr08{    ///<Extended pin function setting register 08
        using Addr = Register::Address<0x40033620,0xffff03ff,0,unsigned>;
        ///SCK5 input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck5b{}; 
        namespace Sck5bValC{
        }
        ///SOT5B input/output select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot5b{}; 
        namespace Sot5bValC{
        }
        ///SIN5S input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin5s{}; 
        namespace Sin5sValC{
        }
    }
    namespace Noneepfr09{    ///<Extended pin function setting register 09
        using Addr = Register::Address<0x40033624,0x0fff0fff,0,unsigned>;
        ///CAN TX1 Output Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> ctx1e{}; 
        namespace Ctx1eValC{
        }
        ///CAN RX1 Input Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> crx1s{}; 
        namespace Crx1sValC{
        }
        ///ADTRG0 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> adtrg0s{}; 
        namespace Adtrg0sValC{
        }
    }
    namespace Noneepfr10{    ///<Extended pin function setting register 10
        using Addr = Register::Address<0x40033628,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr11{    ///<Extended pin function setting register 11
        using Addr = Register::Address<0x4003362c,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr12{    ///<Extended pin function setting register 12
        using Addr = Register::Address<0x40033630,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr13{    ///<Extended pin function setting register 13
        using Addr = Register::Address<0x40033634,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr14{    ///<Extended pin function setting register 14
        using Addr = Register::Address<0x40033638,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr15{    ///<Extended pin function setting register 15
        using Addr = Register::Address<0x4003363c,0xfffff000,0,unsigned>;
        ///External interrupt 21 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> eint21s{}; 
        namespace Eint21sValC{
        }
        ///External interrupt 20 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> eint20s{}; 
        namespace Eint20sValC{
        }
        ///External interrupt 19 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint19s{}; 
        namespace Eint19sValC{
        }
        ///External interrupt 18 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint18s{}; 
        namespace Eint18sValC{
        }
        ///External interrupt 17 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> eint17s{}; 
        namespace Eint17sValC{
        }
        ///External interrupt 16 input select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> eint16s{}; 
        namespace Eint16sValC{
        }
    }
    namespace Noneepfr16{    ///<Extended pin function setting register 16
        using Addr = Register::Address<0x40033640,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr17{    ///<Extended pin function setting register 17
        using Addr = Register::Address<0x40033644,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr18{    ///<Extended pin function setting register 18
        using Addr = Register::Address<0x40033648,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr2{    ///<Port Pseudo Open Drain Setting Register 2
        using Addr = Register::Address<0x40033708,0xfffffff1,0,unsigned>;
        ///Bit3 of PZR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        ///Bit2 of PZR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PZR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
    }
    namespace Nonepzr5{    ///<Port Pseudo Open Drain Setting Register 5
        using Addr = Register::Address<0x40033714,0xfffffff8,0,unsigned>;
        ///Bit2 of PZR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        ///Bit1 of PZR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
        ///Bit0 of PZR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepzr6{    ///<Port Pseudo Open Drain Setting Register 6
        using Addr = Register::Address<0x40033718,0xfffffffe,0,unsigned>;
        ///Bit0 of PZR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
}
