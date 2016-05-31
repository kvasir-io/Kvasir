#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//AHB Multi-port DDR-SDRAM Controller
    namespace MpddrcMr{    ///<MPDDRC Mode Register
        using Addr = Register::Address<0xffffea00,0xffff00f8,0x00000000,unsigned>;
        ///MPDDRC Command Mode
        enum class ModeVal {
            normalCmd=0x00000000,     ///<Normal Mode. Any access to the MPDDRC will be decoded normally. To activate this mode, the command must be followed by a write to the DDR-SDRAM.
            nopCmd=0x00000001,     ///<The MPDDRC issues a NOP command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM.
            prcgallCmd=0x00000002,     ///<The MPDDRC issues an "All Banks Precharge" command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the SDRAM.
            lmrCmd=0x00000003,     ///<The MPDDRC issues a "Load Mode Register" command when the DDR-SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM.
            rfshCmd=0x00000004,     ///<The MPDDRC issues an "Auto-Refresh" Command when the DDR-SDRAM device is accessed regardless of the cycle. Previously, an "All Banks Precharge" command must be issued. To activate this mode, the command must be followed by a write to the DDR-SDRAM.
            extLmrCmd=0x00000005,     ///<The MPDDRC issues an "Extended Load Mode Register" command when the SDRAM device is accessed regardless of the cycle. To activate this mode, the command must be followed by a write to the DDR-SDRAM. The write in the DDR-SDRAM must be done in the appropriate bank.
            deepCmd=0x00000006,     ///<Deep power mode: Access to deep power-down mode
            lpddr2Cmd=0x00000007,     ///<The MPDDRC issues an "LPDDR2 Mode Register" command when the Low-power DDR2-SDRAM device is accessed regardless of the cycle. To activate this mode, the "Mode Register" command must be followed by a write to the Low-power DDR2-SDRAM.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::normalCmd> normalCmd{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::nopCmd> nopCmd{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::prcgallCmd> prcgallCmd{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::lmrCmd> lmrCmd{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::rfshCmd> rfshCmd{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::extLmrCmd> extLmrCmd{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::deepCmd> deepCmd{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::lpddr2Cmd> lpddr2Cmd{};
        }
        ///Mode Register Select LPDDR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> mrs{}; 
    }
    namespace MpddrcRtr{    ///<MPDDRC Refresh Timer Register
        using Addr = Register::Address<0xffffea04,0xff8cf000,0x00000000,unsigned>;
        ///MPDDRC Refresh Timer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        ///Adjust Refresh Rate
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adjRef{}; 
        ///Refresh Per Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> refPb{}; 
        ///Content of MR4 Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> mr4Value{}; 
    }
    namespace MpddrcCr{    ///<MPDDRC Configuration Register
        using Addr = Register::Address<0xffffea08,0xff0c8000,0x00000000,unsigned>;
        ///Number of Column Bits.
        enum class NcVal {
            col9=0x00000000,     ///<9 DDR column bits
            col10=0x00000001,     ///<10 DDR column bits
            col11=0x00000002,     ///<11 DDR column bits
            col12=0x00000003,     ///<12 DDR column bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,NcVal> nc{}; 
        namespace NcValC{
            constexpr Register::FieldValue<decltype(nc)::Type,NcVal::col9> col9{};
            constexpr Register::FieldValue<decltype(nc)::Type,NcVal::col10> col10{};
            constexpr Register::FieldValue<decltype(nc)::Type,NcVal::col11> col11{};
            constexpr Register::FieldValue<decltype(nc)::Type,NcVal::col12> col12{};
        }
        ///Number of Row Bits
        enum class NrVal {
            row11=0x00000000,     ///<11 row bits
            row12=0x00000001,     ///<12 row bits
            row13=0x00000002,     ///<13 row bits
            row14=0x00000003,     ///<14 row bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,NrVal> nr{}; 
        namespace NrValC{
            constexpr Register::FieldValue<decltype(nr)::Type,NrVal::row11> row11{};
            constexpr Register::FieldValue<decltype(nr)::Type,NrVal::row12> row12{};
            constexpr Register::FieldValue<decltype(nr)::Type,NrVal::row13> row13{};
            constexpr Register::FieldValue<decltype(nr)::Type,NrVal::row14> row14{};
        }
        ///CAS Latency
        enum class CasVal {
            ddrCas2=0x00000002,     ///<LPDDR1 CAS Latency 2
            ddrCas3=0x00000003,     ///<DDR2/LPDDR2/LPDDR1 CAS Latency 3
            ddrCas4=0x00000004,     ///<DDR2/LPDDR2 CAS Latency 4
            ddrCas5=0x00000005,     ///<DDR2/LPDDR2 CAS Latency 5
            ddrCas6=0x00000006,     ///<DDR2 CAS Latency 6
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,CasVal> cas{}; 
        namespace CasValC{
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::ddrCas2> ddrCas2{};
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::ddrCas3> ddrCas3{};
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::ddrCas4> ddrCas4{};
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::ddrCas5> ddrCas5{};
            constexpr Register::FieldValue<decltype(cas)::Type,CasVal::ddrCas6> ddrCas6{};
        }
        ///Reset DLL
        enum class DllVal {
            resetDisabled=0x00000000,     ///<Disable DLL reset.
            resetEnabled=0x00000001,     ///<Enable DLL reset.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DllVal> dll{}; 
        namespace DllValC{
            constexpr Register::FieldValue<decltype(dll)::Type,DllVal::resetDisabled> resetDisabled{};
            constexpr Register::FieldValue<decltype(dll)::Type,DllVal::resetEnabled> resetEnabled{};
        }
        ///Output Driver Impedance Control (Drive Strength)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dicDs{}; 
        ///DISABLE DLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> disDll{}; 
        ///ZQ Calibration
        enum class ZqVal {
            init=0x00000000,     ///<Calibration command after initialization
            long_=0x00000001,     ///<Long calibration
            short=0x00000002,     ///<Short calibration
            reset=0x00000003,     ///<ZQ Reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,ZqVal> zq{}; 
        namespace ZqValC{
            constexpr Register::FieldValue<decltype(zq)::Type,ZqVal::init> init{};
            constexpr Register::FieldValue<decltype(zq)::Type,ZqVal::long_> long_{};
            constexpr Register::FieldValue<decltype(zq)::Type,ZqVal::short> short{};
            constexpr Register::FieldValue<decltype(zq)::Type,ZqVal::reset> reset{};
        }
        ///Off-chip Driver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ocd{}; 
        ///Mask Data is Shared
        enum class DqmsVal {
            notShared=0x00000000,     ///<DQM is not shared with another controller.
            shared=0x00000001,     ///<DQM is shared with another controller.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,DqmsVal> dqms{}; 
        namespace DqmsValC{
            constexpr Register::FieldValue<decltype(dqms)::Type,DqmsVal::notShared> notShared{};
            constexpr Register::FieldValue<decltype(dqms)::Type,DqmsVal::shared> shared{};
        }
        ///Enable Read Measure
        enum class EnrdmVal {
            off=0x00000000,     ///<DQS/DDR_DATA phase error correction is disabled.
            on=0x00000001,     ///<DQS/DDR_DATA phase error correction is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,EnrdmVal> enrdm{}; 
        namespace EnrdmValC{
            constexpr Register::FieldValue<decltype(enrdm)::Type,EnrdmVal::off> off{};
            constexpr Register::FieldValue<decltype(enrdm)::Type,EnrdmVal::on> on{};
        }
        ///Number of Banks.
        enum class NbVal {
            v4=0x00000000,     ///<4 banks
            v8=0x00000001,     ///<8 banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,NbVal> nb{}; 
        namespace NbValC{
            constexpr Register::FieldValue<decltype(nb)::Type,NbVal::v4> v4{};
            constexpr Register::FieldValue<decltype(nb)::Type,NbVal::v8> v8{};
        }
        ///Not DQS:
        enum class NdqsVal {
            enabled=0x00000000,     ///<Not DQS is enabled.
            disabled=0x00000001,     ///<Not DQS is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,NdqsVal> ndqs{}; 
        namespace NdqsValC{
            constexpr Register::FieldValue<decltype(ndqs)::Type,NdqsVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ndqs)::Type,NdqsVal::disabled> disabled{};
        }
        ///Type of Decoding
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> decod{}; 
        ///Support Unaligned Access
        enum class UnalVal {
            unsupported=0x00000000,     ///<Unaligned access is not supported.
            supported=0x00000001,     ///<Unaligned access is supported.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,UnalVal> unal{}; 
        namespace UnalValC{
            constexpr Register::FieldValue<decltype(unal)::Type,UnalVal::unsupported> unsupported{};
            constexpr Register::FieldValue<decltype(unal)::Type,UnalVal::supported> supported{};
        }
    }
    namespace MpddrcTpr0{    ///<MPDDRC Timing Parameter 0 Register
        using Addr = Register::Address<0xffffea0c,0x00000000,0x00000000,unsigned>;
        ///Active to Precharge Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tras{}; 
        ///Row to Column Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> trcd{}; 
        ///Write Recovery Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> twr{}; 
        ///Row Cycle Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> trc{}; 
        ///Row Precharge Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trp{}; 
        ///Active BankA to Active BankB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> trrd{}; 
        ///Internal Write to Read Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> twtr{}; 
        ///Reduce Write to Read Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> rdcWrrd{}; 
        ///Load Mode Register Command to Activate or Refresh Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> tmrd{}; 
    }
    namespace MpddrcTpr1{    ///<MPDDRC Timing Parameter 1 Register
        using Addr = Register::Address<0xffffea10,0xf0000080,0x00000000,unsigned>;
        ///Row Cycle Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> trfc{}; 
        ///Exit Self Refresh Delay to Non Read Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsnr{}; 
        ///Exit Self Refresh Delay to Read Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> txsrd{}; 
        ///Exit Power-down Delay to First Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> txp{}; 
    }
    namespace MpddrcTpr2{    ///<MPDDRC Timing Parameter 2 Register
        using Addr = Register::Address<0xffffea14,0xfff08000,0x00000000,unsigned>;
        ///Exit Active Power Down Delay to Read Command in Mode "Fast Exit".
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> txard{}; 
        ///Exit Active Power Down Delay to Read Command in Mode "Slow Exit".
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> txards{}; 
        ///Row Precharge All Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> trpa{}; 
        ///Read to Precharge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> trtp{}; 
        ///Four Active Windows
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tfaw{}; 
    }
    namespace MpddrcLpr{    ///<MPDDRC Low-power Register
        using Addr = Register::Address<0xffffea1c,0xffcec880,0x00000000,unsigned>;
        ///Low-power Command Bit
        enum class LpcbVal {
            disabled=0x00000000,     ///<Low-power Feature is inhibited. No power-down, self refresh and deep-power modes are issued to the DDR-SDRAM device.
            selfrefresh=0x00000001,     ///<The MPDDRC issues a Self Refresh command to the DDR-SDRAM device, the clock(s) is/are de-activated and the CKE signal is set low. The DDR-SDRAM device leaves the self refresh mode when accessed and reenters it after the access.
            powerdown=0x00000002,     ///<The MPDDRC issues a Power-down Command to the DDR-SDRAM device after each access, the CKE signal is set low. The DDR-SDRAM device leaves the power-down mode when accessed and reenters it after the access.
            deepPwd=0x00000003,     ///<The MPDDRC issues a Deep Power-down command to the Low-power DDR-SDRAM device.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,LpcbVal> lpcb{}; 
        namespace LpcbValC{
            constexpr Register::FieldValue<decltype(lpcb)::Type,LpcbVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lpcb)::Type,LpcbVal::selfrefresh> selfrefresh{};
            constexpr Register::FieldValue<decltype(lpcb)::Type,LpcbVal::powerdown> powerdown{};
            constexpr Register::FieldValue<decltype(lpcb)::Type,LpcbVal::deepPwd> deepPwd{};
        }
        ///Clock Frozen Command Bit
        enum class ClkfrVal {
            disabled=0x00000000,     ///<Clock(s) is/are not frozen.
            enabled=0x00000001,     ///<Clock(s) is/are frozen.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkfrVal> clkFr{}; 
        namespace ClkfrValC{
            constexpr Register::FieldValue<decltype(clkFr)::Type,ClkfrVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(clkFr)::Type,ClkfrVal::enabled> enabled{};
        }
        ///LPDDR2 Power Off Bit
        enum class Lpddr2pwoffVal {
            disabled=0x00000000,     ///<No power off sequence applied to LPDDR2.
            enabled=0x00000001,     ///<A power off sequence is applied to the LPDDR2 device. CKE is forced low.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Lpddr2pwoffVal> lpddr2Pwoff{}; 
        namespace Lpddr2pwoffValC{
            constexpr Register::FieldValue<decltype(lpddr2Pwoff)::Type,Lpddr2pwoffVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(lpddr2Pwoff)::Type,Lpddr2pwoffVal::enabled> enabled{};
        }
        ///Partial Array Self Refresh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> pasr{}; 
        ///Drive Strength
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ds{}; 
        ///Enter Low-power Mode
        enum class TimeoutVal {
            v0=0x00000000,     ///<The SDRAM controller activates the SDRAM low-power mode immediately after the end of the last transfer.
            v64=0x00000001,     ///<The SDRAM controller activates the SDRAM low-power mode 64 clock cycles after the end of the last transfer.
            v128=0x00000002,     ///<The SDRAM controller activates the SDRAM low-power mode 128 clock cycles after the end of the last transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,TimeoutVal> timeout{}; 
        namespace TimeoutValC{
            constexpr Register::FieldValue<decltype(timeout)::Type,TimeoutVal::v0> v0{};
            constexpr Register::FieldValue<decltype(timeout)::Type,TimeoutVal::v64> v64{};
            constexpr Register::FieldValue<decltype(timeout)::Type,TimeoutVal::v128> v128{};
        }
        ///Active Power Down Exit Time
        enum class ApdeVal {
            fast=0x00000000,     ///<Fast Exit.
            slow=0x00000001,     ///<Low Exit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ApdeVal> apde{}; 
        namespace ApdeValC{
            constexpr Register::FieldValue<decltype(apde)::Type,ApdeVal::fast> fast{};
            constexpr Register::FieldValue<decltype(apde)::Type,ApdeVal::slow> slow{};
        }
        ///Update Load Mode Register and Extended Mode Register
        enum class UpdmrVal {
            disabled=0x00000000,     ///<Update is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,UpdmrVal> updMr{}; 
        namespace UpdmrValC{
            constexpr Register::FieldValue<decltype(updMr)::Type,UpdmrVal::disabled> disabled{};
        }
    }
    namespace MpddrcMd{    ///<MPDDRC Memory Device Register
        using Addr = Register::Address<0xffffea20,0xffffffe8,0x00000000,unsigned>;
        ///Memory Device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> md{}; 
        ///Data Bus Width
        enum class DbwVal {
            dbw32Bits=0x00000000,     ///<Data bus width is 32 bits.
            dbw16Bits=0x00000001,     ///<Data bus width is 16 bits.(1)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DbwVal> dbw{}; 
        namespace DbwValC{
            constexpr Register::FieldValue<decltype(dbw)::Type,DbwVal::dbw32Bits> dbw32Bits{};
            constexpr Register::FieldValue<decltype(dbw)::Type,DbwVal::dbw16Bits> dbw16Bits{};
        }
    }
    namespace MpddrcHs{    ///<MPDDRC High Speed Register
        using Addr = Register::Address<0xffffea24,0xfffffffb,0x00000000,unsigned>;
        ///Disable Anticip Read Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> disAnticipRead{}; 
    }
    namespace MpddrcLpddr2Lpr{    ///<MPDDRC LPDDR2 Low-power Register
        using Addr = Register::Address<0xffffea28,0xf0000000,0x00000000,unsigned>;
        ///Bank Mask Bit/PASR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bkMaskPasr{}; 
        ///Segment Mask Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> segMask{}; 
        ///Drive strength
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> ds{}; 
    }
    namespace MpddrcLpddr2CalMr4{    ///<MPDDRC LPDDR2 Calibration and MR4 Register
        using Addr = Register::Address<0xffffea2c,0x00000000,0x00000000,unsigned>;
        ///LPDDR2 Calibration Timer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> countCal{}; 
        ///Mode Register 4 Read Interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> mr4Read{}; 
    }
    namespace MpddrcLpddr2TimCal{    ///<MPDDRC LPDDR2 Timing Calibration Register
        using Addr = Register::Address<0xffffea30,0xffffff00,0x00000000,unsigned>;
        ///ZQ Calibration Short
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> zqcs{}; 
    }
    namespace MpddrcIoCalibr{    ///<MPDDRC IO Calibration
        using Addr = Register::Address<0xffffea34,0xff00f8f8,0x00000000,unsigned>;
        ///Resistor Divider, output driver impedance
        enum class RdivVal {
            rzq34=0x00000001,     ///<LPDDR2 RZQ = 34,3 Ohm, DDR2/LPDDR1: Not applicable
            rzq40Rzq333=0x00000002,     ///<LPDDR2:RZQ = 40 Ohm, DDR2/LPDDR1: RZQ = 33,3 Ohm
            rzq48Rzq40=0x00000003,     ///<LPDDR2:RZQ =48 Ohm, DDR2/LPDDR1: RZQ =40 Ohm
            rzq60Rzq50=0x00000004,     ///<LPDDR2:RZQ =60 Ohm, DDR2/LPDDR1: RZQ =50 Ohm
            rzq80Rzq667=0x00000006,     ///<LPDDR2: RZQ = 80 Ohm, DDR2/LPDDR1: RZQ = 66,7 Ohm
            rzq120Rzq100=0x00000007,     ///<LPDDR2:RZQ = 120 Ohm, DDR2/LPDDR1: RZQ = 100 Ohm
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,RdivVal> rdiv{}; 
        namespace RdivValC{
            constexpr Register::FieldValue<decltype(rdiv)::Type,RdivVal::rzq34> rzq34{};
            constexpr Register::FieldValue<decltype(rdiv)::Type,RdivVal::rzq40Rzq333> rzq40Rzq333{};
            constexpr Register::FieldValue<decltype(rdiv)::Type,RdivVal::rzq48Rzq40> rzq48Rzq40{};
            constexpr Register::FieldValue<decltype(rdiv)::Type,RdivVal::rzq60Rzq50> rzq60Rzq50{};
            constexpr Register::FieldValue<decltype(rdiv)::Type,RdivVal::rzq80Rzq667> rzq80Rzq667{};
            constexpr Register::FieldValue<decltype(rdiv)::Type,RdivVal::rzq120Rzq100> rzq120Rzq100{};
        }
        ///IO Calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> tzqio{}; 
        ///Number of Transistor P
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> calcodep{}; 
        ///Number of Transistor N
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> calcoden{}; 
    }
    namespace MpddrcDllMo{    ///<MPDDRC DLL Master Offset Register
        using Addr = Register::Address<0xffffea74,0xfffee0f0,0x00000000,unsigned>;
        ///DLL Master Delay Line Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> moff{}; 
        ///DLL CLK90 Delay Line Offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> clk90off{}; 
        ///DLL Offset Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> seloff{}; 
    }
    namespace MpddrcDllSof{    ///<MPDDRC DLL Slave Offset Register
        using Addr = Register::Address<0xffffea78,0xe0e0e0e0,0x00000000,unsigned>;
        ///DLL Slave 0 Delay Line Offset ([x=0..3])
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> s0off{}; 
        ///DLL Slave 1 Delay Line Offset ([x=0..3])
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> s1off{}; 
        ///DLL Slave 2 Delay Line Offset ([x=0..3])
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> s2off{}; 
        ///DLL Slave 3 Delay Line Offset ([x=0..3])
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> s3off{}; 
    }
    namespace MpddrcDllMs{    ///<MPDDRC DLL Status Master  Register
        using Addr = Register::Address<0xffffea7c,0xffff00f8,0x00000000,unsigned>;
        ///DLL Master Delay Increment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdinc{}; 
        ///DLL Master Delay Decrement
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mddec{}; 
        ///DLL Master Delay Overflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdovf{}; 
        ///DLL Master Delay Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdval{}; 
    }
    namespace MpddrcWpcr{    ///<MPDDRC Write Protect Control Register
        using Addr = Register::Address<0xffffeae4,0x000000fe,0x00000000,unsigned>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protection KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace MpddrcWpsr{    ///<MPDDRC Write Protect Status Register
        using Addr = Register::Address<0xffffeae8,0xff0000fe,0x00000000,unsigned>;
        ///Write Protection Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvs{}; 
        ///Write Protection Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wpvsrc{}; 
    }
    namespace MpddrcSaw0{    ///<MPDDRC Smart Adaptation Wrapper 0 Register
        using Addr = Register::Address<0xffffea44,0xffc0c000,0x00000000,unsigned>;
        ///Clears FIFO Content
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> flushMax{}; 
        ///Incremental Threshold
        enum class IncrthreshVal {
            v1=0x00000001,     ///<1 word/dword max
            v2=0x00000002,     ///<2 word/dword max
            v4=0x00000004,     ///<4 word/dword max
            v8=0x00000008,     ///<8 word/dword max
            v16=0x00000010,     ///<16 word/dword max
            v32=0x00000020,     ///<32 word/dword max
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,IncrthreshVal> incrThresh{}; 
        namespace IncrthreshValC{
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v1> v1{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v2> v2{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v4> v4{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v8> v8{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v16> v16{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v32> v32{};
        }
        ///Prefetch Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> pfchThresh{}; 
    }
    namespace MpddrcSaw1{    ///<MPDDRC Smart Adaptation Wrapper 0 Register
        using Addr = Register::Address<0xffffea48,0xffc0c000,0x00000000,unsigned>;
        ///Clears FIFO Content
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> flushMax{}; 
        ///Incremental Threshold
        enum class IncrthreshVal {
            v1=0x00000001,     ///<1 word/dword max
            v2=0x00000002,     ///<2 word/dword max
            v4=0x00000004,     ///<4 word/dword max
            v8=0x00000008,     ///<8 word/dword max
            v16=0x00000010,     ///<16 word/dword max
            v32=0x00000020,     ///<32 word/dword max
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,IncrthreshVal> incrThresh{}; 
        namespace IncrthreshValC{
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v1> v1{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v2> v2{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v4> v4{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v8> v8{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v16> v16{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v32> v32{};
        }
        ///Prefetch Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> pfchThresh{}; 
    }
    namespace MpddrcSaw2{    ///<MPDDRC Smart Adaptation Wrapper 0 Register
        using Addr = Register::Address<0xffffea4c,0xffc0c000,0x00000000,unsigned>;
        ///Clears FIFO Content
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> flushMax{}; 
        ///Incremental Threshold
        enum class IncrthreshVal {
            v1=0x00000001,     ///<1 word/dword max
            v2=0x00000002,     ///<2 word/dword max
            v4=0x00000004,     ///<4 word/dword max
            v8=0x00000008,     ///<8 word/dword max
            v16=0x00000010,     ///<16 word/dword max
            v32=0x00000020,     ///<32 word/dword max
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,IncrthreshVal> incrThresh{}; 
        namespace IncrthreshValC{
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v1> v1{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v2> v2{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v4> v4{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v8> v8{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v16> v16{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v32> v32{};
        }
        ///Prefetch Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> pfchThresh{}; 
    }
    namespace MpddrcSaw3{    ///<MPDDRC Smart Adaptation Wrapper 0 Register
        using Addr = Register::Address<0xffffea50,0xffc0c000,0x00000000,unsigned>;
        ///Clears FIFO Content
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> flushMax{}; 
        ///Incremental Threshold
        enum class IncrthreshVal {
            v1=0x00000001,     ///<1 word/dword max
            v2=0x00000002,     ///<2 word/dword max
            v4=0x00000004,     ///<4 word/dword max
            v8=0x00000008,     ///<8 word/dword max
            v16=0x00000010,     ///<16 word/dword max
            v32=0x00000020,     ///<32 word/dword max
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,IncrthreshVal> incrThresh{}; 
        namespace IncrthreshValC{
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v1> v1{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v2> v2{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v4> v4{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v8> v8{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v16> v16{};
            constexpr Register::FieldValue<decltype(incrThresh)::Type,IncrthreshVal::v32> v32{};
        }
        ///Prefetch Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> pfchThresh{}; 
    }
    namespace MpddrcDllSs0{    ///<MPDDRC DLL Status Slave 0  Register
        using Addr = Register::Address<0xffffea80,0xff0000f8,0x00000000,unsigned>;
        ///DLL Slave x Delay Correction Overflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdcovf{}; 
        ///DLL Slave x Delay Correction Underflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdcudf{}; 
        ///DLL Slave x Delay Correction Error Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sderf{}; 
        ///DLL Slave x Delay Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdval{}; 
        ///DLL Slave x Delay Correction Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdcval{}; 
    }
    namespace MpddrcDllSs1{    ///<MPDDRC DLL Status Slave 0  Register
        using Addr = Register::Address<0xffffea84,0xff0000f8,0x00000000,unsigned>;
        ///DLL Slave x Delay Correction Overflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdcovf{}; 
        ///DLL Slave x Delay Correction Underflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdcudf{}; 
        ///DLL Slave x Delay Correction Error Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sderf{}; 
        ///DLL Slave x Delay Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdval{}; 
        ///DLL Slave x Delay Correction Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdcval{}; 
    }
    namespace MpddrcDllSs2{    ///<MPDDRC DLL Status Slave 0  Register
        using Addr = Register::Address<0xffffea88,0xff0000f8,0x00000000,unsigned>;
        ///DLL Slave x Delay Correction Overflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdcovf{}; 
        ///DLL Slave x Delay Correction Underflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdcudf{}; 
        ///DLL Slave x Delay Correction Error Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sderf{}; 
        ///DLL Slave x Delay Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdval{}; 
        ///DLL Slave x Delay Correction Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdcval{}; 
    }
    namespace MpddrcDllSs3{    ///<MPDDRC DLL Status Slave 0  Register
        using Addr = Register::Address<0xffffea8c,0xff0000f8,0x00000000,unsigned>;
        ///DLL Slave x Delay Correction Overflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdcovf{}; 
        ///DLL Slave x Delay Correction Underflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdcudf{}; 
        ///DLL Slave x Delay Correction Error Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sderf{}; 
        ///DLL Slave x Delay Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdval{}; 
        ///DLL Slave x Delay Correction Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sdcval{}; 
    }
}
