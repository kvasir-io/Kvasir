#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//User Information Configuration Registers
    namespace UicrUnused0{    ///<Unspecified
        using Addr = Register::Address<0x10001000,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrUnused1{    ///<Unspecified
        using Addr = Register::Address<0x10001004,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrUnused2{    ///<Unspecified
        using Addr = Register::Address<0x10001008,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrUnused3{    ///<Unspecified
        using Addr = Register::Address<0x10001010,0xffffffff,0x00000000,unsigned>;
    }
    namespace UicrApprotect{    ///<Access port protection
        using Addr = Register::Address<0x10001208,0xffffff00,0x00000000,unsigned>;
        ///Blocks debugger read/write access to all CPU registers and memory mapped addresses except for the Control Access Port registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pall{}; 
    }
    namespace UicrNfcpins{    ///<Setting of pins dedicated to NFC functionality: NFC antenna or GPIO
        using Addr = Register::Address<0x1000120c,0xfffffffe,0x00000000,unsigned>;
        ///Setting of pins dedicated to NFC functionality
        enum class ProtectVal : unsigned {
            disabled=0x00000000,     ///<Operation as GPIO pins. Same protection as normal GPIO pins
            nfc=0x00000001,     ///<Operation as NFC antenna pins. Configures the protection for NFC operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ProtectVal> protect{}; 
        namespace ProtectValC{
            constexpr Register::FieldValue<decltype(protect)::Type,ProtectVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(protect)::Type,ProtectVal::nfc> nfc{};
        }
    }
    namespace UicrNrffw0{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x10001014,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrffw1{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x10001018,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrffw2{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x1000101c,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrffw3{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x10001020,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrffw4{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x10001024,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrffw5{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x10001028,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrffw6{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x1000102c,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrffw7{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x10001030,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrffw8{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x10001034,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrffw9{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x10001038,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrffw10{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x1000103c,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrffw11{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x10001040,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrffw12{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x10001044,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrffw13{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x10001048,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrffw14{    ///<Description collection[0]:  Reserved for Nordic firmware design
        using Addr = Register::Address<0x1000104c,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic firmware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrffw{}; 
    }
    namespace UicrNrfhw0{    ///<Description collection[0]:  Reserved for Nordic hardware design
        using Addr = Register::Address<0x10001050,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic hardware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrfhw{}; 
    }
    namespace UicrNrfhw1{    ///<Description collection[0]:  Reserved for Nordic hardware design
        using Addr = Register::Address<0x10001054,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic hardware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrfhw{}; 
    }
    namespace UicrNrfhw2{    ///<Description collection[0]:  Reserved for Nordic hardware design
        using Addr = Register::Address<0x10001058,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic hardware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrfhw{}; 
    }
    namespace UicrNrfhw3{    ///<Description collection[0]:  Reserved for Nordic hardware design
        using Addr = Register::Address<0x1000105c,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic hardware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrfhw{}; 
    }
    namespace UicrNrfhw4{    ///<Description collection[0]:  Reserved for Nordic hardware design
        using Addr = Register::Address<0x10001060,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic hardware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrfhw{}; 
    }
    namespace UicrNrfhw5{    ///<Description collection[0]:  Reserved for Nordic hardware design
        using Addr = Register::Address<0x10001064,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic hardware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrfhw{}; 
    }
    namespace UicrNrfhw6{    ///<Description collection[0]:  Reserved for Nordic hardware design
        using Addr = Register::Address<0x10001068,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic hardware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrfhw{}; 
    }
    namespace UicrNrfhw7{    ///<Description collection[0]:  Reserved for Nordic hardware design
        using Addr = Register::Address<0x1000106c,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic hardware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrfhw{}; 
    }
    namespace UicrNrfhw8{    ///<Description collection[0]:  Reserved for Nordic hardware design
        using Addr = Register::Address<0x10001070,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic hardware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrfhw{}; 
    }
    namespace UicrNrfhw9{    ///<Description collection[0]:  Reserved for Nordic hardware design
        using Addr = Register::Address<0x10001074,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic hardware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrfhw{}; 
    }
    namespace UicrNrfhw10{    ///<Description collection[0]:  Reserved for Nordic hardware design
        using Addr = Register::Address<0x10001078,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic hardware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrfhw{}; 
    }
    namespace UicrNrfhw11{    ///<Description collection[0]:  Reserved for Nordic hardware design
        using Addr = Register::Address<0x1000107c,0x00000000,0x00000000,unsigned>;
        ///Reserved for Nordic hardware design
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nrfhw{}; 
    }
    namespace UicrCustomer0{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x10001080,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer1{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x10001084,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer2{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x10001088,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer3{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x1000108c,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer4{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x10001090,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer5{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x10001094,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer6{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x10001098,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer7{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x1000109c,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer8{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010a0,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer9{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010a4,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer10{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010a8,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer11{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010ac,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer12{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010b0,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer13{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010b4,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer14{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010b8,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer15{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010bc,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer16{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010c0,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer17{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010c4,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer18{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010c8,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer19{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010cc,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer20{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010d0,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer21{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010d4,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer22{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010d8,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer23{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010dc,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer24{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010e0,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer25{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010e4,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer26{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010e8,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer27{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010ec,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer28{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010f0,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer29{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010f4,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer30{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010f8,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrCustomer31{    ///<Description collection[0]:  Reserved for customer
        using Addr = Register::Address<0x100010fc,0x00000000,0x00000000,unsigned>;
        ///Reserved for customer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> customer{}; 
    }
    namespace UicrPselreset0{    ///<Description collection[0]:  Mapping of the nRESET function (see POWER chapter for details)
        using Addr = Register::Address<0x10001200,0x7fffffe0,0x00000000,unsigned>;
        ///GPIO number P0.n onto which Reset is exposed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pin{}; 
        ///Connection
        enum class ConnectVal : unsigned {
            disconnected=0x00000001,     ///<Disconnect
            connected=0x00000000,     ///<Connect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ConnectVal> connect{}; 
        namespace ConnectValC{
            constexpr Register::FieldValue<decltype(connect)::Type,ConnectVal::disconnected> disconnected{};
            constexpr Register::FieldValue<decltype(connect)::Type,ConnectVal::connected> connected{};
        }
    }
    namespace UicrPselreset1{    ///<Description collection[0]:  Mapping of the nRESET function (see POWER chapter for details)
        using Addr = Register::Address<0x10001204,0x7fffffe0,0x00000000,unsigned>;
        ///GPIO number P0.n onto which Reset is exposed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pin{}; 
        ///Connection
        enum class ConnectVal : unsigned {
            disconnected=0x00000001,     ///<Disconnect
            connected=0x00000000,     ///<Connect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,ConnectVal> connect{}; 
        namespace ConnectValC{
            constexpr Register::FieldValue<decltype(connect)::Type,ConnectVal::disconnected> disconnected{};
            constexpr Register::FieldValue<decltype(connect)::Type,ConnectVal::connected> connected{};
        }
    }
}
