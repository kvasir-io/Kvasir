#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//UART4 
    namespace Nonerbr{    ///<Receiver Buffer Register. Contains the next received character to be read (DLAB =0).
        using Addr = Register::Address<0x400a4000,0xffffff00,0,unsigned>;
        ///The UART4 Receiver Buffer Register contains the oldest received byte in the UART4 Rx FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rbr{}; 
    }
    namespace Nonethr{    ///<Transmit Holding Register. The next character to be transmitted is written here (DLAB =0).
        using Addr = Register::Address<0x400a4000,0xffffff00,0,unsigned>;
        ///Writing to the UART4 Transmit Holding Register causes the data to be stored in the UART4 transmit FIFO. The byte will be sent when it reaches the bottom of the FIFO and the transmitter is available.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> thr{}; 
    }
    namespace Nonedll{    ///<Divisor Latch LSB. Least significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider (DLAB =1).
        using Addr = Register::Address<0x400a4000,0xffffff00,0,unsigned>;
        ///The UART4 Divisor Latch LSB Register, along with the U4DLM register, determines the baud rate of the UART4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dllsb{}; 
    }
    namespace Nonedlm{    ///<Divisor Latch MSB. Most significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider (DLAB =1).
        using Addr = Register::Address<0x400a4004,0xffffff00,0,unsigned>;
        ///The UART4 Divisor Latch MSB Register, along with the U0DLL register, determines the baud rate of the UART4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dlmsb{}; 
    }
    namespace Noneier{    ///<Interrupt Enable Register. Contains individual interrupt enable bits for the 7 potential UART interrupts (DLAB =0).
        using Addr = Register::Address<0x400a4004,0xfffffcf8,0,unsigned>;
        ///RBR Interrupt Enable. Enables the Receive Data Available interrupt for UARTn. It also controls the Character Receive Time-out interrupt.
        enum class RbrieVal {
            disableTheRdaInte=0x00000000,     ///<Disable the RDA interrupts.
            enableTheRdaInter=0x00000001,     ///<Enable the RDA interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RbrieVal> rbrie{}; 
        namespace RbrieValC{
            constexpr Register::FieldValue<decltype(rbrie)::Type,RbrieVal::disableTheRdaInte> disableTheRdaInte{};
            constexpr Register::FieldValue<decltype(rbrie)::Type,RbrieVal::enableTheRdaInter> enableTheRdaInter{};
        }
        ///THRE Interrupt Enable. Enables the THRE interrupt for UARTn. The status of this can be read from UnLSR[5].
        enum class ThreieVal {
            disableTheThreInt=0x00000000,     ///<Disable the THRE interrupts.
            enableTheThreInte=0x00000001,     ///<Enable the THRE interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ThreieVal> threie{}; 
        namespace ThreieValC{
            constexpr Register::FieldValue<decltype(threie)::Type,ThreieVal::disableTheThreInt> disableTheThreInt{};
            constexpr Register::FieldValue<decltype(threie)::Type,ThreieVal::enableTheThreInte> enableTheThreInte{};
        }
        ///RX Line Status Interrupt Enable. Enables the UARTn RX line status interrupts. The status of this interrupt can be read from UnLSR[4:1].
        enum class RxieVal {
            disableTheRxLine=0x00000000,     ///<Disable the RX line status interrupts.
            enableTheRxLineS=0x00000001,     ///<Enable the RX line status interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxieVal> rxie{}; 
        namespace RxieValC{
            constexpr Register::FieldValue<decltype(rxie)::Type,RxieVal::disableTheRxLine> disableTheRxLine{};
            constexpr Register::FieldValue<decltype(rxie)::Type,RxieVal::enableTheRxLineS> enableTheRxLineS{};
        }
        ///Enables the end of auto-baud interrupt.
        enum class AbeointenVal {
            disableEndOfAuto=0x00000000,     ///<Disable end of auto-baud Interrupt.
            enableEndOfAutoB=0x00000001,     ///<Enable end of auto-baud Interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AbeointenVal> abeointen{}; 
        namespace AbeointenValC{
            constexpr Register::FieldValue<decltype(abeointen)::Type,AbeointenVal::disableEndOfAuto> disableEndOfAuto{};
            constexpr Register::FieldValue<decltype(abeointen)::Type,AbeointenVal::enableEndOfAutoB> enableEndOfAutoB{};
        }
        ///Enables the auto-baud time-out interrupt.
        enum class AbtointenVal {
            disableAutoBaudTi=0x00000000,     ///<Disable auto-baud time-out Interrupt.
            enableAutoBaudTim=0x00000001,     ///<Enable auto-baud time-out Interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AbtointenVal> abtointen{}; 
        namespace AbtointenValC{
            constexpr Register::FieldValue<decltype(abtointen)::Type,AbtointenVal::disableAutoBaudTi> disableAutoBaudTi{};
            constexpr Register::FieldValue<decltype(abtointen)::Type,AbtointenVal::enableAutoBaudTim> enableAutoBaudTim{};
        }
    }
    namespace Noneiir{    ///<Interrupt ID Register. Identifies which interrupt(s) are pending.
        using Addr = Register::Address<0x400a4008,0xfffffc30,0,unsigned>;
        ///Interrupt status. Note that U4IIR[0] is active low. The pending interrupt can be determined by evaluating U4IIR[3:1].
        enum class IntstatusVal {
            atLeastOneInterru=0x00000000,     ///<At least one interrupt is pending.
            noInterruptIsPend=0x00000001,     ///<No interrupt is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntstatusVal> intstatus{}; 
        namespace IntstatusValC{
            constexpr Register::FieldValue<decltype(intstatus)::Type,IntstatusVal::atLeastOneInterru> atLeastOneInterru{};
            constexpr Register::FieldValue<decltype(intstatus)::Type,IntstatusVal::noInterruptIsPend> noInterruptIsPend{};
        }
        ///Interrupt identification. U4IER[3:1] identifies an interrupt corresponding to the UART4 Rx or TX FIFO. All other combinations of U4IER[3:1] not listed below are reserved (000,100,101,111).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> intid{}; 
        ///Copies of U4FCR[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> fifoenable{}; 
        ///End of auto-baud interrupt. True if auto-baud has finished successfully and interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> abeoint{}; 
        ///Auto-baud time-out interrupt. True if auto-baud has timed out and interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> abtoint{}; 
    }
    namespace Nonefcr{    ///<FIFO Control Register. Controls UART FIFO usage and modes.
        using Addr = Register::Address<0x400a4008,0xffffff30,0,unsigned>;
        ///FIFO Enable.
        enum class FifoenVal {
            uartnFifosAreDisa=0x00000000,     ///<UARTn FIFOs are disabled. Must not be used in the application.
            activeHighEnableF=0x00000001,     ///<Active high enable for both UARTn Rx and TX FIFOs and UnFCR[7:1] access. This bit must be set for proper UART operation. Any transition on this bit will automatically clear the related UART FIFOs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FifoenVal> fifoen{}; 
        namespace FifoenValC{
            constexpr Register::FieldValue<decltype(fifoen)::Type,FifoenVal::uartnFifosAreDisa> uartnFifosAreDisa{};
            constexpr Register::FieldValue<decltype(fifoen)::Type,FifoenVal::activeHighEnableF> activeHighEnableF{};
        }
        ///RX FIFO Reset.
        enum class RxfiforesVal {
            noImpactOnEither=0x00000000,     ///<No impact on either of UARTn FIFOs.
            writingALogic1To=0x00000001,     ///<Writing a logic 1 to UnFCR[1] will clear all bytes in UARTn Rx FIFO, reset the pointer logic. This bit is self-clearing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RxfiforesVal> rxfifores{}; 
        namespace RxfiforesValC{
            constexpr Register::FieldValue<decltype(rxfifores)::Type,RxfiforesVal::noImpactOnEither> noImpactOnEither{};
            constexpr Register::FieldValue<decltype(rxfifores)::Type,RxfiforesVal::writingALogic1To> writingALogic1To{};
        }
        ///TX FIFO Reset.
        enum class TxfiforesVal {
            noImpactOnEither=0x00000000,     ///<No impact on either of UARTn FIFOs.
            writingALogic1To=0x00000001,     ///<Writing a logic 1 to UnFCR[2] will clear all bytes in UARTn TX FIFO, reset the pointer logic. This bit is self-clearing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TxfiforesVal> txfifores{}; 
        namespace TxfiforesValC{
            constexpr Register::FieldValue<decltype(txfifores)::Type,TxfiforesVal::noImpactOnEither> noImpactOnEither{};
            constexpr Register::FieldValue<decltype(txfifores)::Type,TxfiforesVal::writingALogic1To> writingALogic1To{};
        }
        ///DMA Mode Select. When the FIFO enable (bit 0 of this register) is set, this bit selects the DMA mode. See Section 20.6.6.1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmamode{}; 
        ///RX Trigger Level. These two bits determine how many receiver UARTn FIFO characters must be written before an interrupt or DMA request is activated.
        enum class RxtriglvlVal {
            triggerLevel01C=0x00000000,     ///<Trigger level 0 (1 character or 0x01).
            triggerLevel14C=0x00000001,     ///<Trigger level 1 (4 characters or 0x04).
            triggerLevel28C=0x00000002,     ///<Trigger level 2 (8 characters or 0x08).
            triggerLevel314=0x00000003,     ///<Trigger level 3 (14 characters or 0x0E).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,RxtriglvlVal> rxtriglvl{}; 
        namespace RxtriglvlValC{
            constexpr Register::FieldValue<decltype(rxtriglvl)::Type,RxtriglvlVal::triggerLevel01C> triggerLevel01C{};
            constexpr Register::FieldValue<decltype(rxtriglvl)::Type,RxtriglvlVal::triggerLevel14C> triggerLevel14C{};
            constexpr Register::FieldValue<decltype(rxtriglvl)::Type,RxtriglvlVal::triggerLevel28C> triggerLevel28C{};
            constexpr Register::FieldValue<decltype(rxtriglvl)::Type,RxtriglvlVal::triggerLevel314> triggerLevel314{};
        }
    }
    namespace Nonelcr{    ///<Line Control Register. Contains controls for frame formatting and break generation.
        using Addr = Register::Address<0x400a400c,0xffffff00,0,unsigned>;
        ///Word Length Select.
        enum class WlsVal {
            v5BitCharacterLeng=0x00000000,     ///<5-bit character length
            v6BitCharacterLeng=0x00000001,     ///<6-bit character length
            v7BitCharacterLeng=0x00000002,     ///<7-bit character length
            v8BitCharacterLeng=0x00000003,     ///<8-bit character length
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,WlsVal> wls{}; 
        namespace WlsValC{
            constexpr Register::FieldValue<decltype(wls)::Type,WlsVal::v5BitCharacterLeng> v5BitCharacterLeng{};
            constexpr Register::FieldValue<decltype(wls)::Type,WlsVal::v6BitCharacterLeng> v6BitCharacterLeng{};
            constexpr Register::FieldValue<decltype(wls)::Type,WlsVal::v7BitCharacterLeng> v7BitCharacterLeng{};
            constexpr Register::FieldValue<decltype(wls)::Type,WlsVal::v8BitCharacterLeng> v8BitCharacterLeng{};
        }
        ///Stop Bit Select
        enum class SbsVal {
            v1StopBit=0x00000000,     ///<1 stop bit.
            v2StopBits15If=0x00000001,     ///<2 stop bits (1.5 if UnLCR[1:0]=00).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SbsVal> sbs{}; 
        namespace SbsValC{
            constexpr Register::FieldValue<decltype(sbs)::Type,SbsVal::v1StopBit> v1StopBit{};
            constexpr Register::FieldValue<decltype(sbs)::Type,SbsVal::v2StopBits15If> v2StopBits15If{};
        }
        ///Parity Enable.
        enum class PeVal {
            disableParityGener=0x00000000,     ///<Disable parity generation and checking.
            enableParityGenera=0x00000001,     ///<Enable parity generation and checking.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::disableParityGener> disableParityGener{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::enableParityGenera> enableParityGenera{};
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
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::oddParityNumberO> oddParityNumberO{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::evenParityNumber> evenParityNumber{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::forced1StickParit> forced1StickParit{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::forced0StickParit> forced0StickParit{};
        }
        ///Break Control
        enum class BcVal {
            disableBreakTransm=0x00000000,     ///<Disable break transmission.
            enableBreakTransmi=0x00000001,     ///<Enable break transmission. Output pin UARTn TXD is forced to logic 0 when UnLCR[6] is active high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,BcVal> bc{}; 
        namespace BcValC{
            constexpr Register::FieldValue<decltype(bc)::Type,BcVal::disableBreakTransm> disableBreakTransm{};
            constexpr Register::FieldValue<decltype(bc)::Type,BcVal::enableBreakTransmi> enableBreakTransmi{};
        }
        ///Divisor Latch Access Bit
        enum class DlabVal {
            disableAccessToDi=0x00000000,     ///<Disable access to Divisor Latches.
            enableAccessToDiv=0x00000001,     ///<Enable access to Divisor Latches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DlabVal> dlab{}; 
        namespace DlabValC{
            constexpr Register::FieldValue<decltype(dlab)::Type,DlabVal::disableAccessToDi> disableAccessToDi{};
            constexpr Register::FieldValue<decltype(dlab)::Type,DlabVal::enableAccessToDiv> enableAccessToDiv{};
        }
    }
    namespace Nonelsr{    ///<Line Status Register. Contains flags for transmit and receive status, including line errors.
        using Addr = Register::Address<0x400a4014,0xffffff00,0,unsigned>;
        ///Receiver Data Ready. UnLSR[0] is set when the UnRBR holds an unread character and is cleared when the UARTn RBR FIFO is empty.
        enum class RdrVal {
            theUartnReceiverF=0x00000000,     ///<The UARTn receiver FIFO is empty.
            theUartnReceiverF=0x00000001,     ///<The UARTn receiver FIFO is not empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RdrVal> rdr{}; 
        namespace RdrValC{
            constexpr Register::FieldValue<decltype(rdr)::Type,RdrVal::theUartnReceiverF> theUartnReceiverF{};
            constexpr Register::FieldValue<decltype(rdr)::Type,RdrVal::theUartnReceiverF> theUartnReceiverF{};
        }
        ///Overrun Error. The overrun error condition is set as soon as it occurs. An UnLSR read clears UnLSR[1]. UnLSR[1] is set when UARTn RSR has a new character assembled and the UARTn RBR FIFO is full. In this case, the UARTn RBR FIFO will not be overwritten and the character in the UARTn RSR will be lost.
        enum class OeVal {
            overrunErrorStatus=0x00000000,     ///<Overrun error status is inactive.
            overrunErrorStatus=0x00000001,     ///<Overrun error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OeVal> oe{}; 
        namespace OeValC{
            constexpr Register::FieldValue<decltype(oe)::Type,OeVal::overrunErrorStatus> overrunErrorStatus{};
            constexpr Register::FieldValue<decltype(oe)::Type,OeVal::overrunErrorStatus> overrunErrorStatus{};
        }
        ///Parity Error. When the parity bit of a received character is in the wrong state, a parity error occurs. An UnLSR read clears UnLSR[2]. Time of parity error detection is dependent on UnFCR[0]. Note: A parity error is associated with the character at the top of the UARTn RBR FIFO.
        enum class PeVal {
            parityErrorStatus=0x00000000,     ///<Parity error status is inactive.
            parityErrorStatus=0x00000001,     ///<Parity error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::parityErrorStatus> parityErrorStatus{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::parityErrorStatus> parityErrorStatus{};
        }
        ///Framing Error. When the stop bit of a received character is a logic 0, a framing error occurs. An UnLSR read clears UnLSR[3]. The time of the framing error detection is dependent on UnFCR[0]. Upon detection of a framing error, the Rx will attempt to resynchronize to the data and assume that the bad stop bit is actually an early start bit. However, it cannot be assumed that the next received byte will be correct even if there is no Framing Error. Note: A framing error is associated with the character at the top of the UARTn RBR FIFO.
        enum class FeVal {
            framingErrorStatus=0x00000000,     ///<Framing error status is inactive.
            framingErrorStatus=0x00000001,     ///<Framing error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FeVal> fe{}; 
        namespace FeValC{
            constexpr Register::FieldValue<decltype(fe)::Type,FeVal::framingErrorStatus> framingErrorStatus{};
            constexpr Register::FieldValue<decltype(fe)::Type,FeVal::framingErrorStatus> framingErrorStatus{};
        }
        ///Break Interrupt. When RXDn is held in the spacing state (all zeroes) for one full character transmission (start, data, parity, stop), a break interrupt occurs. Once the break condition has been detected, the receiver goes idle until RXDn goes to marking state (all ones). An UnLSR read clears this status bit. The time of break detection is dependent on UnFCR[0]. Note: The break interrupt is associated with the character at the top of the UARTn RBR FIFO.
        enum class BiVal {
            breakInterruptStat=0x00000000,     ///<Break interrupt status is inactive.
            breakInterruptStat=0x00000001,     ///<Break interrupt status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BiVal> bi{}; 
        namespace BiValC{
            constexpr Register::FieldValue<decltype(bi)::Type,BiVal::breakInterruptStat> breakInterruptStat{};
            constexpr Register::FieldValue<decltype(bi)::Type,BiVal::breakInterruptStat> breakInterruptStat{};
        }
        ///Transmitter Holding Register Empty. THRE is set immediately upon detection of an empty UARTn THR and is cleared on a UnTHR write.
        enum class ThreVal {
            unthrContainsValid=0x00000000,     ///<UnTHR contains valid data.
            unthrIsEmpty=0x00000001,     ///<UnTHR is empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ThreVal> thre{}; 
        namespace ThreValC{
            constexpr Register::FieldValue<decltype(thre)::Type,ThreVal::unthrContainsValid> unthrContainsValid{};
            constexpr Register::FieldValue<decltype(thre)::Type,ThreVal::unthrIsEmpty> unthrIsEmpty{};
        }
        ///Transmitter Empty. TEMT is set when both UnTHR and UnTSR are empty; TEMT is cleared when either the UnTSR or the UnTHR contain valid data.
        enum class TemtVal {
            validData=0x00000000,     ///<UnTHR and/or the UnTSR contains valid data.
            empty=0x00000001,     ///<UnTHR and the UnTSR are empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TemtVal> temt{}; 
        namespace TemtValC{
            constexpr Register::FieldValue<decltype(temt)::Type,TemtVal::validData> validData{};
            constexpr Register::FieldValue<decltype(temt)::Type,TemtVal::empty> empty{};
        }
        ///Error in RX FIFO . UnLSR[7] is set when a character with a Rx error such as framing error, parity error or break interrupt, is loaded into the UnRBR. This bit is cleared when the UnLSR register is read and there are no subsequent errors in the UARTn FIFO.
        enum class RxfeVal {
            unrbrContainsNoUa=0x00000000,     ///<UnRBR contains no UARTn RX errors or UnFCR[0]=0.
            uartnRbrContainsA=0x00000001,     ///<UARTn RBR contains at least one UARTn RX error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxfeVal> rxfe{}; 
        namespace RxfeValC{
            constexpr Register::FieldValue<decltype(rxfe)::Type,RxfeVal::unrbrContainsNoUa> unrbrContainsNoUa{};
            constexpr Register::FieldValue<decltype(rxfe)::Type,RxfeVal::uartnRbrContainsA> uartnRbrContainsA{};
        }
    }
    namespace Nonescr{    ///<Scratch Pad Register. 8-bit temporary storage for software.
        using Addr = Register::Address<0x400a401c,0xffffff00,0,unsigned>;
        ///A readable, writable byte.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pad{}; 
    }
    namespace Noneacr{    ///<Auto-baud Control Register. Contains controls for the auto-baud feature.
        using Addr = Register::Address<0x400a4020,0xfffffcf8,0,unsigned>;
        ///Start bit. This bit is automatically cleared after auto-baud completion.
        enum class StartVal {
            autoBaudStopAuto=0x00000000,     ///<Auto-baud stop (auto-baud is not running).
            autoBaudStartAut=0x00000001,     ///<Auto-baud start (auto-baud is running). Auto-baud run bit. This bit is automatically cleared after auto-baud completion.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::autoBaudStopAuto> autoBaudStopAuto{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::autoBaudStartAut> autoBaudStartAut{};
        }
        ///Auto-baud mode select bit.
        enum class ModeVal {
            mode0=0x00000000,     ///<Mode 0.
            mode1=0x00000001,     ///<Mode 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::mode0> mode0{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::mode1> mode1{};
        }
        ///Restart bit.
        enum class AutorestartVal {
            noRestart=0x00000000,     ///<No restart.
            restartInCaseOfT=0x00000001,     ///<Restart in case of time-out (counter restarts at next UARTn Rx falling edge)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AutorestartVal> autorestart{}; 
        namespace AutorestartValC{
            constexpr Register::FieldValue<decltype(autorestart)::Type,AutorestartVal::noRestart> noRestart{};
            constexpr Register::FieldValue<decltype(autorestart)::Type,AutorestartVal::restartInCaseOfT> restartInCaseOfT{};
        }
        ///End of auto-baud interrupt clear bit (write-only accessible). Writing a 1 will clear the corresponding interrupt in the UnIIR. Writing a 0 has no impact.
        enum class AbeointclrVal {
            noImpact=0x00000000,     ///<No impact.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding interrupt in the IIR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AbeointclrVal> abeointclr{}; 
        namespace AbeointclrValC{
            constexpr Register::FieldValue<decltype(abeointclr)::Type,AbeointclrVal::noImpact> noImpact{};
            constexpr Register::FieldValue<decltype(abeointclr)::Type,AbeointclrVal::clearTheCorrespond> clearTheCorrespond{};
        }
        ///Auto-baud time-out interrupt clear bit (write-only accessible). Writing a 1 will clear the corresponding interrupt in the UnIIR. Writing a 0 has no impact.
        enum class AbtointclrVal {
            noImpact=0x00000000,     ///<No impact.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding interrupt in the IIR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AbtointclrVal> abtointclr{}; 
        namespace AbtointclrValC{
            constexpr Register::FieldValue<decltype(abtointclr)::Type,AbtointclrVal::noImpact> noImpact{};
            constexpr Register::FieldValue<decltype(abtointclr)::Type,AbtointclrVal::clearTheCorrespond> clearTheCorrespond{};
        }
    }
    namespace Noneicr{    ///<IrDA Control Register. Enables and configures the IrDA mode.
        using Addr = Register::Address<0x400a4024,0xffffffc0,0,unsigned>;
        ///IrDA mode
        enum class IrdaenVal {
            disabledIrdaMode=0x00000000,     ///<Disabled. IrDA mode on UART4 is disabled, UART4 acts as a standard UART.
            enabledIrdaModeO=0x00000001,     ///<Enabled. IrDA mode on UART4 is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrdaenVal> irdaen{}; 
        namespace IrdaenValC{
            constexpr Register::FieldValue<decltype(irdaen)::Type,IrdaenVal::disabledIrdaMode> disabledIrdaMode{};
            constexpr Register::FieldValue<decltype(irdaen)::Type,IrdaenVal::enabledIrdaModeO> enabledIrdaModeO{};
        }
        ///Serial input direction.
        enum class IrdainvVal {
            notInverted=0x00000000,     ///<Not inverted.
            invertedThisHasN=0x00000001,     ///<Inverted. This has no effect on the serial output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrdainvVal> irdainv{}; 
        namespace IrdainvValC{
            constexpr Register::FieldValue<decltype(irdainv)::Type,IrdainvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(irdainv)::Type,IrdainvVal::invertedThisHasN> invertedThisHasN{};
        }
        ///IrDA fixed pulse width mode.
        enum class FixpulseenVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FixpulseenVal> fixpulseen{}; 
        namespace FixpulseenValC{
            constexpr Register::FieldValue<decltype(fixpulseen)::Type,FixpulseenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fixpulseen)::Type,FixpulseenVal::enabled> enabled{};
        }
        ///Configures the pulse when FixPulseEn = 1.
        enum class PulsedivVal {
            v2xtpclk=0x00000000,     ///<2xTPCLK
            v4xtpclk=0x00000001,     ///<4xTPCLK
            v8xtpclk=0x00000002,     ///<8xTPCLK
            v16xtpclk=0x00000003,     ///<16xTPCLK
            v32xtpclk=0x00000004,     ///<32xTPCLK
            v64xtpclk=0x00000005,     ///<64xTPCLK
            v128xtpclk=0x00000006,     ///<128xTPCLK
            v256xtpclk=0x00000007,     ///<256xTPCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,PulsedivVal> pulsediv{}; 
        namespace PulsedivValC{
            constexpr Register::FieldValue<decltype(pulsediv)::Type,PulsedivVal::v2xtpclk> v2xtpclk{};
            constexpr Register::FieldValue<decltype(pulsediv)::Type,PulsedivVal::v4xtpclk> v4xtpclk{};
            constexpr Register::FieldValue<decltype(pulsediv)::Type,PulsedivVal::v8xtpclk> v8xtpclk{};
            constexpr Register::FieldValue<decltype(pulsediv)::Type,PulsedivVal::v16xtpclk> v16xtpclk{};
            constexpr Register::FieldValue<decltype(pulsediv)::Type,PulsedivVal::v32xtpclk> v32xtpclk{};
            constexpr Register::FieldValue<decltype(pulsediv)::Type,PulsedivVal::v64xtpclk> v64xtpclk{};
            constexpr Register::FieldValue<decltype(pulsediv)::Type,PulsedivVal::v128xtpclk> v128xtpclk{};
            constexpr Register::FieldValue<decltype(pulsediv)::Type,PulsedivVal::v256xtpclk> v256xtpclk{};
        }
    }
    namespace Nonefdr{    ///<Fractional Divider Register. Generates a clock input for the baud rate divider.
        using Addr = Register::Address<0x400a4028,0xffffff00,0,unsigned>;
        ///Baud Rate generation pre-scaler divisor value. If this field is 0, fractional baud rate generator will not impact the UART4 baud rate.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> divaddval{}; 
        ///Baud Rate pre-scaler multiplier value. This field must be greater or equal 1 for UART4 to operate properly, regardless of whether the fractional baud rate generator is used or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> mulval{}; 
    }
    namespace Noneosr{    ///<Oversampling register. Controls the degree of oversampling during each bit time.
        using Addr = Register::Address<0x400a402c,0xffff8001,0,unsigned>;
        ///Fractional part of the oversampling ratio, in units of 1/8th of an input clock period. (001 = 0.125, ..., 111 = 0.875)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> osfrac{}; 
        ///Integer part of the oversampling ratio, minus 1. The reset values equate to the normal operating mode of 16 input clocks per bit time.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> osint{}; 
        ///In smartcard mode, these bits act as a more-significant extension of the OSint field, allowing an oversampling ratio up to 2048 as required by ISO7816-3. In smartcard mode, bits 14:4 should initially be set to 371, yielding an oversampling ratio of 372.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fdint{}; 
    }
    namespace Nonescictrl{    ///<Smart Card Interface control register. Enables and configures the smartcard Interface feature.
        using Addr = Register::Address<0x400a4048,0xffff0018,0,unsigned>;
        ///Smart Card Interface Enable.
        enum class ScienVal {
            smartCardInterface=0x00000000,     ///<Smart card interface disabled.
            asynchronousHalfDu=0x00000001,     ///<Asynchronous half duplex smart card interface is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ScienVal> scien{}; 
        namespace ScienValC{
            constexpr Register::FieldValue<decltype(scien)::Type,ScienVal::smartCardInterface> smartCardInterface{};
            constexpr Register::FieldValue<decltype(scien)::Type,ScienVal::asynchronousHalfDu> asynchronousHalfDu{};
        }
        ///NACK response disable. Only applicable in T=0.
        enum class NackdisVal {
            aNackResponseIsE=0x00000000,     ///<A NACK response is enabled.
            aNackResponseIsI=0x00000001,     ///<A NACK response is inhibited.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,NackdisVal> nackdis{}; 
        namespace NackdisValC{
            constexpr Register::FieldValue<decltype(nackdis)::Type,NackdisVal::aNackResponseIsE> aNackResponseIsE{};
            constexpr Register::FieldValue<decltype(nackdis)::Type,NackdisVal::aNackResponseIsI> aNackResponseIsI{};
        }
        ///Protocol selection as defined in the ISO7816-3 standard.
        enum class ProtselVal {
            tEq0=0x00000000,     ///<T = 0
            tEq1=0x00000001,     ///<T = 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ProtselVal> protsel{}; 
        namespace ProtselValC{
            constexpr Register::FieldValue<decltype(protsel)::Type,ProtselVal::tEq0> tEq0{};
            constexpr Register::FieldValue<decltype(protsel)::Type,ProtselVal::tEq1> tEq1{};
        }
        ///Maximum number of retransmissions in case of a negative acknowledge (protocol T=0). When the retry counter is exceeded, the USART will be locked until the FIFO is cleared. A TX error interrupt is generated when enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> txretry{}; 
        ///Extra guard time. No extra guard time (0x0) results in a standard guard time as defined in ISO 7816-3, depending on the protocol type. A guard time of 0xFF indicates a minimal guard time as defined for the selected protocol.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> guardtime{}; 
    }
    namespace Noners485ctrl{    ///<RS-485/EIA-485 Control. Contains controls to configure various aspects of RS-485/EIA-485 modes.
        using Addr = Register::Address<0x400a404c,0xffffffc8,0,unsigned>;
        ///NMM enable.
        enum class NmmenVal {
            disabled=0x00000000,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is disabled.
            enabled=0x00000001,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is enabled. In this mode, an address is detected when a received byte causes the USART to set the parity error and generate an interrupt. See Section 20.6.18 RS-485/EIA-485 modes of operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,NmmenVal> nmmen{}; 
        namespace NmmenValC{
            constexpr Register::FieldValue<decltype(nmmen)::Type,NmmenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(nmmen)::Type,NmmenVal::enabled> enabled{};
        }
        ///Receiver enable.
        enum class RxdisVal {
            enabled=0x00000000,     ///<Enabled.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RxdisVal> rxdis{}; 
        namespace RxdisValC{
            constexpr Register::FieldValue<decltype(rxdis)::Type,RxdisVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxdis)::Type,RxdisVal::disabled> disabled{};
        }
        ///AAD enable
        enum class AadenVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AadenVal> aaden{}; 
        namespace AadenValC{
            constexpr Register::FieldValue<decltype(aaden)::Type,AadenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(aaden)::Type,AadenVal::enabled> enabled{};
        }
        ///Direction control for DIR pin.
        enum class DctrlVal {
            disableAutoDirecti=0x00000000,     ///<Disable Auto Direction Control.
            enableAutoDirectio=0x00000001,     ///<Enable Auto Direction Control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DctrlVal> dctrl{}; 
        namespace DctrlValC{
            constexpr Register::FieldValue<decltype(dctrl)::Type,DctrlVal::disableAutoDirecti> disableAutoDirecti{};
            constexpr Register::FieldValue<decltype(dctrl)::Type,DctrlVal::enableAutoDirectio> enableAutoDirectio{};
        }
        ///Direction control pin polarity. This bit reverses the polarity of the direction control signal on the DIR pin.
        enum class OinvVal {
            lowTheDirectionC=0x00000000,     ///<Low. The direction control pin will be driven to logic 0 when the transmitter has data to be sent. It will be driven to logic 1 after the last bit of data has been transmitted.
            highTheDirection=0x00000001,     ///<High. The direction control pin will be driven to logic 1 when the transmitter has data to be sent. It will be driven to logic 0 after the last bit of data has been transmitted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OinvVal> oinv{}; 
        namespace OinvValC{
            constexpr Register::FieldValue<decltype(oinv)::Type,OinvVal::lowTheDirectionC> lowTheDirectionC{};
            constexpr Register::FieldValue<decltype(oinv)::Type,OinvVal::highTheDirection> highTheDirection{};
        }
    }
    namespace Noners485adrmatch{    ///<RS-485/EIA-485 address match. Contains the address match value for RS-485/EIA-485 mode.
        using Addr = Register::Address<0x400a4050,0xffffff00,0,unsigned>;
        ///Contains the address match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adrmatch{}; 
    }
    namespace Noners485dly{    ///<RS-485/EIA-485 direction control delay.
        using Addr = Register::Address<0x400a4054,0xffffff00,0,unsigned>;
        ///Contains the direction control (U4OE) delay value. This register works in conjunction with an 8-bit counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Nonesyncctrl{    ///<Synchronous mode control register.
        using Addr = Register::Address<0x400a4058,0xffffff80,0,unsigned>;
        ///Enables synchronous mode.
        enum class SyncVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SyncVal> sync{}; 
        namespace SyncValC{
            constexpr Register::FieldValue<decltype(sync)::Type,SyncVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(sync)::Type,SyncVal::enabled> enabled{};
        }
        ///Clock source select.
        enum class CsrcVal {
            synchronousSlaveMo=0x00000000,     ///<Synchronous slave mode (SCLK in)
            synchronousMasterM=0x00000001,     ///<Synchronous master mode (SCLK out)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CsrcVal> csrc{}; 
        namespace CsrcValC{
            constexpr Register::FieldValue<decltype(csrc)::Type,CsrcVal::synchronousSlaveMo> synchronousSlaveMo{};
            constexpr Register::FieldValue<decltype(csrc)::Type,CsrcVal::synchronousMasterM> synchronousMasterM{};
        }
        ///Falling edge sampling.
        enum class FesVal {
            rxdIsSampledOnTh=0x00000000,     ///<RxD is sampled on the rising edge of SCLK
            rxdIsSampledOnTh=0x00000001,     ///<RxD is sampled on the falling edge of SCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FesVal> fes{}; 
        namespace FesValC{
            constexpr Register::FieldValue<decltype(fes)::Type,FesVal::rxdIsSampledOnTh> rxdIsSampledOnTh{};
            constexpr Register::FieldValue<decltype(fes)::Type,FesVal::rxdIsSampledOnTh> rxdIsSampledOnTh{};
        }
        ///Transmit synchronization bypass in synchronous slave mode.
        enum class TsbypassVal {
            theInputClockIsS=0x00000000,     ///<The input clock is synchronized prior to being used in clock edge detection logic.
            theInputClockIsN=0x00000001,     ///<The input clock is not synchronized prior to being used in clock edge detection logic. This allows for a high er input clock rate at the expense of potential metastability.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TsbypassVal> tsbypass{}; 
        namespace TsbypassValC{
            constexpr Register::FieldValue<decltype(tsbypass)::Type,TsbypassVal::theInputClockIsS> theInputClockIsS{};
            constexpr Register::FieldValue<decltype(tsbypass)::Type,TsbypassVal::theInputClockIsN> theInputClockIsN{};
        }
        ///Continuous master clock enable (used only when CSRC is 1)
        enum class CscenVal {
            sclkCyclesOnlyWhe=0x00000000,     ///<SCLK cycles only when characters are being sent on TxD
            sclkRunsContinuous=0x00000001,     ///<SCLK runs continuously (characters can be received on RxD independently from transmission on TxD)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,CscenVal> cscen{}; 
        namespace CscenValC{
            constexpr Register::FieldValue<decltype(cscen)::Type,CscenVal::sclkCyclesOnlyWhe> sclkCyclesOnlyWhe{};
            constexpr Register::FieldValue<decltype(cscen)::Type,CscenVal::sclkRunsContinuous> sclkRunsContinuous{};
        }
        ///Start/stop bits
        enum class SssdisVal {
            sendStartAndStop=0x00000000,     ///<Send start and stop bits as in other modes.
            nostartstopbit=0x00000001,     ///<Do not send start/stop bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SssdisVal> sssdis{}; 
        namespace SssdisValC{
            constexpr Register::FieldValue<decltype(sssdis)::Type,SssdisVal::sendStartAndStop> sendStartAndStop{};
            constexpr Register::FieldValue<decltype(sssdis)::Type,SssdisVal::nostartstopbit> nostartstopbit{};
        }
        ///Continuous clock clear
        enum class CcclrVal {
            cscenIsUnderSoftw=0x00000000,     ///<CSCEN is under software control.
            hardwareClearsCsce=0x00000001,     ///<Hardware clears CSCEN after each character is received.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CcclrVal> ccclr{}; 
        namespace CcclrValC{
            constexpr Register::FieldValue<decltype(ccclr)::Type,CcclrVal::cscenIsUnderSoftw> cscenIsUnderSoftw{};
            constexpr Register::FieldValue<decltype(ccclr)::Type,CcclrVal::hardwareClearsCsce> hardwareClearsCsce{};
        }
    }
}
