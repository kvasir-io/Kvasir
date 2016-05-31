#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Non-Volatile Memory Controller
    namespace NvmctrlAddr{    ///<Address
        using Addr = Register::Address<0x4100401c,0xffc00000,0x00000000,unsigned>;
        ///NVM Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,0),Register::ReadWriteAccess,unsigned> addr{}; 
    }
    namespace NvmctrlCtrla{    ///<Control A
        using Addr = Register::Address<0x41004000,0xffff0080,0x00000000,unsigned>;
        ///Command
        enum class CmdVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,CmdVal> cmd{}; 
        namespace CmdValC{
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::er> er{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::wp> wp{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::ear> ear{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::wap> wap{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::sf> sf{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::wl> wl{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::lr> lr{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::ur> ur{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::sprm> sprm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::cprm> cprm{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::pbc> pbc{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::ssb> ssb{};
            constexpr Register::FieldValue<decltype(cmd)::Type,CmdVal::invall> invall{};
        }
        ///Command Execution
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cmdex{}; 
    }
    namespace NvmctrlCtrlb{    ///<Control B
        using Addr = Register::Address<0x41004004,0xfff8fc61,0x00000000,unsigned>;
        ///NVM Read Wait States
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> rws{}; 
        ///Manual Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> manw{}; 
        ///Power Reduction Mode during Sleep
        enum class SleepprmVal {
            wakeonaccess=0x00000000,     ///<NVM block enters low-power mode when entering sleep.NVM block exits low-power mode upon first access.
            wakeupinstant=0x00000001,     ///<NVM block enters low-power mode when entering sleep.NVM block exits low-power mode when exiting sleep.
            disabled=0x00000003,     ///<Auto power reduction disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,SleepprmVal> sleepprm{}; 
        namespace SleepprmValC{
            constexpr Register::FieldValue<decltype(sleepprm)::Type,SleepprmVal::wakeonaccess> wakeonaccess{};
            constexpr Register::FieldValue<decltype(sleepprm)::Type,SleepprmVal::wakeupinstant> wakeupinstant{};
            constexpr Register::FieldValue<decltype(sleepprm)::Type,SleepprmVal::disabled> disabled{};
        }
        ///NVMCTRL Read Mode
        enum class ReadmodeVal {
            noMissPenalty=0x00000000,     ///<The NVM Controller (cache system) does not insert wait states on a cache miss. Gives the best system performance.
            lowPower=0x00000001,     ///<Reduces power consumption of the cache system, but inserts a wait state each time there is a cache miss. This mode may not be relevant if CPU performance is required, as the application will be stalled and may lead to increase run time.
            deterministic=0x00000002,     ///<The cache system ensures that a cache hit or miss takes the same amount of time, determined by the number of programmed flash wait states. This mode can be used for real-time applications that require deterministic execution timings.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,ReadmodeVal> readmode{}; 
        namespace ReadmodeValC{
            constexpr Register::FieldValue<decltype(readmode)::Type,ReadmodeVal::noMissPenalty> noMissPenalty{};
            constexpr Register::FieldValue<decltype(readmode)::Type,ReadmodeVal::lowPower> lowPower{};
            constexpr Register::FieldValue<decltype(readmode)::Type,ReadmodeVal::deterministic> deterministic{};
        }
        ///Cache Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cachedis{}; 
    }
    namespace NvmctrlIntenclr{    ///<Interrupt Enable Clear
        using Addr = Register::Address<0x4100400c,0xfffffffc,0x00000000,unsigned char>;
        ///NVM Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ready{}; 
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace NvmctrlIntenset{    ///<Interrupt Enable Set
        using Addr = Register::Address<0x41004010,0xfffffffc,0x00000000,unsigned char>;
        ///NVM Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ready{}; 
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace NvmctrlIntflag{    ///<Interrupt Flag Status and Clear
        using Addr = Register::Address<0x41004014,0xfffffffc,0x00000000,unsigned char>;
        ///NVM Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ready{}; 
        ///Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> error{}; 
    }
    namespace NvmctrlLock{    ///<Lock Section
        using Addr = Register::Address<0x41004020,0xffff0000,0x00000000,unsigned>;
        ///Region Lock Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lock{}; 
    }
    namespace NvmctrlParam{    ///<NVM Parameter
        using Addr = Register::Address<0x41004008,0xfff80000,0x00000000,unsigned>;
        ///NVM Pages
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nvmp{}; 
        ///Page Size
        enum class PszVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,PszVal> psz{}; 
        namespace PszValC{
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v8> v8{};
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v16> v16{};
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v32> v32{};
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v64> v64{};
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v128> v128{};
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v256> v256{};
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v512> v512{};
            constexpr Register::FieldValue<decltype(psz)::Type,PszVal::v1024> v1024{};
        }
    }
    namespace NvmctrlStatus{    ///<Status
        using Addr = Register::Address<0x41004018,0xfffffee0,0x00000000,unsigned>;
        ///Power Reduction Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> prm{}; 
        ///NVM Page Buffer Active Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> load{}; 
        ///Programming Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> proge{}; 
        ///Lock Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> locke{}; 
        ///NVM Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nvme{}; 
        ///Security Bit Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sb{}; 
    }
}
