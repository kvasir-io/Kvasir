#pragma once
#include <Io/Io.hpp>
#include <Register/Register.hpp>

namespace Kvasir{
    namespace Io{
        template<int Pin>
        struct MakeAction<Action::Clear,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x5000050C,0xFFFFFFFF>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Input,Register::PinLocation<0,Pin>> {
            using Type = brigand::list<Register::Action<Register::FieldLocation<Register::Address<0x5000051C,0xFFFFFFFF>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>, 
		  //We add this extra action so that the input buffer will be connected when you set the pin as an input.
		Register::Action<Register::FieldLocation<Register::Address<0x50000700+4*Pin,0x00000000>,(1<<1)>,Register::WriteLiteralAction<0>>>;
	};
        template<int Pin>
        struct MakeAction<Action::Output,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50000518,0xFFFFFFFF>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};

        template<int Pin>
        struct MakeAction<Action::Read,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50000510,0x00000000>,(1<<Pin)>,Register::ReadAction>{};

        template<int Pin>
        struct MakeAction<Action::Set,Register::PinLocation<0,Pin>> :
            Register::Action<Register::FieldLocation<Register::Address<0x50000508,0xFFFFFFFF>,(1<<Pin)>,Register::WriteLiteralAction<(1<<Pin)>>{};


}
}
