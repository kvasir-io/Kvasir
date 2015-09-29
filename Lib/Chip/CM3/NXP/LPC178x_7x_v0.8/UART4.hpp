#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//UART4 
    namespace Nonerbr{    ///<Receiver Buffer Register. Contains the next received character to be read (DLAB =0).
        using Addr = Register::Address<0x400a4000,0xffffff00,0,unsigned>;
        ///The UART4 Receiver Buffer Register contains the oldest received byte in the UART4 Rx FIFO.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rbr{}; 
    }
    namespace Nonethr{    ///<Transmit Holding Register. The next character to be transmitted is written here (DLAB =0).
        using Addr = Register::Address<0x400a4000,0xffffff00,0,unsigned>;
        ///Writing to the UART4 Transmit Holding Register causes the data to be stored in the UART4 transmit FIFO. The byte will be sent when it reaches the bottom of the FIFO and the transmitter is available.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> thr{}; 
    }
    namespace Nonedll{    ///<Divisor Latch LSB. Least significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider (DLAB =1).
        using Addr = Register::Address<0x400a4000,0xffffff00,0,unsigned>;
        ///The UART4 Divisor Latch LSB Register, along with the U4DLM register, determines the baud rate of the UART4.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dllsb{}; 
    }
    namespace Nonedlm{    ///<Divisor Latch MSB. Most significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider (DLAB =1).
        using Addr = Register::Address<0x400a4004,0xffffff00,0,unsigned>;
        ///The UART4 Divisor Latch MSB Register, along with the U0DLL register, determines the baud rate of the UART4.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dlmsb{}; 
    }
    namespace Noneier{    ///<Interrupt Enable Register. Contains individual interrupt enable bits for the 7 potential UART interrupts (DLAB =0).
        using Addr = Register::Address<0x400a4004,0xfffffcf8,0,unsigned>;
        ///RBR Interrupt Enable. Enables the Receive Data Available interrupt for UARTn. It also controls the Character Receive Time-out interrupt.
        enum class rbrieVal {
            disableTheRdaInte=0x00000000,     ///<Disable the RDA interrupts.
            enableTheRdaInter=0x00000001,     ///<Enable the RDA interrupts.
        };
        namespace rbrieValC{
            constexpr MPL::Value<rbrieVal,rbrieVal::disableTheRdaInte> disableTheRdaInte{};
            constexpr MPL::Value<rbrieVal,rbrieVal::enableTheRdaInter> enableTheRdaInter{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rbrieVal> rbrie{}; 
        ///THRE Interrupt Enable. Enables the THRE interrupt for UARTn. The status of this can be read from UnLSR[5].
        enum class threieVal {
            disableTheThreInt=0x00000000,     ///<Disable the THRE interrupts.
            enableTheThreInte=0x00000001,     ///<Enable the THRE interrupts.
        };
        namespace threieValC{
            constexpr MPL::Value<threieVal,threieVal::disableTheThreInt> disableTheThreInt{};
            constexpr MPL::Value<threieVal,threieVal::enableTheThreInte> enableTheThreInte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,threieVal> threie{}; 
        ///RX Line Status Interrupt Enable. Enables the UARTn RX line status interrupts. The status of this interrupt can be read from UnLSR[4:1].
        enum class rxieVal {
            disableTheRxLine=0x00000000,     ///<Disable the RX line status interrupts.
            enableTheRxLineS=0x00000001,     ///<Enable the RX line status interrupts.
        };
        namespace rxieValC{
            constexpr MPL::Value<rxieVal,rxieVal::disableTheRxLine> disableTheRxLine{};
            constexpr MPL::Value<rxieVal,rxieVal::enableTheRxLineS> enableTheRxLineS{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rxieVal> rxie{}; 
        ///Enables the end of auto-baud interrupt.
        enum class abeointenVal {
            disableEndOfAuto=0x00000000,     ///<Disable end of auto-baud Interrupt.
            enableEndOfAutoB=0x00000001,     ///<Enable end of auto-baud Interrupt.
        };
        namespace abeointenValC{
            constexpr MPL::Value<abeointenVal,abeointenVal::disableEndOfAuto> disableEndOfAuto{};
            constexpr MPL::Value<abeointenVal,abeointenVal::enableEndOfAutoB> enableEndOfAutoB{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,abeointenVal> abeointen{}; 
        ///Enables the auto-baud time-out interrupt.
        enum class abtointenVal {
            disableAutoBaudTi=0x00000000,     ///<Disable auto-baud time-out Interrupt.
            enableAutoBaudTim=0x00000001,     ///<Enable auto-baud time-out Interrupt.
        };
        namespace abtointenValC{
            constexpr MPL::Value<abtointenVal,abtointenVal::disableAutoBaudTi> disableAutoBaudTi{};
            constexpr MPL::Value<abtointenVal,abtointenVal::enableAutoBaudTim> enableAutoBaudTim{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,abtointenVal> abtointen{}; 
    }
    namespace Noneiir{    ///<Interrupt ID Register. Identifies which interrupt(s) are pending.
        using Addr = Register::Address<0x400a4008,0xfffffc30,0,unsigned>;
        ///Interrupt status. Note that U4IIR[0] is active low. The pending interrupt can be determined by evaluating U4IIR[3:1].
        enum class intstatusVal {
            atLeastOneInterru=0x00000000,     ///<At least one interrupt is pending.
            noInterruptIsPend=0x00000001,     ///<No interrupt is pending.
        };
        namespace intstatusValC{
            constexpr MPL::Value<intstatusVal,intstatusVal::atLeastOneInterru> atLeastOneInterru{};
            constexpr MPL::Value<intstatusVal,intstatusVal::noInterruptIsPend> noInterruptIsPend{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intstatusVal> intstatus{}; 
        ///Interrupt identification. U4IER[3:1] identifies an interrupt corresponding to the UART4 Rx or TX FIFO. All other combinations of U4IER[3:1] not listed below are reserved (000,100,101,111).
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> intid{}; 
        ///Copies of U4FCR[0].
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> fifoenable{}; 
        ///End of auto-baud interrupt. True if auto-baud has finished successfully and interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> abeoint{}; 
        ///Auto-baud time-out interrupt. True if auto-baud has timed out and interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> abtoint{}; 
    }
    namespace Nonefcr{    ///<FIFO Control Register. Controls UART FIFO usage and modes.
        using Addr = Register::Address<0x400a4008,0xffffff30,0,unsigned>;
        ///FIFO Enable.
        enum class fifoenVal {
            uartnFifosAreDisa=0x00000000,     ///<UARTn FIFOs are disabled. Must not be used in the application.
            activeHighEnableF=0x00000001,     ///<Active high enable for both UARTn Rx and TX FIFOs and UnFCR[7:1] access. This bit must be set for proper UART operation. Any transition on this bit will automatically clear the related UART FIFOs.
        };
        namespace fifoenValC{
            constexpr MPL::Value<fifoenVal,fifoenVal::uartnFifosAreDisa> uartnFifosAreDisa{};
            constexpr MPL::Value<fifoenVal,fifoenVal::activeHighEnableF> activeHighEnableF{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fifoenVal> fifoen{}; 
        ///RX FIFO Reset.
        enum class rxfiforesVal {
            noImpactOnEither=0x00000000,     ///<No impact on either of UARTn FIFOs.
            writingALogic1To=0x00000001,     ///<Writing a logic 1 to UnFCR[1] will clear all bytes in UARTn Rx FIFO, reset the pointer logic. This bit is self-clearing.
        };
        namespace rxfiforesValC{
            constexpr MPL::Value<rxfiforesVal,rxfiforesVal::noImpactOnEither> noImpactOnEither{};
            constexpr MPL::Value<rxfiforesVal,rxfiforesVal::writingALogic1To> writingALogic1To{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rxfiforesVal> rxfifores{}; 
        ///TX FIFO Reset.
        enum class txfiforesVal {
            noImpactOnEither=0x00000000,     ///<No impact on either of UARTn FIFOs.
            writingALogic1To=0x00000001,     ///<Writing a logic 1 to UnFCR[2] will clear all bytes in UARTn TX FIFO, reset the pointer logic. This bit is self-clearing.
        };
        namespace txfiforesValC{
            constexpr MPL::Value<txfiforesVal,txfiforesVal::noImpactOnEither> noImpactOnEither{};
            constexpr MPL::Value<txfiforesVal,txfiforesVal::writingALogic1To> writingALogic1To{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,txfiforesVal> txfifores{}; 
        ///DMA Mode Select. When the FIFO enable (bit 0 of this register) is set, this bit selects the DMA mode. See Section 20.6.6.1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmamode{}; 
        ///RX Trigger Level. These two bits determine how many receiver UARTn FIFO characters must be written before an interrupt or DMA request is activated.
        enum class rxtriglvlVal {
            triggerLevel01C=0x00000000,     ///<Trigger level 0 (1 character or 0x01).
            triggerLevel14C=0x00000001,     ///<Trigger level 1 (4 characters or 0x04).
            triggerLevel28C=0x00000002,     ///<Trigger level 2 (8 characters or 0x08).
            triggerLevel314=0x00000003,     ///<Trigger level 3 (14 characters or 0x0E).
        };
        namespace rxtriglvlValC{
            constexpr MPL::Value<rxtriglvlVal,rxtriglvlVal::triggerLevel01C> triggerLevel01C{};
            constexpr MPL::Value<rxtriglvlVal,rxtriglvlVal::triggerLevel14C> triggerLevel14C{};
            constexpr MPL::Value<rxtriglvlVal,rxtriglvlVal::triggerLevel28C> triggerLevel28C{};
            constexpr MPL::Value<rxtriglvlVal,rxtriglvlVal::triggerLevel314> triggerLevel314{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,rxtriglvlVal> rxtriglvl{}; 
    }
    namespace Nonelcr{    ///<Line Control Register. Contains controls for frame formatting and break generation.
        using Addr = Register::Address<0x400a400c,0xffffff00,0,unsigned>;
        ///Word Length Select.
        enum class wlsVal {
            v5BitCharacterLeng=0x00000000,     ///<5-bit character length
            v6BitCharacterLeng=0x00000001,     ///<6-bit character length
            v7BitCharacterLeng=0x00000002,     ///<7-bit character length
            v8BitCharacterLeng=0x00000003,     ///<8-bit character length
        };
        namespace wlsValC{
            constexpr MPL::Value<wlsVal,wlsVal::v5BitCharacterLeng> v5BitCharacterLeng{};
            constexpr MPL::Value<wlsVal,wlsVal::v6BitCharacterLeng> v6BitCharacterLeng{};
            constexpr MPL::Value<wlsVal,wlsVal::v7BitCharacterLeng> v7BitCharacterLeng{};
            constexpr MPL::Value<wlsVal,wlsVal::v8BitCharacterLeng> v8BitCharacterLeng{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,wlsVal> wls{}; 
        ///Stop Bit Select
        enum class sbsVal {
            v1StopBit=0x00000000,     ///<1 stop bit.
            v2StopBits15If=0x00000001,     ///<2 stop bits (1.5 if UnLCR[1:0]=00).
        };
        namespace sbsValC{
            constexpr MPL::Value<sbsVal,sbsVal::v1StopBit> v1StopBit{};
            constexpr MPL::Value<sbsVal,sbsVal::v2StopBits15If> v2StopBits15If{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sbsVal> sbs{}; 
        ///Parity Enable.
        enum class peVal {
            disableParityGener=0x00000000,     ///<Disable parity generation and checking.
            enableParityGenera=0x00000001,     ///<Enable parity generation and checking.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::disableParityGener> disableParityGener{};
            constexpr MPL::Value<peVal,peVal::enableParityGenera> enableParityGenera{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,peVal> pe{}; 
        ///Parity Select
        enum class psVal {
            oddParityNumberO=0x00000000,     ///<Odd parity. Number of 1s in the transmitted character and the attached parity bit will be odd.
            evenParityNumber=0x00000001,     ///<Even Parity. Number of 1s in the transmitted character and the attached parity bit will be even.
            forced1StickParit=0x00000002,     ///<Forced 1 stick parity.
            forced0StickParit=0x00000003,     ///<Forced 0 stick parity.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::oddParityNumberO> oddParityNumberO{};
            constexpr MPL::Value<psVal,psVal::evenParityNumber> evenParityNumber{};
            constexpr MPL::Value<psVal,psVal::forced1StickParit> forced1StickParit{};
            constexpr MPL::Value<psVal,psVal::forced0StickParit> forced0StickParit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,psVal> ps{}; 
        ///Break Control
        enum class bcVal {
            disableBreakTransm=0x00000000,     ///<Disable break transmission.
            enableBreakTransmi=0x00000001,     ///<Enable break transmission. Output pin UARTn TXD is forced to logic 0 when UnLCR[6] is active high.
        };
        namespace bcValC{
            constexpr MPL::Value<bcVal,bcVal::disableBreakTransm> disableBreakTransm{};
            constexpr MPL::Value<bcVal,bcVal::enableBreakTransmi> enableBreakTransmi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bcVal> bc{}; 
        ///Divisor Latch Access Bit
        enum class dlabVal {
            disableAccessToDi=0x00000000,     ///<Disable access to Divisor Latches.
            enableAccessToDiv=0x00000001,     ///<Enable access to Divisor Latches.
        };
        namespace dlabValC{
            constexpr MPL::Value<dlabVal,dlabVal::disableAccessToDi> disableAccessToDi{};
            constexpr MPL::Value<dlabVal,dlabVal::enableAccessToDiv> enableAccessToDiv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dlabVal> dlab{}; 
    }
    namespace Nonelsr{    ///<Line Status Register. Contains flags for transmit and receive status, including line errors.
        using Addr = Register::Address<0x400a4014,0xffffff00,0,unsigned>;
        ///Receiver Data Ready. UnLSR[0] is set when the UnRBR holds an unread character and is cleared when the UARTn RBR FIFO is empty.
        enum class rdrVal {
            theUartnReceiverF=0x00000000,     ///<The UARTn receiver FIFO is empty.
            theUartnReceiverF=0x00000001,     ///<The UARTn receiver FIFO is not empty.
        };
        namespace rdrValC{
            constexpr MPL::Value<rdrVal,rdrVal::theUartnReceiverF> theUartnReceiverF{};
            constexpr MPL::Value<rdrVal,rdrVal::theUartnReceiverF> theUartnReceiverF{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rdrVal> rdr{}; 
        ///Overrun Error. The overrun error condition is set as soon as it occurs. An UnLSR read clears UnLSR[1]. UnLSR[1] is set when UARTn RSR has a new character assembled and the UARTn RBR FIFO is full. In this case, the UARTn RBR FIFO will not be overwritten and the character in the UARTn RSR will be lost.
        enum class oeVal {
            overrunErrorStatus=0x00000000,     ///<Overrun error status is inactive.
            overrunErrorStatus=0x00000001,     ///<Overrun error status is active.
        };
        namespace oeValC{
            constexpr MPL::Value<oeVal,oeVal::overrunErrorStatus> overrunErrorStatus{};
            constexpr MPL::Value<oeVal,oeVal::overrunErrorStatus> overrunErrorStatus{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oeVal> oe{}; 
        ///Parity Error. When the parity bit of a received character is in the wrong state, a parity error occurs. An UnLSR read clears UnLSR[2]. Time of parity error detection is dependent on UnFCR[0]. Note: A parity error is associated with the character at the top of the UARTn RBR FIFO.
        enum class peVal {
            parityErrorStatus=0x00000000,     ///<Parity error status is inactive.
            parityErrorStatus=0x00000001,     ///<Parity error status is active.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::parityErrorStatus> parityErrorStatus{};
            constexpr MPL::Value<peVal,peVal::parityErrorStatus> parityErrorStatus{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,peVal> pe{}; 
        ///Framing Error. When the stop bit of a received character is a logic 0, a framing error occurs. An UnLSR read clears UnLSR[3]. The time of the framing error detection is dependent on UnFCR[0]. Upon detection of a framing error, the Rx will attempt to resynchronize to the data and assume that the bad stop bit is actually an early start bit. However, it cannot be assumed that the next received byte will be correct even if there is no Framing Error. Note: A framing error is associated with the character at the top of the UARTn RBR FIFO.
        enum class feVal {
            framingErrorStatus=0x00000000,     ///<Framing error status is inactive.
            framingErrorStatus=0x00000001,     ///<Framing error status is active.
        };
        namespace feValC{
            constexpr MPL::Value<feVal,feVal::framingErrorStatus> framingErrorStatus{};
            constexpr MPL::Value<feVal,feVal::framingErrorStatus> framingErrorStatus{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,feVal> fe{}; 
        ///Break Interrupt. When RXDn is held in the spacing state (all zeroes) for one full character transmission (start, data, parity, stop), a break interrupt occurs. Once the break condition has been detected, the receiver goes idle until RXDn goes to marking state (all ones). An UnLSR read clears this status bit. The time of break detection is dependent on UnFCR[0]. Note: The break interrupt is associated with the character at the top of the UARTn RBR FIFO.
        enum class biVal {
            breakInterruptStat=0x00000000,     ///<Break interrupt status is inactive.
            breakInterruptStat=0x00000001,     ///<Break interrupt status is active.
        };
        namespace biValC{
            constexpr MPL::Value<biVal,biVal::breakInterruptStat> breakInterruptStat{};
            constexpr MPL::Value<biVal,biVal::breakInterruptStat> breakInterruptStat{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,biVal> bi{}; 
        ///Transmitter Holding Register Empty. THRE is set immediately upon detection of an empty UARTn THR and is cleared on a UnTHR write.
        enum class threVal {
            unthrContainsValid=0x00000000,     ///<UnTHR contains valid data.
            unthrIsEmpty=0x00000001,     ///<UnTHR is empty.
        };
        namespace threValC{
            constexpr MPL::Value<threVal,threVal::unthrContainsValid> unthrContainsValid{};
            constexpr MPL::Value<threVal,threVal::unthrIsEmpty> unthrIsEmpty{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,threVal> thre{}; 
        ///Transmitter Empty. TEMT is set when both UnTHR and UnTSR are empty; TEMT is cleared when either the UnTSR or the UnTHR contain valid data.
        enum class temtVal {
            validData=0x00000000,     ///<UnTHR and/or the UnTSR contains valid data.
            empty=0x00000001,     ///<UnTHR and the UnTSR are empty.
        };
        namespace temtValC{
            constexpr MPL::Value<temtVal,temtVal::validData> validData{};
            constexpr MPL::Value<temtVal,temtVal::empty> empty{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,temtVal> temt{}; 
        ///Error in RX FIFO . UnLSR[7] is set when a character with a Rx error such as framing error, parity error or break interrupt, is loaded into the UnRBR. This bit is cleared when the UnLSR register is read and there are no subsequent errors in the UARTn FIFO.
        enum class rxfeVal {
            unrbrContainsNoUa=0x00000000,     ///<UnRBR contains no UARTn RX errors or UnFCR[0]=0.
            uartnRbrContainsA=0x00000001,     ///<UARTn RBR contains at least one UARTn RX error.
        };
        namespace rxfeValC{
            constexpr MPL::Value<rxfeVal,rxfeVal::unrbrContainsNoUa> unrbrContainsNoUa{};
            constexpr MPL::Value<rxfeVal,rxfeVal::uartnRbrContainsA> uartnRbrContainsA{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxfeVal> rxfe{}; 
    }
    namespace Nonescr{    ///<Scratch Pad Register. 8-bit temporary storage for software.
        using Addr = Register::Address<0x400a401c,0xffffff00,0,unsigned>;
        ///A readable, writable byte.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pad{}; 
    }
    namespace Noneacr{    ///<Auto-baud Control Register. Contains controls for the auto-baud feature.
        using Addr = Register::Address<0x400a4020,0xfffffcf8,0,unsigned>;
        ///Start bit. This bit is automatically cleared after auto-baud completion.
        enum class startVal {
            autoBaudStopAuto=0x00000000,     ///<Auto-baud stop (auto-baud is not running).
            autoBaudStartAut=0x00000001,     ///<Auto-baud start (auto-baud is running). Auto-baud run bit. This bit is automatically cleared after auto-baud completion.
        };
        namespace startValC{
            constexpr MPL::Value<startVal,startVal::autoBaudStopAuto> autoBaudStopAuto{};
            constexpr MPL::Value<startVal,startVal::autoBaudStartAut> autoBaudStartAut{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,startVal> start{}; 
        ///Auto-baud mode select bit.
        enum class modeVal {
            mode0=0x00000000,     ///<Mode 0.
            mode1=0x00000001,     ///<Mode 1.
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::mode0> mode0{};
            constexpr MPL::Value<modeVal,modeVal::mode1> mode1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Restart bit.
        enum class autorestartVal {
            noRestart=0x00000000,     ///<No restart.
            restartInCaseOfT=0x00000001,     ///<Restart in case of time-out (counter restarts at next UARTn Rx falling edge)
        };
        namespace autorestartValC{
            constexpr MPL::Value<autorestartVal,autorestartVal::noRestart> noRestart{};
            constexpr MPL::Value<autorestartVal,autorestartVal::restartInCaseOfT> restartInCaseOfT{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,autorestartVal> autorestart{}; 
        ///End of auto-baud interrupt clear bit (write-only accessible). Writing a 1 will clear the corresponding interrupt in the UnIIR. Writing a 0 has no impact.
        enum class abeointclrVal {
            noImpact=0x00000000,     ///<No impact.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding interrupt in the IIR.
        };
        namespace abeointclrValC{
            constexpr MPL::Value<abeointclrVal,abeointclrVal::noImpact> noImpact{};
            constexpr MPL::Value<abeointclrVal,abeointclrVal::clearTheCorrespond> clearTheCorrespond{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,abeointclrVal> abeointclr{}; 
        ///Auto-baud time-out interrupt clear bit (write-only accessible). Writing a 1 will clear the corresponding interrupt in the UnIIR. Writing a 0 has no impact.
        enum class abtointclrVal {
            noImpact=0x00000000,     ///<No impact.
            clearTheCorrespond=0x00000001,     ///<Clear the corresponding interrupt in the IIR.
        };
        namespace abtointclrValC{
            constexpr MPL::Value<abtointclrVal,abtointclrVal::noImpact> noImpact{};
            constexpr MPL::Value<abtointclrVal,abtointclrVal::clearTheCorrespond> clearTheCorrespond{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,abtointclrVal> abtointclr{}; 
    }
    namespace Noneicr{    ///<IrDA Control Register. Enables and configures the IrDA mode.
        using Addr = Register::Address<0x400a4024,0xffffffc0,0,unsigned>;
        ///IrDA mode
        enum class irdaenVal {
            disabledIrdaMode=0x00000000,     ///<Disabled. IrDA mode on UART4 is disabled, UART4 acts as a standard UART.
            enabledIrdaModeO=0x00000001,     ///<Enabled. IrDA mode on UART4 is enabled.
        };
        namespace irdaenValC{
            constexpr MPL::Value<irdaenVal,irdaenVal::disabledIrdaMode> disabledIrdaMode{};
            constexpr MPL::Value<irdaenVal,irdaenVal::enabledIrdaModeO> enabledIrdaModeO{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,irdaenVal> irdaen{}; 
        ///Serial input direction.
        enum class irdainvVal {
            notInverted=0x00000000,     ///<Not inverted.
            invertedThisHasN=0x00000001,     ///<Inverted. This has no effect on the serial output.
        };
        namespace irdainvValC{
            constexpr MPL::Value<irdainvVal,irdainvVal::notInverted> notInverted{};
            constexpr MPL::Value<irdainvVal,irdainvVal::invertedThisHasN> invertedThisHasN{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,irdainvVal> irdainv{}; 
        ///IrDA fixed pulse width mode.
        enum class fixpulseenVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace fixpulseenValC{
            constexpr MPL::Value<fixpulseenVal,fixpulseenVal::disabled> disabled{};
            constexpr MPL::Value<fixpulseenVal,fixpulseenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,fixpulseenVal> fixpulseen{}; 
        ///Configures the pulse when FixPulseEn = 1.
        enum class pulsedivVal {
            v2xtpclk=0x00000000,     ///<2xTPCLK
            v4xtpclk=0x00000001,     ///<4xTPCLK
            v8xtpclk=0x00000002,     ///<8xTPCLK
            v16xtpclk=0x00000003,     ///<16xTPCLK
            v32xtpclk=0x00000004,     ///<32xTPCLK
            v64xtpclk=0x00000005,     ///<64xTPCLK
            v128xtpclk=0x00000006,     ///<128xTPCLK
            v256xtpclk=0x00000007,     ///<256xTPCLK
        };
        namespace pulsedivValC{
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v2xtpclk> v2xtpclk{};
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v4xtpclk> v4xtpclk{};
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v8xtpclk> v8xtpclk{};
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v16xtpclk> v16xtpclk{};
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v32xtpclk> v32xtpclk{};
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v64xtpclk> v64xtpclk{};
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v128xtpclk> v128xtpclk{};
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v256xtpclk> v256xtpclk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,pulsedivVal> pulsediv{}; 
    }
    namespace Nonefdr{    ///<Fractional Divider Register. Generates a clock input for the baud rate divider.
        using Addr = Register::Address<0x400a4028,0xffffff00,0,unsigned>;
        ///Baud Rate generation pre-scaler divisor value. If this field is 0, fractional baud rate generator will not impact the UART4 baud rate.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> divaddval{}; 
        ///Baud Rate pre-scaler multiplier value. This field must be greater or equal 1 for UART4 to operate properly, regardless of whether the fractional baud rate generator is used or not.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> mulval{}; 
    }
    namespace Noneosr{    ///<Oversampling register. Controls the degree of oversampling during each bit time.
        using Addr = Register::Address<0x400a402c,0xffff8001,0,unsigned>;
        ///Fractional part of the oversampling ratio, in units of 1/8th of an input clock period. (001 = 0.125, ..., 111 = 0.875)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> osfrac{}; 
        ///Integer part of the oversampling ratio, minus 1. The reset values equate to the normal operating mode of 16 input clocks per bit time.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> osint{}; 
        ///In smartcard mode, these bits act as a more-significant extension of the OSint field, allowing an oversampling ratio up to 2048 as required by ISO7816-3. In smartcard mode, bits 14:4 should initially be set to 371, yielding an oversampling ratio of 372.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fdint{}; 
    }
    namespace Nonescictrl{    ///<Smart Card Interface control register. Enables and configures the smartcard Interface feature.
        using Addr = Register::Address<0x400a4048,0xffff0018,0,unsigned>;
        ///Smart Card Interface Enable.
        enum class scienVal {
            smartCardInterface=0x00000000,     ///<Smart card interface disabled.
            asynchronousHalfDu=0x00000001,     ///<Asynchronous half duplex smart card interface is enabled.
        };
        namespace scienValC{
            constexpr MPL::Value<scienVal,scienVal::smartCardInterface> smartCardInterface{};
            constexpr MPL::Value<scienVal,scienVal::asynchronousHalfDu> asynchronousHalfDu{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,scienVal> scien{}; 
        ///NACK response disable. Only applicable in T=0.
        enum class nackdisVal {
            aNackResponseIsE=0x00000000,     ///<A NACK response is enabled.
            aNackResponseIsI=0x00000001,     ///<A NACK response is inhibited.
        };
        namespace nackdisValC{
            constexpr MPL::Value<nackdisVal,nackdisVal::aNackResponseIsE> aNackResponseIsE{};
            constexpr MPL::Value<nackdisVal,nackdisVal::aNackResponseIsI> aNackResponseIsI{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,nackdisVal> nackdis{}; 
        ///Protocol selection as defined in the ISO7816-3 standard.
        enum class protselVal {
            tEq0=0x00000000,     ///<T = 0
            tEq1=0x00000001,     ///<T = 1
        };
        namespace protselValC{
            constexpr MPL::Value<protselVal,protselVal::tEq0> tEq0{};
            constexpr MPL::Value<protselVal,protselVal::tEq1> tEq1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,protselVal> protsel{}; 
        ///Maximum number of retransmissions in case of a negative acknowledge (protocol T=0). When the retry counter is exceeded, the USART will be locked until the FIFO is cleared. A TX error interrupt is generated when enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> txretry{}; 
        ///Extra guard time. No extra guard time (0x0) results in a standard guard time as defined in ISO 7816-3, depending on the protocol type. A guard time of 0xFF indicates a minimal guard time as defined for the selected protocol.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> guardtime{}; 
    }
    namespace Noners485ctrl{    ///<RS-485/EIA-485 Control. Contains controls to configure various aspects of RS-485/EIA-485 modes.
        using Addr = Register::Address<0x400a404c,0xffffffc8,0,unsigned>;
        ///NMM enable.
        enum class nmmenVal {
            disabled=0x00000000,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is disabled.
            enabled=0x00000001,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is enabled. In this mode, an address is detected when a received byte causes the USART to set the parity error and generate an interrupt. See Section 20.6.18 RS-485/EIA-485 modes of operation.
        };
        namespace nmmenValC{
            constexpr MPL::Value<nmmenVal,nmmenVal::disabled> disabled{};
            constexpr MPL::Value<nmmenVal,nmmenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,nmmenVal> nmmen{}; 
        ///Receiver enable.
        enum class rxdisVal {
            enabled=0x00000000,     ///<Enabled.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace rxdisValC{
            constexpr MPL::Value<rxdisVal,rxdisVal::enabled> enabled{};
            constexpr MPL::Value<rxdisVal,rxdisVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rxdisVal> rxdis{}; 
        ///AAD enable
        enum class aadenVal {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace aadenValC{
            constexpr MPL::Value<aadenVal,aadenVal::disabled> disabled{};
            constexpr MPL::Value<aadenVal,aadenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,aadenVal> aaden{}; 
        ///Direction control for DIR pin.
        enum class dctrlVal {
            disableAutoDirecti=0x00000000,     ///<Disable Auto Direction Control.
            enableAutoDirectio=0x00000001,     ///<Enable Auto Direction Control.
        };
        namespace dctrlValC{
            constexpr MPL::Value<dctrlVal,dctrlVal::disableAutoDirecti> disableAutoDirecti{};
            constexpr MPL::Value<dctrlVal,dctrlVal::enableAutoDirectio> enableAutoDirectio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dctrlVal> dctrl{}; 
        ///Direction control pin polarity. This bit reverses the polarity of the direction control signal on the DIR pin.
        enum class oinvVal {
            lowTheDirectionC=0x00000000,     ///<Low. The direction control pin will be driven to logic 0 when the transmitter has data to be sent. It will be driven to logic 1 after the last bit of data has been transmitted.
            highTheDirection=0x00000001,     ///<High. The direction control pin will be driven to logic 1 when the transmitter has data to be sent. It will be driven to logic 0 after the last bit of data has been transmitted.
        };
        namespace oinvValC{
            constexpr MPL::Value<oinvVal,oinvVal::lowTheDirectionC> lowTheDirectionC{};
            constexpr MPL::Value<oinvVal,oinvVal::highTheDirection> highTheDirection{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,oinvVal> oinv{}; 
    }
    namespace Noners485adrmatch{    ///<RS-485/EIA-485 address match. Contains the address match value for RS-485/EIA-485 mode.
        using Addr = Register::Address<0x400a4050,0xffffff00,0,unsigned>;
        ///Contains the address match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adrmatch{}; 
    }
    namespace Noners485dly{    ///<RS-485/EIA-485 direction control delay.
        using Addr = Register::Address<0x400a4054,0xffffff00,0,unsigned>;
        ///Contains the direction control (U4OE) delay value. This register works in conjunction with an 8-bit counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Nonesyncctrl{    ///<Synchronous mode control register.
        using Addr = Register::Address<0x400a4058,0xffffff80,0,unsigned>;
        ///Enables synchronous mode.
        enum class syncVal {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace syncValC{
            constexpr MPL::Value<syncVal,syncVal::disabled> disabled{};
            constexpr MPL::Value<syncVal,syncVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,syncVal> sync{}; 
        ///Clock source select.
        enum class csrcVal {
            synchronousSlaveMo=0x00000000,     ///<Synchronous slave mode (SCLK in)
            synchronousMasterM=0x00000001,     ///<Synchronous master mode (SCLK out)
        };
        namespace csrcValC{
            constexpr MPL::Value<csrcVal,csrcVal::synchronousSlaveMo> synchronousSlaveMo{};
            constexpr MPL::Value<csrcVal,csrcVal::synchronousMasterM> synchronousMasterM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,csrcVal> csrc{}; 
        ///Falling edge sampling.
        enum class fesVal {
            rxdIsSampledOnTh=0x00000000,     ///<RxD is sampled on the rising edge of SCLK
            rxdIsSampledOnTh=0x00000001,     ///<RxD is sampled on the falling edge of SCLK
        };
        namespace fesValC{
            constexpr MPL::Value<fesVal,fesVal::rxdIsSampledOnTh> rxdIsSampledOnTh{};
            constexpr MPL::Value<fesVal,fesVal::rxdIsSampledOnTh> rxdIsSampledOnTh{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,fesVal> fes{}; 
        ///Transmit synchronization bypass in synchronous slave mode.
        enum class tsbypassVal {
            theInputClockIsS=0x00000000,     ///<The input clock is synchronized prior to being used in clock edge detection logic.
            theInputClockIsN=0x00000001,     ///<The input clock is not synchronized prior to being used in clock edge detection logic. This allows for a high er input clock rate at the expense of potential metastability.
        };
        namespace tsbypassValC{
            constexpr MPL::Value<tsbypassVal,tsbypassVal::theInputClockIsS> theInputClockIsS{};
            constexpr MPL::Value<tsbypassVal,tsbypassVal::theInputClockIsN> theInputClockIsN{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tsbypassVal> tsbypass{}; 
        ///Continuous master clock enable (used only when CSRC is 1)
        enum class cscenVal {
            sclkCyclesOnlyWhe=0x00000000,     ///<SCLK cycles only when characters are being sent on TxD
            sclkRunsContinuous=0x00000001,     ///<SCLK runs continuously (characters can be received on RxD independently from transmission on TxD)
        };
        namespace cscenValC{
            constexpr MPL::Value<cscenVal,cscenVal::sclkCyclesOnlyWhe> sclkCyclesOnlyWhe{};
            constexpr MPL::Value<cscenVal,cscenVal::sclkRunsContinuous> sclkRunsContinuous{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,cscenVal> cscen{}; 
        ///Start/stop bits
        enum class sssdisVal {
            sendStartAndStop=0x00000000,     ///<Send start and stop bits as in other modes.
            nostartstopbit=0x00000001,     ///<Do not send start/stop bits.
        };
        namespace sssdisValC{
            constexpr MPL::Value<sssdisVal,sssdisVal::sendStartAndStop> sendStartAndStop{};
            constexpr MPL::Value<sssdisVal,sssdisVal::nostartstopbit> nostartstopbit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sssdisVal> sssdis{}; 
        ///Continuous clock clear
        enum class ccclrVal {
            cscenIsUnderSoftw=0x00000000,     ///<CSCEN is under software control.
            hardwareClearsCsce=0x00000001,     ///<Hardware clears CSCEN after each character is received.
        };
        namespace ccclrValC{
            constexpr MPL::Value<ccclrVal,ccclrVal::cscenIsUnderSoftw> cscenIsUnderSoftw{};
            constexpr MPL::Value<ccclrVal,ccclrVal::hardwareClearsCsce> hardwareClearsCsce{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ccclrVal> ccclr{}; 
    }
}
