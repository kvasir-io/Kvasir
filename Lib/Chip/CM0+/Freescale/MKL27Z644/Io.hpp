#pragma once
#include <Io/Io.hpp>
#include <Register/Register.hpp>
namespace Kvasir{
    namespace Io{
        template<int Pin>
        struct MakeAction<Action::Clear,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff008,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Clear,Register::PinLocation<1,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff048,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Clear,Register::PinLocation<2,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff088,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Clear,Register::PinLocation<3,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff0c8,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Clear,Register::PinLocation<4,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff108,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Input,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff014,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(0<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Input,Register::PinLocation<1,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff054,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(0<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Input,Register::PinLocation<2,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff094,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(0<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Input,Register::PinLocation<3,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff0d4,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(0<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Input,Register::PinLocation<4,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff114,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(0<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Output,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff014,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Output,Register::PinLocation<1,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff054,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Output,Register::PinLocation<2,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff094,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Output,Register::PinLocation<3,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff0d4,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Output,Register::PinLocation<4,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff114,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Read,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff010,0x00000000>,(1<<Pin)>,Register::ReadAction>{};

        template<int Pin>
        struct MakeAction<Action::Read,Register::PinLocation<1,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff050,0x00000000>,(1<<Pin)>,Register::ReadAction>{};

        template<int Pin>
        struct MakeAction<Action::Read,Register::PinLocation<2,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff090,0x00000000>,(1<<Pin)>,Register::ReadAction>{};

        template<int Pin>
        struct MakeAction<Action::Read,Register::PinLocation<3,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff0d0,0x00000000>,(1<<Pin)>,Register::ReadAction>{};

        template<int Pin>
        struct MakeAction<Action::Read,Register::PinLocation<4,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff110,0x00000000>,(1<<Pin)>,Register::ReadAction>{};

        template<int Pin>
        struct MakeAction<Action::Set,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff004,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Set,Register::PinLocation<1,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff044,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Set,Register::PinLocation<2,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff084,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Set,Register::PinLocation<3,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff0c4,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Set,Register::PinLocation<4,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff104,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Toggle,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff00c,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Toggle,Register::PinLocation<1,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff04c,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Toggle,Register::PinLocation<2,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff08c,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Toggle,Register::PinLocation<3,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff0cc,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Toggle,Register::PinLocation<4,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0xf80ff10c,0x00000000>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

    }
}
