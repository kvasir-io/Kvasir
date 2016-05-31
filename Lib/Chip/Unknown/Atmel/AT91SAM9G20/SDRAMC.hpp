#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//SDRAM Controller
    namespace SdramcMr{    ///<SDRAMC Mode Register
        using Addr = Register::Address<0xffffea00,0xfffffff8,0x00000000,unsigned>;
        ///SDRAMC Command Mode
        enum class ModeVal {
            normal=0x00000000,     ///<Normal mode. Any access to the SDRAM is decoded normally. To activate this mode, command must be followed by a write to the SDRAM.
            nop=0x00000001,     ///<The SDRAM Controller issues a NOP command when the SDRAM device is accessed regardless of the cycle. To activate this mode, command must be followed by a write to the SDRAM.
            allbanksPrecharge=0x00000002,     ///<The SDRAM Controller issues an "All Banks Precharge" command when the SDRAM device is accessed regardless of the cycle. To activate this mode, command must be followed by a write to the SDRAM.
            loadModereg=0x00000003,     ///<The SDRAM Controller issues a "Load Mode Register" command when the SDRAM device is accessed regardless of the cycle. To activate this mode, command must be followed by a write to the SDRAM.
            autoRefresh=0x00000004,     ///<The SDRAM Controller issues an "Auto-Refresh" Command when the SDRAM device is accessed regardless of the cycle. Previously, an "All Banks Precharge" command must be issued. To activate this mode, command must be followed by a write to the SDRAM.
            extLoadModereg=0x00000005,     ///<The SDRAM Controller issues an "Extended Load Mode Register" command when the SDRAM device is accessed regardless of the cycle. To activate this mode, the "Extended Load Mode Register" command must be followed by a write to the SDRAM. The write in the SDRAM must be done in the appropriate bank; most low-power SDRAM devices use the bank 1.
            deepPowerdown=0x00000006,     ///<Deep power-down mode. Enters deep power-down mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::normal> normal{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::nop> nop{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::allbanksPrecharge> allbanksPrecharge{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::loadModereg> loadModereg{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::autoRefresh> autoRefresh{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::extLoadModereg> extLoadModereg{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::deepPowerdown> deepPowerdown{};
        }
    }
    namespace SdramcTr{    ///<SDRAMC Refresh Timer Register
        using Addr = Register::Address<0xffffea04,0xfffff000,0x00000000,unsigned>;
        ///SDRAMC Refresh Timer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace SdramcCr{    ///<SDRAMC Configuration Register
        using Addr = Register::Address<0xffffea08,0x00000000,0x00000000,unsigned>;
        ///Number of Column Bits
        enum class NcVal {
            col8=0x00000000,     ///<8 column bits
            col9=0x00000001,     ///<9 column bits
            col10=0x00000002,     ///<10 column bits
            col11=0x00000003,     ///<11 column bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,NcVal> nc{}; 
        namespace NcValC{
            constexpr Register::FieldValue<decltype(nc)::Type,NcVal::col8> col8{};
            constexpr Register::FieldValue<decltype(nc)::Type,NcVal::col9> col9{};
            constexpr Register::FieldValue<decltype(nc)::Type,NcVal::col10> col10{};
            constexpr Register::FieldValue<decltype(nc)::Type,NcVal::col11> col11{};
        }
        ///Number of Row Bits
        enum class NrVal {
            row11=0x00000000,     ///<11 row bits
            row12=0x00000001,     ///<12 row bits
            row13=0x00000002,     ///<13 row bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,NrVal> nr{}; 
        namespace NrValC{
            constexpr Register::FieldValue<decltype(nr)::Type,NrVal::row11> row11{};
            constexpr Register::FieldValue<decltype(nr)::Type,NrVal::row12> row12{};
            constexpr Register::FieldValue<decltype(nr)::Type,NrVal::row13> row13{};
        }
        ///Number of Banks
        enum class NbVal {
            bank2=0x00000000,     ///<2 banks
            bank4=0x00000001,     ///<4 banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,NbVal> nb{}; 
        namespace NbValC{
            constexpr Register::FieldValue<decltype(nb)::Type,NbVal::bank2> bank2{};
            constexpr Register::FieldValue<decltype(nb)::Type,NbVal::bank4> bank4{};
        }
        ///CAS Latency
        enum class CasVal {
            latency1=0x00000001,     ///<1 cycle CAS latency
            latency2=0x00000002,     ///<2 cycle CAS latency
            latency3=0x00000003,     ///<3 cycle CAS latency
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,CasVal> cas{}; 
        namespace CasValC{
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::latency1> latency1{};
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::latency2> latency2{};
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::latency3> latency3{};
        }
        ///Data Bus Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dbw{}; 
        ///Write Recovery Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> twr{}; 
        ///Row Cycle Delay and Row Refresh Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> trcTrfc{}; 
        ///Row Precharge Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trp{}; 
        ///Row to Column Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> trcd{}; 
        ///Active to Precharge Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> tras{}; 
        ///Exit Self Refresh to Active Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> txsr{}; 
    }
    namespace SdramcLpr{    ///<SDRAMC Low Power Register
        using Addr = Register::Address<0xffffea10,0xffffc08c,0x00000000,unsigned>;
        ///Low-power Configuration Bits
        enum class LpcbVal {
            disabled=0x00000000,     ///<Low Power Feature is inhibited: no Power-down, Self-refresh or Deep Power-down command is issued to the SDRAM device.
            selfRefresh=0x00000001,     ///<The SDRAM Controller issues a Self-refresh command to the SDRAM device, the SDCK clock is deactivated and the SDCKE signal is set low. The SDRAM device leaves the Self Refresh Mode when accessed and enters it after the access.
            powerDown=0x00000002,     ///<The SDRAM Controller issues a Power-down Command to the SDRAM device after each access, the SDCKE signal is set to low. The SDRAM device leaves the Power-down Mode when accessed and enters it after the access.
            deepPowerDown=0x00000003,     ///<The SDRAM Controller issues a Deep Power-down command to the SDRAM device. This mode is unique to low-power SDRAM.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,LpcbVal> lpcb{}; 
        namespace LpcbValC{
            constexpr Register::FieldValue<decltype(lpcb)::Type,LpcbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lpcb)::Type,LpcbVal::selfRefresh> selfRefresh{};
            constexpr Register::FieldValue<decltype(lpcb)::Type,LpcbVal::powerDown> powerDown{};
            constexpr Register::FieldValue<decltype(lpcb)::Type,LpcbVal::deepPowerDown> deepPowerDown{};
        }
        ///Partial Array Self-refresh (only for low-power SDRAM)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> pasr{}; 
        ///Temperature Compensated Self-Refresh (only for low-power SDRAM)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tcsr{}; 
        ///Drive Strength (only for low-power SDRAM)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ds{}; 
        ///Time to define when low-power mode is enable
        enum class TimeoutVal {
            lpLastXfer=0x00000000,     ///<The SDRAM controller activates the SDRAM low-power mode immediately after the end of the last transfer.
            lpLastXfer64=0x00000001,     ///<The SDRAM controller activates the SDRAM low-power mode 64 clock cycles after the end of the last transfer.
            lpLastXfer128=0x00000002,     ///<The SDRAM controller activates the SDRAM low-power mode 128 clock cycles after the end of the last transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,TimeoutVal> timeout{}; 
        namespace TimeoutValC{
            constexpr Register::FieldValue<decltype(timeout)::Type,TimeoutVal::lpLastXfer> lpLastXfer{};
            constexpr Register::FieldValue<decltype(timeout)::Type,TimeoutVal::lpLastXfer64> lpLastXfer64{};
            constexpr Register::FieldValue<decltype(timeout)::Type,TimeoutVal::lpLastXfer128> lpLastXfer128{};
        }
    }
    namespace SdramcIer{    ///<SDRAMC Interrupt Enable Register
        using Addr = Register::Address<0xffffea14,0xfffffffe,0x00000000,unsigned>;
        ///Refresh Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res{}; 
    }
    namespace SdramcIdr{    ///<SDRAMC Interrupt Disable Register
        using Addr = Register::Address<0xffffea18,0xfffffffe,0x00000000,unsigned>;
        ///Refresh Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res{}; 
    }
    namespace SdramcImr{    ///<SDRAMC Interrupt Mask Register
        using Addr = Register::Address<0xffffea1c,0xfffffffe,0x00000000,unsigned>;
        ///Refresh Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res{}; 
    }
    namespace SdramcIsr{    ///<SDRAMC Interrupt Status Register
        using Addr = Register::Address<0xffffea20,0xfffffffe,0x00000000,unsigned>;
        ///Refresh Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> res{}; 
    }
    namespace SdramcMdr{    ///<SDRAMC Memory Device Register
        using Addr = Register::Address<0xffffea24,0xfffffffc,0x00000000,unsigned>;
        ///Memory Device Type
        enum class MdVal {
            sdram=0x00000000,     ///<SDRAM
            lpsdram=0x00000001,     ///<Low-power SDRAM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MdVal> md{}; 
        namespace MdValC{
            constexpr Register::FieldValue<decltype(md)::Type,MdVal::sdram> sdram{};
            constexpr Register::FieldValue<decltype(md)::Type,MdVal::lpsdram> lpsdram{};
        }
    }
}
