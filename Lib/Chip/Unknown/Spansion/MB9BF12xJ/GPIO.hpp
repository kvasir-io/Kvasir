#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral GPIO 
    namespace Nonepfr0{    ///< register PFR0 
        using Addr = Register::Address<0x40033000,0xffff7fe5,0,unsigned>;
        /// bitfield PF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
    }
    namespace Nonepfr1{    ///< register PFR1 
        using Addr = Register::Address<0x40033004,0xffffffc1,0,unsigned>;
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
    }
    namespace Nonepfr2{    ///< register PFR2 
        using Addr = Register::Address<0x40033008,0xfffffff1,0,unsigned>;
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
    }
    namespace Nonepfr3{    ///< register PFR3 
        using Addr = Register::Address<0x4003300c,0xffff03ff,0,unsigned>;
        /// bitfield PF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        /// bitfield PD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
        /// bitfield PC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pc{}; 
        namespace PcValC{
        }
        /// bitfield PB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
        /// bitfield PA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
    }
    namespace Nonepfr4{    ///< register PFR4 
        using Addr = Register::Address<0x40033010,0xffffff3f,0,unsigned>;
        /// bitfield P7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p7{}; 
        namespace P7ValC{
        }
        /// bitfield P6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p6{}; 
        namespace P6ValC{
        }
    }
    namespace Nonepfre{    ///< register PFRE 
        using Addr = Register::Address<0x40033038,0xfffffff2,0,unsigned>;
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p0{}; 
        namespace P0ValC{
        }
    }
    namespace Nonepcr0{    ///< register PCR0 
        using Addr = Register::Address<0x40033100,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr1{    ///< register PCR1 
        using Addr = Register::Address<0x40033104,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr2{    ///< register PCR2 
        using Addr = Register::Address<0x40033108,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr3{    ///< register PCR3 
        using Addr = Register::Address<0x4003310c,0xffffffff,0,unsigned>;
    }
    namespace Nonepcr4{    ///< register PCR4 
        using Addr = Register::Address<0x40033110,0xffffffff,0,unsigned>;
    }
    namespace Nonepcre{    ///< register PCRE 
        using Addr = Register::Address<0x40033138,0xffffffff,0,unsigned>;
    }
    namespace Noneddr0{    ///< register DDR0 
        using Addr = Register::Address<0x40033200,0xffff7fe5,0,unsigned>;
        /// bitfield PF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pf{}; 
        namespace PfValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
    }
    namespace Noneddr1{    ///< register DDR1 
        using Addr = Register::Address<0x40033204,0xffffffff,0,unsigned>;
    }
    namespace Noneddr2{    ///< register DDR2 
        using Addr = Register::Address<0x40033208,0xffffffff,0,unsigned>;
    }
    namespace Noneddr3{    ///< register DDR3 
        using Addr = Register::Address<0x4003320c,0xffffffff,0,unsigned>;
    }
    namespace Noneddr4{    ///< register DDR4 
        using Addr = Register::Address<0x40033210,0xffffffff,0,unsigned>;
    }
    namespace Noneddre{    ///< register DDRE 
        using Addr = Register::Address<0x40033238,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir0{    ///< register PDIR0 
        using Addr = Register::Address<0x40033300,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir1{    ///< register PDIR1 
        using Addr = Register::Address<0x40033304,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir2{    ///< register PDIR2 
        using Addr = Register::Address<0x40033308,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir3{    ///< register PDIR3 
        using Addr = Register::Address<0x4003330c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdir4{    ///< register PDIR4 
        using Addr = Register::Address<0x40033310,0xffffffff,0,unsigned>;
    }
    namespace Nonepdire{    ///< register PDIRE 
        using Addr = Register::Address<0x40033338,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor0{    ///< register PDOR0 
        using Addr = Register::Address<0x40033400,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor1{    ///< register PDOR1 
        using Addr = Register::Address<0x40033404,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor2{    ///< register PDOR2 
        using Addr = Register::Address<0x40033408,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor3{    ///< register PDOR3 
        using Addr = Register::Address<0x4003340c,0xffffffff,0,unsigned>;
    }
    namespace Nonepdor4{    ///< register PDOR4 
        using Addr = Register::Address<0x40033410,0xffffffff,0,unsigned>;
    }
    namespace Nonepdore{    ///< register PDORE 
        using Addr = Register::Address<0x40033438,0xffffffff,0,unsigned>;
    }
    namespace Noneade{    ///< register ADE 
        using Addr = Register::Address<0x40033500,0xffff8fc1,0,unsigned>;
        /// bitfield AN14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> an14{}; 
        namespace An14ValC{
        }
        /// bitfield AN13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> an13{}; 
        namespace An13ValC{
        }
        /// bitfield AN12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> an12{}; 
        namespace An12ValC{
        }
        /// bitfield AN5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> an5{}; 
        namespace An5ValC{
        }
        /// bitfield AN4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> an4{}; 
        namespace An4ValC{
        }
        /// bitfield AN3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> an3{}; 
        namespace An3ValC{
        }
        /// bitfield AN2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> an2{}; 
        namespace An2ValC{
        }
        /// bitfield AN1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> an1{}; 
        namespace An1ValC{
        }
    }
    namespace Nonespsr{    ///< register SPSR 
        using Addr = Register::Address<0x40033580,0xfffffff0,0,unsigned>;
        /// bitfield MAINXC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> mainxc{}; 
        namespace MainxcValC{
        }
        /// bitfield SUBXC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> subxc{}; 
        namespace SubxcValC{
        }
    }
    namespace Noneepfr00{    ///< register EPFR00 
        using Addr = Register::Address<0x40033600,0xffffff08,0,unsigned>;
        /// bitfield SUBOUTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> suboute{}; 
        namespace SubouteValC{
        }
        /// bitfield RTCCOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rtccoe{}; 
        namespace RtccoeValC{
        }
        /// bitfield CROUTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> croute{}; 
        namespace CrouteValC{
        }
        /// bitfield NMIS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nmis{}; 
        namespace NmisValC{
        }
    }
    namespace Noneepfr01{    ///< register EPFR01 
        using Addr = Register::Address<0x40033604,0x0000e000,0,unsigned>;
        /// bitfield IC03S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> ic03s{}; 
        namespace Ic03sValC{
        }
        /// bitfield IC02S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,26),Register::ReadWriteAccess,unsigned> ic02s{}; 
        namespace Ic02sValC{
        }
        /// bitfield IC01S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,23),Register::ReadWriteAccess,unsigned> ic01s{}; 
        namespace Ic01sValC{
        }
        /// bitfield IC00S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> ic00s{}; 
        namespace Ic00sValC{
        }
        /// bitfield FRCK0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> frck0s{}; 
        namespace Frck0sValC{
        }
        /// bitfield DTTI0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> dtti0s{}; 
        namespace Dtti0sValC{
        }
        /// bitfield DTTI0C 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dtti0c{}; 
        namespace Dtti0cValC{
        }
        /// bitfield RTO05E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> rto05e{}; 
        namespace Rto05eValC{
        }
        /// bitfield RTO04E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> rto04e{}; 
        namespace Rto04eValC{
        }
        /// bitfield RTO03E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> rto03e{}; 
        namespace Rto03eValC{
        }
        /// bitfield RTO02E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> rto02e{}; 
        namespace Rto02eValC{
        }
        /// bitfield RTO01E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> rto01e{}; 
        namespace Rto01eValC{
        }
        /// bitfield RTO00E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rto00e{}; 
        namespace Rto00eValC{
        }
    }
    namespace Noneepfr02{    ///< register EPFR02 
        using Addr = Register::Address<0x40033608,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr03{    ///< register EPFR03 
        using Addr = Register::Address<0x4003360c,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr04{    ///< register EPFR04 
        using Addr = Register::Address<0x40033610,0xc0c3c083,0,unsigned>;
        /// bitfield TIOB3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob3s{}; 
        namespace Tiob3sValC{
        }
        /// bitfield TIOA3E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa3e{}; 
        namespace Tioa3eValC{
        }
        /// bitfield TIOA3S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa3s{}; 
        namespace Tioa3sValC{
        }
        /// bitfield TIOB2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob2s{}; 
        namespace Tiob2sValC{
        }
        /// bitfield TIOA2E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa2e{}; 
        namespace Tioa2eValC{
        }
        /// bitfield TIOB1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob1s{}; 
        namespace Tiob1sValC{
        }
        /// bitfield TIOA1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa1e{}; 
        namespace Tioa1eValC{
        }
        /// bitfield TIOA1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa1s{}; 
        namespace Tioa1sValC{
        }
        /// bitfield TIOB0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tiob0s{}; 
        namespace Tiob0sValC{
        }
        /// bitfield TIOA0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa0e{}; 
        namespace Tioa0eValC{
        }
    }
    namespace Noneepfr05{    ///< register EPFR05 
        using Addr = Register::Address<0x40033614,0xc0c3c0c3,0,unsigned>;
        /// bitfield TIOB7S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> tiob7s{}; 
        namespace Tiob7sValC{
        }
        /// bitfield TIOA7E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tioa7e{}; 
        namespace Tioa7eValC{
        }
        /// bitfield TIOA7S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> tioa7s{}; 
        namespace Tioa7sValC{
        }
        /// bitfield TIOB6S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> tiob6s{}; 
        namespace Tiob6sValC{
        }
        /// bitfield TIOA6E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> tioa6e{}; 
        namespace Tioa6eValC{
        }
        /// bitfield TIOB5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> tiob5s{}; 
        namespace Tiob5sValC{
        }
        /// bitfield TIOA5E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> tioa5e{}; 
        namespace Tioa5eValC{
        }
        /// bitfield TIOA5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tioa5s{}; 
        namespace Tioa5sValC{
        }
        /// bitfield TIOB4S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> tiob4s{}; 
        namespace Tiob4sValC{
        }
        /// bitfield TIOA4E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> tioa4e{}; 
        namespace Tioa4eValC{
        }
    }
    namespace Noneepfr06{    ///< register EPFR06 
        using Addr = Register::Address<0x40033618,0xcfff0f0f,0,unsigned>;
        /// bitfield EINT14S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> eint14s{}; 
        namespace Eint14sValC{
        }
        /// bitfield EINT07S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> eint07s{}; 
        namespace Eint07sValC{
        }
        /// bitfield EINT06S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> eint06s{}; 
        namespace Eint06sValC{
        }
        /// bitfield EINT03S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint03s{}; 
        namespace Eint03sValC{
        }
        /// bitfield EINT02S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint02s{}; 
        namespace Eint02sValC{
        }
    }
    namespace Noneepfr07{    ///< register EPFR07 
        using Addr = Register::Address<0x4003361c,0xffc0000f,0,unsigned>;
        /// bitfield SCK2B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> sck2b{}; 
        namespace Sck2bValC{
        }
        /// bitfield SOT2B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> sot2b{}; 
        namespace Sot2bValC{
        }
        /// bitfield SIN2S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> sin2s{}; 
        namespace Sin2sValC{
        }
        /// bitfield SCK1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck1b{}; 
        namespace Sck1bValC{
        }
        /// bitfield SOT1B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot1b{}; 
        namespace Sot1bValC{
        }
        /// bitfield SIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin1s{}; 
        namespace Sin1sValC{
        }
        /// bitfield SCK0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> sck0b{}; 
        namespace Sck0bValC{
        }
        /// bitfield SOT0B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sot0b{}; 
        namespace Sot0bValC{
        }
        /// bitfield SIN0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> sin0s{}; 
        namespace Sin0sValC{
        }
    }
    namespace Noneepfr08{    ///< register EPFR08 
        using Addr = Register::Address<0x40033620,0xffff03ff,0,unsigned>;
        /// bitfield SCK5B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sck5b{}; 
        namespace Sck5bValC{
        }
        /// bitfield SOT5B 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sot5b{}; 
        namespace Sot5bValC{
        }
        /// bitfield SIN5S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> sin5s{}; 
        namespace Sin5sValC{
        }
    }
    namespace Noneepfr09{    ///< register EPFR09 
        using Addr = Register::Address<0x40033624,0xffff003f,0,unsigned>;
        /// bitfield ADTRG0S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> adtrg0s{}; 
        namespace Adtrg0sValC{
        }
        /// bitfield QZIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> qzin1s{}; 
        namespace Qzin1sValC{
        }
        /// bitfield QBIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> qbin1s{}; 
        namespace Qbin1sValC{
        }
        /// bitfield QAIN1S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> qain1s{}; 
        namespace Qain1sValC{
        }
    }
    namespace Noneepfr10{    ///< register EPFR10 
        using Addr = Register::Address<0x40033628,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr11{    ///< register EPFR11 
        using Addr = Register::Address<0x4003362c,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr12{    ///< register EPFR12 
        using Addr = Register::Address<0x40033630,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr13{    ///< register EPFR13 
        using Addr = Register::Address<0x40033634,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr14{    ///< register EPFR14 
        using Addr = Register::Address<0x40033638,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr15{    ///< register EPFR15 
        using Addr = Register::Address<0x4003363c,0xffffff0f,0,unsigned>;
        /// bitfield EINT19S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> eint19s{}; 
        namespace Eint19sValC{
        }
        /// bitfield EINT18S 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> eint18s{}; 
        namespace Eint18sValC{
        }
    }
    namespace Noneepfr16{    ///< register EPFR16 
        using Addr = Register::Address<0x40033640,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr17{    ///< register EPFR17 
        using Addr = Register::Address<0x40033644,0xffffffff,0,unsigned>;
    }
    namespace Noneepfr18{    ///< register EPFR18 
        using Addr = Register::Address<0x40033648,0xffffffff,0,unsigned>;
    }
    namespace Nonepzr1{    ///< register PZR1 
        using Addr = Register::Address<0x40033704,0xffffffc1,0,unsigned>;
        /// bitfield P5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p5{}; 
        namespace P5ValC{
        }
        /// bitfield P4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p4{}; 
        namespace P4ValC{
        }
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
    }
    namespace Nonepzr2{    ///< register PZR2 
        using Addr = Register::Address<0x40033708,0xfffffff1,0,unsigned>;
        /// bitfield P3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p3{}; 
        namespace P3ValC{
        }
        /// bitfield P2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p2{}; 
        namespace P2ValC{
        }
        /// bitfield P1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p1{}; 
        namespace P1ValC{
        }
    }
}
