#pragma once
#include <Io/Io.hpp>
#include <Register/Register.hpp>
namespace Kvasir{
    namespace Io{
        template<int Pin>
        struct MakeAction<Action::Clear,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50003ffc,0xfffff000>,(1<<Pin)>,Register::WriteLiteralAction<(0<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Clear,Register::PinLocation<1,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50013ffc,0xfffff000>,(1<<Pin)>,Register::WriteLiteralAction<(0<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Clear,Register::PinLocation<2,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50023ffc,0xfffff000>,(1<<Pin)>,Register::WriteLiteralAction<(0<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Input,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50008000,0xfffff000>,(1<<Pin)>,Register::WriteLiteralAction<(0<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Input,Register::PinLocation<1,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50018000,0xfffff000>,(1<<Pin)>,Register::WriteLiteralAction<(0<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Input,Register::PinLocation<2,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50028000,0xfffff000>,(1<<Pin)>,Register::WriteLiteralAction<(0<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Output,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50008000,0xfffff000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Output,Register::PinLocation<1,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50018000,0xfffff000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Output,Register::PinLocation<2,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50028000,0xfffff000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Read,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50003ffc,0xfffff000>,(1<<Pin)>,Register::ReadAction>{};

        template<int Pin>
        struct MakeAction<Action::Read,Register::PinLocation<1,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50013ffc,0xfffff000>,(1<<Pin)>,Register::ReadAction>{};

        template<int Pin>
        struct MakeAction<Action::Read,Register::PinLocation<2,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50023ffc,0xfffff000>,(1<<Pin)>,Register::ReadAction>{};

        template<int Pin>
        struct MakeAction<Action::Set,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50003ffc,0xfffff000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Set,Register::PinLocation<1,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50013ffc,0xfffff000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Set,Register::PinLocation<2,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50023ffc,0xfffff000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

    }
}
