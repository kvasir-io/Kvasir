#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Comparators
    namespace CompCsr{    ///<comparator control and status          register
        using Addr = Register::Address<0x40007c00,0x0300cf40,0x00000000,unsigned>;
        ///Suspend Timer Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> tsusp{}; 
        ///Channel acquisition interrupt              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> caif{}; 
        ///Channel Acquisition Interrupt Enable /              Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> caie{}; 
        ///Select GPIO port PC3 as re-routed ADC              input channel CH13.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> rch13{}; 
        ///Select GPIO port PB0 as fast ADC input              channel CH8.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> fch8{}; 
        ///Select GPIO port PA3 as fast ADC input              channel CH3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> fch3{}; 
        ///Comparator 2 output              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> outsel{}; 
        ///Inverted input selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> insel{}; 
        ///Window mode enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> wndwe{}; 
        ///VREFINT output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> vrefouten{}; 
        ///Comparator 2 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmp2out{}; 
        ///Comparator 2 speed mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> speed{}; 
        ///Comparator 1 output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmp1out{}; 
        ///SW1 analog switch enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sw1{}; 
        ///Comparator 1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cmp1en{}; 
        ///400 kO pull-down resistor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pd400k{}; 
        ///10 kO pull-down resistor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pd10k{}; 
        ///400 kO pull-up resistor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pu400k{}; 
        ///10 kO pull-up resistor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pu10k{}; 
    }
}
