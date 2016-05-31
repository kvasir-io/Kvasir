#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Real time clock
    namespace RtcCrh{    ///<RTC Control Register High
        using Addr = Register::Address<0x40002800,0xfffffff8,0x00000000,unsigned>;
        ///Second interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> secie{}; 
        ///Alarm interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alrie{}; 
        ///Overflow interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> owie{}; 
    }
    namespace RtcCrl{    ///<RTC Control Register Low
        using Addr = Register::Address<0x40002804,0xffffffc0,0x00000000,unsigned>;
        ///Second Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> secf{}; 
        ///Alarm Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> alrf{}; 
        ///Overflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> owf{}; 
        ///Registers Synchronized              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rsf{}; 
        ///Configuration Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cnf{}; 
        ///RTC operation OFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtoff{}; 
    }
    namespace RtcPrlh{    ///<RTC Prescaler Load Register          High
        using Addr = Register::Address<0x40002808,0xfffffff0,0x00000000,unsigned>;
        ///RTC Prescaler Load Register              High
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> prlh{}; 
    }
    namespace RtcPrll{    ///<RTC Prescaler Load Register          Low
        using Addr = Register::Address<0x4000280c,0xffff0000,0x00000000,unsigned>;
        ///RTC Prescaler Divider Register              Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> prll{}; 
    }
    namespace RtcDivh{    ///<RTC Prescaler Divider Register          High
        using Addr = Register::Address<0x40002810,0xfffffff0,0x00000000,unsigned>;
        ///RTC prescaler divider register              high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> divh{}; 
    }
    namespace RtcDivl{    ///<RTC Prescaler Divider Register          Low
        using Addr = Register::Address<0x40002814,0xffff0000,0x00000000,unsigned>;
        ///RTC prescaler divider register              Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> divl{}; 
    }
    namespace RtcCnth{    ///<RTC Counter Register High
        using Addr = Register::Address<0x40002818,0xffff0000,0x00000000,unsigned>;
        ///RTC counter register high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnth{}; 
    }
    namespace RtcCntl{    ///<RTC Counter Register Low
        using Addr = Register::Address<0x4000281c,0xffff0000,0x00000000,unsigned>;
        ///RTC counter register Low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cntl{}; 
    }
    namespace RtcAlrh{    ///<RTC Alarm Register High
        using Addr = Register::Address<0x40002820,0xffff0000,0x00000000,unsigned>;
        ///RTC alarm register high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> alrh{}; 
    }
    namespace RtcAlrl{    ///<RTC Alarm Register Low
        using Addr = Register::Address<0x40002824,0xffff0000,0x00000000,unsigned>;
        ///RTC alarm register low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> alrl{}; 
    }
}
