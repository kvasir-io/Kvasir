#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USART0
    namespace Nonerbr{    ///<Receiver Buffer Register. Contains the next received character to be read. (DLAB=0)
        using Addr = Register::Address<0x40008000,0xffffff00,0,unsigned>;
        ///The USART Receiver Buffer Register contains the oldest received byte in the USART RX FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rbr{}; 
        namespace RbrValC{
        }
    }
    namespace Nonethr{    ///<Transmit Holding Register. The next character to be transmitted is written here. (DLAB=0)
        using Addr = Register::Address<0x40008000,0xffffff00,0,unsigned>;
        ///Writing to the USART Transmit Holding Register causes the data to be stored in the USART transmit FIFO. The byte will be sent when it is the oldest byte in the FIFO and the transmitter is available.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> thr{}; 
        namespace ThrValC{
        }
    }
    namespace Nonedll{    ///<Divisor Latch LSB. Least significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider. (DLAB=1)
        using Addr = Register::Address<0x40008000,0xffffff00,0,unsigned>;
        ///The USART Divisor Latch LSB Register, along with the DLM register, determines the baud rate of the USART.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dllsb{}; 
        namespace DllsbValC{
        }
    }
    namespace Nonedlm{    ///<Divisor Latch MSB. Most significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider. (DLAB=1)
        using Addr = Register::Address<0x40008004,0xffffff00,0,unsigned>;
        ///The USART Divisor Latch MSB Register, along with the DLL register, determines the baud rate of the USART.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dlmsb{}; 
        namespace DlmsbValC{
        }
    }
    namespace Noneier{    ///<Interrupt Enable Register. Contains individual interrupt enable bits for the 7 potential USART interrupts. (DLAB=0)
        using Addr = Register::Address<0x40008004,0xfffffcf0,0,unsigned>;
        ///RBR Interrupt Enable. Enables the Receive Data Available interrupt. It also controls the Character Receive Time-out interrupt.
        enum class RbrintenVal {
            disableTheRdaInte=0x00000000,     ///<Disable the RDA interrupt.
            enableTheRdaInter=0x00000001,     ///<Enable the RDA interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RbrintenVal> rbrinten{}; 
        namespace RbrintenValC{
            constexpr Register::FieldValue<decltype(rbrinten),RbrintenVal::disableTheRdaInte> disableTheRdaInte{};
            constexpr Register::FieldValue<decltype(rbrinten),RbrintenVal::enableTheRdaInter> enableTheRdaInter{};
        }
        ///THRE Interrupt Enable. Enables the THRE interrupt. The status of this interrupt can be read from LSR[5].
        enum class ThreintenVal {
            disableTheThreInt=0x00000000,     ///<Disable the THRE interrupt.
            enableTheThreInte=0x00000001,     ///<Enable the THRE interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ThreintenVal> threinten{}; 
        namespace ThreintenValC{
            constexpr Register::FieldValue<decltype(threinten),ThreintenVal::disableTheThreInt> disableTheThreInt{};
            constexpr Register::FieldValue<decltype(threinten),ThreintenVal::enableTheThreInte> enableTheThreInte{};
        }
        ///Enables the Receive Line Status interrupt. The status of this interrupt can be read from LSR[4:1].
        enum class RlsintenVal {
            disableTheRlsInte=0x00000000,     ///<Disable the RLS interrupt.
            enableTheRlsInter=0x00000001,     ///<Enable the RLS interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RlsintenVal> rlsinten{}; 
        namespace RlsintenValC{
            constexpr Register::FieldValue<decltype(rlsinten),RlsintenVal::disableTheRlsInte> disableTheRlsInte{};
            constexpr Register::FieldValue<decltype(rlsinten),RlsintenVal::enableTheRlsInter> enableTheRlsInter{};
        }
        ///Enables the Modem Status interrupt. The components of this interrupt can be read from the MSR.
        enum class MsintenVal {
            disableTheMsInter=0x00000000,     ///<Disable the MS interrupt.
            enableTheMsInterr=0x00000001,     ///<Enable the MS interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,MsintenVal> msinten{}; 
        namespace MsintenValC{
            constexpr Register::FieldValue<decltype(msinten),MsintenVal::disableTheMsInter> disableTheMsInter{};
            constexpr Register::FieldValue<decltype(msinten),MsintenVal::enableTheMsInterr> enableTheMsInterr{};
        }
        ///Enables the end of auto-baud interrupt.
        enum class AbeointenVal {
            disableEndOfAuto=0x00000000,     ///<Disable end of auto-baud Interrupt.
            enableEndOfAutoB=0x00000001,     ///<Enable end of auto-baud Interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AbeointenVal> abeointen{}; 
        namespace AbeointenValC{
            constexpr Register::FieldValue<decltype(abeointen),AbeointenVal::disableEndOfAuto> disableEndOfAuto{};
            constexpr Register::FieldValue<decltype(abeointen),AbeointenVal::enableEndOfAutoB> enableEndOfAutoB{};
        }
        ///Enables the auto-baud time-out interrupt.
        enum class AbtointenVal {
            disableAutoBaudTi=0x00000000,     ///<Disable auto-baud time-out Interrupt.
            enableAutoBaudTim=0x00000001,     ///<Enable auto-baud time-out Interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AbtointenVal> abtointen{}; 
        namespace AbtointenValC{
            constexpr Register::FieldValue<decltype(abtointen),AbtointenVal::disableAutoBaudTi> disableAutoBaudTi{};
            constexpr Register::FieldValue<decltype(abtointen),AbtointenVal::enableAutoBaudTim> enableAutoBaudTim{};
        }
    }
    namespace Noneiir{    ///<Interrupt ID Register. Identifies which interrupt(s) are pending.
        using Addr = Register::Address<0x40008008,0xfffffc30,0,unsigned>;
        ///Interrupt status. Note that IIR[0] is active low. The pending interrupt can be determined by evaluating IIR[3:1].
        enum class IntstatusVal {
            atLeastOneInterru=0x00000000,     ///<At least one interrupt is pending.
            noInterruptIsPend=0x00000001,     ///<No interrupt is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntstatusVal> intstatus{}; 
        namespace IntstatusValC{
            constexpr Register::FieldValue<decltype(intstatus),IntstatusVal::atLeastOneInterru> atLeastOneInterru{};
            constexpr Register::FieldValue<decltype(intstatus),IntstatusVal::noInterruptIsPend> noInterruptIsPend{};
        }
        ///Interrupt identification. IER[3:1] identifies an interrupt corresponding to the USART Rx FIFO. All other values of IER[3:1] not listed below are reserved.
        enum class IntidVal {
            v1ReceiveLineS=0x00000003,     ///<1   - Receive Line Status (RLS).
            v2aReceiveDataAv=0x00000002,     ///<2a - Receive Data Available (RDA).
            v2bCharacterTime=0x00000006,     ///<2b - Character Time-out Indicator (CTI).
            v3ThreInterrupt=0x00000001,     ///<3   - THRE Interrupt.
            v4ModemStatus=0x00000000,     ///<4   - Modem status
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,IntidVal> intid{}; 
        namespace IntidValC{
            constexpr Register::FieldValue<decltype(intid),IntidVal::v1ReceiveLineS> v1ReceiveLineS{};
            constexpr Register::FieldValue<decltype(intid),IntidVal::v2aReceiveDataAv> v2aReceiveDataAv{};
            constexpr Register::FieldValue<decltype(intid),IntidVal::v2bCharacterTime> v2bCharacterTime{};
            constexpr Register::FieldValue<decltype(intid),IntidVal::v3ThreInterrupt> v3ThreInterrupt{};
            constexpr Register::FieldValue<decltype(intid),IntidVal::v4ModemStatus> v4ModemStatus{};
        }
        ///These bits are equivalent to FCR[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> fifoen{}; 
        namespace FifoenValC{
        }
        ///End of auto-baud interrupt. True if auto-baud has finished successfully and interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> abeoint{}; 
        namespace AbeointValC{
        }
        ///Auto-baud time-out interrupt. True if auto-baud has timed out and interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> abtoint{}; 
        namespace AbtointValC{
        }
    }
    namespace Nonefcr{    ///<FIFO Control Register. Controls USART FIFO usage and modes.
        using Addr = Register::Address<0x40008008,0xffffff38,0,unsigned>;
        ///FIFO enable
        enum class FifoenVal {
            disabled=0x00000000,     ///<USART FIFOs are disabled. Must not be used in the application.
            enabled=0x00000001,     ///<Active high enable for both USART Rx and TX FIFOs and FCR[7:1] access. This bit must be set for proper USART operation. Any transition on this bit will automatically clear the USART FIFOs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FifoenVal> fifoen{}; 
        namespace FifoenValC{
            constexpr Register::FieldValue<decltype(fifoen),FifoenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fifoen),FifoenVal::enabled> enabled{};
        }
        ///RX FIFO Reset
        enum class RxfiforesVal {
            noImpact=0x00000000,     ///<No impact on either of USART FIFOs.
            clear=0x00000001,     ///<Writing a logic 1 to FCR[1] will clear all bytes in USART Rx FIFO, reset the pointer logic. This bit is self-clearing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RxfiforesVal> rxfifores{}; 
        namespace RxfiforesValC{
            constexpr Register::FieldValue<decltype(rxfifores),RxfiforesVal::noImpact> noImpact{};
            constexpr Register::FieldValue<decltype(rxfifores),RxfiforesVal::clear> clear{};
        }
        ///TX FIFO Reset
        enum class TxfiforesVal {
            noImpact=0x00000000,     ///<No impact on either of USART FIFOs.
            clear=0x00000001,     ///<Writing a logic 1 to FCR[2] will clear all bytes in USART TX FIFO, reset the pointer logic. This bit is self-clearing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TxfiforesVal> txfifores{}; 
        namespace TxfiforesValC{
            constexpr Register::FieldValue<decltype(txfifores),TxfiforesVal::noImpact> noImpact{};
            constexpr Register::FieldValue<decltype(txfifores),TxfiforesVal::clear> clear{};
        }
        ///RX Trigger Level. These two bits determine how many receiver USART FIFO characters must be written before an interrupt is activated.
        enum class RxtlVal {
            triggerLevel01C=0x00000000,     ///<Trigger level 0 (1 character or 0x01).
            triggerLevel14C=0x00000001,     ///<Trigger level 1 (4 characters or 0x04).
            triggerLevel28C=0x00000002,     ///<Trigger level 2 (8 characters or 0x08).
            triggerLevel314=0x00000003,     ///<Trigger level 3 (14 characters or 0x0E).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,RxtlVal> rxtl{}; 
        namespace RxtlValC{
            constexpr Register::FieldValue<decltype(rxtl),RxtlVal::triggerLevel01C> triggerLevel01C{};
            constexpr Register::FieldValue<decltype(rxtl),RxtlVal::triggerLevel14C> triggerLevel14C{};
            constexpr Register::FieldValue<decltype(rxtl),RxtlVal::triggerLevel28C> triggerLevel28C{};
            constexpr Register::FieldValue<decltype(rxtl),RxtlVal::triggerLevel314> triggerLevel314{};
        }
    }
    namespace Nonelcr{    ///<Line Control Register. Contains controls for frame formatting and break generation.
        using Addr = Register::Address<0x4000800c,0xffffff00,0,unsigned>;
        ///Word Length Select
        enum class WlsVal {
            v5BitCharacterLeng=0x00000000,     ///<5-bit character length.
            v6BitCharacterLeng=0x00000001,     ///<6-bit character length.
            v7BitCharacterLeng=0x00000002,     ///<7-bit character length.
            v8BitCharacterLeng=0x00000003,     ///<8-bit character length.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,WlsVal> wls{}; 
        namespace WlsValC{
            constexpr Register::FieldValue<decltype(wls),WlsVal::v5BitCharacterLeng> v5BitCharacterLeng{};
            constexpr Register::FieldValue<decltype(wls),WlsVal::v6BitCharacterLeng> v6BitCharacterLeng{};
            constexpr Register::FieldValue<decltype(wls),WlsVal::v7BitCharacterLeng> v7BitCharacterLeng{};
            constexpr Register::FieldValue<decltype(wls),WlsVal::v8BitCharacterLeng> v8BitCharacterLeng{};
        }
        ///Stop Bit Select
        enum class SbsVal {
            v1StopBit=0x00000000,     ///<1 stop bit.
            v2StopBits15If=0x00000001,     ///<2 stop bits (1.5 if LCR[1:0]=00).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SbsVal> sbs{}; 
        namespace SbsValC{
            constexpr Register::FieldValue<decltype(sbs),SbsVal::v1StopBit> v1StopBit{};
            constexpr Register::FieldValue<decltype(sbs),SbsVal::v2StopBits15If> v2StopBits15If{};
        }
        ///Parity Enable
        enum class PeVal {
            disableParityGener=0x00000000,     ///<Disable parity generation and checking.
            enableParityGenera=0x00000001,     ///<Enable parity generation and checking.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::disableParityGener> disableParityGener{};
            constexpr Register::FieldValue<decltype(pe),PeVal::enableParityGenera> enableParityGenera{};
        }
        ///Parity Select
        enum class PsVal {
            oddParityNumberO=0x00000000,     ///<Odd parity. Number of 1s in the transmitted character and the attached parity bit will be odd.
            evenParityNumber=0x00000001,     ///<Even Parity. Number of 1s in the transmitted character and the attached parity bit will be even.
            forced1StickParit=0x00000002,     ///<Forced 1 stick parity.
            forced0StickParit=0x00000003,     ///<Forced 0 stick parity.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::oddParityNumberO> oddParityNumberO{};
            constexpr Register::FieldValue<decltype(ps),PsVal::evenParityNumber> evenParityNumber{};
            constexpr Register::FieldValue<decltype(ps),PsVal::forced1StickParit> forced1StickParit{};
            constexpr Register::FieldValue<decltype(ps),PsVal::forced0StickParit> forced0StickParit{};
        }
        ///Break Control
        enum class BcVal {
            disableBreakTransm=0x00000000,     ///<Disable break transmission.
            enableBreakTransmi=0x00000001,     ///<Enable break transmission. Output pin USART TXD is forced to logic 0 when LCR[6] is active high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,BcVal> bc{}; 
        namespace BcValC{
            constexpr Register::FieldValue<decltype(bc),BcVal::disableBreakTransm> disableBreakTransm{};
            constexpr Register::FieldValue<decltype(bc),BcVal::enableBreakTransmi> enableBreakTransmi{};
        }
        ///Divisor Latch Access Bit
        enum class DlabVal {
            disableAccessToDi=0x00000000,     ///<Disable access to Divisor Latches.
            enableAccessToDiv=0x00000001,     ///<Enable access to Divisor Latches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DlabVal> dlab{}; 
        namespace DlabValC{
            constexpr Register::FieldValue<decltype(dlab),DlabVal::disableAccessToDi> disableAccessToDi{};
            constexpr Register::FieldValue<decltype(dlab),DlabVal::enableAccessToDiv> enableAccessToDiv{};
        }
    }
    namespace Nonemcr{    ///<Modem Control Register.
        using Addr = Register::Address<0x40008010,0xffffff2c,0,unsigned>;
        ///Source for modem output pin DTR. This bit reads as 0 when modem loopback mode is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtrctrl{}; 
        namespace DtrctrlValC{
        }
        ///Source for modem output pin RTS. This bit reads as 0 when modem loopback mode is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtsctrl{}; 
        namespace RtsctrlValC{
        }
        ///Loopback Mode Select. The modem loopback mode provides a mechanism to perform diagnostic loopback testing. Serial data from the transmitter is connected internally to serial input of the receiver. Input pin, RXD, has no effect on loopback and output pin, TXD is held in marking state. The DSR, CTS, DCD, and RI pins are ignored. Externally, DTR and  RTS are set inactive. Internally, the upper four bits of the MSR are driven by the lower four bits of the MCR. This permits modem status interrupts to be generated in loopback mode by writing the lower four bits of MCR.
        enum class LmsVal {
            disableModemLoopba=0x00000000,     ///<Disable modem loopback mode.
            enableModemLoopbac=0x00000001,     ///<Enable modem loopback mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LmsVal> lms{}; 
        namespace LmsValC{
            constexpr Register::FieldValue<decltype(lms),LmsVal::disableModemLoopba> disableModemLoopba{};
            constexpr Register::FieldValue<decltype(lms),LmsVal::enableModemLoopbac> enableModemLoopbac{};
        }
        ///RTS enable
        enum class RtsenVal {
            disableAutoRtsFlo=0x00000000,     ///<Disable auto-rts flow control.
            enableAutoRtsFlow=0x00000001,     ///<Enable auto-rts flow control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RtsenVal> rtsen{}; 
        namespace RtsenValC{
            constexpr Register::FieldValue<decltype(rtsen),RtsenVal::disableAutoRtsFlo> disableAutoRtsFlo{};
            constexpr Register::FieldValue<decltype(rtsen),RtsenVal::enableAutoRtsFlow> enableAutoRtsFlow{};
        }
        ///CTS enable
        enum class CtsenVal {
            disableAutoCtsFlo=0x00000000,     ///<Disable auto-cts flow control.
            enableAutoCtsFlow=0x00000001,     ///<Enable auto-cts flow control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CtsenVal> ctsen{}; 
        namespace CtsenValC{
            constexpr Register::FieldValue<decltype(ctsen),CtsenVal::disableAutoCtsFlo> disableAutoCtsFlo{};
            constexpr Register::FieldValue<decltype(ctsen),CtsenVal::enableAutoCtsFlow> enableAutoCtsFlow{};
        }
    }
    namespace Nonelsr{    ///<Line Status Register. Contains flags for transmit and receive status, including line errors.
        using Addr = Register::Address<0x40008014,0xfffffe00,0,unsigned>;
        ///Receiver Data Ready:LSR[0] is set when the RBR holds an unread character and is cleared when the USART RBR FIFO is empty.
        enum class RdrVal {
            rbrIsEmpty=0x00000000,     ///<RBR is empty.
            rbrContainsValidD=0x00000001,     ///<RBR contains valid data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RdrVal> rdr{}; 
        namespace RdrValC{
            constexpr Register::FieldValue<decltype(rdr),RdrVal::rbrIsEmpty> rbrIsEmpty{};
            constexpr Register::FieldValue<decltype(rdr),RdrVal::rbrContainsValidD> rbrContainsValidD{};
        }
        ///Overrun Error. The overrun error condition is set as soon as it occurs. A LSR read clears LSR[1]. LSR[1] is set when USART RSR has a new character assembled and the USART RBR FIFO is full. In this case, the USART RBR FIFO will not be overwritten and the character in the USART RSR will be lost.
        enum class OeVal {
            inactive=0x00000000,     ///<Overrun error status is inactive.
            active=0x00000001,     ///<Overrun error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OeVal> oe{}; 
        namespace OeValC{
            constexpr Register::FieldValue<decltype(oe),OeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(oe),OeVal::active> active{};
        }
        ///Parity Error. When the parity bit of a received character is in the wrong state, a parity error occurs. A LSR read clears LSR[2]. Time of parity error detection is dependent on FCR[0]. Note: A parity error is associated with the character at the top of the USART RBR FIFO.
        enum class PeVal {
            inactive=0x00000000,     ///<Parity error status is inactive.
            active=0x00000001,     ///<Parity error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(pe),PeVal::active> active{};
        }
        ///Framing Error. When the stop bit of a received character is a logic 0, a framing error occurs. A LSR read clears LSR[3]. The time of the framing error detection is dependent on FCR0. Upon detection of a framing error, the RX will attempt to re-synchronize to the data and assume that the bad stop bit is actually an early start bit. However, it cannot be assumed that the next received byte will be correct even if there is no Framing Error. Note: A framing error is associated with the character at the top of the USART RBR FIFO.
        enum class FeVal {
            inactive=0x00000000,     ///<Framing error status is inactive.
            active=0x00000001,     ///<Framing error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FeVal> fe{}; 
        namespace FeValC{
            constexpr Register::FieldValue<decltype(fe),FeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(fe),FeVal::active> active{};
        }
        ///Break Interrupt. When RXD1 is held in the spacing state (all zeros) for one full character transmission (start, data, parity, stop), a break interrupt occurs. Once the break condition has been detected, the receiver goes idle until RXD1 goes to marking state (all ones). A LSR read clears this status bit. The time of break detection is dependent on FCR[0]. Note: The break interrupt is associated with the character at the top of the USART RBR FIFO.
        enum class BiVal {
            inactive=0x00000000,     ///<Break interrupt status is inactive.
            active=0x00000001,     ///<Break interrupt status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BiVal> bi{}; 
        namespace BiValC{
            constexpr Register::FieldValue<decltype(bi),BiVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(bi),BiVal::active> active{};
        }
        ///Transmitter Holding Register Empty. THRE is set immediately upon detection of an empty USART THR and is cleared on a THR write.
        enum class ThreVal {
            thrContainsValidD=0x00000000,     ///<THR contains valid data.
            thrIsEmpty=0x00000001,     ///<THR is empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ThreVal> thre{}; 
        namespace ThreValC{
            constexpr Register::FieldValue<decltype(thre),ThreVal::thrContainsValidD> thrContainsValidD{};
            constexpr Register::FieldValue<decltype(thre),ThreVal::thrIsEmpty> thrIsEmpty{};
        }
        ///Transmitter Empty. TEMT is set when both THR and TSR are empty; TEMT is cleared when either the TSR or the THR contain valid data.
        enum class TemtVal {
            validD=0x00000000,     ///<THR and/or the TSR contains valid data.
            empty=0x00000001,     ///<THR and the TSR are empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TemtVal> temt{}; 
        namespace TemtValC{
            constexpr Register::FieldValue<decltype(temt),TemtVal::validD> validD{};
            constexpr Register::FieldValue<decltype(temt),TemtVal::empty> empty{};
        }
        ///Error in RX FIFO. LSR[7] is set when a character with a RX error such as framing error, parity error or break interrupt, is loaded into the RBR. This bit is cleared when the LSR register is read and there are no subsequent errors in the USART FIFO.
        enum class RxfeVal {
            noError=0x00000000,     ///<RBR contains no USART RX errors or FCR[0]=0.
            erro=0x00000001,     ///<USART RBR contains at least one USART RX error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxfeVal> rxfe{}; 
        namespace RxfeValC{
            constexpr Register::FieldValue<decltype(rxfe),RxfeVal::noError> noError{};
            constexpr Register::FieldValue<decltype(rxfe),RxfeVal::erro> erro{};
        }
        ///Tx Error. In smart card T=0 operation, this bit is set when the smart card has NACKed a transmitted character, one more than the number of times indicated by the TXRETRY field.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
    }
    namespace Nonemsr{    ///<Modem Status Register.
        using Addr = Register::Address<0x40008018,0xffffff00,0,unsigned>;
        ///Delta CTS. Set upon state change of input CTS. Cleared on an MSR read.
        enum class DctsVal {
            noChangeDetectedO=0x00000000,     ///<No change detected on modem input, CTS.
            stateChangeDetecte=0x00000001,     ///<State change detected on modem input, CTS.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DctsVal> dcts{}; 
        namespace DctsValC{
            constexpr Register::FieldValue<decltype(dcts),DctsVal::noChangeDetectedO> noChangeDetectedO{};
            constexpr Register::FieldValue<decltype(dcts),DctsVal::stateChangeDetecte> stateChangeDetecte{};
        }
        ///Delta DSR. Set upon state change of input DSR. Cleared on an MSR read.
        enum class DdsrVal {
            noChangeDetectedO=0x00000000,     ///<No change detected on modem input, DSR.
            stateChangeDetecte=0x00000001,     ///<State change detected on modem input, DSR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DdsrVal> ddsr{}; 
        namespace DdsrValC{
            constexpr Register::FieldValue<decltype(ddsr),DdsrVal::noChangeDetectedO> noChangeDetectedO{};
            constexpr Register::FieldValue<decltype(ddsr),DdsrVal::stateChangeDetecte> stateChangeDetecte{};
        }
        ///Trailing Edge RI. Set upon low to high transition of input RI. Cleared on an MSR read.
        enum class TeriVal {
            noChangeDetectedO=0x00000000,     ///<No change detected on modem input, RI.
            lowToHighTransiti=0x00000001,     ///<Low-to-high transition detected on RI.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TeriVal> teri{}; 
        namespace TeriValC{
            constexpr Register::FieldValue<decltype(teri),TeriVal::noChangeDetectedO> noChangeDetectedO{};
            constexpr Register::FieldValue<decltype(teri),TeriVal::lowToHighTransiti> lowToHighTransiti{};
        }
        ///Delta DCD. Set upon state change of input DCD. Cleared on an MSR read.
        enum class DdcdVal {
            noChangeDetectedO=0x00000000,     ///<No change detected on modem input, DCD.
            stateChangeDetecte=0x00000001,     ///<State change detected on modem input, DCD.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DdcdVal> ddcd{}; 
        namespace DdcdValC{
            constexpr Register::FieldValue<decltype(ddcd),DdcdVal::noChangeDetectedO> noChangeDetectedO{};
            constexpr Register::FieldValue<decltype(ddcd),DdcdVal::stateChangeDetecte> stateChangeDetecte{};
        }
        ///Clear To Send State. Complement of input signal CTS. This bit is connected to MCR[1] in modem loopback mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cts{}; 
        namespace CtsValC{
        }
        ///Data Set Ready State. Complement of input signal DSR. This bit is connected to MCR[0] in modem loopback mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dsr{}; 
        namespace DsrValC{
        }
        ///Ring Indicator State. Complement of input RI. This bit is connected to MCR[2] in modem loopback mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ri{}; 
        namespace RiValC{
        }
        ///Data Carrier Detect State. Complement of input DCD. This bit is connected to MCR[3] in modem loopback mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcd{}; 
        namespace DcdValC{
        }
    }
    namespace Nonescr{    ///<Scratch Pad Register. Eight-bit temporary storage for software.
        using Addr = Register::Address<0x4000801c,0xffffff00,0,unsigned>;
        ///A readable, writable byte.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pad{}; 
        namespace PadValC{
        }
    }
    namespace Noneacr{    ///<Auto-baud Control Register. Contains controls for the auto-baud feature.
        using Addr = Register::Address<0x40008020,0xfffffcf8,0,unsigned>;
        ///This bit is automatically cleared after auto-baud completion.
        enum class StartVal {
            autoBaudStopAuto=0x00000000,     ///<Auto-baud stop (auto-baud is not running).
            autoBaudStartAut=0x00000001,     ///<Auto-baud start (auto-baud is running). Auto-baud run bit. This bit is automatically cleared after auto-baud completion.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start),StartVal::autoBaudStopAuto> autoBaudStopAuto{};
            constexpr Register::FieldValue<decltype(start),StartVal::autoBaudStartAut> autoBaudStartAut{};
        }
        ///Auto-baud mode select bit.
        enum class ModeVal {
            mode0=0x00000000,     ///<Mode 0.
            mode1=0x00000001,     ///<Mode 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::mode0> mode0{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::mode1> mode1{};
        }
        ///Start mode
        enum class AutorestartVal {
            noRestart=0x00000000,     ///<No restart
            restartInCaseOfT=0x00000001,     ///<Restart in case of time-out (counter restarts at next USART Rx falling edge)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AutorestartVal> autorestart{}; 
        namespace AutorestartValC{
            constexpr Register::FieldValue<decltype(autorestart),AutorestartVal::noRestart> noRestart{};
            constexpr Register::FieldValue<decltype(autorestart),AutorestartVal::restartInCaseOfT> restartInCaseOfT{};
        }
        ///End of auto-baud interrupt clear bit (write only accessible).
        enum class AbeointclrVal {
            noImpact=0x00000000,     ///<Writing a 0 has no impact.
            clear=0x00000001,     ///<Writing a 1 will clear the corresponding interrupt in the IIR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AbeointclrVal> abeointclr{}; 
        namespace AbeointclrValC{
            constexpr Register::FieldValue<decltype(abeointclr),AbeointclrVal::noImpact> noImpact{};
            constexpr Register::FieldValue<decltype(abeointclr),AbeointclrVal::clear> clear{};
        }
        ///Auto-baud time-out interrupt clear bit (write only accessible).
        enum class AbtointclrVal {
            noImpact=0x00000000,     ///<Writing a 0 has no impact.
            clear=0x00000001,     ///<Writing a 1 will clear the corresponding interrupt in the IIR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AbtointclrVal> abtointclr{}; 
        namespace AbtointclrValC{
            constexpr Register::FieldValue<decltype(abtointclr),AbtointclrVal::noImpact> noImpact{};
            constexpr Register::FieldValue<decltype(abtointclr),AbtointclrVal::clear> clear{};
        }
    }
    namespace Noneicr{    ///<IrDA Control Register. Enables and configures the IrDA (remote control) mode.
        using Addr = Register::Address<0x40008024,0xffffffc0,0,unsigned>;
        ///IrDA mode enable
        enum class IrdaenVal {
            irdaModeIsDisable=0x00000000,     ///<IrDA mode is disabled, USARTn acts as a standard USART.
            irdaModeIsEnabled=0x00000001,     ///<IrDA mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrdaenVal> irdaen{}; 
        namespace IrdaenValC{
            constexpr Register::FieldValue<decltype(irdaen),IrdaenVal::irdaModeIsDisable> irdaModeIsDisable{};
            constexpr Register::FieldValue<decltype(irdaen),IrdaenVal::irdaModeIsEnabled> irdaModeIsEnabled{};
        }
        ///Serial input inverter
        enum class IrdainvVal {
            inverted=0x00000000,     ///<The serial input is not inverted.
            notInverted=0x00000001,     ///<The serial input is inverted. This has no effect on the serial output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrdainvVal> irdainv{}; 
        namespace IrdainvValC{
            constexpr Register::FieldValue<decltype(irdainv),IrdainvVal::inverted> inverted{};
            constexpr Register::FieldValue<decltype(irdainv),IrdainvVal::notInverted> notInverted{};
        }
        ///IrDA fixed pulse width mode.
        enum class FixpulseenVal {
            disabled=0x00000000,     ///<IrDA fixed pulse width mode disabled.
            enabled=0x00000001,     ///<IrDA fixed pulse width mode enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FixpulseenVal> fixpulseen{}; 
        namespace FixpulseenValC{
            constexpr Register::FieldValue<decltype(fixpulseen),FixpulseenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fixpulseen),FixpulseenVal::enabled> enabled{};
        }
        ///Configures the pulse width when FixPulseEn = 1.
        enum class PulsedivVal {
            v3Div16XBaudRate=0x00000000,     ///<3 / (16 x baud rate)
            v2XTpclk=0x00000001,     ///<2 x TPCLK
            v4XTpclk=0x00000002,     ///<4 x TPCLK
            v8XTpclk=0x00000003,     ///<8 x TPCLK
            v16XTpclk=0x00000004,     ///<16 x TPCLK
            v32XTpclk=0x00000005,     ///<32 x TPCLK
            v64XTpclk=0x00000006,     ///<64 x TPCLK
            v128XTpclk=0x00000007,     ///<128 x TPCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,PulsedivVal> pulsediv{}; 
        namespace PulsedivValC{
            constexpr Register::FieldValue<decltype(pulsediv),PulsedivVal::v3Div16XBaudRate> v3Div16XBaudRate{};
            constexpr Register::FieldValue<decltype(pulsediv),PulsedivVal::v2XTpclk> v2XTpclk{};
            constexpr Register::FieldValue<decltype(pulsediv),PulsedivVal::v4XTpclk> v4XTpclk{};
            constexpr Register::FieldValue<decltype(pulsediv),PulsedivVal::v8XTpclk> v8XTpclk{};
            constexpr Register::FieldValue<decltype(pulsediv),PulsedivVal::v16XTpclk> v16XTpclk{};
            constexpr Register::FieldValue<decltype(pulsediv),PulsedivVal::v32XTpclk> v32XTpclk{};
            constexpr Register::FieldValue<decltype(pulsediv),PulsedivVal::v64XTpclk> v64XTpclk{};
            constexpr Register::FieldValue<decltype(pulsediv),PulsedivVal::v128XTpclk> v128XTpclk{};
        }
    }
    namespace Nonefdr{    ///<Fractional Divider Register. Generates a clock input for the baud rate divider.
        using Addr = Register::Address<0x40008028,0xffffff00,0,unsigned>;
        ///Baud rate generation pre-scaler divisor value. If this field is 0, fractional baud rate generator will not impact the USART baud rate.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> divaddval{}; 
        namespace DivaddvalValC{
        }
        ///Baud rate pre-scaler multiplier value. This field must be greater or equal 1 for USART to operate properly, regardless of whether the fractional baud rate generator is used or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> mulval{}; 
        namespace MulvalValC{
        }
    }
    namespace Noneosr{    ///<Oversampling Register. Controls the degree of oversampling during each bit time.
        using Addr = Register::Address<0x4000802c,0xffff8001,0,unsigned>;
        ///Fractional part of the oversampling ratio, in units of 1/8th of an input clock period. (001 = 0.125, ..., 111 = 0.875)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> osfrac{}; 
        namespace OsfracValC{
        }
        ///Integer part of the oversampling ratio, minus 1. The reset values equate to the normal operating mode of 16 input clocks per bit time.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> osint{}; 
        namespace OsintValC{
        }
        ///In Smart Card mode, these bits act as a more-significant extension of the OSint field, allowing an oversampling ratio up to 2048 as required by ISO7816-3. In Smart Card mode, bits 14:4 should initially be set to 371, yielding an oversampling ratio of 372.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fdint{}; 
        namespace FdintValC{
        }
    }
    namespace Noneter{    ///<Transmit Enable Register. Turns off USART transmitter for use with software flow control.
        using Addr = Register::Address<0x40008030,0xffffff7f,0,unsigned>;
        ///When this bit is 1, as it is after a Reset, data written to the THR is output on the TXD pin as soon as any preceding data has been sent. If this bit cleared to 0 while a character is being sent, the transmission of that character is completed, but no further characters are sent until this bit is set again. In other words, a 0 in this bit blocks the transfer of characters from the THR or TX FIFO into the transmit shift register. Software can clear this bit when it detects that the a hardware-handshaking TX-permit signal (CTS) has gone false, or with software handshaking, when it receives an XOFF character (DC3). Software can set this bit again when it detects that the TX-permit signal has gone true, or when it receives an XON (DC1) character.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txen{}; 
        namespace TxenValC{
        }
    }
    namespace Nonehden{    ///<Half duplex enable register.
        using Addr = Register::Address<0x40008040,0xfffffffe,0,unsigned>;
        ///Half-duplex mode enable
        enum class HdenVal {
            disableHalfDuplex=0x00000000,     ///<Disable half-duplex mode.
            enableHalfDuplexM=0x00000001,     ///<Enable half-duplex mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HdenVal> hden{}; 
        namespace HdenValC{
            constexpr Register::FieldValue<decltype(hden),HdenVal::disableHalfDuplex> disableHalfDuplex{};
            constexpr Register::FieldValue<decltype(hden),HdenVal::enableHalfDuplexM> enableHalfDuplexM{};
        }
    }
    namespace Nonescictrl{    ///<Smart Card Interface Control register. Enables and configures the Smart Card Interface feature.
        using Addr = Register::Address<0x40008048,0xffff0018,0,unsigned>;
        ///Smart Card Interface Enable.
        enum class ScienVal {
            smartCardInterface=0x00000000,     ///<Smart card interface disabled.
            asynchronousHalfDu=0x00000001,     ///<Asynchronous half duplex smart card interface is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ScienVal> scien{}; 
        namespace ScienValC{
            constexpr Register::FieldValue<decltype(scien),ScienVal::smartCardInterface> smartCardInterface{};
            constexpr Register::FieldValue<decltype(scien),ScienVal::asynchronousHalfDu> asynchronousHalfDu{};
        }
        ///NACK response disable. Only applicable in T=0.
        enum class NackdisVal {
            enabled=0x00000000,     ///<A NACK response is enabled.
            disabled=0x00000001,     ///<A NACK response is inhibited.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,NackdisVal> nackdis{}; 
        namespace NackdisValC{
            constexpr Register::FieldValue<decltype(nackdis),NackdisVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(nackdis),NackdisVal::disabled> disabled{};
        }
        ///Protocol selection as defined in the ISO7816-3 standard.
        enum class ProtselVal {
            tEq0=0x00000000,     ///<T = 0
            tEq1=0x00000001,     ///<T = 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ProtselVal> protsel{}; 
        namespace ProtselValC{
            constexpr Register::FieldValue<decltype(protsel),ProtselVal::tEq0> tEq0{};
            constexpr Register::FieldValue<decltype(protsel),ProtselVal::tEq1> tEq1{};
        }
        ///When the protocol selection T bit (above) is 0, the field controls the maximum number of retransmissions that the USART will attempt if the remote device signals NACK. When NACK has occurred this number of times plus one, the Tx Error bit in the LSR is set, an interrupt is requested if enabled, and the USART is locked until the FIFO is cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> txretry{}; 
        namespace TxretryValC{
        }
        ///When the protocol selection T bit (above) is 0, this field indicates the number of bit times (ETUs) by which the guard time after a character transmitted by the USART should exceed the nominal 2 bit times. 0xFF in this field may indicate that there is just a single bit after a character and 11 bit times/character
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> xtraguard{}; 
        namespace XtraguardValC{
        }
    }
    namespace Noners485ctrl{    ///<RS-485/EIA-485 Control. Contains controls to configure various aspects of RS-485/EIA-485 modes.
        using Addr = Register::Address<0x4000804c,0xffffffc0,0,unsigned>;
        ///NMM enable.
        enum class NmmenVal {
            disabled=0x00000000,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is disabled.
            enabled=0x00000001,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is enabled. In this mode, an address is detected when a received byte causes the USART to set the parity error and generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,NmmenVal> nmmen{}; 
        namespace NmmenValC{
            constexpr Register::FieldValue<decltype(nmmen),NmmenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(nmmen),NmmenVal::enabled> enabled{};
        }
        ///Receiver enable.
        enum class RxdisVal {
            theReceiverIsEnab=0x00000000,     ///<The receiver is enabled.
            theReceiverIsDisa=0x00000001,     ///<The receiver is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RxdisVal> rxdis{}; 
        namespace RxdisValC{
            constexpr Register::FieldValue<decltype(rxdis),RxdisVal::theReceiverIsEnab> theReceiverIsEnab{};
            constexpr Register::FieldValue<decltype(rxdis),RxdisVal::theReceiverIsDisa> theReceiverIsDisa{};
        }
        ///AAD enable.
        enum class AadenVal {
            autoAddressDetect=0x00000000,     ///<Auto Address Detect (AAD) is disabled.
            autoAddressDetect=0x00000001,     ///<Auto Address Detect (AAD) is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AadenVal> aaden{}; 
        namespace AadenValC{
            constexpr Register::FieldValue<decltype(aaden),AadenVal::autoAddressDetect> autoAddressDetect{};
            constexpr Register::FieldValue<decltype(aaden),AadenVal::autoAddressDetect> autoAddressDetect{};
        }
        ///Select direction control pin
        enum class SelVal {
            rts=0x00000000,     ///<If direction control is enabled (bit DCTRL = 1), pin RTS is used for direction control.
            dtr=0x00000001,     ///<If direction control is enabled (bit DCTRL = 1), pin DTR is used for direction control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::rts> rts{};
            constexpr Register::FieldValue<decltype(sel),SelVal::dtr> dtr{};
        }
        ///Auto direction control enable.
        enum class DctrlVal {
            disableAutoDirecti=0x00000000,     ///<Disable Auto Direction Control.
            enableAutoDirectio=0x00000001,     ///<Enable Auto Direction Control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DctrlVal> dctrl{}; 
        namespace DctrlValC{
            constexpr Register::FieldValue<decltype(dctrl),DctrlVal::disableAutoDirecti> disableAutoDirecti{};
            constexpr Register::FieldValue<decltype(dctrl),DctrlVal::enableAutoDirectio> enableAutoDirectio{};
        }
        ///Polarity control. This bit reverses the polarity of the direction control signal on the RTS (or DTR) pin.
        enum class OinvVal {
            low=0x00000000,     ///<The direction control pin will be driven to logic 0 when the transmitter has data to be sent. It will be driven to logic 1 after the last bit of data has been transmitted.
            high=0x00000001,     ///<The direction control pin will be driven to logic 1 when the transmitter has data to be sent. It will be driven to logic 0 after the last bit of data has been transmitted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OinvVal> oinv{}; 
        namespace OinvValC{
            constexpr Register::FieldValue<decltype(oinv),OinvVal::low> low{};
            constexpr Register::FieldValue<decltype(oinv),OinvVal::high> high{};
        }
    }
    namespace Noners485adrmatch{    ///<RS-485/EIA-485 address match. Contains the address match value for RS-485/EIA-485 mode.
        using Addr = Register::Address<0x40008050,0xffffff00,0,unsigned>;
        ///Contains the address match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adrmatch{}; 
        namespace AdrmatchValC{
        }
    }
    namespace Noners485dly{    ///<RS-485/EIA-485 direction control delay.
        using Addr = Register::Address<0x40008054,0xffffff00,0,unsigned>;
        ///Contains the direction control (RTS or DTR) delay value. This register works in conjunction with an 8-bit counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dly{}; 
        namespace DlyValC{
        }
    }
    namespace Nonesyncctrl{    ///<Synchronous mode control register.
        using Addr = Register::Address<0x40008058,0xffffff80,0,unsigned>;
        ///Enables synchronous mode.
        enum class SyncVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SyncVal> sync{}; 
        namespace SyncValC{
            constexpr Register::FieldValue<decltype(sync),SyncVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sync),SyncVal::enabled> enabled{};
        }
        ///Clock source select.
        enum class CsrcVal {
            synchronousSlaveMo=0x00000000,     ///<Synchronous slave mode (SCLK in)
            synchronousMasterM=0x00000001,     ///<Synchronous master mode (SCLK out)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CsrcVal> csrc{}; 
        namespace CsrcValC{
            constexpr Register::FieldValue<decltype(csrc),CsrcVal::synchronousSlaveMo> synchronousSlaveMo{};
            constexpr Register::FieldValue<decltype(csrc),CsrcVal::synchronousMasterM> synchronousMasterM{};
        }
        ///Falling edge sampling.
        enum class FesVal {
            rising=0x00000000,     ///<RxD is sampled on the rising edge of SCLK 
            falling=0x00000001,     ///<RxD is sampled on the falling edge of SCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FesVal> fes{}; 
        namespace FesValC{
            constexpr Register::FieldValue<decltype(fes),FesVal::rising> rising{};
            constexpr Register::FieldValue<decltype(fes),FesVal::falling> falling{};
        }
        ///Transmit synchronization bypass in synchronous slave mode.
        enum class TsbypassVal {
            sync=0x00000000,     ///<The input clock is synchronized prior to being used in clock edge detection logic
            nosync=0x00000001,     ///<The input clock is not synchronized prior to being used in clock edge detection logic. This allows for a high er input clock rate at the expense of potential metastability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TsbypassVal> tsbypass{}; 
        namespace TsbypassValC{
            constexpr Register::FieldValue<decltype(tsbypass),TsbypassVal::sync> sync{};
            constexpr Register::FieldValue<decltype(tsbypass),TsbypassVal::nosync> nosync{};
        }
        ///Continuous master clock enable (used only when CSRC is 1)
        enum class CscenVal {
            sclkCyclesOnlyWhe=0x00000000,     ///<SCLK cycles only when characters are being sent on TxD
            sclkRunsContinuous=0x00000001,     ///<SCLK runs continuously (characters can be received on RxD independently from transmission on TxD)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CscenVal> cscen{}; 
        namespace CscenValC{
            constexpr Register::FieldValue<decltype(cscen),CscenVal::sclkCyclesOnlyWhe> sclkCyclesOnlyWhe{};
            constexpr Register::FieldValue<decltype(cscen),CscenVal::sclkRunsContinuous> sclkRunsContinuous{};
        }
        ///Start/stop bits
        enum class SsdisVal {
            sendStartAndStop=0x00000000,     ///<Send start and stop bits as in other modes.
            doNotSendStartstop=0x00000001,     ///<Do not send start/stop bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SsdisVal> ssdis{}; 
        namespace SsdisValC{
            constexpr Register::FieldValue<decltype(ssdis),SsdisVal::sendStartAndStop> sendStartAndStop{};
            constexpr Register::FieldValue<decltype(ssdis),SsdisVal::doNotSendStartstop> doNotSendStartstop{};
        }
        ///Continuous clock clear
        enum class CcclrVal {
            cscenIsUnderSoftw=0x00000000,     ///<CSCEN is under software control.
            hardwareClearsCsce=0x00000001,     ///<Hardware clears CSCEN after each character is received.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CcclrVal> ccclr{}; 
        namespace CcclrValC{
            constexpr Register::FieldValue<decltype(ccclr),CcclrVal::cscenIsUnderSoftw> cscenIsUnderSoftw{};
            constexpr Register::FieldValue<decltype(ccclr),CcclrVal::hardwareClearsCsce> hardwareClearsCsce{};
        }
    }
}
