#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx External Memory Controller (EMC) Modification date=1/19/2011 Major revision=0 Minor revision=7 
    namespace EmcControl{    ///<Controls operation of the memory controller.
        using Addr = Register::Address<0x40005000,0x00000000,0x00000000,unsigned>;
        ///EMC Enable. Indicates if the EMC is enabled or disabled.Disabling the EMC reduces power consumption. When the memory controller is disabled the memory is not refreshed. The memory controller is enabled by setting the enable bit, or by reset. This bit must only be modified when the EMC is in idle state.[1]
        enum class EVal {
            disabled=0x00000000,     ///<Disabled
            enabledPorAndWar=0x00000001,     ///<Enabled (POR and warm reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EVal> e{}; 
        namespace EValC{
            constexpr Register::FieldValue<decltype(e)::Type,EVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(e)::Type,EVal::enabledPorAndWar> enabledPorAndWar{};
        }
        ///Address mirror. Indicates normal or reset memory map. On POR, CS1 is mirrored to both CS0 and DYCS0 memory areas. Clearing the M bit enables CS0 and DYCS0 memory to be accessed.
        enum class MVal {
            normalMemoryMap=0x00000000,     ///<Normal memory map.
            resetMemoryMapSt=0x00000001,     ///<Reset memory map. Static memory CS1 is mirrored onto CS0 and DYCS0 (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,MVal> m{}; 
        namespace MValC{
            constexpr Register::FieldValue<decltype(m)::Type,MVal::normalMemoryMap> normalMemoryMap{};
            constexpr Register::FieldValue<decltype(m)::Type,MVal::resetMemoryMapSt> resetMemoryMapSt{};
        }
        ///Low-power mode. Indicates normal, or low-power mode. Entering low-power mode reduces memory controller power consumption. Dynamic memory is refreshed as necessary. The memory controller returns to normal functional mode by clearing the low-power mode bit (L), or by POR. This bit must only be modified when the EMC is in idle state.[1]
        enum class LVal {
            normalModeWarmRe=0x00000000,     ///<Normal mode (warm reset value).
            lowPowerMode=0x00000001,     ///<Low-power mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,LVal> l{}; 
        namespace LValC{
            constexpr Register::FieldValue<decltype(l)::Type,LVal::normalModeWarmRe> normalModeWarmRe{};
            constexpr Register::FieldValue<decltype(l)::Type,LVal::lowPowerMode> lowPowerMode{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStatus{    ///<Provides EMC status information.
        using Addr = Register::Address<0x40005004,0x00000000,0x00000000,unsigned>;
        ///Busy. This bit is used to ensure that the memory controller enters the low-power or disabled mode cleanly by determining if the memory controller is busy or not:
        enum class BVal {
            emcIsIdleWarmRe=0x00000000,     ///<EMC is idle (warm reset value).
            emcIsBusyPerformi=0x00000001,     ///<EMC is busy performing memory transactions, commands, auto-refresh cycles, or is in self-refresh mode (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b)::Type,BVal::emcIsIdleWarmRe> emcIsIdleWarmRe{};
            constexpr Register::FieldValue<decltype(b)::Type,BVal::emcIsBusyPerformi> emcIsBusyPerformi{};
        }
        ///Write buffer status. This bit enables the EMC to enter low-power mode or disabled mode cleanly:
        enum class SVal {
            writeBuffersEmpty=0x00000000,     ///<Write buffers empty (POR reset value)
            writeBuffersContai=0x00000001,     ///<Write buffers contain data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SVal> s{}; 
        namespace SValC{
            constexpr Register::FieldValue<decltype(s)::Type,SVal::writeBuffersEmpty> writeBuffersEmpty{};
            constexpr Register::FieldValue<decltype(s)::Type,SVal::writeBuffersContai> writeBuffersContai{};
        }
        ///Self-refresh acknowledge. This bit indicates the operating mode of the EMC:
        enum class SaVal {
            normalMode=0x00000000,     ///<Normal mode
            selfRefreshModeP=0x00000001,     ///<Self-refresh mode (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SaVal> sa{}; 
        namespace SaValC{
            constexpr Register::FieldValue<decltype(sa)::Type,SaVal::normalMode> normalMode{};
            constexpr Register::FieldValue<decltype(sa)::Type,SaVal::selfRefreshModeP> selfRefreshModeP{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcConfig{    ///<Configures operation of the memory controller.
        using Addr = Register::Address<0x40005008,0x00000000,0x00000000,unsigned>;
        ///Endian mode.
        enum class EmVal {
            littleEndianMode=0x00000000,     ///<Little-endian mode (POR reset value).
            bigEndianMode=0x00000001,     ///<Big-endian mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EmVal> em{}; 
        namespace EmValC{
            constexpr Register::FieldValue<decltype(em)::Type,EmVal::littleEndianMode> littleEndianMode{};
            constexpr Register::FieldValue<decltype(em)::Type,EmVal::bigEndianMode> bigEndianMode{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Clock Ratio. CCLK: CLKOUT[1:0] ratio:
        enum class CrVal {
            v1to1PorResetValue=0x00000000,     ///<1:1 (POR reset value)
            v1to2=0x00000001,     ///<1:2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CrVal> cr{}; 
        namespace CrValC{
            constexpr Register::FieldValue<decltype(cr)::Type,CrVal::v1to1PorResetValue> v1to1PorResetValue{};
            constexpr Register::FieldValue<decltype(cr)::Type,CrVal::v1to2> v1to2{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamiccontrol{    ///<Controls dynamic memory operation.
        using Addr = Register::Address<0x40005020,0x00000000,0x00000000,unsigned>;
        ///Dynamic memory clock enable.
        enum class CeVal {
            clockEnableOfIdle=0x00000000,     ///<Clock enable of idle devices are deasserted to save power (POR reset value).
            allClockEnablesAr=0x00000001,     ///<All clock enables are driven HIGH continuously.[1]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CeVal> ce{}; 
        namespace CeValC{
            constexpr Register::FieldValue<decltype(ce)::Type,CeVal::clockEnableOfIdle> clockEnableOfIdle{};
            constexpr Register::FieldValue<decltype(ce)::Type,CeVal::allClockEnablesAr> allClockEnablesAr{};
        }
        ///Dynamic memory clock control. When clock control is LOW the output clock CLKOUT is stopped when there are no SDRAM transactions. The clock is also stopped during self-refresh mode.
        enum class CsVal {
            clkoutStopsWhenAl=0x00000000,     ///<CLKOUT stops when all SDRAMs are idle and during self-refresh mode.
            clkoutRunsContinuo=0x00000001,     ///<CLKOUT runs continuously (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CsVal> cs{}; 
        namespace CsValC{
            constexpr Register::FieldValue<decltype(cs)::Type,CsVal::clkoutStopsWhenAl> clkoutStopsWhenAl{};
            constexpr Register::FieldValue<decltype(cs)::Type,CsVal::clkoutRunsContinuo> clkoutRunsContinuo{};
        }
        ///Self-refresh request, EMCSREFREQ. By writing 1 to this bit self-refresh can be entered under software control. Writing 0 to this bit returns the EMC to normal mode. The self-refresh acknowledge bit in the Status register must be polled to discover the current operating mode of the EMC.[2]
        enum class SrVal {
            normalMode=0x00000000,     ///<Normal mode.
            enterSelfRefreshM=0x00000001,     ///<Enter self-refresh mode (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SrVal> sr{}; 
        namespace SrValC{
            constexpr Register::FieldValue<decltype(sr)::Type,SrVal::normalMode> normalMode{};
            constexpr Register::FieldValue<decltype(sr)::Type,SrVal::enterSelfRefreshM> enterSelfRefreshM{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Memory clock control.
        enum class MmcVal {
            clkoutEnabledPor=0x00000000,     ///<CLKOUT enabled (POR reset value).
            clkoutDisabled3=0x00000001,     ///<CLKOUT disabled.[3]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MmcVal> mmc{}; 
        namespace MmcValC{
            constexpr Register::FieldValue<decltype(mmc)::Type,MmcVal::clkoutEnabledPor> clkoutEnabledPor{};
            constexpr Register::FieldValue<decltype(mmc)::Type,MmcVal::clkoutDisabled3> clkoutDisabled3{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///SDRAM initialization.
        enum class IVal {
            issueSdramNormalO=0x00000000,     ///<Issue SDRAM NORMAL operation command (POR reset value).
            issueSdramModeCom=0x00000001,     ///<Issue SDRAM MODE command.
            issueSdramPallPr=0x00000002,     ///<Issue SDRAM PALL (precharge all) command.
            issueSdramNopNo=0x00000003,     ///<Issue SDRAM NOP (no operation) command)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,IVal> i{}; 
        namespace IValC{
            constexpr Register::FieldValue<decltype(i)::Type,IVal::issueSdramNormalO> issueSdramNormalO{};
            constexpr Register::FieldValue<decltype(i)::Type,IVal::issueSdramModeCom> issueSdramModeCom{};
            constexpr Register::FieldValue<decltype(i)::Type,IVal::issueSdramPallPr> issueSdramPallPr{};
            constexpr Register::FieldValue<decltype(i)::Type,IVal::issueSdramNopNo> issueSdramNopNo{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Low-power SDRAM deep-sleep mode.
        enum class DpVal {
            normalOperationPo=0x00000000,     ///<Normal operation (POR reset value).
            enterDeepSleepMod=0x00000001,     ///<Enter Deep-sleep mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,DpVal> dp{}; 
        namespace DpValC{
            constexpr Register::FieldValue<decltype(dp)::Type,DpVal::normalOperationPo> normalOperationPo{};
            constexpr Register::FieldValue<decltype(dp)::Type,DpVal::enterDeepSleepMod> enterDeepSleepMod{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicrefresh{    ///<Configures dynamic memory refresh operation.
        using Addr = Register::Address<0x40005024,0x00000000,0x00000000,unsigned>;
        ///Refresh timer. Indicates the multiple of 16 CCLKs between SDRAM refresh cycles. 0x0 = Refresh disabled (POR reset value). 0x1 - 0x7FF = n x16 = 16n CCLKs between SDRAM refresh cycles. For example: 0x1 = 1 x 16 = 16 CCLKs between SDRAM refresh cycles. 0x8 = 8 x 16 = 128 CCLKs between SDRAM refresh cycles
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> refresh{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicreadconfig{    ///<Configures the dynamic memory read strategy.
        using Addr = Register::Address<0x40005028,0x00000000,0x00000000,unsigned>;
        ///Read data strategy.
        enum class RdVal {
            clockOutDelayedSt=0x00000000,     ///<Clock out delayed strategy, using CLKOUT (command not delayed, clock out delayed). POR reset value.
            commandDelayed=0x00000001,     ///<Command delayed strategy, using CCLKDELAY (command delayed, clock out not delayed).
            commandDelayedPlus1=0x00000002,     ///<Command delayed strategy plus one clock cycle, using CCLKDELAY (command delayed, clock out not delayed).
            commandDelayedPlus2=0x00000003,     ///<Command delayed strategy plus two clock cycles, using CCLKDELAY (command delayed, clock out not delayed).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RdVal> rd{}; 
        namespace RdValC{
            constexpr Register::FieldValue<decltype(rd)::Type,RdVal::clockOutDelayedSt> clockOutDelayedSt{};
            constexpr Register::FieldValue<decltype(rd)::Type,RdVal::commandDelayed> commandDelayed{};
            constexpr Register::FieldValue<decltype(rd)::Type,RdVal::commandDelayedPlus1> commandDelayedPlus1{};
            constexpr Register::FieldValue<decltype(rd)::Type,RdVal::commandDelayedPlus2> commandDelayedPlus2{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicrp{    ///<Selects the precharge command period.
        using Addr = Register::Address<0x40005030,0x00000000,0x00000000,unsigned>;
        ///Precharge command period. 0x0 - 0xE = n + 1 clock cycles. The delay is in CCLK cycles. 0xF = 16 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> trp{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicras{    ///<Selects the active to precharge command period.
        using Addr = Register::Address<0x40005034,0x00000000,0x00000000,unsigned>;
        ///Active to precharge command period. 0x0 - 0xE = n + 1 clock cycles. The delay is in CCLK cycles. 0xF = 16 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tras{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicsrex{    ///<Selects the self-refresh exit time.
        using Addr = Register::Address<0x40005038,0x00000000,0x00000000,unsigned>;
        ///Self-refresh exit time . 0x0 - 0xE = n + 1 clock cycles. The delay is in CCLK cycles. 0xF = 16 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tsrex{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicapr{    ///<Selects the last-data-out to active command time.
        using Addr = Register::Address<0x4000503c,0x00000000,0x00000000,unsigned>;
        ///Last-data-out to active command time. 0x0 - 0xE = n + 1 clock cycles. The delay is in CCLK cycles. 0xF = 16 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tapr{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicdal{    ///<Selects the data-in to active command time.
        using Addr = Register::Address<0x40005040,0x00000000,0x00000000,unsigned>;
        ///Data-in to active command. 0x0 - 0xE = n clock cycles. The delay is in CCLK cycles. 0xF = 15 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tdal{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicwr{    ///<Selects the write recovery time.
        using Addr = Register::Address<0x40005044,0x00000000,0x00000000,unsigned>;
        ///Write recovery time. 0x0 - 0xE = n + 1 clock cycles. The delay is in CCLK cycles. 0xF = 16 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> twr{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicrc{    ///<Selects the active to active command period.
        using Addr = Register::Address<0x40005048,0x00000000,0x00000000,unsigned>;
        ///Active to active command period. 0x0 - 0x1E = n + 1 clock cycles. The delay is in CCLK cycles. 0x1F = 32 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trc{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicrfc{    ///<Selects the auto-refresh period.
        using Addr = Register::Address<0x4000504c,0x00000000,0x00000000,unsigned>;
        ///Auto-refresh period and auto-refresh to active command period. 0x0 - 0x1E = n + 1 clock cycles. The delay is in CCLK cycles. 0x1F = 32 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trfc{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicxsr{    ///<Selects the exit self-refresh to active command time.
        using Addr = Register::Address<0x40005050,0x00000000,0x00000000,unsigned>;
        ///Exit self-refresh to active command time. 0x0 - 0x1E = n + 1 clock cycles. The delay is in CCLK cycles. 0x1F = 32 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> txsr{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicrrd{    ///<Selects the active bank A to active bank B latency.
        using Addr = Register::Address<0x40005054,0x00000000,0x00000000,unsigned>;
        ///Active bank A to active bank B latency 0x0 - 0xE = n + 1 clock cycles. The delay is in CCLK cycles. 0xF = 16 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> trrd{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicmrd{    ///<Selects the load mode register to active command time.
        using Addr = Register::Address<0x40005058,0x00000000,0x00000000,unsigned>;
        ///Load mode register to active command time. 0x0 - 0xE = n + 1 clock cycles. The delay is in CCLK cycles. 0xF = 16 clock cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tmrd{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticextendedwait{    ///<Selects time for long static memory read and write transfers.
        using Addr = Register::Address<0x40005080,0x00000000,0x00000000,unsigned>;
        ///Extended wait time out. 16 clock cycles (POR reset value). The delay is in CCLK cycles. 0x0 = 16 clock cycles. 0x1 - 0x3FF = (n+1) x16 clock cycles.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> extendedwait{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicconfig0{    ///<Selects the configuration information for dynamic memory chip select n.
        using Addr = Register::Address<0x40005100,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Memory device.
        enum class MdVal {
            sdramPorResetVal=0x00000000,     ///<SDRAM (POR reset value).
            lowPowerSdram=0x00000001,     ///<Low-power SDRAM.
            micronSyncflash=0x00000002,     ///<Micron SyncFlash.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,MdVal> md{}; 
        namespace MdValC{
            constexpr Register::FieldValue<decltype(md)::Type,MdVal::sdramPorResetVal> sdramPorResetVal{};
            constexpr Register::FieldValue<decltype(md)::Type,MdVal::lowPowerSdram> lowPowerSdram{};
            constexpr Register::FieldValue<decltype(md)::Type,MdVal::micronSyncflash> micronSyncflash{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Address mapping. See Table 197. 000000 = reset value.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> am0{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Address mapping See Table 197. 0 = reset value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> am1{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,15),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Buffer enable.
        enum class BVal {
            bufferDisabledFor=0x00000000,     ///<Buffer disabled for accesses to this chip select (POR reset value).
            bufferEnabledForA=0x00000001,     ///<Buffer enabled for accesses to this chip select. After configuration of the dynamic memory, the buffer must be enabled for normal operation.  [2]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferDisabledFor> bufferDisabledFor{};
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferEnabledForA> bufferEnabledForA{};
        }
        ///Write protect.
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writesProtected=0x00000001,     ///<Writes protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writesProtected> writesProtected{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicconfig1{    ///<Selects the configuration information for dynamic memory chip select n.
        using Addr = Register::Address<0x40005120,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Memory device.
        enum class MdVal {
            sdramPorResetVal=0x00000000,     ///<SDRAM (POR reset value).
            lowPowerSdram=0x00000001,     ///<Low-power SDRAM.
            micronSyncflash=0x00000002,     ///<Micron SyncFlash.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,MdVal> md{}; 
        namespace MdValC{
            constexpr Register::FieldValue<decltype(md)::Type,MdVal::sdramPorResetVal> sdramPorResetVal{};
            constexpr Register::FieldValue<decltype(md)::Type,MdVal::lowPowerSdram> lowPowerSdram{};
            constexpr Register::FieldValue<decltype(md)::Type,MdVal::micronSyncflash> micronSyncflash{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Address mapping. See Table 197. 000000 = reset value.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> am0{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Address mapping See Table 197. 0 = reset value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> am1{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,15),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Buffer enable.
        enum class BVal {
            bufferDisabledFor=0x00000000,     ///<Buffer disabled for accesses to this chip select (POR reset value).
            bufferEnabledForA=0x00000001,     ///<Buffer enabled for accesses to this chip select. After configuration of the dynamic memory, the buffer must be enabled for normal operation.  [2]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferDisabledFor> bufferDisabledFor{};
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferEnabledForA> bufferEnabledForA{};
        }
        ///Write protect.
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writesProtected=0x00000001,     ///<Writes protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writesProtected> writesProtected{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicconfig2{    ///<Selects the configuration information for dynamic memory chip select n.
        using Addr = Register::Address<0x40005140,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Memory device.
        enum class MdVal {
            sdramPorResetVal=0x00000000,     ///<SDRAM (POR reset value).
            lowPowerSdram=0x00000001,     ///<Low-power SDRAM.
            micronSyncflash=0x00000002,     ///<Micron SyncFlash.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,MdVal> md{}; 
        namespace MdValC{
            constexpr Register::FieldValue<decltype(md)::Type,MdVal::sdramPorResetVal> sdramPorResetVal{};
            constexpr Register::FieldValue<decltype(md)::Type,MdVal::lowPowerSdram> lowPowerSdram{};
            constexpr Register::FieldValue<decltype(md)::Type,MdVal::micronSyncflash> micronSyncflash{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Address mapping. See Table 197. 000000 = reset value.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> am0{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Address mapping See Table 197. 0 = reset value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> am1{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,15),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Buffer enable.
        enum class BVal {
            bufferDisabledFor=0x00000000,     ///<Buffer disabled for accesses to this chip select (POR reset value).
            bufferEnabledForA=0x00000001,     ///<Buffer enabled for accesses to this chip select. After configuration of the dynamic memory, the buffer must be enabled for normal operation.  [2]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferDisabledFor> bufferDisabledFor{};
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferEnabledForA> bufferEnabledForA{};
        }
        ///Write protect.
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writesProtected=0x00000001,     ///<Writes protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writesProtected> writesProtected{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicconfig3{    ///<Selects the configuration information for dynamic memory chip select n.
        using Addr = Register::Address<0x40005160,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Memory device.
        enum class MdVal {
            sdramPorResetVal=0x00000000,     ///<SDRAM (POR reset value).
            lowPowerSdram=0x00000001,     ///<Low-power SDRAM.
            micronSyncflash=0x00000002,     ///<Micron SyncFlash.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,MdVal> md{}; 
        namespace MdValC{
            constexpr Register::FieldValue<decltype(md)::Type,MdVal::sdramPorResetVal> sdramPorResetVal{};
            constexpr Register::FieldValue<decltype(md)::Type,MdVal::lowPowerSdram> lowPowerSdram{};
            constexpr Register::FieldValue<decltype(md)::Type,MdVal::micronSyncflash> micronSyncflash{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Address mapping. See Table 197. 000000 = reset value.[1]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,7),Register::ReadWriteAccess,unsigned> am0{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Address mapping See Table 197. 0 = reset value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> am1{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,15),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Buffer enable.
        enum class BVal {
            bufferDisabledFor=0x00000000,     ///<Buffer disabled for accesses to this chip select (POR reset value).
            bufferEnabledForA=0x00000001,     ///<Buffer enabled for accesses to this chip select. After configuration of the dynamic memory, the buffer must be enabled for normal operation.  [2]
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferDisabledFor> bufferDisabledFor{};
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferEnabledForA> bufferEnabledForA{};
        }
        ///Write protect.
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writesProtected=0x00000001,     ///<Writes protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writesProtected> writesProtected{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicrascas0{    ///<Selects the RAS and CAS latencies for dynamic memory chip select n.
        using Addr = Register::Address<0x40005104,0x00000000,0x00000000,unsigned>;
        ///RAS latency (active to read/write delay).
        enum class RasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RasVal> ras{}; 
        namespace RasValC{
            constexpr Register::FieldValue<decltype(ras)::Type,RasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(ras)::Type,RasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(ras)::Type,RasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///CAS latency.
        enum class CasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,CasVal> cas{}; 
        namespace CasValC{
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicrascas1{    ///<Selects the RAS and CAS latencies for dynamic memory chip select n.
        using Addr = Register::Address<0x40005124,0x00000000,0x00000000,unsigned>;
        ///RAS latency (active to read/write delay).
        enum class RasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RasVal> ras{}; 
        namespace RasValC{
            constexpr Register::FieldValue<decltype(ras)::Type,RasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(ras)::Type,RasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(ras)::Type,RasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///CAS latency.
        enum class CasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,CasVal> cas{}; 
        namespace CasValC{
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicrascas2{    ///<Selects the RAS and CAS latencies for dynamic memory chip select n.
        using Addr = Register::Address<0x40005144,0x00000000,0x00000000,unsigned>;
        ///RAS latency (active to read/write delay).
        enum class RasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RasVal> ras{}; 
        namespace RasValC{
            constexpr Register::FieldValue<decltype(ras)::Type,RasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(ras)::Type,RasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(ras)::Type,RasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///CAS latency.
        enum class CasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,CasVal> cas{}; 
        namespace CasValC{
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcDynamicrascas3{    ///<Selects the RAS and CAS latencies for dynamic memory chip select n.
        using Addr = Register::Address<0x40005164,0x00000000,0x00000000,unsigned>;
        ///RAS latency (active to read/write delay).
        enum class RasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RasVal> ras{}; 
        namespace RasValC{
            constexpr Register::FieldValue<decltype(ras)::Type,RasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(ras)::Type,RasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(ras)::Type,RasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///CAS latency.
        enum class CasVal {
            oneCclkCycle=0x00000001,     ///<One CCLK cycle.
            twoCclkCycles=0x00000002,     ///<Two CCLK cycles.
            threeCclkCyclesP=0x00000003,     ///<Three CCLK cycles (POR reset value).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,CasVal> cas{}; 
        namespace CasValC{
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::oneCclkCycle> oneCclkCycle{};
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::twoCclkCycles> twoCclkCycles{};
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::threeCclkCyclesP> threeCclkCyclesP{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticconfig0{    ///<Selects the memory configuration for static chip select n.
        using Addr = Register::Address<0x40005200,0x00000000,0x00000000,unsigned>;
        ///Memory width.
        enum class MwVal {
            v8BitPorResetVal=0x00000000,     ///<8 bit (POR reset value).
            v16Bit=0x00000001,     ///<16 bit.
            v32Bit=0x00000002,     ///<32 bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MwVal> mw{}; 
        namespace MwValC{
            constexpr Register::FieldValue<decltype(mw)::Type,MwVal::v8BitPorResetVal> v8BitPorResetVal{};
            constexpr Register::FieldValue<decltype(mw)::Type,MwVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(mw)::Type,MwVal::v32Bit> v32Bit{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Page mode. In page mode the EMC can burst up to four external accesses. Therefore devices with asynchronous page mode burst four or higher devices are supported. Asynchronous page mode burst two devices are not supported and must be accessed normally.
        enum class PmVal {
            disabledPorReset=0x00000000,     ///<Disabled (POR reset value).
            asyncPageModeEnab=0x00000001,     ///<Async page mode enabled (page length four).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PmVal> pm{}; 
        namespace PmValC{
            constexpr Register::FieldValue<decltype(pm)::Type,PmVal::disabledPorReset> disabledPorReset{};
            constexpr Register::FieldValue<decltype(pm)::Type,PmVal::asyncPageModeEnab> asyncPageModeEnab{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Chip select polarity. The value of the chip select polarity on power-on reset is 0.
        enum class PcVal {
            activeLowChipSele=0x00000000,     ///<Active LOW chip select.
            activeHighChipSel=0x00000001,     ///<Active HIGH chip select.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PcVal> pc{}; 
        namespace PcValC{
            constexpr Register::FieldValue<decltype(pc)::Type,PcVal::activeLowChipSele> activeLowChipSele{};
            constexpr Register::FieldValue<decltype(pc)::Type,PcVal::activeHighChipSel> activeHighChipSel{};
        }
        ///Byte lane state. The byte lane state bit, PB, enables different types of memory to be connected. For byte-wide static memories the BLSn[3:0] signal from the EMC is usually connected to WE (write enable). In this case for reads all the BLSn[3:0] bits must be HIGH. This means that the byte lane state (PB) bit must be LOW. 16 bit wide static memory devices usually have the BLSn[3:0] signals connected to the UBn and LBn (upper byte and lower byte) signals in the static memory. In this case a write to a particular byte must assert the appropriate UBn or LBn signal LOW. For reads, all the UB and LB signals must be asserted LOW so that the bus is driven. In this case the byte lane state (PB) bit must be HIGH. When PB is set to 0, the WE signal is undefined or 0. You must set PB to 1, to use the WE signal.
        enum class PbVal {
            high=0x00000000,     ///<For reads all the bits in BLSn[3:0] are HIGH. For writes the respective active bits in BLSn[3:0] are LOW (POR reset value).
            low=0x00000001,     ///<For reads the respective active bits in BLSn[3:0] are LOW. For writes the respective active bits in BLSn[3:0] are LOW.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PbVal> pb{}; 
        namespace PbValC{
            constexpr Register::FieldValue<decltype(pb)::Type,PbVal::high> high{};
            constexpr Register::FieldValue<decltype(pb)::Type,PbVal::low> low{};
        }
        ///Extended wait. Extended wait (EW) uses the StaticExtendedWait register to time both the read and write transfers rather than the StaticWaitRd and StaticWaitWr registers. This enables much longer transactions.[1]
        enum class EwVal {
            extendedWaitDisabl=0x00000000,     ///<Extended wait disabled (POR reset value).
            extendedWaitEnable=0x00000001,     ///<Extended wait enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EwVal> ew{}; 
        namespace EwValC{
            constexpr Register::FieldValue<decltype(ew)::Type,EwVal::extendedWaitDisabl> extendedWaitDisabl{};
            constexpr Register::FieldValue<decltype(ew)::Type,EwVal::extendedWaitEnable> extendedWaitEnable{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Buffer enable[2].
        enum class BVal {
            bufferDisabledPor=0x00000000,     ///<Buffer disabled (POR reset value).
            bufferEnabled=0x00000001,     ///<Buffer enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferDisabledPor> bufferDisabledPor{};
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferEnabled> bufferEnabled{};
        }
        ///Write protect.
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writeProtected=0x00000001,     ///<Write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writeProtected> writeProtected{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticconfig1{    ///<Selects the memory configuration for static chip select n.
        using Addr = Register::Address<0x40005220,0x00000000,0x00000000,unsigned>;
        ///Memory width.
        enum class MwVal {
            v8BitPorResetVal=0x00000000,     ///<8 bit (POR reset value).
            v16Bit=0x00000001,     ///<16 bit.
            v32Bit=0x00000002,     ///<32 bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MwVal> mw{}; 
        namespace MwValC{
            constexpr Register::FieldValue<decltype(mw)::Type,MwVal::v8BitPorResetVal> v8BitPorResetVal{};
            constexpr Register::FieldValue<decltype(mw)::Type,MwVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(mw)::Type,MwVal::v32Bit> v32Bit{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Page mode. In page mode the EMC can burst up to four external accesses. Therefore devices with asynchronous page mode burst four or higher devices are supported. Asynchronous page mode burst two devices are not supported and must be accessed normally.
        enum class PmVal {
            disabledPorReset=0x00000000,     ///<Disabled (POR reset value).
            asyncPageModeEnab=0x00000001,     ///<Async page mode enabled (page length four).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PmVal> pm{}; 
        namespace PmValC{
            constexpr Register::FieldValue<decltype(pm)::Type,PmVal::disabledPorReset> disabledPorReset{};
            constexpr Register::FieldValue<decltype(pm)::Type,PmVal::asyncPageModeEnab> asyncPageModeEnab{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Chip select polarity. The value of the chip select polarity on power-on reset is 0.
        enum class PcVal {
            activeLowChipSele=0x00000000,     ///<Active LOW chip select.
            activeHighChipSel=0x00000001,     ///<Active HIGH chip select.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PcVal> pc{}; 
        namespace PcValC{
            constexpr Register::FieldValue<decltype(pc)::Type,PcVal::activeLowChipSele> activeLowChipSele{};
            constexpr Register::FieldValue<decltype(pc)::Type,PcVal::activeHighChipSel> activeHighChipSel{};
        }
        ///Byte lane state. The byte lane state bit, PB, enables different types of memory to be connected. For byte-wide static memories the BLSn[3:0] signal from the EMC is usually connected to WE (write enable). In this case for reads all the BLSn[3:0] bits must be HIGH. This means that the byte lane state (PB) bit must be LOW. 16 bit wide static memory devices usually have the BLSn[3:0] signals connected to the UBn and LBn (upper byte and lower byte) signals in the static memory. In this case a write to a particular byte must assert the appropriate UBn or LBn signal LOW. For reads, all the UB and LB signals must be asserted LOW so that the bus is driven. In this case the byte lane state (PB) bit must be HIGH. When PB is set to 0, the WE signal is undefined or 0. You must set PB to 1, to use the WE signal.
        enum class PbVal {
            high=0x00000000,     ///<For reads all the bits in BLSn[3:0] are HIGH. For writes the respective active bits in BLSn[3:0] are LOW (POR reset value).
            low=0x00000001,     ///<For reads the respective active bits in BLSn[3:0] are LOW. For writes the respective active bits in BLSn[3:0] are LOW.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PbVal> pb{}; 
        namespace PbValC{
            constexpr Register::FieldValue<decltype(pb)::Type,PbVal::high> high{};
            constexpr Register::FieldValue<decltype(pb)::Type,PbVal::low> low{};
        }
        ///Extended wait. Extended wait (EW) uses the StaticExtendedWait register to time both the read and write transfers rather than the StaticWaitRd and StaticWaitWr registers. This enables much longer transactions.[1]
        enum class EwVal {
            extendedWaitDisabl=0x00000000,     ///<Extended wait disabled (POR reset value).
            extendedWaitEnable=0x00000001,     ///<Extended wait enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EwVal> ew{}; 
        namespace EwValC{
            constexpr Register::FieldValue<decltype(ew)::Type,EwVal::extendedWaitDisabl> extendedWaitDisabl{};
            constexpr Register::FieldValue<decltype(ew)::Type,EwVal::extendedWaitEnable> extendedWaitEnable{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Buffer enable[2].
        enum class BVal {
            bufferDisabledPor=0x00000000,     ///<Buffer disabled (POR reset value).
            bufferEnabled=0x00000001,     ///<Buffer enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferDisabledPor> bufferDisabledPor{};
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferEnabled> bufferEnabled{};
        }
        ///Write protect.
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writeProtected=0x00000001,     ///<Write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writeProtected> writeProtected{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticconfig2{    ///<Selects the memory configuration for static chip select n.
        using Addr = Register::Address<0x40005240,0x00000000,0x00000000,unsigned>;
        ///Memory width.
        enum class MwVal {
            v8BitPorResetVal=0x00000000,     ///<8 bit (POR reset value).
            v16Bit=0x00000001,     ///<16 bit.
            v32Bit=0x00000002,     ///<32 bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MwVal> mw{}; 
        namespace MwValC{
            constexpr Register::FieldValue<decltype(mw)::Type,MwVal::v8BitPorResetVal> v8BitPorResetVal{};
            constexpr Register::FieldValue<decltype(mw)::Type,MwVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(mw)::Type,MwVal::v32Bit> v32Bit{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Page mode. In page mode the EMC can burst up to four external accesses. Therefore devices with asynchronous page mode burst four or higher devices are supported. Asynchronous page mode burst two devices are not supported and must be accessed normally.
        enum class PmVal {
            disabledPorReset=0x00000000,     ///<Disabled (POR reset value).
            asyncPageModeEnab=0x00000001,     ///<Async page mode enabled (page length four).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PmVal> pm{}; 
        namespace PmValC{
            constexpr Register::FieldValue<decltype(pm)::Type,PmVal::disabledPorReset> disabledPorReset{};
            constexpr Register::FieldValue<decltype(pm)::Type,PmVal::asyncPageModeEnab> asyncPageModeEnab{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Chip select polarity. The value of the chip select polarity on power-on reset is 0.
        enum class PcVal {
            activeLowChipSele=0x00000000,     ///<Active LOW chip select.
            activeHighChipSel=0x00000001,     ///<Active HIGH chip select.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PcVal> pc{}; 
        namespace PcValC{
            constexpr Register::FieldValue<decltype(pc)::Type,PcVal::activeLowChipSele> activeLowChipSele{};
            constexpr Register::FieldValue<decltype(pc)::Type,PcVal::activeHighChipSel> activeHighChipSel{};
        }
        ///Byte lane state. The byte lane state bit, PB, enables different types of memory to be connected. For byte-wide static memories the BLSn[3:0] signal from the EMC is usually connected to WE (write enable). In this case for reads all the BLSn[3:0] bits must be HIGH. This means that the byte lane state (PB) bit must be LOW. 16 bit wide static memory devices usually have the BLSn[3:0] signals connected to the UBn and LBn (upper byte and lower byte) signals in the static memory. In this case a write to a particular byte must assert the appropriate UBn or LBn signal LOW. For reads, all the UB and LB signals must be asserted LOW so that the bus is driven. In this case the byte lane state (PB) bit must be HIGH. When PB is set to 0, the WE signal is undefined or 0. You must set PB to 1, to use the WE signal.
        enum class PbVal {
            high=0x00000000,     ///<For reads all the bits in BLSn[3:0] are HIGH. For writes the respective active bits in BLSn[3:0] are LOW (POR reset value).
            low=0x00000001,     ///<For reads the respective active bits in BLSn[3:0] are LOW. For writes the respective active bits in BLSn[3:0] are LOW.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PbVal> pb{}; 
        namespace PbValC{
            constexpr Register::FieldValue<decltype(pb)::Type,PbVal::high> high{};
            constexpr Register::FieldValue<decltype(pb)::Type,PbVal::low> low{};
        }
        ///Extended wait. Extended wait (EW) uses the StaticExtendedWait register to time both the read and write transfers rather than the StaticWaitRd and StaticWaitWr registers. This enables much longer transactions.[1]
        enum class EwVal {
            extendedWaitDisabl=0x00000000,     ///<Extended wait disabled (POR reset value).
            extendedWaitEnable=0x00000001,     ///<Extended wait enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EwVal> ew{}; 
        namespace EwValC{
            constexpr Register::FieldValue<decltype(ew)::Type,EwVal::extendedWaitDisabl> extendedWaitDisabl{};
            constexpr Register::FieldValue<decltype(ew)::Type,EwVal::extendedWaitEnable> extendedWaitEnable{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Buffer enable[2].
        enum class BVal {
            bufferDisabledPor=0x00000000,     ///<Buffer disabled (POR reset value).
            bufferEnabled=0x00000001,     ///<Buffer enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferDisabledPor> bufferDisabledPor{};
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferEnabled> bufferEnabled{};
        }
        ///Write protect.
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writeProtected=0x00000001,     ///<Write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writeProtected> writeProtected{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticconfig3{    ///<Selects the memory configuration for static chip select n.
        using Addr = Register::Address<0x40005260,0x00000000,0x00000000,unsigned>;
        ///Memory width.
        enum class MwVal {
            v8BitPorResetVal=0x00000000,     ///<8 bit (POR reset value).
            v16Bit=0x00000001,     ///<16 bit.
            v32Bit=0x00000002,     ///<32 bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MwVal> mw{}; 
        namespace MwValC{
            constexpr Register::FieldValue<decltype(mw)::Type,MwVal::v8BitPorResetVal> v8BitPorResetVal{};
            constexpr Register::FieldValue<decltype(mw)::Type,MwVal::v16Bit> v16Bit{};
            constexpr Register::FieldValue<decltype(mw)::Type,MwVal::v32Bit> v32Bit{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Page mode. In page mode the EMC can burst up to four external accesses. Therefore devices with asynchronous page mode burst four or higher devices are supported. Asynchronous page mode burst two devices are not supported and must be accessed normally.
        enum class PmVal {
            disabledPorReset=0x00000000,     ///<Disabled (POR reset value).
            asyncPageModeEnab=0x00000001,     ///<Async page mode enabled (page length four).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PmVal> pm{}; 
        namespace PmValC{
            constexpr Register::FieldValue<decltype(pm)::Type,PmVal::disabledPorReset> disabledPorReset{};
            constexpr Register::FieldValue<decltype(pm)::Type,PmVal::asyncPageModeEnab> asyncPageModeEnab{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Chip select polarity. The value of the chip select polarity on power-on reset is 0.
        enum class PcVal {
            activeLowChipSele=0x00000000,     ///<Active LOW chip select.
            activeHighChipSel=0x00000001,     ///<Active HIGH chip select.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PcVal> pc{}; 
        namespace PcValC{
            constexpr Register::FieldValue<decltype(pc)::Type,PcVal::activeLowChipSele> activeLowChipSele{};
            constexpr Register::FieldValue<decltype(pc)::Type,PcVal::activeHighChipSel> activeHighChipSel{};
        }
        ///Byte lane state. The byte lane state bit, PB, enables different types of memory to be connected. For byte-wide static memories the BLSn[3:0] signal from the EMC is usually connected to WE (write enable). In this case for reads all the BLSn[3:0] bits must be HIGH. This means that the byte lane state (PB) bit must be LOW. 16 bit wide static memory devices usually have the BLSn[3:0] signals connected to the UBn and LBn (upper byte and lower byte) signals in the static memory. In this case a write to a particular byte must assert the appropriate UBn or LBn signal LOW. For reads, all the UB and LB signals must be asserted LOW so that the bus is driven. In this case the byte lane state (PB) bit must be HIGH. When PB is set to 0, the WE signal is undefined or 0. You must set PB to 1, to use the WE signal.
        enum class PbVal {
            high=0x00000000,     ///<For reads all the bits in BLSn[3:0] are HIGH. For writes the respective active bits in BLSn[3:0] are LOW (POR reset value).
            low=0x00000001,     ///<For reads the respective active bits in BLSn[3:0] are LOW. For writes the respective active bits in BLSn[3:0] are LOW.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PbVal> pb{}; 
        namespace PbValC{
            constexpr Register::FieldValue<decltype(pb)::Type,PbVal::high> high{};
            constexpr Register::FieldValue<decltype(pb)::Type,PbVal::low> low{};
        }
        ///Extended wait. Extended wait (EW) uses the StaticExtendedWait register to time both the read and write transfers rather than the StaticWaitRd and StaticWaitWr registers. This enables much longer transactions.[1]
        enum class EwVal {
            extendedWaitDisabl=0x00000000,     ///<Extended wait disabled (POR reset value).
            extendedWaitEnable=0x00000001,     ///<Extended wait enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EwVal> ew{}; 
        namespace EwValC{
            constexpr Register::FieldValue<decltype(ew)::Type,EwVal::extendedWaitDisabl> extendedWaitDisabl{};
            constexpr Register::FieldValue<decltype(ew)::Type,EwVal::extendedWaitEnable> extendedWaitEnable{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,9),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Buffer enable[2].
        enum class BVal {
            bufferDisabledPor=0x00000000,     ///<Buffer disabled (POR reset value).
            bufferEnabled=0x00000001,     ///<Buffer enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,BVal> b{}; 
        namespace BValC{
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferDisabledPor> bufferDisabledPor{};
            constexpr Register::FieldValue<decltype(b)::Type,BVal::bufferEnabled> bufferEnabled{};
        }
        ///Write protect.
        enum class PVal {
            writesNotProtected=0x00000000,     ///<Writes not protected (POR reset value).
            writeProtected=0x00000001,     ///<Write protected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,PVal> p{}; 
        namespace PValC{
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writesNotProtected> writesNotProtected{};
            constexpr Register::FieldValue<decltype(p)::Type,PVal::writeProtected> writeProtected{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,21),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitwen0{    ///<Selects the delay from chip select n to write enable.
        using Addr = Register::Address<0x40005204,0x00000000,0x00000000,unsigned>;
        ///Wait write enable. Delay from chip select assertion to write enable. 0x0 = One CCLK cycle delay between assertion of chip select and write enable (POR reset value). 0x1 - 0xF = (n + 1) CCLK cycle delay. The delay is (WAITWEN +1) x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitwen{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitwen1{    ///<Selects the delay from chip select n to write enable.
        using Addr = Register::Address<0x40005224,0x00000000,0x00000000,unsigned>;
        ///Wait write enable. Delay from chip select assertion to write enable. 0x0 = One CCLK cycle delay between assertion of chip select and write enable (POR reset value). 0x1 - 0xF = (n + 1) CCLK cycle delay. The delay is (WAITWEN +1) x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitwen{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitwen2{    ///<Selects the delay from chip select n to write enable.
        using Addr = Register::Address<0x40005244,0x00000000,0x00000000,unsigned>;
        ///Wait write enable. Delay from chip select assertion to write enable. 0x0 = One CCLK cycle delay between assertion of chip select and write enable (POR reset value). 0x1 - 0xF = (n + 1) CCLK cycle delay. The delay is (WAITWEN +1) x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitwen{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitwen3{    ///<Selects the delay from chip select n to write enable.
        using Addr = Register::Address<0x40005264,0x00000000,0x00000000,unsigned>;
        ///Wait write enable. Delay from chip select assertion to write enable. 0x0 = One CCLK cycle delay between assertion of chip select and write enable (POR reset value). 0x1 - 0xF = (n + 1) CCLK cycle delay. The delay is (WAITWEN +1) x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitwen{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitoen0{    ///<Selects the delay from chip select n or address change, whichever is later, to output enable.
        using Addr = Register::Address<0x40005208,0x00000000,0x00000000,unsigned>;
        ///Wait output enable. Delay from chip select assertion to output enable. 0x0 = No delay (POR reset value). 0x1 - 0xF = n cycle delay. The delay is WAITOEN x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitoen{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitoen1{    ///<Selects the delay from chip select n or address change, whichever is later, to output enable.
        using Addr = Register::Address<0x40005228,0x00000000,0x00000000,unsigned>;
        ///Wait output enable. Delay from chip select assertion to output enable. 0x0 = No delay (POR reset value). 0x1 - 0xF = n cycle delay. The delay is WAITOEN x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitoen{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitoen2{    ///<Selects the delay from chip select n or address change, whichever is later, to output enable.
        using Addr = Register::Address<0x40005248,0x00000000,0x00000000,unsigned>;
        ///Wait output enable. Delay from chip select assertion to output enable. 0x0 = No delay (POR reset value). 0x1 - 0xF = n cycle delay. The delay is WAITOEN x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitoen{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitoen3{    ///<Selects the delay from chip select n or address change, whichever is later, to output enable.
        using Addr = Register::Address<0x40005268,0x00000000,0x00000000,unsigned>;
        ///Wait output enable. Delay from chip select assertion to output enable. 0x0 = No delay (POR reset value). 0x1 - 0xF = n cycle delay. The delay is WAITOEN x tCCLK.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitoen{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitrd0{    ///<Selects the delay from chip select n to a read access.
        using Addr = Register::Address<0x4000520c,0x00000000,0x00000000,unsigned>;
        ///Non-page mode read wait states or asynchronous page mode read first access wait state. Non-page mode read or asynchronous page mode read, first read only: 0x0 - 0x1E = (n + 1) CCLK cycles for read accesses. For non-sequential reads, the wait state time is (WAITRD + 1) x tCCLK. 0x1F = 32 CCLK cycles for read accesses (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitrd{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitrd1{    ///<Selects the delay from chip select n to a read access.
        using Addr = Register::Address<0x4000522c,0x00000000,0x00000000,unsigned>;
        ///Non-page mode read wait states or asynchronous page mode read first access wait state. Non-page mode read or asynchronous page mode read, first read only: 0x0 - 0x1E = (n + 1) CCLK cycles for read accesses. For non-sequential reads, the wait state time is (WAITRD + 1) x tCCLK. 0x1F = 32 CCLK cycles for read accesses (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitrd{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitrd2{    ///<Selects the delay from chip select n to a read access.
        using Addr = Register::Address<0x4000524c,0x00000000,0x00000000,unsigned>;
        ///Non-page mode read wait states or asynchronous page mode read first access wait state. Non-page mode read or asynchronous page mode read, first read only: 0x0 - 0x1E = (n + 1) CCLK cycles for read accesses. For non-sequential reads, the wait state time is (WAITRD + 1) x tCCLK. 0x1F = 32 CCLK cycles for read accesses (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitrd{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitrd3{    ///<Selects the delay from chip select n to a read access.
        using Addr = Register::Address<0x4000526c,0x00000000,0x00000000,unsigned>;
        ///Non-page mode read wait states or asynchronous page mode read first access wait state. Non-page mode read or asynchronous page mode read, first read only: 0x0 - 0x1E = (n + 1) CCLK cycles for read accesses. For non-sequential reads, the wait state time is (WAITRD + 1) x tCCLK. 0x1F = 32 CCLK cycles for read accesses (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitrd{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitpag0{    ///<Selects the delay for asynchronous page mode sequential accesses for chip select n.
        using Addr = Register::Address<0x40005210,0x00000000,0x00000000,unsigned>;
        ///Asynchronous page mode read after the first read wait states. Number of wait states for asynchronous page mode read accesses after the first read: 0x0 - 0x1E = (n+ 1) CCLK cycle read access time. For asynchronous page mode read for sequential reads, the wait state time for page mode accesses after the first read is (WAITPAGE + 1) x tCCLK. 0x1F = 32 CCLK cycle read access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitpage{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitpag1{    ///<Selects the delay for asynchronous page mode sequential accesses for chip select n.
        using Addr = Register::Address<0x40005230,0x00000000,0x00000000,unsigned>;
        ///Asynchronous page mode read after the first read wait states. Number of wait states for asynchronous page mode read accesses after the first read: 0x0 - 0x1E = (n+ 1) CCLK cycle read access time. For asynchronous page mode read for sequential reads, the wait state time for page mode accesses after the first read is (WAITPAGE + 1) x tCCLK. 0x1F = 32 CCLK cycle read access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitpage{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitpag2{    ///<Selects the delay for asynchronous page mode sequential accesses for chip select n.
        using Addr = Register::Address<0x40005250,0x00000000,0x00000000,unsigned>;
        ///Asynchronous page mode read after the first read wait states. Number of wait states for asynchronous page mode read accesses after the first read: 0x0 - 0x1E = (n+ 1) CCLK cycle read access time. For asynchronous page mode read for sequential reads, the wait state time for page mode accesses after the first read is (WAITPAGE + 1) x tCCLK. 0x1F = 32 CCLK cycle read access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitpage{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitpag3{    ///<Selects the delay for asynchronous page mode sequential accesses for chip select n.
        using Addr = Register::Address<0x40005270,0x00000000,0x00000000,unsigned>;
        ///Asynchronous page mode read after the first read wait states. Number of wait states for asynchronous page mode read accesses after the first read: 0x0 - 0x1E = (n+ 1) CCLK cycle read access time. For asynchronous page mode read for sequential reads, the wait state time for page mode accesses after the first read is (WAITPAGE + 1) x tCCLK. 0x1F = 32 CCLK cycle read access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitpage{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitwr0{    ///<Selects the delay from chip select n to a write access.
        using Addr = Register::Address<0x40005214,0x00000000,0x00000000,unsigned>;
        ///Write wait states. SRAM wait state time for write accesses after the first read: 0x0 - 0x1E = (n + 2) CCLK cycle write access time. The wait state time for write accesses after the first read is WAITWR (n + 2) x tCCLK. 0x1F = 33 CCLK cycle write access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitwr{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitwr1{    ///<Selects the delay from chip select n to a write access.
        using Addr = Register::Address<0x40005234,0x00000000,0x00000000,unsigned>;
        ///Write wait states. SRAM wait state time for write accesses after the first read: 0x0 - 0x1E = (n + 2) CCLK cycle write access time. The wait state time for write accesses after the first read is WAITWR (n + 2) x tCCLK. 0x1F = 33 CCLK cycle write access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitwr{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitwr2{    ///<Selects the delay from chip select n to a write access.
        using Addr = Register::Address<0x40005254,0x00000000,0x00000000,unsigned>;
        ///Write wait states. SRAM wait state time for write accesses after the first read: 0x0 - 0x1E = (n + 2) CCLK cycle write access time. The wait state time for write accesses after the first read is WAITWR (n + 2) x tCCLK. 0x1F = 33 CCLK cycle write access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitwr{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitwr3{    ///<Selects the delay from chip select n to a write access.
        using Addr = Register::Address<0x40005274,0x00000000,0x00000000,unsigned>;
        ///Write wait states. SRAM wait state time for write accesses after the first read: 0x0 - 0x1E = (n + 2) CCLK cycle write access time. The wait state time for write accesses after the first read is WAITWR (n + 2) x tCCLK. 0x1F = 33 CCLK cycle write access time (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> waitwr{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitturn0{    ///<Selects bus turnaround cycles
        using Addr = Register::Address<0x40005218,0x00000000,0x00000000,unsigned>;
        ///Bus turnaround cycles. 0x0 - 0xE = (n + 1) CCLK turnaround cycles. Bus turnaround time is (WAITTURN + 1) x tCCLK. 0xF = 16 CCLK turnaround cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitturn{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitturn1{    ///<Selects bus turnaround cycles
        using Addr = Register::Address<0x40005238,0x00000000,0x00000000,unsigned>;
        ///Bus turnaround cycles. 0x0 - 0xE = (n + 1) CCLK turnaround cycles. Bus turnaround time is (WAITTURN + 1) x tCCLK. 0xF = 16 CCLK turnaround cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitturn{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitturn2{    ///<Selects bus turnaround cycles
        using Addr = Register::Address<0x40005258,0x00000000,0x00000000,unsigned>;
        ///Bus turnaround cycles. 0x0 - 0xE = (n + 1) CCLK turnaround cycles. Bus turnaround time is (WAITTURN + 1) x tCCLK. 0xF = 16 CCLK turnaround cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitturn{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EmcStaticwaitturn3{    ///<Selects bus turnaround cycles
        using Addr = Register::Address<0x40005278,0x00000000,0x00000000,unsigned>;
        ///Bus turnaround cycles. 0x0 - 0xE = (n + 1) CCLK turnaround cycles. Bus turnaround time is (WAITTURN + 1) x tCCLK. 0xF = 16 CCLK turnaround cycles (POR reset value).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waitturn{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,4),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
