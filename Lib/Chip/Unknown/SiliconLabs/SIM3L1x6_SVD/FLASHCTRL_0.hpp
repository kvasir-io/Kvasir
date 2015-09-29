#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Noneconfig{    ///<Controller Configuration
        using Addr = Register::Address<0x4002e000,0xffe2ff2c,0,unsigned>;
        ///Flash Speed Mode. 
        enum class spmdVal {
            mode0=0x00000000,     ///<Read and write the flash at speed mode 0.
            mode1=0x00000001,     ///<Read and write the flash at speed mode 1.
            mode2=0x00000002,     ///<Read and write the flash at speed mode 2.
            mode3=0x00000003,     ///<Read and write the flash at speed mode 3.
        };
        namespace spmdValC{
            constexpr MPL::Value<spmdVal,spmdVal::mode0> mode0{};
            constexpr MPL::Value<spmdVal,spmdVal::mode1> mode1{};
            constexpr MPL::Value<spmdVal,spmdVal::mode2> mode2{};
            constexpr MPL::Value<spmdVal,spmdVal::mode3> mode3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,spmdVal> spmd{}; 
        ///Read Store Mode Enable. 
        enum class rdsenVal {
            disabled=0x00000000,     ///<Disable read store mode.
            enabled=0x00000001,     ///<Enable read store mode.
        };
        namespace rdsenValC{
            constexpr MPL::Value<rdsenVal,rdsenVal::disabled> disabled{};
            constexpr MPL::Value<rdsenVal,rdsenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,rdsenVal> rdsen{}; 
        ///Data Prefetch Enable. 
        enum class dpfenVal {
            disabled=0x00000000,     ///<Data accesses are excluded from the prefetch buffer.
            enabled=0x00000001,     ///<Data accesses are included in the prefetch buffer.
        };
        namespace dpfenValC{
            constexpr MPL::Value<dpfenVal,dpfenVal::disabled> disabled{};
            constexpr MPL::Value<dpfenVal,dpfenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dpfenVal> dpfen{}; 
        ///Prefetch Inhibit. 
        enum class pfinhVal {
            inactive=0x00000000,     ///<Any reads from flash are prefetched until the prefetch buffer is full.
            active=0x00000001,     ///<Inhibit the prefetch engine.
        };
        namespace pfinhValC{
            constexpr MPL::Value<pfinhVal,pfinhVal::inactive> inactive{};
            constexpr MPL::Value<pfinhVal,pfinhVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pfinhVal> pfinh{}; 
        ///Flash Write Sequence Enable. 
        enum class sqwenVal {
            disabled=0x00000000,     ///<Disable sequential write mode.
            enabled=0x00000001,     ///<Enable sequential write mode.
        };
        namespace sqwenValC{
            constexpr MPL::Value<sqwenVal,sqwenVal::disabled> disabled{};
            constexpr MPL::Value<sqwenVal,sqwenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sqwenVal> sqwen{}; 
        ///Flash Page Erase Enable. 
        enum class eraseenVal {
            disabled=0x00000000,     ///<Writes to the WRDATA field will initiate a write to flash at the address in the WRADDR field.
            enabled=0x00000001,     ///<Writes to the WRDATA field will initiate an erase of the flash page containing the address in the WRADDR field.
        };
        namespace eraseenValC{
            constexpr MPL::Value<eraseenVal,eraseenVal::disabled> disabled{};
            constexpr MPL::Value<eraseenVal,eraseenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,eraseenVal> eraseen{}; 
        ///Flash Buffer Status. 
        enum class bufstsVal {
            empty=0x00000000,     ///<The flash controller write data buffer is empty.
            full=0x00000001,     ///<The flash controller write data buffer is full.
        };
        namespace bufstsValC{
            constexpr MPL::Value<bufstsVal,bufstsVal::empty> empty{};
            constexpr MPL::Value<bufstsVal,bufstsVal::full> full{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,bufstsVal> bufsts{}; 
        ///Flash Operation Busy Flag. 
        enum class busyfVal {
            notSet=0x00000000,     ///<The flash interface is not busy.
            set=0x00000001,     ///<The flash interface is busy with an operation.
        };
        namespace busyfValC{
            constexpr MPL::Value<busyfVal,busyfVal::notSet> notSet{};
            constexpr MPL::Value<busyfVal,busyfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,busyfVal> busyf{}; 
    }
    namespace Nonewraddr{    ///<Flash Write Address
        using Addr = Register::Address<0x4002e0a0,0x00000000,0,unsigned>;
        ///Flash Write Address. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wraddr{}; 
    }
    namespace Nonewrdata{    ///<Flash Write Data
        using Addr = Register::Address<0x4002e0b0,0x00000000,0,unsigned>;
        ///Flash Write Data. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrdata{}; 
    }
    namespace Nonekey{    ///<Flash Modification Key
        using Addr = Register::Address<0x4002e0c0,0xffffff00,0,unsigned>;
        ///Flash Key. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace Nonetcontrol{    ///<Flash Timing Control
        using Addr = Register::Address<0x4002e0d0,0xffffffbf,0,unsigned>;
        ///Flash Read Timing Mode. 
        enum class flrtmdVal {
            slow=0x00000000,     ///<Configure the flash read controller for AHB clocks below 12 MHz.
            fast=0x00000001,     ///<Configure the flash read controller for AHB clocks above 12 MHz.
        };
        namespace flrtmdValC{
            constexpr MPL::Value<flrtmdVal,flrtmdVal::slow> slow{};
            constexpr MPL::Value<flrtmdVal,flrtmdVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,flrtmdVal> flrtmd{}; 
    }
}
