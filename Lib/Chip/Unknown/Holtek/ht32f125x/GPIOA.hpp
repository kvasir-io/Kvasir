#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//GPIOA
    namespace NonegpioaDircr{    ///<GPIOA_DIRCR
        using Addr = Register::Address<0x4001a000,0xffff0000,0,unsigned>;
        ///DIR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dir0{}; 
        namespace Dir0ValC{
        }
        ///DIR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dir1{}; 
        namespace Dir1ValC{
        }
        ///DIR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dir2{}; 
        namespace Dir2ValC{
        }
        ///DIR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dir3{}; 
        namespace Dir3ValC{
        }
        ///DIR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dir4{}; 
        namespace Dir4ValC{
        }
        ///DIR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dir5{}; 
        namespace Dir5ValC{
        }
        ///DIR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dir6{}; 
        namespace Dir6ValC{
        }
        ///DIR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dir7{}; 
        namespace Dir7ValC{
        }
        ///DIR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dir8{}; 
        namespace Dir8ValC{
        }
        ///DIR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dir9{}; 
        namespace Dir9ValC{
        }
        ///DIR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dir10{}; 
        namespace Dir10ValC{
        }
        ///DIR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dir11{}; 
        namespace Dir11ValC{
        }
        ///DIR12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dir12{}; 
        namespace Dir12ValC{
        }
        ///DIR13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dir13{}; 
        namespace Dir13ValC{
        }
        ///DIR14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dir14{}; 
        namespace Dir14ValC{
        }
        ///DIR15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dir15{}; 
        namespace Dir15ValC{
        }
    }
    namespace NonegpioaIner{    ///<GPIOA_INER
        using Addr = Register::Address<0x4001a004,0xffff0000,0,unsigned>;
        ///INEN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inen0{}; 
        namespace Inen0ValC{
        }
        ///INEN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> inen1{}; 
        namespace Inen1ValC{
        }
        ///INEN2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inen2{}; 
        namespace Inen2ValC{
        }
        ///INEN3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> inen3{}; 
        namespace Inen3ValC{
        }
        ///INEN4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> inen4{}; 
        namespace Inen4ValC{
        }
        ///INEN5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inen5{}; 
        namespace Inen5ValC{
        }
        ///INEN6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inen6{}; 
        namespace Inen6ValC{
        }
        ///INEN7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> inen7{}; 
        namespace Inen7ValC{
        }
        ///INEN8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> inen8{}; 
        namespace Inen8ValC{
        }
        ///INEN9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> inen9{}; 
        namespace Inen9ValC{
        }
        ///INEN10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> inen10{}; 
        namespace Inen10ValC{
        }
        ///INEN11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> inen11{}; 
        namespace Inen11ValC{
        }
        ///INEN12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> inen12{}; 
        namespace Inen12ValC{
        }
        ///INEN13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> inen13{}; 
        namespace Inen13ValC{
        }
        ///INEN14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> inen14{}; 
        namespace Inen14ValC{
        }
        ///INEN15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> inen15{}; 
        namespace Inen15ValC{
        }
    }
    namespace NonegpioaPur{    ///<GPIOA_PUR
        using Addr = Register::Address<0x4001a008,0xffff0000,0,unsigned>;
        ///PU0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu0{}; 
        namespace Pu0ValC{
        }
        ///PU1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu1{}; 
        namespace Pu1ValC{
        }
        ///PU2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pu2{}; 
        namespace Pu2ValC{
        }
        ///PU3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pu3{}; 
        namespace Pu3ValC{
        }
        ///PU4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pu4{}; 
        namespace Pu4ValC{
        }
        ///PU5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pu5{}; 
        namespace Pu5ValC{
        }
        ///PU6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pu6{}; 
        namespace Pu6ValC{
        }
        ///PU7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pu7{}; 
        namespace Pu7ValC{
        }
        ///PU8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pu8{}; 
        namespace Pu8ValC{
        }
        ///PU9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pu9{}; 
        namespace Pu9ValC{
        }
        ///PU10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pu10{}; 
        namespace Pu10ValC{
        }
        ///PU11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pu11{}; 
        namespace Pu11ValC{
        }
        ///PU12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pu12{}; 
        namespace Pu12ValC{
        }
        ///PU13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pu13{}; 
        namespace Pu13ValC{
        }
        ///PU14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pu14{}; 
        namespace Pu14ValC{
        }
        ///PU15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pu15{}; 
        namespace Pu15ValC{
        }
    }
    namespace NonegpioaPdr{    ///<GPIOA_PDR
        using Addr = Register::Address<0x4001a00c,0xffff0000,0,unsigned>;
        ///PD0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pd0{}; 
        namespace Pd0ValC{
        }
        ///PD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd1{}; 
        namespace Pd1ValC{
        }
        ///PD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd2{}; 
        namespace Pd2ValC{
        }
        ///PD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd3{}; 
        namespace Pd3ValC{
        }
        ///PD4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pd4{}; 
        namespace Pd4ValC{
        }
        ///PD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pd5{}; 
        namespace Pd5ValC{
        }
        ///PD6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pd6{}; 
        namespace Pd6ValC{
        }
        ///PD7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pd7{}; 
        namespace Pd7ValC{
        }
        ///PD8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pd8{}; 
        namespace Pd8ValC{
        }
        ///PD9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pd9{}; 
        namespace Pd9ValC{
        }
        ///PD10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pd10{}; 
        namespace Pd10ValC{
        }
        ///PD11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pd11{}; 
        namespace Pd11ValC{
        }
        ///PD12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pd12{}; 
        namespace Pd12ValC{
        }
        ///PD13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pd13{}; 
        namespace Pd13ValC{
        }
        ///PD14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pd14{}; 
        namespace Pd14ValC{
        }
        ///PD15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pd15{}; 
        namespace Pd15ValC{
        }
    }
    namespace NonegpioaOdr{    ///<GPIOA_ODR
        using Addr = Register::Address<0x4001a010,0xffff0000,0,unsigned>;
        ///OD0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> od0{}; 
        namespace Od0ValC{
        }
        ///OD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> od1{}; 
        namespace Od1ValC{
        }
        ///OD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> od2{}; 
        namespace Od2ValC{
        }
        ///OD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> od3{}; 
        namespace Od3ValC{
        }
        ///OD4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> od4{}; 
        namespace Od4ValC{
        }
        ///OD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> od5{}; 
        namespace Od5ValC{
        }
        ///OD6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> od6{}; 
        namespace Od6ValC{
        }
        ///OD7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> od7{}; 
        namespace Od7ValC{
        }
        ///OD8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> od8{}; 
        namespace Od8ValC{
        }
        ///OD9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> od9{}; 
        namespace Od9ValC{
        }
        ///OD10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> od10{}; 
        namespace Od10ValC{
        }
        ///OD11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> od11{}; 
        namespace Od11ValC{
        }
        ///OD12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> od12{}; 
        namespace Od12ValC{
        }
        ///OD13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> od13{}; 
        namespace Od13ValC{
        }
        ///OD14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> od14{}; 
        namespace Od14ValC{
        }
        ///OD15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> od15{}; 
        namespace Od15ValC{
        }
    }
    namespace NonegpioaDrvr{    ///<GPIOA_DRVR
        using Addr = Register::Address<0x4001a014,0xffffff00,0,unsigned>;
        ///DV0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dv0{}; 
        namespace Dv0ValC{
        }
        ///DV1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dv1{}; 
        namespace Dv1ValC{
        }
        ///DV2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dv2{}; 
        namespace Dv2ValC{
        }
        ///DV3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dv3{}; 
        namespace Dv3ValC{
        }
        ///DV4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dv4{}; 
        namespace Dv4ValC{
        }
        ///DV5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dv5{}; 
        namespace Dv5ValC{
        }
        ///DV6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dv6{}; 
        namespace Dv6ValC{
        }
        ///DV7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dv7{}; 
        namespace Dv7ValC{
        }
    }
    namespace NonegpioaLockr{    ///<GPIOA_LOCKR
        using Addr = Register::Address<0x4001a018,0x00000000,0,unsigned>;
        ///LOCK0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lock0{}; 
        namespace Lock0ValC{
        }
        ///LOCK1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lock1{}; 
        namespace Lock1ValC{
        }
        ///LOCK2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> lock2{}; 
        namespace Lock2ValC{
        }
        ///LOCK3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lock3{}; 
        namespace Lock3ValC{
        }
        ///LOCK4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lock4{}; 
        namespace Lock4ValC{
        }
        ///LOCK5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lock5{}; 
        namespace Lock5ValC{
        }
        ///LOCK6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lock6{}; 
        namespace Lock6ValC{
        }
        ///LOCK7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lock7{}; 
        namespace Lock7ValC{
        }
        ///LOCK8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lock8{}; 
        namespace Lock8ValC{
        }
        ///LOCK9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lock9{}; 
        namespace Lock9ValC{
        }
        ///LOCK10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lock10{}; 
        namespace Lock10ValC{
        }
        ///LOCK11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lock11{}; 
        namespace Lock11ValC{
        }
        ///LOCK12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lock12{}; 
        namespace Lock12ValC{
        }
        ///LOCK13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lock13{}; 
        namespace Lock13ValC{
        }
        ///LOCK14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> lock14{}; 
        namespace Lock14ValC{
        }
        ///LOCK15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lock15{}; 
        namespace Lock15ValC{
        }
        ///LKEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lkey{}; 
        namespace LkeyValC{
        }
    }
    namespace NonegpioaDinr{    ///<GPIOA_DINR
        using Addr = Register::Address<0x4001a01c,0xffff0000,0,unsigned>;
        ///DIN0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> din0{}; 
        namespace Din0ValC{
        }
        ///DIN1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> din1{}; 
        namespace Din1ValC{
        }
        ///DIN2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> din2{}; 
        namespace Din2ValC{
        }
        ///DIN3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> din3{}; 
        namespace Din3ValC{
        }
        ///DIN4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> din4{}; 
        namespace Din4ValC{
        }
        ///DIN5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> din5{}; 
        namespace Din5ValC{
        }
        ///DIN6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> din6{}; 
        namespace Din6ValC{
        }
        ///DIN7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> din7{}; 
        namespace Din7ValC{
        }
        ///DIN8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> din8{}; 
        namespace Din8ValC{
        }
        ///DIN9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> din9{}; 
        namespace Din9ValC{
        }
        ///DIN10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> din10{}; 
        namespace Din10ValC{
        }
        ///DIN11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> din11{}; 
        namespace Din11ValC{
        }
        ///DIN12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> din12{}; 
        namespace Din12ValC{
        }
        ///DIN13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> din13{}; 
        namespace Din13ValC{
        }
        ///DIN14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> din14{}; 
        namespace Din14ValC{
        }
        ///DIN15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> din15{}; 
        namespace Din15ValC{
        }
    }
    namespace NonegpioaDoutr{    ///<GPIOA_DOUTR
        using Addr = Register::Address<0x4001a020,0xffff0000,0,unsigned>;
        ///DOUT0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dout0{}; 
        namespace Dout0ValC{
        }
        ///DOUT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dout1{}; 
        namespace Dout1ValC{
        }
        ///DOUT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dout2{}; 
        namespace Dout2ValC{
        }
        ///DOUT3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dout3{}; 
        namespace Dout3ValC{
        }
        ///DOUT4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dout4{}; 
        namespace Dout4ValC{
        }
        ///DOUT5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dout5{}; 
        namespace Dout5ValC{
        }
        ///DOUT6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dout6{}; 
        namespace Dout6ValC{
        }
        ///DOUT7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dout7{}; 
        namespace Dout7ValC{
        }
        ///DOUT8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dout8{}; 
        namespace Dout8ValC{
        }
        ///DOUT9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dout9{}; 
        namespace Dout9ValC{
        }
        ///DOUT10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dout10{}; 
        namespace Dout10ValC{
        }
        ///DOUT11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dout11{}; 
        namespace Dout11ValC{
        }
        ///DOUT12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dout12{}; 
        namespace Dout12ValC{
        }
        ///DOUT13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dout13{}; 
        namespace Dout13ValC{
        }
        ///DOUT14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> dout14{}; 
        namespace Dout14ValC{
        }
        ///DOUT15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dout15{}; 
        namespace Dout15ValC{
        }
    }
    namespace NonegpioaSrr{    ///<GPIOA_SRR
        using Addr = Register::Address<0x4001a024,0x00000000,0,unsigned>;
        ///SET0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> set0{}; 
        namespace Set0ValC{
        }
        ///SET1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> set1{}; 
        namespace Set1ValC{
        }
        ///SET2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> set2{}; 
        namespace Set2ValC{
        }
        ///SET3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> set3{}; 
        namespace Set3ValC{
        }
        ///SET4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> set4{}; 
        namespace Set4ValC{
        }
        ///SET5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> set5{}; 
        namespace Set5ValC{
        }
        ///SET6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> set6{}; 
        namespace Set6ValC{
        }
        ///SET7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> set7{}; 
        namespace Set7ValC{
        }
        ///SET8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> set8{}; 
        namespace Set8ValC{
        }
        ///SET9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> set9{}; 
        namespace Set9ValC{
        }
        ///SET10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> set10{}; 
        namespace Set10ValC{
        }
        ///SET11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> set11{}; 
        namespace Set11ValC{
        }
        ///SET12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> set12{}; 
        namespace Set12ValC{
        }
        ///SET13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> set13{}; 
        namespace Set13ValC{
        }
        ///SET14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> set14{}; 
        namespace Set14ValC{
        }
        ///SET15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> set15{}; 
        namespace Set15ValC{
        }
        ///RST0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rst0{}; 
        namespace Rst0ValC{
        }
        ///RST1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rst1{}; 
        namespace Rst1ValC{
        }
        ///RST2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> rst2{}; 
        namespace Rst2ValC{
        }
        ///RST3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> rst3{}; 
        namespace Rst3ValC{
        }
        ///RST4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rst4{}; 
        namespace Rst4ValC{
        }
        ///RST5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rst5{}; 
        namespace Rst5ValC{
        }
        ///RST6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> rst6{}; 
        namespace Rst6ValC{
        }
        ///RST7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rst7{}; 
        namespace Rst7ValC{
        }
        ///RST8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rst8{}; 
        namespace Rst8ValC{
        }
        ///RST9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rst9{}; 
        namespace Rst9ValC{
        }
        ///RST10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rst10{}; 
        namespace Rst10ValC{
        }
        ///RST11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> rst11{}; 
        namespace Rst11ValC{
        }
        ///RST12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rst12{}; 
        namespace Rst12ValC{
        }
        ///RST13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> rst13{}; 
        namespace Rst13ValC{
        }
        ///RST14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rst14{}; 
        namespace Rst14ValC{
        }
        ///RST15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> rst15{}; 
        namespace Rst15ValC{
        }
    }
    namespace NonegpioaRr{    ///<GPIOA_RR
        using Addr = Register::Address<0x4001a028,0xffff0000,0,unsigned>;
        ///RST0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rst0{}; 
        namespace Rst0ValC{
        }
        ///RST1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rst1{}; 
        namespace Rst1ValC{
        }
        ///RST2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rst2{}; 
        namespace Rst2ValC{
        }
        ///RST3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rst3{}; 
        namespace Rst3ValC{
        }
        ///RST4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rst4{}; 
        namespace Rst4ValC{
        }
        ///RST5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rst5{}; 
        namespace Rst5ValC{
        }
        ///RST6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rst6{}; 
        namespace Rst6ValC{
        }
        ///RST7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rst7{}; 
        namespace Rst7ValC{
        }
        ///RST8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rst8{}; 
        namespace Rst8ValC{
        }
        ///RST9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rst9{}; 
        namespace Rst9ValC{
        }
        ///RST10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rst10{}; 
        namespace Rst10ValC{
        }
        ///RST11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rst11{}; 
        namespace Rst11ValC{
        }
        ///RST12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rst12{}; 
        namespace Rst12ValC{
        }
        ///RST13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rst13{}; 
        namespace Rst13ValC{
        }
        ///RST14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rst14{}; 
        namespace Rst14ValC{
        }
        ///RST15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rst15{}; 
        namespace Rst15ValC{
        }
    }
}
