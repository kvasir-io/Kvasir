#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//UART0/2/3 
    namespace Nonerbr{    ///<Receiver Buffer Register. Contains the next received character to be read (DLAB =0).
        using Addr = Register::Address<0x4000c000,0xffffff00,0,unsigned>;
        ///The UARTn Receiver Buffer Register contains the oldest received byte in the UARTn Rx FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rbr{}; 
    }
    namespace Nonethr{    ///<Transmit Holding Regiter. The next character to be transmitted is written here (DLAB =0).
        using Addr = Register::Address<0x4000c000,0xffffff00,0,unsigned>;
        ///Writing to the UARTn Transmit Holding Register causes the data to be stored in the UARTn transmit FIFO. The byte will be sent when it reaches the bottom of the FIFO and the transmitter is available.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> thr{}; 
    }
    namespace Nonedll{    ///<Divisor Latch LSB. Least significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider (DLAB =1).
        using Addr = Register::Address<0x4000c000,0xffffff00,0,unsigned>;
        ///The UARTn Divisor Latch LSB Register, along with the UnDLM register, determines the baud rate of the UARTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dllsb{}; 
    }
    namespace Nonedlm{    ///<Divisor Latch MSB. Most significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider (DLAB =1).
        using Addr = Register::Address<0x4000c004,0xffffff00,0,unsigned>;
        ///The UARTn Divisor Latch MSB Register, along with the U0DLL register, determines the baud rate of the UARTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dlmsb{}; 
    }
    namespace Noneier{    ///<Interrupt Enable Register. Contains individual interrupt enable bits for the 7 potential UART interrupts (DLAB =0).
        using Addr = Register::Address<0x4000c004,0xfffffcf8,0,unsigned>;
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
    }
    namespace Noneiir{    ///<Interrupt ID Register. Identifies which interrupt(s) are pending.
        using Addr = Register::Address<0x4000c008,0xfffffc30,0,unsigned>;
        ///Interrupt status. Note that UnIIR[0] is active low. The pending interrupt can be determined by evaluating UnIIR[3:1].
        enum class IntstatusVal {
            atLeastOneInterru=0x00000000,     ///<At least one interrupt is pending.
            noInterruptIsPend=0x00000001,     ///<No interrupt is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntstatusVal> intstatus{}; 
        namespace IntstatusValC{
            constexpr Register::FieldValue<decltype(intstatus)::Type,IntstatusVal::atLeastOneInterru> atLeastOneInterru{};
            constexpr Register::FieldValue<decltype(intstatus)::Type,IntstatusVal::noInterruptIsPend> noInterruptIsPend{};
        }
        }
        ///Interrupt identification. UnIER[3:1] identifies an interrupt corresponding to the UARTn Rx or TX FIFO. All other combinations of UnIER[3:1] not listed below are reserved (000,100,101,111).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> intid{}; 
        ///Copies of UnFCR[0].
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> fifoenable{}; 
        ///End of auto-baud interrupt. True if auto-baud has finished successfully and interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> abeoint{}; 
        ///Auto-baud time-out interrupt. True if auto-baud has timed out and interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> abtoint{}; 
    }
    namespace Nonefcr{    ///<FIFO Control Register. Controls UART FIFO usage and modes.
        using Addr = Register::Address<0x4000c008,0xffffff30,0,unsigned>;
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
        }
        ///DMA Mode Select. When the FIFO enable (bit 0 of this register) is set, this bit selects the DMA mode. See Section 18.6.6.1.
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
    }
    namespace Nonelcr{    ///<Line Control Register. Contains controls for frame formatting and break generation.
        using Addr = Register::Address<0x4000c00c,0xffffff00,0,unsigned>;
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
    }
    namespace Nonelsr{    ///<Line Status Register. Contains flags for transmit and receive status, including line errors.
        using Addr = Register::Address<0x4000c014,0xffffff00,0,unsigned>;
        ///Receiver Data Ready. UnLSR[0] is set when the UnRBR holds an unread character and is cleared when the UARTn RBR FIFO is empty.
        enum class RdrVal {
            empty=0x00000000,     ///<The UARTn receiver FIFO is empty.
            notempty=0x00000001,     ///<The UARTn receiver FIFO is not empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RdrVal> rdr{}; 
        namespace RdrValC{
            constexpr Register::FieldValue<decltype(rdr)::Type,RdrVal::empty> empty{};
            constexpr Register::FieldValue<decltype(rdr)::Type,RdrVal::notempty> notempty{};
        }
        }
        ///Overrun Error. The overrun error condition is set as soon as it occurs. An UnLSR read clears UnLSR[1]. UnLSR[1] is set when UARTn RSR has a new character assembled and the UARTn RBR FIFO is full. In this case, the UARTn RBR FIFO will not be overwritten and the character in the UARTn RSR will be lost.
        enum class OeVal {
            inactive=0x00000000,     ///<Overrun error status is inactive.
            active=0x00000001,     ///<Overrun error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OeVal> oe{}; 
        namespace OeValC{
            constexpr Register::FieldValue<decltype(oe)::Type,OeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(oe)::Type,OeVal::active> active{};
        }
        }
        ///Parity Error. When the parity bit of a received character is in the wrong state, a parity error occurs. An UnLSR read clears UnLSR[2]. Time of parity error detection is dependent on UnFCR[0]. Note: A parity error is associated with the character at the top of the UARTn RBR FIFO.
        enum class PeVal {
            inactive=0x00000000,     ///<Parity error status is inactive.
            active=0x00000001,     ///<Parity error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::active> active{};
        }
        }
        ///Framing Error. When the stop bit of a received character is a logic 0, a framing error occurs. An UnLSR read clears UnLSR[3]. The time of the framing error detection is dependent on UnFCR[0]. Upon detection of a framing error, the Rx will attempt to resynchronize to the data and assume that the bad stop bit is actually an early start bit. However, it cannot be assumed that the next received byte will be correct even if there is no Framing Error. Note: A framing error is associated with the character at the top of the UARTn RBR FIFO.
        enum class FeVal {
            inactive=0x00000000,     ///<Framing error status is inactive.
            active=0x00000001,     ///<Framing error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FeVal> fe{}; 
        namespace FeValC{
            constexpr Register::FieldValue<decltype(fe)::Type,FeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(fe)::Type,FeVal::active> active{};
        }
        }
        ///Break Interrupt. When RXDn is held in the spacing state (all zeroes) for one full character transmission (start, data, parity, stop), a break interrupt occurs. Once the break condition has been detected, the receiver goes idle until RXDn goes to marking state (all ones). An UnLSR read clears this status bit. The time of break detection is dependent on UnFCR[0]. Note: The break interrupt is associated with the character at the top of the UARTn RBR FIFO.
        enum class BiVal {
            inactive=0x00000000,     ///<Break interrupt status is inactive.
            active=0x00000001,     ///<Break interrupt status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BiVal> bi{}; 
        namespace BiValC{
            constexpr Register::FieldValue<decltype(bi)::Type,BiVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(bi)::Type,BiVal::active> active{};
        }
        }
        ///Transmitter Holding Register Empty.  THRE is set immediately upon detection of an empty UARTn THR and is cleared on a UnTHR write.
        enum class ThreVal {
            validdata=0x00000000,     ///<UnTHR contains valid data.
            empty=0x00000001,     ///<UnTHR is empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ThreVal> thre{}; 
        namespace ThreValC{
            constexpr Register::FieldValue<decltype(thre)::Type,ThreVal::validdata> validdata{};
            constexpr Register::FieldValue<decltype(thre)::Type,ThreVal::empty> empty{};
        }
        }
        ///Transmitter Empty. TEMT is set when both UnTHR and UnTSR are empty; TEMT is cleared when either the UnTSR or the UnTHR contain valid data.
        enum class TemtVal {
            validdata=0x00000000,     ///<UnTHR and/or the UnTSR contains valid data.
            empty=0x00000001,     ///<UnTHR and the UnTSR are empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TemtVal> temt{}; 
        namespace TemtValC{
            constexpr Register::FieldValue<decltype(temt)::Type,TemtVal::validdata> validdata{};
            constexpr Register::FieldValue<decltype(temt)::Type,TemtVal::empty> empty{};
        }
        }
        ///Error in RX FIFO . UnLSR[7] is set when a character with a Rx error such as framing error, parity error or break interrupt, is loaded into the UnRBR. This bit is cleared when the UnLSR register is read and there are no subsequent errors in the UARTn FIFO.
        enum class RxfeVal {
            noerror=0x00000000,     ///<UnRBR contains no UARTn RX errors or UnFCR[0]=0.
            errors=0x00000001,     ///<UARTn RBR contains at least one UARTn RX error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxfeVal> rxfe{}; 
        namespace RxfeValC{
            constexpr Register::FieldValue<decltype(rxfe)::Type,RxfeVal::noerror> noerror{};
            constexpr Register::FieldValue<decltype(rxfe)::Type,RxfeVal::errors> errors{};
        }
        }
    }
    namespace Nonescr{    ///<Scratch Pad Register. 8-bit temporary storage for software.
        using Addr = Register::Address<0x4000c01c,0xffffff00,0,unsigned>;
        ///A readable, writable byte.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pad{}; 
    }
    namespace Noneacr{    ///<Auto-baud Control Register. Contains controls for the auto-baud feature.
        using Addr = Register::Address<0x4000c020,0xfffffcf8,0,unsigned>;
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
    }
    namespace Nonefdr{    ///<Fractional Divider Register. Generates a clock input for the baud rate divider.
        using Addr = Register::Address<0x4000c028,0xffffff00,0,unsigned>;
        ///Baud-rate generation pre-scaler divisor value. If this field is 0, fractional baud-rate generator will not impact the UARTn baudrate.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> divaddval{}; 
        ///Baud-rate pre-scaler multiplier value. This field must be greater or equal 1 for UARTn to operate properly, regardless of whether the fractional baud-rate generator is used or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> mulval{}; 
    }
    namespace Noneter{    ///<Transmit Enable Register. Turns off UART transmitter for use with software flow control.
        using Addr = Register::Address<0x4000c030,0xffffff7f,0,unsigned>;
        ///When this bit is 1, as it is after a Reset, data written to the THR is output on the TXD pin as soon as any preceding data has been sent. If this bit is cleared to 0 while a character is being sent, the transmission of that character is completed, but no further characters are sent until this bit is set again. In other words, a 0 in this bit blocks the transfer of characters from the THR or TX FIFO into the transmit shift register. Software implementing software-handshaking can clear this bit when it receives an XOFF character (DC3). Software can set this bit again when it receives an XON (DC1) character.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txen{}; 
    }
    namespace Noners485ctrl{    ///<RS-485/EIA-485 Control. Contains controls to configure various aspects of RS-485/EIA-485 modes.
        using Addr = Register::Address<0x4000c04c,0xffffffc8,0,unsigned>;
        ///NMM enable.
        enum class NmmenVal {
            disabled=0x00000000,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is disabled.
            enabled=0x00000001,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is enabled. In this mode, an address is detected when a received byte has the parity bit = 1, generating a received data interrupt. See Section 18.6.16 RS-485/EIA-485 modes of operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,NmmenVal> nmmen{}; 
        namespace NmmenValC{
            constexpr Register::FieldValue<decltype(nmmen)::Type,NmmenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(nmmen)::Type,NmmenVal::enabled> enabled{};
        }
        }
        ///Receiver enable.
        enum class RxdisVal {
            enabled=0x00000000,     ///<The receiver is enabled.
            disabled=0x00000001,     ///<The receiver is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RxdisVal> rxdis{}; 
        namespace RxdisValC{
            constexpr Register::FieldValue<decltype(rxdis)::Type,RxdisVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxdis)::Type,RxdisVal::disabled> disabled{};
        }
        }
        ///AAD enable.
        enum class AadenVal {
            disabled=0x00000000,     ///<Auto Address Detect (AAD) is disabled.
            enabled=0x00000001,     ///<Auto Address Detect (AAD) is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AadenVal> aaden{}; 
        namespace AadenValC{
            constexpr Register::FieldValue<decltype(aaden)::Type,AadenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(aaden)::Type,AadenVal::enabled> enabled{};
        }
        }
        ///Direction control enable.
        enum class DctrlVal {
            disableAutoDirecti=0x00000000,     ///<Disable Auto Direction Control.
            enableAutoDirectio=0x00000001,     ///<Enable Auto Direction Control.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DctrlVal> dctrl{}; 
        namespace DctrlValC{
            constexpr Register::FieldValue<decltype(dctrl)::Type,DctrlVal::disableAutoDirecti> disableAutoDirecti{};
            constexpr Register::FieldValue<decltype(dctrl)::Type,DctrlVal::enableAutoDirectio> enableAutoDirectio{};
        }
        }
        ///Direction control pin polarity. This bit reverses the polarity of the direction control signal on the Un_OE pin.
        enum class OinvVal {
            dirlow=0x00000000,     ///<The direction control pin will be driven to logic 0 when the transmitter has data to be sent. It will be driven to logic 1 after the last bit of data has been transmitted.
            dirhigh=0x00000001,     ///<The direction control pin will be driven to logic 1 when the transmitter has data to be sent. It will be driven to logic 0 after the last bit of data has been transmitted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OinvVal> oinv{}; 
        namespace OinvValC{
            constexpr Register::FieldValue<decltype(oinv)::Type,OinvVal::dirlow> dirlow{};
            constexpr Register::FieldValue<decltype(oinv)::Type,OinvVal::dirhigh> dirhigh{};
        }
        }
    }
    namespace Noners485adrmatch{    ///<RS-485/EIA-485 address match. Contains the address match value for RS-485/EIA-485 mode.
        using Addr = Register::Address<0x4000c050,0xffffff00,0,unsigned>;
        ///Contains the address match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adrmatch{}; 
    }
    namespace Noners485dly{    ///<RS-485/EIA-485 direction control delay.
        using Addr = Register::Address<0x4000c054,0xffffff00,0,unsigned>;
        ///Contains the direction control (UnOE) delay value. This register works in conjunction with an 8-bit counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
}
