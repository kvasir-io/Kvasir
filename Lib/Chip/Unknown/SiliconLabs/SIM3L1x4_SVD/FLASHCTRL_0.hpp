#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<Controller Configuration
        using Addr = Register::Address<0x4002e000,0xffe2ff2c,0,unsigned>;
        ///Flash Speed Mode. 
        enum class SpmdVal {
            mode0=0x00000000,     ///<Read and write the flash at speed mode 0.
            mode1=0x00000001,     ///<Read and write the flash at speed mode 1.
            mode2=0x00000002,     ///<Read and write the flash at speed mode 2.
            mode3=0x00000003,     ///<Read and write the flash at speed mode 3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SpmdVal> spmd{}; 
        namespace SpmdValC{
            constexpr Register::FieldValue<decltype(spmd),SpmdVal::mode0> mode0{};
            constexpr Register::FieldValue<decltype(spmd),SpmdVal::mode1> mode1{};
            constexpr Register::FieldValue<decltype(spmd),SpmdVal::mode2> mode2{};
            constexpr Register::FieldValue<decltype(spmd),SpmdVal::mode3> mode3{};
        }
        ///Read Store Mode Enable. 
        enum class RdsenVal {
            disabled=0x00000000,     ///<Disable read store mode.
            enabled=0x00000001,     ///<Enable read store mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RdsenVal> rdsen{}; 
        namespace RdsenValC{
            constexpr Register::FieldValue<decltype(rdsen),RdsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rdsen),RdsenVal::enabled> enabled{};
        }
        ///Data Prefetch Enable. 
        enum class DpfenVal {
            disabled=0x00000000,     ///<Data accesses are excluded from the prefetch buffer.
            enabled=0x00000001,     ///<Data accesses are included in the prefetch buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DpfenVal> dpfen{}; 
        namespace DpfenValC{
            constexpr Register::FieldValue<decltype(dpfen),DpfenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dpfen),DpfenVal::enabled> enabled{};
        }
        ///Prefetch Inhibit. 
        enum class PfinhVal {
            inactive=0x00000000,     ///<Any reads from flash are prefetched until the prefetch buffer is full.
            active=0x00000001,     ///<Inhibit the prefetch engine.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PfinhVal> pfinh{}; 
        namespace PfinhValC{
            constexpr Register::FieldValue<decltype(pfinh),PfinhVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(pfinh),PfinhVal::active> active{};
        }
        ///Flash Write Sequence Enable. 
        enum class SqwenVal {
            disabled=0x00000000,     ///<Disable sequential write mode.
            enabled=0x00000001,     ///<Enable sequential write mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SqwenVal> sqwen{}; 
        namespace SqwenValC{
            constexpr Register::FieldValue<decltype(sqwen),SqwenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sqwen),SqwenVal::enabled> enabled{};
        }
        ///Flash Page Erase Enable. 
        enum class EraseenVal {
            disabled=0x00000000,     ///<Writes to the WRDATA field will initiate a write to flash at the address in the WRADDR field.
            enabled=0x00000001,     ///<Writes to the WRDATA field will initiate an erase of the flash page containing the address in the WRADDR field.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,EraseenVal> eraseen{}; 
        namespace EraseenValC{
            constexpr Register::FieldValue<decltype(eraseen),EraseenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(eraseen),EraseenVal::enabled> enabled{};
        }
        ///Flash Buffer Status. 
        enum class BufstsVal {
            empty=0x00000000,     ///<The flash controller write data buffer is empty.
            full=0x00000001,     ///<The flash controller write data buffer is full.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BufstsVal> bufsts{}; 
        namespace BufstsValC{
            constexpr Register::FieldValue<decltype(bufsts),BufstsVal::empty> empty{};
            constexpr Register::FieldValue<decltype(bufsts),BufstsVal::full> full{};
        }
        ///Flash Operation Busy Flag. 
        enum class BusyfVal {
            notSet=0x00000000,     ///<The flash interface is not busy.
            set=0x00000001,     ///<The flash interface is busy with an operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,BusyfVal> busyf{}; 
        namespace BusyfValC{
            constexpr Register::FieldValue<decltype(busyf),BusyfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(busyf),BusyfVal::set> set{};
        }
    }
    namespace Nonewraddr{    ///<Flash Write Address
        using Addr = Register::Address<0x4002e0a0,0x00000000,0,unsigned>;
        ///Flash Write Address. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wraddr{}; 
        namespace WraddrValC{
        }
    }
    namespace Nonewrdata{    ///<Flash Write Data
        using Addr = Register::Address<0x4002e0b0,0x00000000,0,unsigned>;
        ///Flash Write Data. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrdata{}; 
        namespace WrdataValC{
        }
    }
    namespace Nonekey{    ///<Flash Modification Key
        using Addr = Register::Address<0x4002e0c0,0xffffff00,0,unsigned>;
        ///Flash Key. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace Nonetcontrol{    ///<Flash Timing Control
        using Addr = Register::Address<0x4002e0d0,0xffffffbf,0,unsigned>;
        ///Flash Read Timing Mode. 
        enum class FlrtmdVal {
            slow=0x00000000,     ///<Configure the flash read controller for AHB clocks below 12 MHz.
            fast=0x00000001,     ///<Configure the flash read controller for AHB clocks above 12 MHz.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FlrtmdVal> flrtmd{}; 
        namespace FlrtmdValC{
            constexpr Register::FieldValue<decltype(flrtmd),FlrtmdVal::slow> slow{};
            constexpr Register::FieldValue<decltype(flrtmd),FlrtmdVal::fast> fast{};
        }
    }
}
