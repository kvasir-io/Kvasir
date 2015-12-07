#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//UART1  
    namespace Nonerbr{    ///<DLAB =0 Receiver Buffer Register. Contains the next received character to be read.
        using Addr = Register::Address<0x40010000,0xffffff00,0,unsigned>;
        ///The UART1 Receiver Buffer Register contains the oldest received byte in the UART1 RX FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rbr{}; 
        namespace RbrValC{
        }
    }
    namespace Nonethr{    ///<DLAB =0. Transmit Holding Register. The next character to be transmitted is written here.
        using Addr = Register::Address<0x40010000,0xffffff00,0,unsigned>;
        ///Writing to the UART1 Transmit Holding Register causes the data to be stored in the UART1 transmit FIFO. The byte will be sent when it reaches the bottom of the FIFO and the transmitter is available.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> thr{}; 
        namespace ThrValC{
        }
    }
    namespace Nonedll{    ///<DLAB =1. Divisor Latch LSB. Least significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider.
        using Addr = Register::Address<0x40010000,0xffffff00,0,unsigned>;
        ///The UART1 Divisor Latch LSB Register, along with the U1DLM register, determines the baud rate of the UART1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dllsb{}; 
        namespace DllsbValC{
        }
    }
    namespace Nonedlm{    ///<DLAB =1. Divisor Latch MSB. Most significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider.
        using Addr = Register::Address<0x40010004,0xffffff00,0,unsigned>;
        ///The UART1 Divisor Latch MSB Register, along with the U1DLL register, determines the baud rate of the UART1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dlmsb{}; 
        namespace DlmsbValC{
        }
    }
    namespace Noneier{    ///<DLAB =0. Interrupt Enable Register. Contains individual interrupt enable bits for the 7 potential UART1 interrupts.
        using Addr = Register::Address<0x40010004,0xfffffc70,0,unsigned>;
        ///RBR Interrupt Enable. Enables the Receive Data Available interrupt for UART1. It also controls the Character Receive Time-out interrupt.
        enum class RbrieVal {
            disableTheRdaInte=0x00000000,     ///<Disable the RDA interrupts.
            enableTheRdaInter=0x00000001,     ///<Enable the RDA interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RbrieVal> rbrie{}; 
        namespace RbrieValC{
            constexpr Register::FieldValue<decltype(rbrie),RbrieVal::disableTheRdaInte> disableTheRdaInte{};
            constexpr Register::FieldValue<decltype(rbrie),RbrieVal::enableTheRdaInter> enableTheRdaInter{};
        }
        ///THRE Interrupt Enable. Enables the THRE interrupt for UART1. The status of this interrupt can be read from LSR[5].
        enum class ThreieVal {
            disableTheThreInt=0x00000000,     ///<Disable the THRE interrupts.
            enableTheThreInte=0x00000001,     ///<Enable the THRE interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ThreieVal> threie{}; 
        namespace ThreieValC{
            constexpr Register::FieldValue<decltype(threie),ThreieVal::disableTheThreInt> disableTheThreInt{};
            constexpr Register::FieldValue<decltype(threie),ThreieVal::enableTheThreInte> enableTheThreInte{};
        }
        ///RX Line Interrupt Enable. Enables the UART1 RX line status interrupts. The status of this interrupt can be read from LSR[4:1].
        enum class RxieVal {
            disableTheRxLine=0x00000000,     ///<Disable the RX line status interrupts.
            enableTheRxLineS=0x00000001,     ///<Enable the RX line status interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxieVal> rxie{}; 
        namespace RxieValC{
            constexpr Register::FieldValue<decltype(rxie),RxieVal::disableTheRxLine> disableTheRxLine{};
            constexpr Register::FieldValue<decltype(rxie),RxieVal::enableTheRxLineS> enableTheRxLineS{};
        }
        ///Modem Status Interrupt Enable. Enables the modem interrupt. The status of this interrupt can be read from MSR[3:0].
        enum class MsieVal {
            disableTheModemIn=0x00000000,     ///<Disable the modem interrupt.
            enableTheModemInt=0x00000001,     ///<Enable the modem interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,MsieVal> msie{}; 
        namespace MsieValC{
            constexpr Register::FieldValue<decltype(msie),MsieVal::disableTheModemIn> disableTheModemIn{};
            constexpr Register::FieldValue<decltype(msie),MsieVal::enableTheModemInt> enableTheModemInt{};
        }
        ///CTS Interrupt Enable. If auto-cts mode is enabled this bit enables/disables the modem status interrupt generation on a CTS1 signal transition. If auto-cts mode is disabled a CTS1 transition will generate an interrupt if Modem Status Interrupt Enable (IER[3]) is set. In normal operation a CTS1 signal transition will generate a Modem Status Interrupt unless the interrupt has been disabled by clearing the IER[3] bit in the IER register. In auto-cts mode a transition on the CTS1 bit will trigger an interrupt only if both the IER[3] and IER[7] bits are set.
        enum class CtsieVal {
            disableTheCtsInte=0x00000000,     ///<Disable the CTS interrupt.
            enableTheCtsInter=0x00000001,     ///<Enable the CTS interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CtsieVal> ctsie{}; 
        namespace CtsieValC{
            constexpr Register::FieldValue<decltype(ctsie),CtsieVal::disableTheCtsInte> disableTheCtsInte{};
            constexpr Register::FieldValue<decltype(ctsie),CtsieVal::enableTheCtsInter> enableTheCtsInter{};
        }
        ///Enables the end of auto-baud interrupt.
        enum class AbeoieVal {
            disableEndOfAuto=0x00000000,     ///<Disable end of auto-baud Interrupt.
            enableEndOfAutoB=0x00000001,     ///<Enable end of auto-baud Interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AbeoieVal> abeoie{}; 
        namespace AbeoieValC{
            constexpr Register::FieldValue<decltype(abeoie),AbeoieVal::disableEndOfAuto> disableEndOfAuto{};
            constexpr Register::FieldValue<decltype(abeoie),AbeoieVal::enableEndOfAutoB> enableEndOfAutoB{};
        }
        ///Enables the auto-baud time-out interrupt.
        enum class AbtoieVal {
            disableAutoBaudTi=0x00000000,     ///<Disable auto-baud time-out Interrupt.
            enableAutoBaudTim=0x00000001,     ///<Enable auto-baud time-out Interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AbtoieVal> abtoie{}; 
        namespace AbtoieValC{
            constexpr Register::FieldValue<decltype(abtoie),AbtoieVal::disableAutoBaudTi> disableAutoBaudTi{};
            constexpr Register::FieldValue<decltype(abtoie),AbtoieVal::enableAutoBaudTim> enableAutoBaudTim{};
        }
    }
    namespace Noneiir{    ///<Interrupt ID Register. Identifies which interrupt(s) are pending.
        using Addr = Register::Address<0x40010008,0xfffffc30,0,unsigned>;
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
        ///Interrupt identification. IER[3:1] identifies an interrupt corresponding to the UART1 Rx or TX FIFO. All other combinations of IER[3:1] not listed below are reserved (100,101,111).
        enum class IntidVal {
            rls=0x00000003,     ///<1   - Receive Line Status (RLS).
            rda=0x00000002,     ///<2a - Receive Data Available (RDA).
            cti=0x00000006,     ///<2b - Character Time-out Indicator (CTI).
            thre=0x00000001,     ///<3   - THRE Interrupt.
            modem=0x00000000,     ///<4   - Modem Interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,IntidVal> intid{}; 
        namespace IntidValC{
            constexpr Register::FieldValue<decltype(intid),IntidVal::rls> rls{};
            constexpr Register::FieldValue<decltype(intid),IntidVal::rda> rda{};
            constexpr Register::FieldValue<decltype(intid),IntidVal::cti> cti{};
            constexpr Register::FieldValue<decltype(intid),IntidVal::thre> thre{};
            constexpr Register::FieldValue<decltype(intid),IntidVal::modem> modem{};
        }
        ///Copies of FCR[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> fifoenable{}; 
        namespace FifoenableValC{
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
    namespace Nonefcr{    ///<FIFO Control Register. Controls UART1 FIFO usage and modes.
        using Addr = Register::Address<0x40010008,0xffffff30,0,unsigned>;
        ///FIFO enable.
        enum class FifoenVal {
            mustNotBeUsedIn=0x00000000,     ///<Must not be used in the application.
            activeHighEnableF=0x00000001,     ///<Active high enable for both UART1 Rx and TX FIFOs and FCR[7:1] access. This bit must be set for proper UART1 operation. Any transition on this bit will automatically clear the UART1 FIFOs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FifoenVal> fifoen{}; 
        namespace FifoenValC{
            constexpr Register::FieldValue<decltype(fifoen),FifoenVal::mustNotBeUsedIn> mustNotBeUsedIn{};
            constexpr Register::FieldValue<decltype(fifoen),FifoenVal::activeHighEnableF> activeHighEnableF{};
        }
        ///RX FIFO Reset.
        enum class RxfiforesVal {
            noImpactOnEither=0x00000000,     ///<No impact on either of UART1 FIFOs.
            writingALogic1To=0x00000001,     ///<Writing a logic 1 to FCR[1] will clear all bytes in UART1 Rx FIFO, reset the pointer logic. This bit is self-clearing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RxfiforesVal> rxfifores{}; 
        namespace RxfiforesValC{
            constexpr Register::FieldValue<decltype(rxfifores),RxfiforesVal::noImpactOnEither> noImpactOnEither{};
            constexpr Register::FieldValue<decltype(rxfifores),RxfiforesVal::writingALogic1To> writingALogic1To{};
        }
        ///TX FIFO Reset.
        enum class TxfiforesVal {
            noImpactOnEither=0x00000000,     ///<No impact on either of UART1 FIFOs.
            writingALogic1To=0x00000001,     ///<Writing a logic 1 to FCR[2] will clear all bytes in UART1 TX FIFO, reset the pointer logic. This bit is self-clearing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TxfiforesVal> txfifores{}; 
        namespace TxfiforesValC{
            constexpr Register::FieldValue<decltype(txfifores),TxfiforesVal::noImpactOnEither> noImpactOnEither{};
            constexpr Register::FieldValue<decltype(txfifores),TxfiforesVal::writingALogic1To> writingALogic1To{};
        }
        ///DMA Mode Select. When the FIFO enable bit (bit 0 of this register) is set, this bit selects the DMA mode. See Section 36.6.6.1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmamode{}; 
        namespace DmamodeValC{
        }
        ///RX Trigger Level. These two bits determine how many receiver UART1 FIFO characters must be written before an interrupt is activated.
        enum class RxtriglvlVal {
            triggerLevel01C=0x00000000,     ///<Trigger level 0 (1 character or 0x01).
            triggerLevel14C=0x00000001,     ///<Trigger level 1 (4 characters or 0x04).
            triggerLevel28C=0x00000002,     ///<Trigger level 2 (8 characters or 0x08).
            triggerLevel314=0x00000003,     ///<Trigger level 3 (14 characters or 0x0E).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,RxtriglvlVal> rxtriglvl{}; 
        namespace RxtriglvlValC{
            constexpr Register::FieldValue<decltype(rxtriglvl),RxtriglvlVal::triggerLevel01C> triggerLevel01C{};
            constexpr Register::FieldValue<decltype(rxtriglvl),RxtriglvlVal::triggerLevel14C> triggerLevel14C{};
            constexpr Register::FieldValue<decltype(rxtriglvl),RxtriglvlVal::triggerLevel28C> triggerLevel28C{};
            constexpr Register::FieldValue<decltype(rxtriglvl),RxtriglvlVal::triggerLevel314> triggerLevel314{};
        }
    }
    namespace Nonelcr{    ///<Line Control Register. Contains controls for frame formatting and break generation.
        using Addr = Register::Address<0x4001000c,0xffffff00,0,unsigned>;
        ///Word Length Select.
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
        ///Stop Bit Select.
        enum class SbsVal {
            v1StopBit=0x00000000,     ///<1 stop bit.
            v2StopBits15If=0x00000001,     ///<2 stop bits (1.5 if LCR[1:0]=00).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SbsVal> sbs{}; 
        namespace SbsValC{
            constexpr Register::FieldValue<decltype(sbs),SbsVal::v1StopBit> v1StopBit{};
            constexpr Register::FieldValue<decltype(sbs),SbsVal::v2StopBits15If> v2StopBits15If{};
        }
        ///Parity Enable.
        enum class PeVal {
            disableParityGener=0x00000000,     ///<Disable parity generation and checking.
            enableParityGenera=0x00000001,     ///<Enable parity generation and checking.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::disableParityGener> disableParityGener{};
            constexpr Register::FieldValue<decltype(pe),PeVal::enableParityGenera> enableParityGenera{};
        }
        ///Parity Select.
        enum class PsVal {
            oddParityNumberO=0x00000000,     ///<Odd parity. Number of 1s in the transmitted character and the attached parity bit will be odd.
            evenParityNumber=0x00000001,     ///<Even Parity. Number of 1s in the transmitted character and the attached parity bit will be even.
            forced1stickPar=0x00000002,     ///<Forced 1 stick parity.
            forced0stickPar=0x00000003,     ///<Forced 0 stick parity.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::oddParityNumberO> oddParityNumberO{};
            constexpr Register::FieldValue<decltype(ps),PsVal::evenParityNumber> evenParityNumber{};
            constexpr Register::FieldValue<decltype(ps),PsVal::forced1stickPar> forced1stickPar{};
            constexpr Register::FieldValue<decltype(ps),PsVal::forced0stickPar> forced0stickPar{};
        }
        ///Break Control.
        enum class BcVal {
            disableBreakTransm=0x00000000,     ///<Disable break transmission.
            enableBreakTransmi=0x00000001,     ///<Enable break transmission. Output pin UART1 TXD is forced to logic 0 when LCR[6] is active high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,BcVal> bc{}; 
        namespace BcValC{
            constexpr Register::FieldValue<decltype(bc),BcVal::disableBreakTransm> disableBreakTransm{};
            constexpr Register::FieldValue<decltype(bc),BcVal::enableBreakTransmi> enableBreakTransmi{};
        }
        ///Divisor Latch Access Bit (DLAB)
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
    namespace Nonemcr{    ///<Modem Control Register. Contains controls for flow control handshaking and loopback mode.
        using Addr = Register::Address<0x40010010,0xffffff2c,0,unsigned>;
        ///DTR Control.  Source for modem output pin, DTR. This bit reads as 0 when modem loopback mode is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtrctrl{}; 
        namespace DtrctrlValC{
        }
        ///RTS Control.  Source for modem output pin RTS. This bit reads as 0 when modem loopback mode is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtsctrl{}; 
        namespace RtsctrlValC{
        }
        ///Loopback Mode Select.  The modem loopback mode provides a mechanism to perform diagnostic loopback testing. Serial data from the transmitter is connected internally to serial input of the receiver. Input pin, RXD1, has no effect on loopback and output pin, TXD1 is held in marking state. The 4 modem inputs (CTS, DSR, RI and DCD) are disconnected externally. Externally, the modem outputs (RTS, DTR) are set inactive. Internally, the 4 modem outputs are connected to the 4 modem inputs. As a result of these connections, the upper 4 bits of the MSR will be driven by the lower 4 bits of the MCR rather than the 4 modem inputs in normal mode. This permits modem status interrupts to be generated in loopback mode by writing the lower 4 bits of MCR.
        enum class LmsVal {
            disableModemLoopba=0x00000000,     ///<Disable modem loopback mode.
            enableModemLoopbac=0x00000001,     ///<Enable modem loopback mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,LmsVal> lms{}; 
        namespace LmsValC{
            constexpr Register::FieldValue<decltype(lms),LmsVal::disableModemLoopba> disableModemLoopba{};
            constexpr Register::FieldValue<decltype(lms),LmsVal::enableModemLoopbac> enableModemLoopbac{};
        }
        ///RTS enable.
        enum class RtsenVal {
            disableAutoRtsFlo=0x00000000,     ///<Disable auto-rts flow control.
            enableAutoRtsFlow=0x00000001,     ///<Enable auto-rts flow control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RtsenVal> rtsen{}; 
        namespace RtsenValC{
            constexpr Register::FieldValue<decltype(rtsen),RtsenVal::disableAutoRtsFlo> disableAutoRtsFlo{};
            constexpr Register::FieldValue<decltype(rtsen),RtsenVal::enableAutoRtsFlow> enableAutoRtsFlow{};
        }
        ///CTS enable.
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
        using Addr = Register::Address<0x40010014,0xffffff00,0,unsigned>;
        ///Receiver Data Ready.  LSR[0] is set when the RBR holds an unread character and is cleared when the UART1 RBR FIFO is empty.
        enum class RdrVal {
            empty=0x00000000,     ///<The UART1 receiver FIFO is empty.
            notempty=0x00000001,     ///<The UART1 receiver FIFO is not empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RdrVal> rdr{}; 
        namespace RdrValC{
            constexpr Register::FieldValue<decltype(rdr),RdrVal::empty> empty{};
            constexpr Register::FieldValue<decltype(rdr),RdrVal::notempty> notempty{};
        }
        ///Overrun Error. The overrun error condition is set as soon as it occurs. An LSR read clears LSR[1]. LSR[1] is set when UART1 RSR has a new character assembled and the UART1 RBR FIFO is full. In this case, the UART1 RBR FIFO will not be overwritten and the character in the UART1 RSR will be lost.
        enum class OeVal {
            inactive=0x00000000,     ///<Overrun error status is inactive.
            active=0x00000001,     ///<Overrun error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OeVal> oe{}; 
        namespace OeValC{
            constexpr Register::FieldValue<decltype(oe),OeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(oe),OeVal::active> active{};
        }
        ///Parity Error. When the parity bit of a received character is in the wrong state, a parity error occurs. An LSR read clears LSR[2]. Time of parity error detection is dependent on FCR[0]. Note: A parity error is associated with the character at the top of the UART1 RBR FIFO.
        enum class PeVal {
            inactive=0x00000000,     ///<Parity error status is inactive.
            active=0x00000001,     ///<Parity error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe),PeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(pe),PeVal::active> active{};
        }
        ///Framing Error. When the stop bit of a received character is a logic 0, a framing error occurs. An LSR read clears LSR[3]. The time of the framing error detection is dependent on FCR0. Upon detection of a framing error, the RX will attempt to resynchronize to the data and assume that the bad stop bit is actually an early start bit. However, it cannot be assumed that the next received byte will be correct even if there is no Framing Error. Note: A framing error is associated with the character at the top of the UART1 RBR FIFO.
        enum class FeVal {
            inactive=0x00000000,     ///<Framing error status is inactive.
            active=0x00000001,     ///<Framing error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FeVal> fe{}; 
        namespace FeValC{
            constexpr Register::FieldValue<decltype(fe),FeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(fe),FeVal::active> active{};
        }
        ///Break Interrupt.  When RXD1 is held in the spacing state (all zeroes) for one full character transmission (start, data, parity, stop), a break interrupt occurs. Once the break condition has been detected, the receiver goes idle until RXD1 goes to marking state (all ones). An LSR read clears this status bit. The time of break detection is dependent on FCR[0]. Note: The break interrupt is associated with the character at the top of the UART1 RBR FIFO.
        enum class BiVal {
            inactive=0x00000000,     ///<Break interrupt status is inactive.
            active=0x00000001,     ///<Break interrupt status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BiVal> bi{}; 
        namespace BiValC{
            constexpr Register::FieldValue<decltype(bi),BiVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(bi),BiVal::active> active{};
        }
        ///Transmitter Holding Register Empty.  THRE is set immediately upon detection of an empty UART1 THR and is cleared on a THR write.
        enum class ThreVal {
            valid=0x00000000,     ///<THR contains valid data.
            thrIsEmpty=0x00000001,     ///<THR is empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ThreVal> thre{}; 
        namespace ThreValC{
            constexpr Register::FieldValue<decltype(thre),ThreVal::valid> valid{};
            constexpr Register::FieldValue<decltype(thre),ThreVal::thrIsEmpty> thrIsEmpty{};
        }
        ///Transmitter Empty.  TEMT is set when both THR and TSR are empty; TEMT is cleared when either the TSR or the THR contain valid data.
        enum class TemtVal {
            valid=0x00000000,     ///<THR and/or the TSR contains valid data.
            empty=0x00000001,     ///<THR and the TSR are empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TemtVal> temt{}; 
        namespace TemtValC{
            constexpr Register::FieldValue<decltype(temt),TemtVal::valid> valid{};
            constexpr Register::FieldValue<decltype(temt),TemtVal::empty> empty{};
        }
        ///Error in RX FIFO. LSR[7] is set when a character with a RX error such as framing error, parity error or break interrupt, is loaded into the RBR. This bit is cleared when the LSR register is read and there are no subsequent errors in the UART1 FIFO.
        enum class RxfeVal {
            noerror=0x00000000,     ///<RBR contains no UART1 RX errors or FCR[0]=0.
            errors=0x00000001,     ///<UART1 RBR contains at least one UART1 RX error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxfeVal> rxfe{}; 
        namespace RxfeValC{
            constexpr Register::FieldValue<decltype(rxfe),RxfeVal::noerror> noerror{};
            constexpr Register::FieldValue<decltype(rxfe),RxfeVal::errors> errors{};
        }
    }
    namespace Nonemsr{    ///<Modem Status Register. Contains handshake signal status flags.
        using Addr = Register::Address<0x40010018,0xffffff00,0,unsigned>;
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
    namespace Nonescr{    ///<Scratch Pad Register. 8-bit temporary storage for software.
        using Addr = Register::Address<0x4001001c,0xffffff00,0,unsigned>;
        ///A readable, writable byte.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pad{}; 
        namespace PadValC{
        }
    }
    namespace Noneacr{    ///<Auto-baud Control Register. Contains controls for the auto-baud feature.
        using Addr = Register::Address<0x40010020,0xfffffcf8,0,unsigned>;
        ///Auto-baud start bit. This bit is automatically cleared after auto-baud completion.
        enum class StartVal {
            stop=0x00000000,     ///<Auto-baud stop (auto-baud is not running).
            start=0x00000001,     ///<Auto-baud start (auto-baud is running). Auto-baud run bit. This bit is automatically cleared after auto-baud completion.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start),StartVal::stop> stop{};
            constexpr Register::FieldValue<decltype(start),StartVal::start> start{};
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
        ///Auto-baud restart bit.
        enum class AutorestartVal {
            noRestart=0x00000000,     ///<No restart
            restartInCaseOfT=0x00000001,     ///<Restart in case of time-out (counter restarts at next UART1 Rx falling edge)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AutorestartVal> autorestart{}; 
        namespace AutorestartValC{
            constexpr Register::FieldValue<decltype(autorestart),AutorestartVal::noRestart> noRestart{};
            constexpr Register::FieldValue<decltype(autorestart),AutorestartVal::restartInCaseOfT> restartInCaseOfT{};
        }
        ///End of auto-baud interrupt clear bit (write-only).
        enum class AbeointclrVal {
            writingA0HasNoI=0x00000000,     ///<Writing a 0 has no impact.
            writingA1WillCle=0x00000001,     ///<Writing a 1 will clear the corresponding interrupt in the IIR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AbeointclrVal> abeointclr{}; 
        namespace AbeointclrValC{
            constexpr Register::FieldValue<decltype(abeointclr),AbeointclrVal::writingA0HasNoI> writingA0HasNoI{};
            constexpr Register::FieldValue<decltype(abeointclr),AbeointclrVal::writingA1WillCle> writingA1WillCle{};
        }
        ///Auto-baud time-out interrupt clear bit (write-only).
        enum class AbtointclrVal {
            writingA0HasNoI=0x00000000,     ///<Writing a 0 has no impact.
            writingA1WillCle=0x00000001,     ///<Writing a 1 will clear the corresponding interrupt in the IIR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AbtointclrVal> abtointclr{}; 
        namespace AbtointclrValC{
            constexpr Register::FieldValue<decltype(abtointclr),AbtointclrVal::writingA0HasNoI> writingA0HasNoI{};
            constexpr Register::FieldValue<decltype(abtointclr),AbtointclrVal::writingA1WillCle> writingA1WillCle{};
        }
    }
    namespace Nonefdr{    ///<Fractional Divider Register. Generates a clock input for the baud rate divider.
        using Addr = Register::Address<0x40010028,0xffffff00,0,unsigned>;
        ///Baud rate generation pre-scaler divisor value. If this field is 0, fractional baud rate generator will not impact the UART1 baud rate.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> divaddval{}; 
        namespace DivaddvalValC{
        }
        ///Baud rate pre-scaler multiplier value. This field must be greater or equal 1 for UART1 to operate properly, regardless of whether the fractional baud rate generator is used or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> mulval{}; 
        namespace MulvalValC{
        }
    }
    namespace Noneter{    ///<Transmit Enable Register. Turns off UART transmitter for use with software flow control.
        using Addr = Register::Address<0x40010030,0xffffff7f,0,unsigned>;
        ///When this bit is 1, as it is after a Reset, data written to the THR is output on the TXD pin as soon as any preceding data has been sent. If this bit cleared to 0 while a character is being sent, the transmission of that character is completed, but no further characters are sent until this bit is set again. In other words, a 0 in this bit blocks the transfer of characters from the THR or TX FIFO into the transmit shift register. Software can clear this bit when it detects that the a hardware-handshaking TX-permit signal (CTS) has gone false, or with software handshaking, when it receives an XOFF character (DC3). Software can set this bit again when it detects that the TX-permit signal has gone true, or when it receives an XON (DC1) character.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txen{}; 
        namespace TxenValC{
        }
    }
    namespace Noners485ctrl{    ///<RS-485/EIA-485 Control. Contains controls to configure various aspects of RS-485/EIA-485 modes.
        using Addr = Register::Address<0x4001004c,0xffffffc0,0,unsigned>;
        ///RS-485/EIA-485 Normal Multidrop Mode (NMM) mode select.
        enum class NmmenVal {
            disabled=0x00000000,     ///<Disabled.
            enabledInThisMod=0x00000001,     ///<Enabled. In this mode, an address is detected when a received byte causes the UART to set the parity error and generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,NmmenVal> nmmen{}; 
        namespace NmmenValC{
            constexpr Register::FieldValue<decltype(nmmen),NmmenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(nmmen),NmmenVal::enabledInThisMod> enabledInThisMod{};
        }
        ///Receive enable.
        enum class RxdisVal {
            enabled=0x00000000,     ///<Enabled.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RxdisVal> rxdis{}; 
        namespace RxdisValC{
            constexpr Register::FieldValue<decltype(rxdis),RxdisVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxdis),RxdisVal::disabled> disabled{};
        }
        ///Auto Address Detect (AAD) enable.
        enum class AadenVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AadenVal> aaden{}; 
        namespace AadenValC{
            constexpr Register::FieldValue<decltype(aaden),AadenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(aaden),AadenVal::enabled> enabled{};
        }
        ///Direction control.
        enum class SelVal {
            rtsIfDirectionCo=0x00000000,     ///<RTS. If direction control is enabled (bit DCTRL = 1), pin RTS is used for direction control.
            dtrIfDirectionCo=0x00000001,     ///<DTR. If direction control is enabled (bit DCTRL = 1), pin DTR is used for direction control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SelVal> sel{}; 
        namespace SelValC{
            constexpr Register::FieldValue<decltype(sel),SelVal::rtsIfDirectionCo> rtsIfDirectionCo{};
            constexpr Register::FieldValue<decltype(sel),SelVal::dtrIfDirectionCo> dtrIfDirectionCo{};
        }
        ///Direction control enable.
        enum class DctrlVal {
            disableAutoDirecti=0x00000000,     ///<Disable Auto Direction Control.
            enableAutoDirectio=0x00000001,     ///<Enable Auto Direction Control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DctrlVal> dctrl{}; 
        namespace DctrlValC{
            constexpr Register::FieldValue<decltype(dctrl),DctrlVal::disableAutoDirecti> disableAutoDirecti{};
            constexpr Register::FieldValue<decltype(dctrl),DctrlVal::enableAutoDirectio> enableAutoDirectio{};
        }
        ///Polarity. This bit reverses the polarity of the direction control signal on the RTS (or DTR) pin.
        enum class OinvVal {
            lowTheDirectionC=0x00000000,     ///<LOW. The direction control pin will be driven to logic 0 when the transmitter has data to be sent. It will be driven to logic 1 after the last bit of data has been transmitted.
            highTheDirection=0x00000001,     ///<HIGH. The direction control pin will be driven to logic 1 when the transmitter has data to be sent. It will be driven to logic 0 after the last bit of data has been transmitted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OinvVal> oinv{}; 
        namespace OinvValC{
            constexpr Register::FieldValue<decltype(oinv),OinvVal::lowTheDirectionC> lowTheDirectionC{};
            constexpr Register::FieldValue<decltype(oinv),OinvVal::highTheDirection> highTheDirection{};
        }
    }
    namespace Noners485adrmatch{    ///<RS-485/EIA-485 address match. Contains the address match value for RS-485/EIA-485 mode.
        using Addr = Register::Address<0x40010050,0xffffff00,0,unsigned>;
        ///Contains the address match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adrmatch{}; 
        namespace AdrmatchValC{
        }
    }
    namespace Noners485dly{    ///<RS-485/EIA-485 direction control delay.
        using Addr = Register::Address<0x40010054,0xffffff00,0,unsigned>;
        ///Contains the direction control (RTS or DTR) delay value. This register works in conjunction with an 8-bit counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dly{}; 
        namespace DlyValC{
        }
    }
}
