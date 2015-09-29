#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Non-Volatile Memory Controller
    namespace NvmctrlAddr{    ///<Address
        using Addr = Register::Address<0x4100401c,0xffc00000,0,unsigned>;
        ///NVM Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace NvmctrlCtrla{    ///<Control A
        using Addr = Register::Address<0x41004000,0xffff0080,0,unsigned>;
        ///Command
        enum class cmdVal {
            er=0x00000002,     ///<Erase Row - Erases the row addressed by the ADDR register.
            wp=0x00000004,     ///<Write Page - Writes the contents of the page buffer to the page addressed by the ADDR register.
            ear=0x00000005,     ///<Erase Auxiliary Row - Erases the auxiliary row addressed by the ADDR register. This command can be given only when the security bit is not set and only to the user configuration row.
            wap=0x00000006,     ///<Write Auxiliary Page - Writes the contents of the page buffer to the page addressed by the ADDR register. This command can be given only when the security bit is not set and only to the user configuration row.
            sf=0x0000000a,     ///<Security Flow Command
            wl=0x0000000f,     ///<Write lockbits
            lr=0x00000040,     ///<Lock Region - Locks the region containing the address location in the ADDR register.
            ur=0x00000041,     ///<Unlock Region - Unlocks the region containing the address location in the ADDR register.
            sprm=0x00000042,     ///<Sets the power reduction mode.
            cprm=0x00000043,     ///<Clears the power reduction mode.
            pbc=0x00000044,     ///<Page Buffer Clear - Clears the page buffer.
            ssb=0x00000045,     ///<Set Security Bit - Sets the security bit by writing 0x00 to the first byte in the lockbit row.
            invall=0x00000046,     ///<Invalidates all cache lines.
        };
        namespace cmdValC{
            constexpr MPL::Value<cmdVal,cmdVal::er> er{};
            constexpr MPL::Value<cmdVal,cmdVal::wp> wp{};
            constexpr MPL::Value<cmdVal,cmdVal::ear> ear{};
            constexpr MPL::Value<cmdVal,cmdVal::wap> wap{};
            constexpr MPL::Value<cmdVal,cmdVal::sf> sf{};
            constexpr MPL::Value<cmdVal,cmdVal::wl> wl{};
            constexpr MPL::Value<cmdVal,cmdVal::lr> lr{};
            constexpr MPL::Value<cmdVal,cmdVal::ur> ur{};
            constexpr MPL::Value<cmdVal,cmdVal::sprm> sprm{};
            constexpr MPL::Value<cmdVal,cmdVal::cprm> cprm{};
            constexpr MPL::Value<cmdVal,cmdVal::pbc> pbc{};
            constexpr MPL::Value<cmdVal,cmdVal::ssb> ssb{};
            constexpr MPL::Value<cmdVal,cmdVal::invall> invall{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,cmdVal> cmd{}; 
        ///Command Execution
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cmdex{}; 
    }
    namespace NvmctrlCtrlb{    ///<Control B
        using Addr = Register::Address<0x41004004,0xfff8fc61,0,unsigned>;
        ///NVM Read Wait States
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> rws{}; 
        ///Manual Write
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> manw{}; 
        ///Power Reduction Mode during Sleep
        enum class sleepprmVal {
            wakeonaccess=0x00000000,     ///<NVM block enters low-power mode when entering sleep.NVM block exits low-power mode upon first access.
            wakeupinstant=0x00000001,     ///<NVM block enters low-power mode when entering sleep.NVM block exits low-power mode when exiting sleep.
            disabled=0x00000003,     ///<Auto power reduction disabled.
        };
        namespace sleepprmValC{
            constexpr MPL::Value<sleepprmVal,sleepprmVal::wakeonaccess> wakeonaccess{};
            constexpr MPL::Value<sleepprmVal,sleepprmVal::wakeupinstant> wakeupinstant{};
            constexpr MPL::Value<sleepprmVal,sleepprmVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,sleepprmVal> sleepprm{}; 
        ///NVMCTRL Read Mode
        enum class readmodeVal {
            noMissPenalty=0x00000000,     ///<The NVM Controller (cache system) does not insert wait states on a cache miss. Gives the best system performance.
            lowPower=0x00000001,     ///<Reduces power consumption of the cache system, but inserts a wait state each time there is a cache miss. This mode may not be relevant if CPU performance is required, as the application will be stalled and may lead to increase run time.
            deterministic=0x00000002,     ///<The cache system ensures that a cache hit or miss takes the same amount of time, determined by the number of programmed flash wait states. This mode can be used for real-time applications that require deterministic execution timings.
        };
        namespace readmodeValC{
            constexpr MPL::Value<readmodeVal,readmodeVal::noMissPenalty> noMissPenalty{};
            constexpr MPL::Value<readmodeVal,readmodeVal::lowPower> lowPower{};
            constexpr MPL::Value<readmodeVal,readmodeVal::deterministic> deterministic{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,readmodeVal> readmode{}; 
        ///Cache Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cachedis{}; 
    }
    namespace NvmctrlIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x4100400c,0xfffffffc,0,unsigned char>;
        ///NVM Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ready{}; 
        ///Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace NvmctrlIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x41004010,0xfffffffc,0,unsigned char>;
        ///NVM Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ready{}; 
        ///Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace NvmctrlIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x41004014,0xfffffffc,0,unsigned char>;
        ///NVM Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ready{}; 
        ///Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace NvmctrlLock{    ///<Lock Section
        using Addr = Register::Address<0x41004020,0xffff0000,0,unsigned>;
        ///Region Lock Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace NvmctrlParam{    ///<NVM Parameter
        using Addr = Register::Address<0x41004008,0xfff80000,0,unsigned>;
        ///NVM Pages
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> nvmp{}; 
        ///Page Size
        enum class pszVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        namespace pszValC{
            constexpr MPL::Value<pszVal,pszVal::v8> v8{};
            constexpr MPL::Value<pszVal,pszVal::v16> v16{};
            constexpr MPL::Value<pszVal,pszVal::v32> v32{};
            constexpr MPL::Value<pszVal,pszVal::v64> v64{};
            constexpr MPL::Value<pszVal,pszVal::v128> v128{};
            constexpr MPL::Value<pszVal,pszVal::v256> v256{};
            constexpr MPL::Value<pszVal,pszVal::v512> v512{};
            constexpr MPL::Value<pszVal,pszVal::v1024> v1024{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,pszVal> psz{}; 
    }
    namespace NvmctrlStatus{    ///<Status
        using Addr = Register::Address<0x41004018,0xfffffee0,0,unsigned>;
        ///Power Reduction Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> prm{}; 
        ///NVM Page Buffer Active Loading
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> load{}; 
        ///Programming Error Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> proge{}; 
        ///Lock Error Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> locke{}; 
        ///NVM Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nvme{}; 
        ///Security Bit Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sb{}; 
    }
}
