#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx USART0_2_3 Modification date=1/14/2011 Major revision=0 Minor revision=7 
    namespace Usart2Rbr{    ///<Receiver Buffer Register. Contains the next received character to be read (DLAB = 0).
        using Addr = Register::Address<0x400c1000,0x00000000,0x00000000,unsigned>;
        ///Receiver buffer. The UART Receiver Buffer Register contains the oldest received byte in the UART RX FIFO.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rbr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Thr{    ///<Transmit Holding Register. The next character to be transmitted is written here (DLAB = 0).
        using Addr = Register::Address<0x400c1000,0x00000000,0x00000000,unsigned>;
        ///Transmit Holding Register. Writing to the UART Transmit Holding Register causes the data to be stored in the UART transmit FIFO. The byte will be sent when it reaches the bottom of the FIFO and the transmitter is available.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> thr{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Dll{    ///<Divisor Latch LSB. Least significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider (DLAB = 1).
        using Addr = Register::Address<0x400c1000,0x00000000,0x00000000,unsigned>;
        ///Divisor latch LSB. The UART Divisor Latch LSB Register, along with the DLM register, determines the baud rate of the UART.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dllsb{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Dlm{    ///<Divisor Latch MSB. Most significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider (DLAB = 1).
        using Addr = Register::Address<0x400c1004,0x00000000,0x00000000,unsigned>;
        ///Divisor latch MSB.  The UART Divisor Latch MSB Register, along with the DLL register, determines the baud rate of the UART.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dlmsb{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Ier{    ///<Interrupt Enable Register. Contains individual interrupt enable bits for the 7 potential UART interrupts (DLAB = 0).
        using Addr = Register::Address<0x400c1004,0x00000000,0x00000000,unsigned>;
        ///RBR Interrupt Enable. Enables the Receive Data Available interrupt for UART. It also controls the Character Receive Time-out interrupt.
        enum class RbrieVal {
            disableTheRdaInte=0x00000000,     ///<Disable the RDA interrupt.
            enableTheRdaInter=0x00000001,     ///<Enable the RDA interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RbrieVal> rbrie{}; 
        namespace RbrieValC{
            constexpr Register::FieldValue<decltype(rbrie)::Type,RbrieVal::disableTheRdaInte> disableTheRdaInte{};
            constexpr Register::FieldValue<decltype(rbrie)::Type,RbrieVal::enableTheRdaInter> enableTheRdaInter{};
        }
        ///THRE Interrupt Enable. Enables the THRE interrupt for UART. The status of this interrupt can be read from LSR bit 5.
        enum class ThreieVal {
            disableTheThreInt=0x00000000,     ///<Disable the THRE interrupt.
            enableTheThreInte=0x00000001,     ///<Enable the THRE interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ThreieVal> threie{}; 
        namespace ThreieValC{
            constexpr Register::FieldValue<decltype(threie)::Type,ThreieVal::disableTheThreInt> disableTheThreInt{};
            constexpr Register::FieldValue<decltype(threie)::Type,ThreieVal::enableTheThreInte> enableTheThreInte{};
        }
        ///RX Line Interrupt Enable. Enables the UART RX line status interrupts. The status of this interrupt can be read from LSR bit 4:1.
        enum class RxieVal {
            disableTheRxLine=0x00000000,     ///<Disable the RX line status interrupts.
            enableTheRxLineS=0x00000001,     ///<Enable the RX line status interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,RxieVal> rxie{}; 
        namespace RxieValC{
            constexpr Register::FieldValue<decltype(rxie)::Type,RxieVal::disableTheRxLine> disableTheRxLine{};
            constexpr Register::FieldValue<decltype(rxie)::Type,RxieVal::enableTheRxLineS> enableTheRxLineS{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
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
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Iir{    ///<Interrupt ID Register. Identifies which interrupt(s) are pending.
        using Addr = Register::Address<0x400c1008,0x00000000,0x00000000,unsigned>;
        ///Interrupt status.  Note that IIR bit  0 is active low. The pending interrupt can be determined by evaluating IIR bit  3:1.
        enum class IntstatusVal {
            atLeastOneInterru=0x00000000,     ///<At least one interrupt is pending.
            noInterruptIsPend=0x00000001,     ///<No interrupt is pending.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IntstatusVal> intstatus{}; 
        namespace IntstatusValC{
            constexpr Register::FieldValue<decltype(intstatus)::Type,IntstatusVal::atLeastOneInterru> atLeastOneInterru{};
            constexpr Register::FieldValue<decltype(intstatus)::Type,IntstatusVal::noInterruptIsPend> noInterruptIsPend{};
        }
        ///Interrupt identification.  IER3:1 identifies an interrupt corresponding to the UART Rx FIFO. All other combinations of IER bit  3:1 not listed below are reserved (100,101,111).
        enum class IntidVal {
            priority1Highest=0x00000003,     ///<Priority 1 (highest) - Receive Line Status (RLS).
            priority2Receive=0x00000002,     ///<Priority 2 - Receive Data Available (RDA).
            priority2Charact=0x00000006,     ///<Priority 2 - Character Time-out Indicator (CTI).
            priority3ThreIn=0x00000001,     ///<Priority 3 - THRE Interrupt.
            priority4Lowest=0x00000000,     ///<Priority 4 (lowest) - Reserved.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,IntidVal> intid{}; 
        namespace IntidValC{
            constexpr Register::FieldValue<decltype(intid)::Type,IntidVal::priority1Highest> priority1Highest{};
            constexpr Register::FieldValue<decltype(intid)::Type,IntidVal::priority2Receive> priority2Receive{};
            constexpr Register::FieldValue<decltype(intid)::Type,IntidVal::priority2Charact> priority2Charact{};
            constexpr Register::FieldValue<decltype(intid)::Type,IntidVal::priority3ThreIn> priority3ThreIn{};
            constexpr Register::FieldValue<decltype(intid)::Type,IntidVal::priority4Lowest> priority4Lowest{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Copies of FCR bit  0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> fifoenable{}; 
        ///End of auto-baud interrupt.  True if auto-baud has finished successfully and interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> abeoint{}; 
        ///Auto-baud time-out interrupt.  True if auto-baud has timed out and interrupt is enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> abtoint{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Fcr{    ///<FIFO Control Register. Controls UART FIFO usage and modes.
        using Addr = Register::Address<0x400c1008,0x00000000,0x00000000,unsigned>;
        ///FIFO Enable.
        enum class FifoenVal {
            uartFifosAreDisab=0x00000000,     ///<UART FIFOs are disabled. Must not be used in the application.
            activeHighEnableF=0x00000001,     ///<Active high enable for both UART Rx and TX FIFOs and FCR bit  7:1 access. This bit must be set for proper UART operation. Any transition on this bit will automatically clear the UART FIFOs.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FifoenVal> fifoen{}; 
        namespace FifoenValC{
            constexpr Register::FieldValue<decltype(fifoen)::Type,FifoenVal::uartFifosAreDisab> uartFifosAreDisab{};
            constexpr Register::FieldValue<decltype(fifoen)::Type,FifoenVal::activeHighEnableF> activeHighEnableF{};
        }
        ///RX FIFO Reset.
        enum class RxfiforesVal {
            noImpactOnEither=0x00000000,     ///<No impact on either of UART FIFOs.
            writingALogic1To=0x00000001,     ///<Writing a logic 1 to FCR bit  1 will clear all bytes in UART Rx FIFO, reset the pointer logic. This bit is self-clearing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RxfiforesVal> rxfifores{}; 
        namespace RxfiforesValC{
            constexpr Register::FieldValue<decltype(rxfifores)::Type,RxfiforesVal::noImpactOnEither> noImpactOnEither{};
            constexpr Register::FieldValue<decltype(rxfifores)::Type,RxfiforesVal::writingALogic1To> writingALogic1To{};
        }
        ///TX FIFO Reset.
        enum class TxfiforesVal {
            noImpactOnEither=0x00000000,     ///<No impact on either of UART FIFOs.
            writingALogic1To=0x00000001,     ///<Writing a logic 1 to FCR bit  2 will clear all bytes in UART TX FIFO, reset the pointer logic. This bit is self-clearing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,TxfiforesVal> txfifores{}; 
        namespace TxfiforesValC{
            constexpr Register::FieldValue<decltype(txfifores)::Type,TxfiforesVal::noImpactOnEither> noImpactOnEither{};
            constexpr Register::FieldValue<decltype(txfifores)::Type,TxfiforesVal::writingALogic1To> writingALogic1To{};
        }
        ///DMA Mode Select. When the FIFO enable bit (bit 0 of this register) is set, this bit selects the DMA mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmamode{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///RX Trigger Level. These two bits determine how many receiver UART FIFO characters must be written before an interrupt is activated.
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
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Lcr{    ///<Line Control Register. Contains controls for frame formatting and break generation.
        using Addr = Register::Address<0x400c100c,0x00000000,0x00000000,unsigned>;
        ///Word Length Select.
        enum class WlsVal {
            v5BitCharacterLeng=0x00000000,     ///<5-bit character length.
            v6BitCharacterLeng=0x00000001,     ///<6-bit character length.
            v7BitCharacterLeng=0x00000002,     ///<7-bit character length.
            v8BitCharacterLeng=0x00000003,     ///<8-bit character length.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,WlsVal> wls{}; 
        namespace WlsValC{
            constexpr Register::FieldValue<decltype(wls)::Type,WlsVal::v5BitCharacterLeng> v5BitCharacterLeng{};
            constexpr Register::FieldValue<decltype(wls)::Type,WlsVal::v6BitCharacterLeng> v6BitCharacterLeng{};
            constexpr Register::FieldValue<decltype(wls)::Type,WlsVal::v7BitCharacterLeng> v7BitCharacterLeng{};
            constexpr Register::FieldValue<decltype(wls)::Type,WlsVal::v8BitCharacterLeng> v8BitCharacterLeng{};
        }
        ///Stop Bit Select.
        enum class SbsVal {
            v1StopBit=0x00000000,     ///<1 stop bit.
            v2StopBits15If=0x00000001,     ///<2 stop bits (1.5 if LCR bit  1:0=00).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SbsVal> sbs{}; 
        namespace SbsValC{
            constexpr Register::FieldValue<decltype(sbs)::Type,SbsVal::v1StopBit> v1StopBit{};
            constexpr Register::FieldValue<decltype(sbs)::Type,SbsVal::v2StopBits15If> v2StopBits15If{};
        }
        ///Parity Enable
        enum class PeVal {
            disableParityGener=0x00000000,     ///<Disable parity generation and checking.
            enableParityGenera=0x00000001,     ///<Enable parity generation and checking.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::disableParityGener> disableParityGener{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::enableParityGenera> enableParityGenera{};
        }
        ///Parity Select.
        enum class PsVal {
            oddParityNumberO=0x00000000,     ///<Odd parity. Number of 1s in the transmitted character and the attached parity bit will be odd.
            evenParityNumber=0x00000001,     ///<Even Parity. Number of 1s in the transmitted character and the attached parity bit will be even.
            forced1StickPar=0x00000002,     ///<Forced 1 stick parity.
            forced0StickPar=0x00000003,     ///<Forced 0 stick parity.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::oddParityNumberO> oddParityNumberO{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::evenParityNumber> evenParityNumber{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::forced1StickPar> forced1StickPar{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::forced0StickPar> forced0StickPar{};
        }
        ///Break Control.
        enum class BcVal {
            disableBreakTransm=0x00000000,     ///<Disable break transmission.
            enableBreakTransmi=0x00000001,     ///<Enable break transmission. Output pin UART TXD is forced to logic 0 when LCR bit  6 is active high.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,BcVal> bc{}; 
        namespace BcValC{
            constexpr Register::FieldValue<decltype(bc)::Type,BcVal::disableBreakTransm> disableBreakTransm{};
            constexpr Register::FieldValue<decltype(bc)::Type,BcVal::enableBreakTransmi> enableBreakTransmi{};
        }
        ///Divisor Latch Access Bit.
        enum class DlabVal {
            disableAccessToDi=0x00000000,     ///<Disable access to Divisor Latches.
            enableAccessToDiv=0x00000001,     ///<Enable access to Divisor Latches.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DlabVal> dlab{}; 
        namespace DlabValC{
            constexpr Register::FieldValue<decltype(dlab)::Type,DlabVal::disableAccessToDi> disableAccessToDi{};
            constexpr Register::FieldValue<decltype(dlab)::Type,DlabVal::enableAccessToDiv> enableAccessToDiv{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Lsr{    ///<Line Status Register. Contains flags for transmit and receive status, including line errors.
        using Addr = Register::Address<0x400c1014,0x00000000,0x00000000,unsigned>;
        ///Receiver Data Ready. LSR bit  0 is set when the RBR holds an unread character and is cleared when the UART RBR FIFO is empty.
        enum class RdrVal {
            rbrIsEmpty=0x00000000,     ///<RBR is empty.
            rbrContainsValidD=0x00000001,     ///<RBR contains valid data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RdrVal> rdr{}; 
        namespace RdrValC{
            constexpr Register::FieldValue<decltype(rdr)::Type,RdrVal::rbrIsEmpty> rbrIsEmpty{};
            constexpr Register::FieldValue<decltype(rdr)::Type,RdrVal::rbrContainsValidD> rbrContainsValidD{};
        }
        ///Overrun Error. The overrun error condition is set as soon as it occurs. A LSR read clears LSR bit  1. LSR bit  1 is set when UART RSR has a new character assembled and the UART RBR FIFO is full. In this case, the UART RBR FIFO will not be overwritten and the character in the UART RSR will be lost.
        enum class OeVal {
            inactive=0x00000000,     ///<Overrun error status is inactive.
            active=0x00000001,     ///<Overrun error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OeVal> oe{}; 
        namespace OeValC{
            constexpr Register::FieldValue<decltype(oe)::Type,OeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(oe)::Type,OeVal::active> active{};
        }
        ///Parity Error. When the parity bit of a received character is in the wrong state, a parity error occurs. A LSR read clears LSR bit  2. Time of parity error detection is dependent on FCR bit  0. Note: A parity error is associated with the character at the top of the UART RBR FIFO.
        enum class PeVal {
            inactive=0x00000000,     ///<Parity error status is inactive.
            active=0x00000001,     ///<Parity error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PeVal> pe{}; 
        namespace PeValC{
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(pe)::Type,PeVal::active> active{};
        }
        ///Framing Error. When the stop bit of a received character is a logic 0, a framing error occurs. A LSR read clears LSR bit  3. The time of the framing error detection is dependent on FCR0. Upon detection of a framing error, the RX will attempt to re-synchronize to the data and assume that the bad stop bit is actually an early start bit. However, it cannot be assumed that the next received byte will be correct even if there is no Framing Error. Note: A framing error is associated with the character at the top of the UART RBR FIFO.
        enum class FeVal {
            inactive=0x00000000,     ///<Framing error status is inactive.
            active=0x00000001,     ///<Framing error status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FeVal> fe{}; 
        namespace FeValC{
            constexpr Register::FieldValue<decltype(fe)::Type,FeVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(fe)::Type,FeVal::active> active{};
        }
        ///Break Interrupt. When RXD1 is held in the spacing state (all zeros) for one full character transmission (start, data, parity, stop), a break interrupt occurs. Once the break condition has been detected, the receiver goes idle until RXD1 goes to marking state (all ones). A LSR read clears this status bit. The time of break detection is dependent on FCR bit  0. Note: The break interrupt is associated with the character at the top of the UART RBR FIFO.
        enum class BiVal {
            inactive=0x00000000,     ///<Break interrupt status is inactive.
            active=0x00000001,     ///<Break interrupt status is active.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BiVal> bi{}; 
        namespace BiValC{
            constexpr Register::FieldValue<decltype(bi)::Type,BiVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(bi)::Type,BiVal::active> active{};
        }
        ///Transmitter Holding Register Empty. THRE is set immediately upon detection of an empty UART THR and is cleared on a THR write.
        enum class ThreVal {
            thrContainsValidD=0x00000000,     ///<THR contains valid data.
            thrIsEmpty=0x00000001,     ///<THR is empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ThreVal> thre{}; 
        namespace ThreValC{
            constexpr Register::FieldValue<decltype(thre)::Type,ThreVal::thrContainsValidD> thrContainsValidD{};
            constexpr Register::FieldValue<decltype(thre)::Type,ThreVal::thrIsEmpty> thrIsEmpty{};
        }
        ///Transmitter Empty. TEMT is set when both THR and TSR are empty; TEMT is cleared when either the TSR or the THR contain valid data.
        enum class TemtVal {
            valid=0x00000000,     ///<THR and/or the TSR contains valid data.
            empty=0x00000001,     ///<THR and the TSR are empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TemtVal> temt{}; 
        namespace TemtValC{
            constexpr Register::FieldValue<decltype(temt)::Type,TemtVal::valid> valid{};
            constexpr Register::FieldValue<decltype(temt)::Type,TemtVal::empty> empty{};
        }
        ///Error in RX FIFO. LSR bit  7 is set when a character with a RX error such as framing error, parity error or break interrupt, is loaded into the RBR. This bit is cleared when the LSR register is read and there are no subsequent errors in the UART FIFO.
        enum class RxfeVal {
            rbrContainsNoUart=0x00000000,     ///<RBR contains no UART RX errors or FCR bit  0 =0.
            uartRbrContainsAt=0x00000001,     ///<UART RBR contains at least one UART RX error.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxfeVal> rxfe{}; 
        namespace RxfeValC{
            constexpr Register::FieldValue<decltype(rxfe)::Type,RxfeVal::rbrContainsNoUart> rbrContainsNoUart{};
            constexpr Register::FieldValue<decltype(rxfe)::Type,RxfeVal::uartRbrContainsAt> uartRbrContainsAt{};
        }
        ///Error in transmitted character.   A NACK response is given by the receiver in Smart card T=0 mode. This bit is cleared when the LSR register is read.
        enum class TxerrVal {
            noErrorNormalDef=0x00000000,     ///<No error (normal default condition).
            aNackResponseIsR=0x00000001,     ///<A NACK response is received during Smart card T=0 operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,TxerrVal> txerr{}; 
        namespace TxerrValC{
            constexpr Register::FieldValue<decltype(txerr)::Type,TxerrVal::noErrorNormalDef> noErrorNormalDef{};
            constexpr Register::FieldValue<decltype(txerr)::Type,TxerrVal::aNackResponseIsR> aNackResponseIsR{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,9),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Scr{    ///<Scratch Pad Register. Eight-bit temporary storage for software.
        using Addr = Register::Address<0x400c101c,0x00000000,0x00000000,unsigned>;
        ///Scratch pad. A readable, writable byte.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pad{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Acr{    ///<Auto-baud Control Register. Contains controls for the auto-baud feature.
        using Addr = Register::Address<0x400c1020,0x00000000,0x00000000,unsigned>;
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
            noRestart=0x00000000,     ///<No restart
            restartInCaseOfT=0x00000001,     ///<Restart in case of time-out (counter restarts at next UART Rx falling edge)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AutorestartVal> autorestart{}; 
        namespace AutorestartValC{
            constexpr Register::FieldValue<decltype(autorestart)::Type,AutorestartVal::noRestart> noRestart{};
            constexpr Register::FieldValue<decltype(autorestart)::Type,AutorestartVal::restartInCaseOfT> restartInCaseOfT{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///End of auto-baud interrupt clear bit (write-only).
        enum class AbeointclrVal {
            writingA0HasNoI=0x00000000,     ///<Writing a 0 has no impact.
            writingA1WillCle=0x00000001,     ///<Writing a 1 will clear the corresponding interrupt in the IIR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AbeointclrVal> abeointclr{}; 
        namespace AbeointclrValC{
            constexpr Register::FieldValue<decltype(abeointclr)::Type,AbeointclrVal::writingA0HasNoI> writingA0HasNoI{};
            constexpr Register::FieldValue<decltype(abeointclr)::Type,AbeointclrVal::writingA1WillCle> writingA1WillCle{};
        }
        ///Auto-baud time-out interrupt clear bit (write-only).
        enum class AbtointclrVal {
            writingA0HasNoI=0x00000000,     ///<Writing a 0 has no impact.
            writingA1WillCle=0x00000001,     ///<Writing a 1 will clear the corresponding interrupt in the IIR.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AbtointclrVal> abtointclr{}; 
        namespace AbtointclrValC{
            constexpr Register::FieldValue<decltype(abtointclr)::Type,AbtointclrVal::writingA0HasNoI> writingA0HasNoI{};
            constexpr Register::FieldValue<decltype(abtointclr)::Type,AbtointclrVal::writingA1WillCle> writingA1WillCle{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Icr{    ///<IrDA control register (UART3 only)
        using Addr = Register::Address<0x400c1024,0x00000000,0x00000000,unsigned>;
        ///IrDA mode enable.
        enum class IrdaenVal {
            disabled=0x00000000,     ///<IrDA mode on UART3 is disabled, UART3 acts as a standard UART.
            enabled=0x00000001,     ///<IrDA mode on UART3 is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IrdaenVal> irdaen{}; 
        namespace IrdaenValC{
            constexpr Register::FieldValue<decltype(irdaen)::Type,IrdaenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(irdaen)::Type,IrdaenVal::enabled> enabled{};
        }
        ///Serial input direction.
        enum class IrdainvVal {
            notInverted=0x00000000,     ///<The serial input is not inverted.
            inverted=0x00000001,     ///<The serial input is inverted. This has no effect on the serial output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrdainvVal> irdainv{}; 
        namespace IrdainvValC{
            constexpr Register::FieldValue<decltype(irdainv)::Type,IrdainvVal::notInverted> notInverted{};
            constexpr Register::FieldValue<decltype(irdainv)::Type,IrdainvVal::inverted> inverted{};
        }
        ///IrDA fixed pulse width mode.
        enum class FixpulseenVal {
            disabled=0x00000000,     ///<IrDA fixed pulse width mode disabled.
            enabled=0x00000001,     ///<IrDA fixed pulse width mode enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FixpulseenVal> fixpulseen{}; 
        namespace FixpulseenValC{
            constexpr Register::FieldValue<decltype(fixpulseen)::Type,FixpulseenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fixpulseen)::Type,FixpulseenVal::enabled> enabled{};
        }
        ///Configures the pulse when FixPulseEn = 1. See Table 589 for details.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> pulsediv{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Fdr{    ///<Fractional Divider Register. Generates a clock input for the baud rate divider.
        using Addr = Register::Address<0x400c1028,0x00000000,0x00000000,unsigned>;
        ///Baud rate generation pre-scaler divisor value.  If this field is 0, fractional baud rate generator will not impact the UART baud rate.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> divaddval{}; 
        ///Baud rate pre-scaler multiplier value.  This field must be greater or equal 1 for UART to operate properly, regardless of whether the fractional baud rate generator is used or not.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> mulval{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Osr{    ///<Oversampling Register. Controls the degree of oversampling during each bit time.
        using Addr = Register::Address<0x400c102c,0x00000000,0x00000000,unsigned>;
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Fractional part of the oversampling ratio, in units of 1/8th of an input clock period. (001 = 0.125, ..., 111 = 0.875)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> osfrac{}; 
        ///Integer part of the oversampling ratio, minus 1. The reset values equate to the normal operating mode of 16 input clocks per bit time.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> osint{}; 
        ///In Smart Card mode, these bits act as a more-significant extension of the OSint field, allowing an oversampling ratio up to 2048 as required by ISO7816-3. In Smart Card mode, bits 14:4 should initially be set to 371, yielding an oversampling ratio of 372.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fdint{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,15),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Hden{    ///<Half-duplex enable Register
        using Addr = Register::Address<0x400c1040,0x00000000,0x00000000,unsigned>;
        ///Half-duplex mode enable
        enum class HdenVal {
            disableHalfDuplex=0x00000000,     ///<Disable half-duplex mode.
            enableHalfDuplexM=0x00000001,     ///<Enable half-duplex mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HdenVal> hden{}; 
        namespace HdenValC{
            constexpr Register::FieldValue<decltype(hden)::Type,HdenVal::disableHalfDuplex> disableHalfDuplex{};
            constexpr Register::FieldValue<decltype(hden)::Type,HdenVal::enableHalfDuplexM> enableHalfDuplexM{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Scictrl{    ///<Smart card interface control register
        using Addr = Register::Address<0x400c1048,0x00000018,0x00000000,unsigned>;
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
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Rs485ctrl{    ///<RS-485/EIA-485 Control. Contains controls to configure various aspects of RS-485/EIA-485 modes.
        using Addr = Register::Address<0x400c104c,0x00000000,0x00000000,unsigned>;
        ///NMM enable.
        enum class NmmenVal {
            disabled=0x00000000,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is disabled.
            enabled=0x00000001,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is enabled. In this mode, an address is detected when a received byte causes the UART to set the parity error and generate an interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,NmmenVal> nmmen{}; 
        namespace NmmenValC{
            constexpr Register::FieldValue<decltype(nmmen)::Type,NmmenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(nmmen)::Type,NmmenVal::enabled> enabled{};
        }
        ///Receiver enable.
        enum class RxdisVal {
            theReceiverIsEnab=0x00000000,     ///<The receiver is enabled.
            theReceiverIsDisa=0x00000001,     ///<The receiver is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,RxdisVal> rxdis{}; 
        namespace RxdisValC{
            constexpr Register::FieldValue<decltype(rxdis)::Type,RxdisVal::theReceiverIsEnab> theReceiverIsEnab{};
            constexpr Register::FieldValue<decltype(rxdis)::Type,RxdisVal::theReceiverIsDisa> theReceiverIsDisa{};
        }
        ///AAD enable
        enum class AadenVal {
            disabled=0x00000000,     ///<Auto Address Detect (AAD) is disabled.
            enabled=0x00000001,     ///<Auto Address Detect (AAD) is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AadenVal> aaden{}; 
        namespace AadenValC{
            constexpr Register::FieldValue<decltype(aaden)::Type,AadenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(aaden)::Type,AadenVal::enabled> enabled{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> reserved{}; 
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
            pineq0=0x00000000,     ///<The direction control pin will be driven to logic 0 when the transmitter has data to be sent. It will be driven to logic 1 after the last bit of data has been transmitted.
            pineq1=0x00000001,     ///<The direction control pin will be driven to logic 1 when the transmitter has data to be sent. It will be driven to logic 0 after the last bit of data has been transmitted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OinvVal> oinv{}; 
        namespace OinvValC{
            constexpr Register::FieldValue<decltype(oinv)::Type,OinvVal::pineq0> pineq0{};
            constexpr Register::FieldValue<decltype(oinv)::Type,OinvVal::pineq1> pineq1{};
        }
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,6),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Rs485adrmatch{    ///<RS-485/EIA-485 address match. Contains the address match value for RS-485/EIA-485 mode.
        using Addr = Register::Address<0x400c1050,0x00000000,0x00000000,unsigned>;
        ///Contains the address match value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adrmatch{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Rs485dly{    ///<RS-485/EIA-485 direction control delay.
        using Addr = Register::Address<0x400c1054,0x00000000,0x00000000,unsigned>;
        ///Contains the direction control delay value. This register works in conjunction with an 8-bit counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dly{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Syncctrl{    ///<Synchronous mode control register.
        using Addr = Register::Address<0x400c1058,0x00000000,0x00000000,unsigned>;
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
            rising=0x00000000,     ///<RxD is sampled on the rising edge of SCLK
            falling=0x00000001,     ///<RxD is sampled on the falling edge of SCLK
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FesVal> fes{}; 
        namespace FesValC{
            constexpr Register::FieldValue<decltype(fes)::Type,FesVal::rising> rising{};
            constexpr Register::FieldValue<decltype(fes)::Type,FesVal::falling> falling{};
        }
        ///Transmit synchronization register bypass.
        enum class TsbypassVal {
            enum_=0x00000000,     ///<tbd.
            enum_=0x00000001,     ///<tbd.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TsbypassVal> tsbypass{}; 
        namespace TsbypassValC{
            constexpr Register::FieldValue<decltype(tsbypass)::Type,TsbypassVal::enum_> enum_{};
            constexpr Register::FieldValue<decltype(tsbypass)::Type,TsbypassVal::enum_> enum_{};
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
            doNotSendStartst=0x00000001,     ///<Do not send start/stop bits.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,SssdisVal> sssdis{}; 
        namespace SssdisValC{
            constexpr Register::FieldValue<decltype(sssdis)::Type,SssdisVal::sendStartAndStop> sendStartAndStop{};
            constexpr Register::FieldValue<decltype(sssdis)::Type,SssdisVal::doNotSendStartst> doNotSendStartst{};
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
        ///Reserved. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Usart2Ter{    ///<Transmit Enable Register. Turns off UART transmitter for use with software flow control.
        using Addr = Register::Address<0x400c105c,0x00000000,0x00000000,unsigned>;
        ///Transmit enable.  After reset transmission is enabled. When the txen bit is de-asserted, no data will be transmitted although data may be pending in the TSR or THR.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txen{}; 
        ///Reserved, user software should not write ones to reserved bits. The value read from a reserved bit is not defined.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
