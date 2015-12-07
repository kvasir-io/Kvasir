#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External Memory Controller (EMC)
    namespace Nonecontrol{    ///<Controls operation of the memory controller.
        using Addr = Register::Address<0x2009c000,0xfffffff8,0,unsigned>;
        ///EMC Enable. Indicates if the EMC is enabled or disabled:
        enum class EVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
(POR and warm reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EVal> e{}; 
        namespace EValC{
            constexpr Register::FieldValue<decltype(e),EVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(e),EVal::enabled> enabled{};
        }
        ///Address mirror. Indicates normal or reset memory map:
        enum class MVal {
            normal=0x00000000,     ///<Normal memory map.
            reset=0x00000001,     ///<Reset memory map. Static memory EMC_CS1 is
mirrored onto EMC_CS0 and EMC_DYCS0 (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,MVal> m{}; 
        namespace MValC{
            constexpr Register::FieldValue<decltype(m),MVal::normal> normal{};
            constexpr Register::FieldValue<decltype(m),MVal::reset> reset{};
        }
        ///Low-power mode. Indicates normal, or low-power mode:
        enum class LVal {
            warmreset=0x00000000,     ///<Normal mode (warm
reset value).
            lowpower=0x00000001,     ///<Low-power
mode. Entering low-power mode reduces memory controller power consumption.
Dynamic memory is refreshed as necessary. The memory controller
returns to normal functional mode by clearing the low-power mode
bit (L), or by POR. This bit must only be modified when the EMC
is in idle state.[1]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,LVal> l{}; 
        namespace LValC{
            constexpr Register::FieldValue<decltype(l),LVal::warmreset> warmreset{};
            constexpr Register::FieldValue<decltype(l),LVal::lowpower> lowpower{};
        }
    }
    namespace Nonestatus{    ///<Provides EMC status information.
        using Addr = Register::Address<0x2009c004,0xfffffff8,0,unsigned>;
        ///Busy. This bit is used to ensure that the memory controller enters the low-power or disabled mode cleanly by determining if the memory controller is busy or not.
        enum class BVal {
            idle=0x00000000,     ///<EMC
is idle (warm reset value).
            busy=0x00000001,     ///<EMC
is busy performing memory transactions, commands, auto-refresh cycles,
or is in self-refresh mode (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b),BVal::idle> idle{};
            constexpr Register::FieldValue<decltype(b),BVal::busy> busy{};
        }
        ///Write buffer status.This bit enables the EMC to enter low-power mode or disabled mode cleanly.
        enum class SVal {
            empty=0x00000000,     ///<Write buffers
empty (POR reset value)
            data=0x00000001,     ///<Write
buffers contain data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SVal> s{}; 
        namespace SValC{
            constexpr Register::FieldValue<decltype(s),SVal::empty> empty{};
            constexpr Register::FieldValue<decltype(s),SVal::data> data{};
        }
        ///Self-refresh acknowledge. This bit indicates the operating mode of the EMC.
        enum class SaVal {
            normal=0x00000000,     ///<Normal mode
            selfrefresh=0x00000001,     ///<Self-refresh mode (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SaVal> sa{}; 
        namespace SaValC{
            constexpr Register::FieldValue<decltype(sa),SaVal::normal> normal{};
            constexpr Register::FieldValue<decltype(sa),SaVal::selfrefresh> selfrefresh{};
        }
    }
    namespace Noneconfig{    ///<Configures operation of the memory controller
        using Addr = Register::Address<0x2009c008,0xfffffefe,0,unsigned>;
        ///Endian mode. On power-on reset, the value of the endian bit is 0. All data must be flushed in the EMC before switching between little-endian and big-endian modes.
        enum class EmVal {
            littleendian=0x00000000,     ///<Little-endian
mode (POR reset value).
            bigendian=0x00000001,     ///<Big-endian
mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EmVal> em{}; 
        namespace EmValC{
            constexpr Register::FieldValue<decltype(em),EmVal::littleendian> littleendian{};
            constexpr Register::FieldValue<decltype(em),EmVal::bigendian> bigendian{};
        }
        ///CCLK: CLKOUT ratio. This bit must contain 0 for proper operation of the EMC.
        enum class ClkrVal {
            porreset=0x00000000,     ///<1:1(POR reset value)
            donotuse=0x00000001,     ///<1:2 (this option is not available on the LPC178x/177x)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ClkrVal> clkr{}; 
        namespace ClkrValC{
            constexpr Register::FieldValue<decltype(clkr),ClkrVal::porreset> porreset{};
            constexpr Register::FieldValue<decltype(clkr),ClkrVal::donotuse> donotuse{};
        }
    }
    namespace Nonedynamiccontrol{    ///<Controls dynamic memory operation.
        using Addr = Register::Address<0x2009c020,0xfffffe58,0,unsigned>;
        ///Dynamic memory clock enable.
        enum class CeVal {
            powersave=0x00000000,     ///<Clock enable of idle devices are deasserted to save power (POR reset value).
            high=0x00000001,     ///<All clock enables are driven HIGH continuously.[1]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CeVal> ce{}; 
        namespace CeValC{
            constexpr Register::FieldValue<decltype(ce),CeVal::powersave> powersave{};
            constexpr Register::FieldValue<decltype(ce),CeVal::high> high{};
        }
        ///Dynamic memory clock control. When clock control is LOW the output clock CLKOUT is stopped when there are no SDRAM transactions. The clock is also stopped during self-refresh mode.
        enum class CsVal {
            stop=0x00000000,     ///<CLKOUT stops when all SDRAMs are idle and during self-refresh mode.
            run=0x00000001,     ///<CLKOUT runs continuously (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CsVal> cs{}; 
        namespace CsValC{
            constexpr Register::FieldValue<decltype(cs),CsVal::stop> stop{};
            constexpr Register::FieldValue<decltype(cs),CsVal::run> run{};
        }
        ///Self-refresh request, EMCSREFREQ. By writing 1 to this bit self-refresh can be entered under software control. Writing 0 to this bit returns the EMC to normal mode. The self-refresh acknowledge bit in the Status register must be polled to discover the current operating mode of the EMC.[2]
        enum class SrVal {
            normalMode=0x00000000,     ///<Normal mode.
            enterSelfRefreshM=0x00000001,     ///<Enter self-refresh mode (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SrVal> sr{}; 
        namespace SrValC{
            constexpr Register::FieldValue<decltype(sr),SrVal::normalMode> normalMode{};
            constexpr Register::FieldValue<decltype(sr),SrVal::enterSelfRefreshM> enterSelfRefreshM{};
        }
        ///Memory clock control.
        enum class MmcVal {
            clkoutEnabledPor=0x00000000,     ///<CLKOUT enabled (POR reset value).
            clkoutDisabled=0x00000001,     ///<CLKOUT disabled.[3]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MmcVal> mmc{}; 
        namespace MmcValC{
            constexpr Register::FieldValue<decltype(mmc),MmcVal::clkoutEnabledPor> clkoutEnabledPor{};
            constexpr Register::FieldValue<decltype(mmc),MmcVal::clkoutDisabled> clkoutDisabled{};
        }
        ///SDRAM initialization.
        enum class IVal {
            normal=0x00000000,     ///<Issue SDRAM NORMAL operation command (POR reset value).
            mode=0x00000001,     ///<Issue SDRAM MODE command.
            pall=0x00000002,     ///<Issue SDRAM PALL (precharge all) command.
            nop=0x00000003,     ///<Issue SDRAM NOP (no operation) command)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,IVal> i{}; 
        namespace IValC{
            constexpr Register::FieldValue<decltype(i),IVal::normal> normal{};
            constexpr Register::FieldValue<decltype(i),IVal::mode> mode{};
            constexpr Register::FieldValue<decltype(i),IVal::pall> pall{};
            constexpr Register::FieldValue<decltype(i),IVal::nop> nop{};
        }
    }
    namespace Nonedynamicrefresh{    ///<Configures dynamic memory refresh.
        using Addr = Register::Address<0x2009c024,0xfffff800,0,unsigned>;
        ///Refresh timer. Indicates the multiple of 16 CCLKs between SDRAM refresh cycles. 0x0 = Refresh disabled (POR reset value). 0x1 - 0x7FF = n x16 = 16n CCLKs between SDRAM refresh cycles. For example: 0x1 = 1 x 16 = 16 CCLKs between SDRAM refresh cycles. 0x8 = 8 x 16 = 128 CCLKs between SDRAM refresh cycles
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> refresh{}; 
        namespace RefreshValC{
        }
    }
    namespace Nonedynamicreadconfig{    ///<Configures dynamic memory read strategy.
        using Addr = Register::Address<0x2009c028,0xfffffffc,0,unsigned>;
        ///Read data strategy
        enum class RdVal {
            clockOutDelayedSt=0x00000000,     ///<Clock out delayed strategy, using CLKOUT (command not delayed, clock out delayed). POR reset value.
            commandDelayedStra=0x00000001,     ///<Command delayed strategy, using EMCCLKDELAY (command delayed, clock out not delayed).
            commandDelayedStra=0x00000002,     ///<Command delayed strategy plus one clock cycle, using EMCCLKDELAY (command delayed, clock out not delayed).
            commandDelayedStra=0x00000003,     ///<Command delayed strategy plus two clock cycles, using EMCCLKDELAY (command delayed, clock out not delayed).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RdVal> rd{}; 
        namespace RdValC{
            constexpr Register::FieldValue<decltype(rd),RdVal::clockOutDelayedSt> clockOutDelayedSt{};
            constexpr Register::FieldValue<decltype(rd),RdVal::commandDelayedStra> commandDelayedStra{};
            constexpr Register::FieldValue<decltype(rd),RdVal::commandDelayedStra> commandDelayedStra{};
            constexpr Register::FieldValue<decltype(rd),RdVal::commandDelayedStra> commandDelayedStra{};
        }
    }
    namespace Nonedynamicrp{    ///<Precharge command period.
        using Addr = Register::Address<0x2009c030,0xfffffff0,0,unsigned>;
        ///Precharge command period. 0x0 - 0xE = n + 1 clock cycles. The delay is in CCLK cycles. 0xF = 16 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> trp{}; 
        namespace TrpValC{
        }
    }
    namespace Nonedynamicras{    ///<Active to precharge command period.
        using Addr = Register::Address<0x2009c034,0xfffffff0,0,unsigned>;
        ///Active to precharge command period. 0x0 - 0xE = n + 1 clock cycles. The delay is in CCLK cycles. 0xF = 16 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tras{}; 
        namespace TrasValC{
        }
    }
    namespace Nonedynamicsrex{    ///<Self-refresh exit time.
        using Addr = Register::Address<0x2009c038,0xfffffff0,0,unsigned>;
        ///Self-refresh exit time. 0x0 - 0xE = n + 1 clock cycles. The delay is in CCLK cycles. 0xF = 16 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tsrex{}; 
        namespace TsrexValC{
        }
    }
    namespace Nonedynamicapr{    ///<Last-data-out to active command time.
        using Addr = Register::Address<0x2009c03c,0xfffffff0,0,unsigned>;
        ///Last-data-out to active command time. 0x0 - 0xE = n + 1 clock cycles. The delay is in CCLK cycles. 0xF = 16 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tapr{}; 
        namespace TaprValC{
        }
    }
    namespace Nonedynamicdal{    ///<Data-in to active command time.
        using Addr = Register::Address<0x2009c040,0xfffffff0,0,unsigned>;
        ///Data-in to active command. 0x0 - 0xE = n clock cycles. The delay is in CCLK cycles. 0xF = 15 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tdal{}; 
        namespace TdalValC{
        }
    }
    namespace Nonedynamicwr{    ///<Write recovery time.
        using Addr = Register::Address<0x2009c044,0xfffffff0,0,unsigned>;
        ///Write recovery time. 0x0 - 0xE = n + 1 clock cycles. The delay is in CCLK cycles. 0xF = 16 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> twr{}; 
        namespace TwrValC{
        }
    }
    namespace Nonedynamicrc{    ///<Selects the active to active command period.
        using Addr = Register::Address<0x2009c048,0xffffffe0,0,unsigned>;
        ///Active to active command period. 0x0 - 0x1E = n + 1 clock cycles. The delay is in CCLK cycles. 0x1F = 32 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trc{}; 
        namespace TrcValC{
        }
    }
    namespace Nonedynamicrfc{    ///<Selects the auto-refresh period.
        using Addr = Register::Address<0x2009c04c,0xffffffe0,0,unsigned>;
        ///Auto-refresh period and auto-refresh to active command period. 0x0 - 0x1E = n + 1 clock cycles. The delay is in CCLK cycles. 0x1F = 32 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trfc{}; 
        namespace TrfcValC{
        }
    }
    namespace Nonedynamicxsr{    ///<Time for exit self-refresh to active command.
        using Addr = Register::Address<0x2009c050,0xffffffe0,0,unsigned>;
        ///Exit self-refresh to active command time. 0x0 - 0x1E = n + 1 clock cycles. The delay is in CCLK cycles. 0x1F = 32 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> txsr{}; 
        namespace TxsrValC{
        }
    }
    namespace Nonedynamicrrd{    ///<Latency for active bank A to active bank B.
        using Addr = Register::Address<0x2009c054,0xfffffff0,0,unsigned>;
        ///Active bank A to active bank B latency 0x0 - 0xE = n + 1 clock cycles. The delay is in CCLK cycles. 0xF = 16 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> trrd{}; 
        namespace TrrdValC{
        }
    }
    namespace Nonedynamicmrd{    ///<Time for load mode register to active command.
        using Addr = Register::Address<0x2009c058,0xfffffff0,0,unsigned>;
        ///Load mode register to active command time. 0x0 - 0xE = n + 1 clock cycles. The delay is in CCLK cycles. 0xF = 16 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tmrd{}; 
        namespace TmrdValC{
        }
    }
    namespace Nonestaticextendedwait{    ///<Time for long static memory read and write transfers.
        using Addr = Register::Address<0x2009c080,0xfffffc00,0,unsigned>;
        ///Extended wait time out. 16 clock cycles (POR reset value). The delay is in CCLK cycles. 0x0 = 16 clock cycles. 0x1 - 0x3FF = (n+1) x16 clock cycles.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> extendedwait{}; 
        namespace ExtendedwaitValC{
        }
    }
    namespace Nonedynamicconfig0{    ///<Configuration information for EMC_DYCS0.
        using Addr = Register::Address<0x2009c100,0xffe7a067,0,unsigned>;
        ///Memory device.
        enum class MdVal {
            sdramPorResetVal=0x00000000,     ///<SDRAM (POR reset value).
            lowPowerSdram=0x00000001,     ///<Low-power SDRAM.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,MdVal> md{}; 
        namespace MdValC{
            constexpr Register::FieldValue<decltype(md),MdVal::sdramPorResetVal> sdramPorResetVal{};
            constexpr Register::FieldValue<decltype(md),MdVal::lowPowerSdram> lowPowerSdram{};
        }
        ///See Table 133. 000000 = reset value.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> am0{}; 
        namespace Am0ValC{
        }
        ///See  Table 133. 0 = reset value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> am1{}; 
        namespace Am1ValC{
        }
        ///Buffer enable.
        enum class BVal {
            bufferDisabledFor=0x00000000,     ///<Buffer disabled for accesses to this chip select (POR reset value).
            bufferEnabledForA=0x00000001,     ///<Buffer enabled for accesses to this chip select.[2]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b),BVal::bufferDisabledFor> bufferDisabledFor{};
            constexpr Register::FieldValue<decltype(b),BVal::bufferEnabledForA> bufferEnabledForA{};
        }
        ///Write protect.
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writesProtected=0x00000001,     ///<Writes protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p),PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p),PVal::writesProtected> writesProtected{};
        }
    }
    namespace Nonedynamicconfig1{    ///<Configuration information for EMC_DYCS0.
        using Addr = Register::Address<0x2009c120,0xffe7a067,0,unsigned>;
        ///Memory device.
        enum class MdVal {
            sdramPorResetVal=0x00000000,     ///<SDRAM (POR reset value).
            lowPowerSdram=0x00000001,     ///<Low-power SDRAM.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,MdVal> md{}; 
        namespace MdValC{
            constexpr Register::FieldValue<decltype(md),MdVal::sdramPorResetVal> sdramPorResetVal{};
            constexpr Register::FieldValue<decltype(md),MdVal::lowPowerSdram> lowPowerSdram{};
        }
        ///See Table 133. 000000 = reset value.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> am0{}; 
        namespace Am0ValC{
        }
        ///See  Table 133. 0 = reset value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> am1{}; 
        namespace Am1ValC{
        }
        ///Buffer enable.
        enum class BVal {
            bufferDisabledFor=0x00000000,     ///<Buffer disabled for accesses to this chip select (POR reset value).
            bufferEnabledForA=0x00000001,     ///<Buffer enabled for accesses to this chip select.[2]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b),BVal::bufferDisabledFor> bufferDisabledFor{};
            constexpr Register::FieldValue<decltype(b),BVal::bufferEnabledForA> bufferEnabledForA{};
        }
        ///Write protect.
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writesProtected=0x00000001,     ///<Writes protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p),PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p),PVal::writesProtected> writesProtected{};
        }
    }
    namespace Nonedynamicconfig2{    ///<Configuration information for EMC_DYCS0.
        using Addr = Register::Address<0x2009c140,0xffe7a067,0,unsigned>;
        ///Memory device.
        enum class MdVal {
            sdramPorResetVal=0x00000000,     ///<SDRAM (POR reset value).
            lowPowerSdram=0x00000001,     ///<Low-power SDRAM.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,MdVal> md{}; 
        namespace MdValC{
            constexpr Register::FieldValue<decltype(md),MdVal::sdramPorResetVal> sdramPorResetVal{};
            constexpr Register::FieldValue<decltype(md),MdVal::lowPowerSdram> lowPowerSdram{};
        }
        ///See Table 133. 000000 = reset value.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> am0{}; 
        namespace Am0ValC{
        }
        ///See  Table 133. 0 = reset value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> am1{}; 
        namespace Am1ValC{
        }
        ///Buffer enable.
        enum class BVal {
            bufferDisabledFor=0x00000000,     ///<Buffer disabled for accesses to this chip select (POR reset value).
            bufferEnabledForA=0x00000001,     ///<Buffer enabled for accesses to this chip select.[2]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b),BVal::bufferDisabledFor> bufferDisabledFor{};
            constexpr Register::FieldValue<decltype(b),BVal::bufferEnabledForA> bufferEnabledForA{};
        }
        ///Write protect.
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writesProtected=0x00000001,     ///<Writes protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p),PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p),PVal::writesProtected> writesProtected{};
        }
    }
    namespace Nonedynamicconfig3{    ///<Configuration information for EMC_DYCS0.
        using Addr = Register::Address<0x2009c160,0xffe7a067,0,unsigned>;
        ///Memory device.
        enum class MdVal {
            sdramPorResetVal=0x00000000,     ///<SDRAM (POR reset value).
            lowPowerSdram=0x00000001,     ///<Low-power SDRAM.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,MdVal> md{}; 
        namespace MdValC{
            constexpr Register::FieldValue<decltype(md),MdVal::sdramPorResetVal> sdramPorResetVal{};
            constexpr Register::FieldValue<decltype(md),MdVal::lowPowerSdram> lowPowerSdram{};
        }
        ///See Table 133. 000000 = reset value.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> am0{}; 
        namespace Am0ValC{
        }
        ///See  Table 133. 0 = reset value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> am1{}; 
        namespace Am1ValC{
        }
        ///Buffer enable.
        enum class BVal {
            bufferDisabledFor=0x00000000,     ///<Buffer disabled for accesses to this chip select (POR reset value).
            bufferEnabledForA=0x00000001,     ///<Buffer enabled for accesses to this chip select.[2]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b),BVal::bufferDisabledFor> bufferDisabledFor{};
            constexpr Register::FieldValue<decltype(b),BVal::bufferEnabledForA> bufferEnabledForA{};
        }
        ///Write protect.
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writesProtected=0x00000001,     ///<Writes protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p),PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p),PVal::writesProtected> writesProtected{};
        }
    }
    namespace Nonedynamicrascas0{    ///<RAS and CAS latencies for EMC_DYCS0.
        using Addr = Register::Address<0x2009c104,0xfffffcfc,0,unsigned>;
        ///RAS latency (active to read/write delay).
        enum class RasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RasVal> ras{}; 
        namespace RasValC{
            constexpr Register::FieldValue<decltype(ras),RasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(ras),RasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(ras),RasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
        ///CAS latency.
        enum class CasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,CasVal> cas{}; 
        namespace CasValC{
            constexpr Register::FieldValue<decltype(cas),CasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(cas),CasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(cas),CasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
    }
    namespace Nonedynamicrascas1{    ///<RAS and CAS latencies for EMC_DYCS0.
        using Addr = Register::Address<0x2009c124,0xfffffcfc,0,unsigned>;
        ///RAS latency (active to read/write delay).
        enum class RasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RasVal> ras{}; 
        namespace RasValC{
            constexpr Register::FieldValue<decltype(ras),RasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(ras),RasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(ras),RasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
        ///CAS latency.
        enum class CasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,CasVal> cas{}; 
        namespace CasValC{
            constexpr Register::FieldValue<decltype(cas),CasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(cas),CasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(cas),CasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
    }
    namespace Nonedynamicrascas2{    ///<RAS and CAS latencies for EMC_DYCS0.
        using Addr = Register::Address<0x2009c144,0xfffffcfc,0,unsigned>;
        ///RAS latency (active to read/write delay).
        enum class RasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RasVal> ras{}; 
        namespace RasValC{
            constexpr Register::FieldValue<decltype(ras),RasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(ras),RasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(ras),RasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
        ///CAS latency.
        enum class CasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,CasVal> cas{}; 
        namespace CasValC{
            constexpr Register::FieldValue<decltype(cas),CasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(cas),CasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(cas),CasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
    }
    namespace Nonedynamicrascas3{    ///<RAS and CAS latencies for EMC_DYCS0.
        using Addr = Register::Address<0x2009c164,0xfffffcfc,0,unsigned>;
        ///RAS latency (active to read/write delay).
        enum class RasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RasVal> ras{}; 
        namespace RasValC{
            constexpr Register::FieldValue<decltype(ras),RasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(ras),RasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(ras),RasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
        ///CAS latency.
        enum class CasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,CasVal> cas{}; 
        namespace CasValC{
            constexpr Register::FieldValue<decltype(cas),CasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(cas),CasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(cas),CasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
    }
    namespace Nonestaticconfig0{    ///<Configuration for EMC_CS0.
        using Addr = Register::Address<0x2009c200,0xffe7fe34,0,unsigned>;
        ///Memory width.
        enum class MwVal {
            v8BitPorResetVal=0x00000000,     ///<8 bit (POR reset value).
            v16Bit=0x00000001,     ///<16 bit.
            v32Bit=0x00000002,     ///<32 bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MwVal> mw{}; 
        namespace MwValC{
            constexpr Register::FieldValue<decltype(mw),MwVal::v8BitPorResetVal> v8BitPorResetVal{};
            constexpr Register::FieldValue<decltype(mw),MwVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(mw),MwVal::v32Bit> v32Bit{};
        }
        ///Page mode. In page mode the EMC can burst up to four external accesses. Therefore devices with asynchronous page mode burst four or higher devices are supported. Asynchronous page mode burst two devices are not supported and must be accessed normally.
        enum class PmVal {
            disabledPorReset=0x00000000,     ///<Disabled (POR reset value).
            asynchronousPageMo=0x00000001,     ///<Asynchronous page mode enabled (page length four).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PmVal> pm{}; 
        namespace PmValC{
            constexpr Register::FieldValue<decltype(pm),PmVal::disabledPorReset> disabledPorReset{};
            constexpr Register::FieldValue<decltype(pm),PmVal::asynchronousPageMo> asynchronousPageMo{};
        }
        ///Chip select polarity. The value of the chip select polarity on power-on reset is 0.
        enum class PcVal {
            activeLowChipSele=0x00000000,     ///<Active LOW chip select.
            activeHighChipSel=0x00000001,     ///<Active HIGH chip select.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PcVal> pc{}; 
        namespace PcValC{
            constexpr Register::FieldValue<decltype(pc),PcVal::activeLowChipSele> activeLowChipSele{};
            constexpr Register::FieldValue<decltype(pc),PcVal::activeHighChipSel> activeHighChipSel{};
        }
        ///Byte lane state. The byte lane state bit, PB, enables different types of memory to be connected. For byte-wide static memories the BLS3:0 signal from the EMC is usually connected to WE (write enable). In this case for reads all the BLS3:0 bits must be HIGH. This means that the byte lane state (PB) bit must be LOW. 16 bit wide static memory devices usually have the BLS3:0 signals connected to the UBn and LBn (upper byte and lower byte) signals in the static memory. In this case a write to a particular byte must assert the appropriate UBn or LBn signal LOW. For reads, all the UB and LB signals must be asserted LOW so that the bus is driven. In this case the byte lane state (PB) bit must be HIGH.
        enum class PbVal {
            blshigh=0x00000000,     ///<For reads all the bits in BLS3:0 are HIGH. For writes the respective active bits in BLS3:0 are LOW (POR reset value).
            blslow=0x00000001,     ///<For reads the respective active bits in BLS3:0 are LOW. For writes the respective active bits in BLS3:0 are LOW.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PbVal> pb{}; 
        namespace PbValC{
            constexpr Register::FieldValue<decltype(pb),PbVal::blshigh> blshigh{};
            constexpr Register::FieldValue<decltype(pb),PbVal::blslow> blslow{};
        }
        ///Extended wait (EW) uses the EMCStaticExtendedWait register to time both the read and write transfers rather than the EMCStaticWaitRd and EMCStaticWaitWr registers. This enables much longer transactions. [1]
        enum class EwVal {
            extendedWaitDisabl=0x00000000,     ///<Extended wait disabled (POR reset value).
            extendedWaitEnable=0x00000001,     ///<Extended wait enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EwVal> ew{}; 
        namespace EwValC{
            constexpr Register::FieldValue<decltype(ew),EwVal::extendedWaitDisabl> extendedWaitDisabl{};
            constexpr Register::FieldValue<decltype(ew),EwVal::extendedWaitEnable> extendedWaitEnable{};
        }
        ///Buffer enable [2]
        enum class BVal {
            bufferDisabledPor=0x00000000,     ///<Buffer disabled (POR reset value).
            bufferEnabled=0x00000001,     ///<Buffer enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b),BVal::bufferDisabledPor> bufferDisabledPor{};
            constexpr Register::FieldValue<decltype(b),BVal::bufferEnabled> bufferEnabled{};
        }
        ///Write protect
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writeProtected=0x00000001,     ///<Write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p),PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p),PVal::writeProtected> writeProtected{};
        }
    }
    namespace Nonestaticconfig1{    ///<Configuration for EMC_CS0.
        using Addr = Register::Address<0x2009c220,0xffe7fe34,0,unsigned>;
        ///Memory width.
        enum class MwVal {
            v8BitPorResetVal=0x00000000,     ///<8 bit (POR reset value).
            v16Bit=0x00000001,     ///<16 bit.
            v32Bit=0x00000002,     ///<32 bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MwVal> mw{}; 
        namespace MwValC{
            constexpr Register::FieldValue<decltype(mw),MwVal::v8BitPorResetVal> v8BitPorResetVal{};
            constexpr Register::FieldValue<decltype(mw),MwVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(mw),MwVal::v32Bit> v32Bit{};
        }
        ///Page mode. In page mode the EMC can burst up to four external accesses. Therefore devices with asynchronous page mode burst four or higher devices are supported. Asynchronous page mode burst two devices are not supported and must be accessed normally.
        enum class PmVal {
            disabledPorReset=0x00000000,     ///<Disabled (POR reset value).
            asynchronousPageMo=0x00000001,     ///<Asynchronous page mode enabled (page length four).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PmVal> pm{}; 
        namespace PmValC{
            constexpr Register::FieldValue<decltype(pm),PmVal::disabledPorReset> disabledPorReset{};
            constexpr Register::FieldValue<decltype(pm),PmVal::asynchronousPageMo> asynchronousPageMo{};
        }
        ///Chip select polarity. The value of the chip select polarity on power-on reset is 0.
        enum class PcVal {
            activeLowChipSele=0x00000000,     ///<Active LOW chip select.
            activeHighChipSel=0x00000001,     ///<Active HIGH chip select.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PcVal> pc{}; 
        namespace PcValC{
            constexpr Register::FieldValue<decltype(pc),PcVal::activeLowChipSele> activeLowChipSele{};
            constexpr Register::FieldValue<decltype(pc),PcVal::activeHighChipSel> activeHighChipSel{};
        }
        ///Byte lane state. The byte lane state bit, PB, enables different types of memory to be connected. For byte-wide static memories the BLS3:0 signal from the EMC is usually connected to WE (write enable). In this case for reads all the BLS3:0 bits must be HIGH. This means that the byte lane state (PB) bit must be LOW. 16 bit wide static memory devices usually have the BLS3:0 signals connected to the UBn and LBn (upper byte and lower byte) signals in the static memory. In this case a write to a particular byte must assert the appropriate UBn or LBn signal LOW. For reads, all the UB and LB signals must be asserted LOW so that the bus is driven. In this case the byte lane state (PB) bit must be HIGH.
        enum class PbVal {
            blshigh=0x00000000,     ///<For reads all the bits in BLS3:0 are HIGH. For writes the respective active bits in BLS3:0 are LOW (POR reset value).
            blslow=0x00000001,     ///<For reads the respective active bits in BLS3:0 are LOW. For writes the respective active bits in BLS3:0 are LOW.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PbVal> pb{}; 
        namespace PbValC{
            constexpr Register::FieldValue<decltype(pb),PbVal::blshigh> blshigh{};
            constexpr Register::FieldValue<decltype(pb),PbVal::blslow> blslow{};
        }
        ///Extended wait (EW) uses the EMCStaticExtendedWait register to time both the read and write transfers rather than the EMCStaticWaitRd and EMCStaticWaitWr registers. This enables much longer transactions. [1]
        enum class EwVal {
            extendedWaitDisabl=0x00000000,     ///<Extended wait disabled (POR reset value).
            extendedWaitEnable=0x00000001,     ///<Extended wait enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EwVal> ew{}; 
        namespace EwValC{
            constexpr Register::FieldValue<decltype(ew),EwVal::extendedWaitDisabl> extendedWaitDisabl{};
            constexpr Register::FieldValue<decltype(ew),EwVal::extendedWaitEnable> extendedWaitEnable{};
        }
        ///Buffer enable [2]
        enum class BVal {
            bufferDisabledPor=0x00000000,     ///<Buffer disabled (POR reset value).
            bufferEnabled=0x00000001,     ///<Buffer enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b),BVal::bufferDisabledPor> bufferDisabledPor{};
            constexpr Register::FieldValue<decltype(b),BVal::bufferEnabled> bufferEnabled{};
        }
        ///Write protect
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writeProtected=0x00000001,     ///<Write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p),PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p),PVal::writeProtected> writeProtected{};
        }
    }
    namespace Nonestaticconfig2{    ///<Configuration for EMC_CS0.
        using Addr = Register::Address<0x2009c240,0xffe7fe34,0,unsigned>;
        ///Memory width.
        enum class MwVal {
            v8BitPorResetVal=0x00000000,     ///<8 bit (POR reset value).
            v16Bit=0x00000001,     ///<16 bit.
            v32Bit=0x00000002,     ///<32 bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MwVal> mw{}; 
        namespace MwValC{
            constexpr Register::FieldValue<decltype(mw),MwVal::v8BitPorResetVal> v8BitPorResetVal{};
            constexpr Register::FieldValue<decltype(mw),MwVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(mw),MwVal::v32Bit> v32Bit{};
        }
        ///Page mode. In page mode the EMC can burst up to four external accesses. Therefore devices with asynchronous page mode burst four or higher devices are supported. Asynchronous page mode burst two devices are not supported and must be accessed normally.
        enum class PmVal {
            disabledPorReset=0x00000000,     ///<Disabled (POR reset value).
            asynchronousPageMo=0x00000001,     ///<Asynchronous page mode enabled (page length four).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PmVal> pm{}; 
        namespace PmValC{
            constexpr Register::FieldValue<decltype(pm),PmVal::disabledPorReset> disabledPorReset{};
            constexpr Register::FieldValue<decltype(pm),PmVal::asynchronousPageMo> asynchronousPageMo{};
        }
        ///Chip select polarity. The value of the chip select polarity on power-on reset is 0.
        enum class PcVal {
            activeLowChipSele=0x00000000,     ///<Active LOW chip select.
            activeHighChipSel=0x00000001,     ///<Active HIGH chip select.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PcVal> pc{}; 
        namespace PcValC{
            constexpr Register::FieldValue<decltype(pc),PcVal::activeLowChipSele> activeLowChipSele{};
            constexpr Register::FieldValue<decltype(pc),PcVal::activeHighChipSel> activeHighChipSel{};
        }
        ///Byte lane state. The byte lane state bit, PB, enables different types of memory to be connected. For byte-wide static memories the BLS3:0 signal from the EMC is usually connected to WE (write enable). In this case for reads all the BLS3:0 bits must be HIGH. This means that the byte lane state (PB) bit must be LOW. 16 bit wide static memory devices usually have the BLS3:0 signals connected to the UBn and LBn (upper byte and lower byte) signals in the static memory. In this case a write to a particular byte must assert the appropriate UBn or LBn signal LOW. For reads, all the UB and LB signals must be asserted LOW so that the bus is driven. In this case the byte lane state (PB) bit must be HIGH.
        enum class PbVal {
            blshigh=0x00000000,     ///<For reads all the bits in BLS3:0 are HIGH. For writes the respective active bits in BLS3:0 are LOW (POR reset value).
            blslow=0x00000001,     ///<For reads the respective active bits in BLS3:0 are LOW. For writes the respective active bits in BLS3:0 are LOW.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PbVal> pb{}; 
        namespace PbValC{
            constexpr Register::FieldValue<decltype(pb),PbVal::blshigh> blshigh{};
            constexpr Register::FieldValue<decltype(pb),PbVal::blslow> blslow{};
        }
        ///Extended wait (EW) uses the EMCStaticExtendedWait register to time both the read and write transfers rather than the EMCStaticWaitRd and EMCStaticWaitWr registers. This enables much longer transactions. [1]
        enum class EwVal {
            extendedWaitDisabl=0x00000000,     ///<Extended wait disabled (POR reset value).
            extendedWaitEnable=0x00000001,     ///<Extended wait enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EwVal> ew{}; 
        namespace EwValC{
            constexpr Register::FieldValue<decltype(ew),EwVal::extendedWaitDisabl> extendedWaitDisabl{};
            constexpr Register::FieldValue<decltype(ew),EwVal::extendedWaitEnable> extendedWaitEnable{};
        }
        ///Buffer enable [2]
        enum class BVal {
            bufferDisabledPor=0x00000000,     ///<Buffer disabled (POR reset value).
            bufferEnabled=0x00000001,     ///<Buffer enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b),BVal::bufferDisabledPor> bufferDisabledPor{};
            constexpr Register::FieldValue<decltype(b),BVal::bufferEnabled> bufferEnabled{};
        }
        ///Write protect
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writeProtected=0x00000001,     ///<Write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p),PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p),PVal::writeProtected> writeProtected{};
        }
    }
    namespace Nonestaticconfig3{    ///<Configuration for EMC_CS0.
        using Addr = Register::Address<0x2009c260,0xffe7fe34,0,unsigned>;
        ///Memory width.
        enum class MwVal {
            v8BitPorResetVal=0x00000000,     ///<8 bit (POR reset value).
            v16Bit=0x00000001,     ///<16 bit.
            v32Bit=0x00000002,     ///<32 bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MwVal> mw{}; 
        namespace MwValC{
            constexpr Register::FieldValue<decltype(mw),MwVal::v8BitPorResetVal> v8BitPorResetVal{};
            constexpr Register::FieldValue<decltype(mw),MwVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(mw),MwVal::v32Bit> v32Bit{};
        }
        ///Page mode. In page mode the EMC can burst up to four external accesses. Therefore devices with asynchronous page mode burst four or higher devices are supported. Asynchronous page mode burst two devices are not supported and must be accessed normally.
        enum class PmVal {
            disabledPorReset=0x00000000,     ///<Disabled (POR reset value).
            asynchronousPageMo=0x00000001,     ///<Asynchronous page mode enabled (page length four).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PmVal> pm{}; 
        namespace PmValC{
            constexpr Register::FieldValue<decltype(pm),PmVal::disabledPorReset> disabledPorReset{};
            constexpr Register::FieldValue<decltype(pm),PmVal::asynchronousPageMo> asynchronousPageMo{};
        }
        ///Chip select polarity. The value of the chip select polarity on power-on reset is 0.
        enum class PcVal {
            activeLowChipSele=0x00000000,     ///<Active LOW chip select.
            activeHighChipSel=0x00000001,     ///<Active HIGH chip select.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PcVal> pc{}; 
        namespace PcValC{
            constexpr Register::FieldValue<decltype(pc),PcVal::activeLowChipSele> activeLowChipSele{};
            constexpr Register::FieldValue<decltype(pc),PcVal::activeHighChipSel> activeHighChipSel{};
        }
        ///Byte lane state. The byte lane state bit, PB, enables different types of memory to be connected. For byte-wide static memories the BLS3:0 signal from the EMC is usually connected to WE (write enable). In this case for reads all the BLS3:0 bits must be HIGH. This means that the byte lane state (PB) bit must be LOW. 16 bit wide static memory devices usually have the BLS3:0 signals connected to the UBn and LBn (upper byte and lower byte) signals in the static memory. In this case a write to a particular byte must assert the appropriate UBn or LBn signal LOW. For reads, all the UB and LB signals must be asserted LOW so that the bus is driven. In this case the byte lane state (PB) bit must be HIGH.
        enum class PbVal {
            blshigh=0x00000000,     ///<For reads all the bits in BLS3:0 are HIGH. For writes the respective active bits in BLS3:0 are LOW (POR reset value).
            blslow=0x00000001,     ///<For reads the respective active bits in BLS3:0 are LOW. For writes the respective active bits in BLS3:0 are LOW.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PbVal> pb{}; 
        namespace PbValC{
            constexpr Register::FieldValue<decltype(pb),PbVal::blshigh> blshigh{};
            constexpr Register::FieldValue<decltype(pb),PbVal::blslow> blslow{};
        }
        ///Extended wait (EW) uses the EMCStaticExtendedWait register to time both the read and write transfers rather than the EMCStaticWaitRd and EMCStaticWaitWr registers. This enables much longer transactions. [1]
        enum class EwVal {
            extendedWaitDisabl=0x00000000,     ///<Extended wait disabled (POR reset value).
            extendedWaitEnable=0x00000001,     ///<Extended wait enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EwVal> ew{}; 
        namespace EwValC{
            constexpr Register::FieldValue<decltype(ew),EwVal::extendedWaitDisabl> extendedWaitDisabl{};
            constexpr Register::FieldValue<decltype(ew),EwVal::extendedWaitEnable> extendedWaitEnable{};
        }
        ///Buffer enable [2]
        enum class BVal {
            bufferDisabledPor=0x00000000,     ///<Buffer disabled (POR reset value).
            bufferEnabled=0x00000001,     ///<Buffer enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b),BVal::bufferDisabledPor> bufferDisabledPor{};
            constexpr Register::FieldValue<decltype(b),BVal::bufferEnabled> bufferEnabled{};
        }
        ///Write protect
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writeProtected=0x00000001,     ///<Write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p),PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p),PVal::writeProtected> writeProtected{};
        }
    }
    namespace Nonestaticwaitwen0{    ///<Delay from EMC_CS0 to write enable.
        using Addr = Register::Address<0x2009c204,0xfffffff0,0,unsigned>;
        ///Wait write enable. Delay from chip select assertion to write enable. 0x0 = One CCLK cycle delay between assertion of chip select and write enable (POR reset value). 0x1 - 0xF = (n + 1) CCLK cycle delay. The delay is (WAITWEN +1) x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitwen{}; 
        namespace WaitwenValC{
        }
    }
    namespace Nonestaticwaitwen1{    ///<Delay from EMC_CS0 to write enable.
        using Addr = Register::Address<0x2009c224,0xfffffff0,0,unsigned>;
        ///Wait write enable. Delay from chip select assertion to write enable. 0x0 = One CCLK cycle delay between assertion of chip select and write enable (POR reset value). 0x1 - 0xF = (n + 1) CCLK cycle delay. The delay is (WAITWEN +1) x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitwen{}; 
        namespace WaitwenValC{
        }
    }
    namespace Nonestaticwaitwen2{    ///<Delay from EMC_CS0 to write enable.
        using Addr = Register::Address<0x2009c244,0xfffffff0,0,unsigned>;
        ///Wait write enable. Delay from chip select assertion to write enable. 0x0 = One CCLK cycle delay between assertion of chip select and write enable (POR reset value). 0x1 - 0xF = (n + 1) CCLK cycle delay. The delay is (WAITWEN +1) x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitwen{}; 
        namespace WaitwenValC{
        }
    }
    namespace Nonestaticwaitwen3{    ///<Delay from EMC_CS0 to write enable.
        using Addr = Register::Address<0x2009c264,0xfffffff0,0,unsigned>;
        ///Wait write enable. Delay from chip select assertion to write enable. 0x0 = One CCLK cycle delay between assertion of chip select and write enable (POR reset value). 0x1 - 0xF = (n + 1) CCLK cycle delay. The delay is (WAITWEN +1) x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitwen{}; 
        namespace WaitwenValC{
        }
    }
    namespace Nonestaticwaitoen0{    ///<Delay from EMC_CS0 or address change, whichever is later, to output enable.
        using Addr = Register::Address<0x2009c208,0xfffffff0,0,unsigned>;
        ///Wait output enable. Delay from chip select assertion to output enable. 0x0 = No delay (POR reset value). 0x1 - 0xF = n cycle delay. The delay is WAITOEN x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitoen{}; 
        namespace WaitoenValC{
        }
    }
    namespace Nonestaticwaitoen1{    ///<Delay from EMC_CS0 or address change, whichever is later, to output enable.
        using Addr = Register::Address<0x2009c228,0xfffffff0,0,unsigned>;
        ///Wait output enable. Delay from chip select assertion to output enable. 0x0 = No delay (POR reset value). 0x1 - 0xF = n cycle delay. The delay is WAITOEN x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitoen{}; 
        namespace WaitoenValC{
        }
    }
    namespace Nonestaticwaitoen2{    ///<Delay from EMC_CS0 or address change, whichever is later, to output enable.
        using Addr = Register::Address<0x2009c248,0xfffffff0,0,unsigned>;
        ///Wait output enable. Delay from chip select assertion to output enable. 0x0 = No delay (POR reset value). 0x1 - 0xF = n cycle delay. The delay is WAITOEN x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitoen{}; 
        namespace WaitoenValC{
        }
    }
    namespace Nonestaticwaitoen3{    ///<Delay from EMC_CS0 or address change, whichever is later, to output enable.
        using Addr = Register::Address<0x2009c268,0xfffffff0,0,unsigned>;
        ///Wait output enable. Delay from chip select assertion to output enable. 0x0 = No delay (POR reset value). 0x1 - 0xF = n cycle delay. The delay is WAITOEN x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitoen{}; 
        namespace WaitoenValC{
        }
    }
    namespace Nonestaticwaitrd0{    ///<Delay from EMC_CS0 to a read access.
        using Addr = Register::Address<0x2009c20c,0xffffffe0,0,unsigned>;
        ///Non-page mode read wait states or asynchronous page mode read first access wait state. Non-page mode read or asynchronous page mode read, first read only: 0x0 - 0x1E = (n + 1) CCLK cycles for read accesses. For non-sequential reads, the wait state time is (WAITRD + 1) x tCCLK. 0x1F = 32 CCLK cycles for read accesses (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitrd{}; 
        namespace WaitrdValC{
        }
    }
    namespace Nonestaticwaitrd1{    ///<Delay from EMC_CS0 to a read access.
        using Addr = Register::Address<0x2009c22c,0xffffffe0,0,unsigned>;
        ///Non-page mode read wait states or asynchronous page mode read first access wait state. Non-page mode read or asynchronous page mode read, first read only: 0x0 - 0x1E = (n + 1) CCLK cycles for read accesses. For non-sequential reads, the wait state time is (WAITRD + 1) x tCCLK. 0x1F = 32 CCLK cycles for read accesses (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitrd{}; 
        namespace WaitrdValC{
        }
    }
    namespace Nonestaticwaitrd2{    ///<Delay from EMC_CS0 to a read access.
        using Addr = Register::Address<0x2009c24c,0xffffffe0,0,unsigned>;
        ///Non-page mode read wait states or asynchronous page mode read first access wait state. Non-page mode read or asynchronous page mode read, first read only: 0x0 - 0x1E = (n + 1) CCLK cycles for read accesses. For non-sequential reads, the wait state time is (WAITRD + 1) x tCCLK. 0x1F = 32 CCLK cycles for read accesses (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitrd{}; 
        namespace WaitrdValC{
        }
    }
    namespace Nonestaticwaitrd3{    ///<Delay from EMC_CS0 to a read access.
        using Addr = Register::Address<0x2009c26c,0xffffffe0,0,unsigned>;
        ///Non-page mode read wait states or asynchronous page mode read first access wait state. Non-page mode read or asynchronous page mode read, first read only: 0x0 - 0x1E = (n + 1) CCLK cycles for read accesses. For non-sequential reads, the wait state time is (WAITRD + 1) x tCCLK. 0x1F = 32 CCLK cycles for read accesses (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitrd{}; 
        namespace WaitrdValC{
        }
    }
    namespace Nonestaticwaitpage0{    ///<Delay for asynchronous page mode sequential accesses for EMC_CS0.
        using Addr = Register::Address<0x2009c210,0xffffffe0,0,unsigned>;
        ///Asynchronous page mode read after the first read wait states. Number of wait states for asynchronous page mode read accesses after the first read: 0x0 - 0x1E = (n+ 1) CCLK cycle read access time. For asynchronous page mode read for sequential reads, the wait state time for page mode accesses after the first read is (WAITPAGE + 1) x tCCLK. 0x1F = 32 CCLK cycle read access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitpage{}; 
        namespace WaitpageValC{
        }
    }
    namespace Nonestaticwaitpage1{    ///<Delay for asynchronous page mode sequential accesses for EMC_CS0.
        using Addr = Register::Address<0x2009c230,0xffffffe0,0,unsigned>;
        ///Asynchronous page mode read after the first read wait states. Number of wait states for asynchronous page mode read accesses after the first read: 0x0 - 0x1E = (n+ 1) CCLK cycle read access time. For asynchronous page mode read for sequential reads, the wait state time for page mode accesses after the first read is (WAITPAGE + 1) x tCCLK. 0x1F = 32 CCLK cycle read access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitpage{}; 
        namespace WaitpageValC{
        }
    }
    namespace Nonestaticwaitpage2{    ///<Delay for asynchronous page mode sequential accesses for EMC_CS0.
        using Addr = Register::Address<0x2009c250,0xffffffe0,0,unsigned>;
        ///Asynchronous page mode read after the first read wait states. Number of wait states for asynchronous page mode read accesses after the first read: 0x0 - 0x1E = (n+ 1) CCLK cycle read access time. For asynchronous page mode read for sequential reads, the wait state time for page mode accesses after the first read is (WAITPAGE + 1) x tCCLK. 0x1F = 32 CCLK cycle read access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitpage{}; 
        namespace WaitpageValC{
        }
    }
    namespace Nonestaticwaitpage3{    ///<Delay for asynchronous page mode sequential accesses for EMC_CS0.
        using Addr = Register::Address<0x2009c270,0xffffffe0,0,unsigned>;
        ///Asynchronous page mode read after the first read wait states. Number of wait states for asynchronous page mode read accesses after the first read: 0x0 - 0x1E = (n+ 1) CCLK cycle read access time. For asynchronous page mode read for sequential reads, the wait state time for page mode accesses after the first read is (WAITPAGE + 1) x tCCLK. 0x1F = 32 CCLK cycle read access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitpage{}; 
        namespace WaitpageValC{
        }
    }
    namespace Nonestaticwaitwr0{    ///<Delay from EMC_CS0 to a write access.
        using Addr = Register::Address<0x2009c214,0xffffffe0,0,unsigned>;
        ///Write wait states. SRAM wait state time for write accesses after the first read: 0x0 - 0x1E = (n + 2) CCLK cycle write access time. The wait state time for write accesses after the first read is WAITWR (n + 2) x tCCLK. 0x1F = 33 CCLK cycle write access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitwr{}; 
        namespace WaitwrValC{
        }
    }
    namespace Nonestaticwaitwr1{    ///<Delay from EMC_CS0 to a write access.
        using Addr = Register::Address<0x2009c234,0xffffffe0,0,unsigned>;
        ///Write wait states. SRAM wait state time for write accesses after the first read: 0x0 - 0x1E = (n + 2) CCLK cycle write access time. The wait state time for write accesses after the first read is WAITWR (n + 2) x tCCLK. 0x1F = 33 CCLK cycle write access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitwr{}; 
        namespace WaitwrValC{
        }
    }
    namespace Nonestaticwaitwr2{    ///<Delay from EMC_CS0 to a write access.
        using Addr = Register::Address<0x2009c254,0xffffffe0,0,unsigned>;
        ///Write wait states. SRAM wait state time for write accesses after the first read: 0x0 - 0x1E = (n + 2) CCLK cycle write access time. The wait state time for write accesses after the first read is WAITWR (n + 2) x tCCLK. 0x1F = 33 CCLK cycle write access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitwr{}; 
        namespace WaitwrValC{
        }
    }
    namespace Nonestaticwaitwr3{    ///<Delay from EMC_CS0 to a write access.
        using Addr = Register::Address<0x2009c274,0xffffffe0,0,unsigned>;
        ///Write wait states. SRAM wait state time for write accesses after the first read: 0x0 - 0x1E = (n + 2) CCLK cycle write access time. The wait state time for write accesses after the first read is WAITWR (n + 2) x tCCLK. 0x1F = 33 CCLK cycle write access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitwr{}; 
        namespace WaitwrValC{
        }
    }
    namespace Nonestaticwaitturn0{    ///<Number of bus turnaround cycles EMC_CS0.
        using Addr = Register::Address<0x2009c218,0xfffffff0,0,unsigned>;
        ///Bus turn-around cycles. 0x0 - 0xE = (n + 1) CCLK turn-around cycles. Bus turn-around time is (WAITTURN + 1) x tCCLK. 0xF = 16 CCLK turn-around cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitturn{}; 
        namespace WaitturnValC{
        }
    }
    namespace Nonestaticwaitturn1{    ///<Number of bus turnaround cycles EMC_CS0.
        using Addr = Register::Address<0x2009c238,0xfffffff0,0,unsigned>;
        ///Bus turn-around cycles. 0x0 - 0xE = (n + 1) CCLK turn-around cycles. Bus turn-around time is (WAITTURN + 1) x tCCLK. 0xF = 16 CCLK turn-around cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitturn{}; 
        namespace WaitturnValC{
        }
    }
    namespace Nonestaticwaitturn2{    ///<Number of bus turnaround cycles EMC_CS0.
        using Addr = Register::Address<0x2009c258,0xfffffff0,0,unsigned>;
        ///Bus turn-around cycles. 0x0 - 0xE = (n + 1) CCLK turn-around cycles. Bus turn-around time is (WAITTURN + 1) x tCCLK. 0xF = 16 CCLK turn-around cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitturn{}; 
        namespace WaitturnValC{
        }
    }
    namespace Nonestaticwaitturn3{    ///<Number of bus turnaround cycles EMC_CS0.
        using Addr = Register::Address<0x2009c278,0xfffffff0,0,unsigned>;
        ///Bus turn-around cycles. 0x0 - 0xE = (n + 1) CCLK turn-around cycles. Bus turn-around time is (WAITTURN + 1) x tCCLK. 0xF = 16 CCLK turn-around cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitturn{}; 
        namespace WaitturnValC{
        }
    }
}
