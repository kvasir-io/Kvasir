#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Remote Control Signal Preprocessor (RMC)
    namespace Noneen{    ///<RMC Enable Register
        using Addr = Register::Address<0x400e7000,0xfffffffe,0,unsigned>;
        ///RMCEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rmcen{}; 
        namespace RmcenValC{
        }
    }
    namespace Noneren{    ///<RMC Receive Enable Register
        using Addr = Register::Address<0x400e7004,0xfffffffe,0,unsigned>;
        ///RMCREN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rmcren{}; 
        namespace RmcrenValC{
        }
    }
    namespace Nonerbuf1{    ///<RMC Receive Data Buffer Register 1
        using Addr = Register::Address<0x400e7008,0x00000000,0,unsigned>;
        ///RMCRBUF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rmcrbuf{}; 
        namespace RmcrbufValC{
        }
    }
    namespace Nonerbuf2{    ///<RMC Receive Data Buffer Register 2
        using Addr = Register::Address<0x400e700c,0x00000000,0,unsigned>;
        ///RMCRBUF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rmcrbuf{}; 
        namespace RmcrbufValC{
        }
    }
    namespace Nonerbuf3{    ///<RMC Receive Data Buffer Register 3
        using Addr = Register::Address<0x400e7010,0xffffff00,0,unsigned>;
        ///RMCRBUF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rmcrbuf{}; 
        namespace RmcrbufValC{
        }
    }
    namespace Nonercr1{    ///<RMC Receive Control Register 1
        using Addr = Register::Address<0x400e7014,0x00000000,0,unsigned>;
        ///RMCLLMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rmcllmin{}; 
        namespace RmcllminValC{
        }
        ///RMCLLMAX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rmcllmax{}; 
        namespace RmcllmaxValC{
        }
        ///RMCLCMIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rmclcmin{}; 
        namespace RmclcminValC{
        }
        ///RMCLCMAX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> rmclcmax{}; 
        namespace RmclcmaxValC{
        }
    }
    namespace Nonercr2{    ///<RMC Receive Control Register 2
        using Addr = Register::Address<0x400e7018,0x3cff0000,0,unsigned>;
        ///RMCDMAX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rmcdmax{}; 
        namespace RmcdmaxValC{
        }
        ///RMCLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rmcll{}; 
        namespace RmcllValC{
        }
        ///RMCPHM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rmcphm{}; 
        namespace RmcphmValC{
        }
        ///RMCLD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rmcld{}; 
        namespace RmcldValC{
        }
        ///RMCEDIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> rmcedien{}; 
        namespace RmcedienValC{
        }
        ///RMCLIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> rmclien{}; 
        namespace RmclienValC{
        }
    }
    namespace Nonercr3{    ///<RMC Receive Control Register 3
        using Addr = Register::Address<0x400e701c,0xffff8080,0,unsigned>;
        ///RMCDATL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rmcdatl{}; 
        namespace RmcdatlValC{
        }
        ///RMCDATH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> rmcdath{}; 
        namespace RmcdathValC{
        }
    }
    namespace Nonercr4{    ///<RMC Receive Control Register 4
        using Addr = Register::Address<0x400e7020,0xffffff70,0,unsigned>;
        ///RMCNC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> rmcnc{}; 
        namespace RmcncValC{
        }
        ///RMCPO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rmcpo{}; 
        namespace RmcpoValC{
        }
    }
    namespace Nonerstat{    ///<RMC Receive Status Register
        using Addr = Register::Address<0x400e7024,0xffff0f00,0,unsigned>;
        ///RMCRNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rmcrnum{}; 
        namespace RmcrnumValC{
        }
        ///RMCRLDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rmcrldr{}; 
        namespace RmcrldrValC{
        }
        ///RMCEDIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rmcedif{}; 
        namespace RmcedifValC{
        }
        ///RMCDMAXIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rmcdmaxif{}; 
        namespace RmcdmaxifValC{
        }
        ///RMCLOIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rmcloif{}; 
        namespace RmcloifValC{
        }
        ///RMCRLIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rmcrlif{}; 
        namespace RmcrlifValC{
        }
    }
    namespace Noneend1{    ///<RMC Receive End Bit Number Register 1
        using Addr = Register::Address<0x400e7028,0xffffff80,0,unsigned>;
        ///RMCEND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rmcend1{}; 
        namespace Rmcend1ValC{
        }
    }
    namespace Noneend2{    ///<RMC Receive End Bit Number Register 2
        using Addr = Register::Address<0x400e702c,0xffffff80,0,unsigned>;
        ///RMCEND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rmcend2{}; 
        namespace Rmcend2ValC{
        }
    }
    namespace Noneend3{    ///<RMC Receive End Bit Number Register 3
        using Addr = Register::Address<0x400e7030,0xffffff80,0,unsigned>;
        ///RMCEND3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rmcend3{}; 
        namespace Rmcend3ValC{
        }
    }
    namespace Nonefssel{    ///<RMC Frequency Selection Register
        using Addr = Register::Address<0x400e7034,0xfffffffe,0,unsigned>;
        ///RMCCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rmcclk{}; 
        namespace RmcclkValC{
        }
    }
}
