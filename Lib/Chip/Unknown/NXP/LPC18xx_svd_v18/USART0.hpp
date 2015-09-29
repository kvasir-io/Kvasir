#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx USART0_2_3 Modification date=1/14/2011 Major revision=0 Minor revision=7 
    namespace Nonerbr{    ///<Receiver Buffer Register. Contains the next received character to be read (DLAB = 0).
        using Addr = Register::Address<0x40081000,0xffffff00,0,unsigned>;
        ///Receiver buffer. The UART Receiver Buffer Register contains the oldest received byte in the UART RX FIFO.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rbr{}; 
    }
    namespace Nonethr{    ///<Transmit Holding Register. The next character to be transmitted is written here (DLAB = 0).
        using Addr = Register::Address<0x40081000,0xffffff00,0,unsigned>;
        ///Transmit Holding Register. Writing to the UART Transmit Holding Register causes the data to be stored in the UART transmit FIFO. The byte will be sent when it reaches the bottom of the FIFO and the transmitter is available.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> thr{}; 
    }
    namespace Nonedll{    ///<Divisor Latch LSB. Least significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider (DLAB = 1).
        using Addr = Register::Address<0x40081000,0xffffff00,0,unsigned>;
        ///Divisor latch LSB. The UART Divisor Latch LSB Register, along with the DLM register, determines the baud rate of the UART.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dllsb{}; 
    }
    namespace Nonedlm{    ///<Divisor Latch MSB. Most significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider (DLAB = 1).
        using Addr = Register::Address<0x40081004,0xffffff00,0,unsigned>;
        ///Divisor latch MSB.  The UART Divisor Latch MSB Register, along with the DLL register, determines the baud rate of the UART.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dlmsb{}; 
    }
    namespace Noneier{    ///<Interrupt Enable Register. Contains individual interrupt enable bits for the 7 potential UART interrupts (DLAB = 0).
        using Addr = Register::Address<0x40081004,0xfffffcf8,0,unsigned>;
        ///RBR Interrupt Enable. Enables the Receive Data Available interrupt for UART. It also controls the Character Receive Time-out interrupt.
        enum class rbrieVal {
            disableTheRdaInte=0x00000000,     ///<Disable the RDA interrupt.
            enableTheRdaInter=0x00000001,     ///<Enable the RDA interrupt.
        };
        namespace rbrieValC{
            constexpr MPL::Value<rbrieVal,rbrieVal::disableTheRdaInte> disableTheRdaInte{};
            constexpr MPL::Value<rbrieVal,rbrieVal::enableTheRdaInter> enableTheRdaInter{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rbrieVal> rbrie{}; 
        ///THRE Interrupt Enable. Enables the THRE interrupt for UART. The status of this interrupt can be read from LSR bit 5.
        enum class threieVal {
            disableTheThreInt=0x00000000,     ///<Disable the THRE interrupt.
            enableTheThreInte=0x00000001,     ///<Enable the THRE interrupt.
        };
        namespace threieValC{
            constexpr MPL::Value<threieVal,threieVal::disableTheThreInt> disableTheThreInt{};
            constexpr MPL::Value<threieVal,threieVal::enableTheThreInte> enableTheThreInte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,threieVal> threie{}; 
        ///RX Line Interrupt Enable. Enables the UART RX line status interrupts. The status of this interrupt can be read from LSR bit 4:1.
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
        using Addr = Register::Address<0x40081008,0xfffffc30,0,unsigned>;
        ///Interrupt status.  Note that IIR bit  0 is active low. The pending interrupt can be determined by evaluating IIR bit  3:1.
        enum class intstatusVal {
            atLeastOneInterru=0x00000000,     ///<At least one interrupt is pending.
            noInterruptIsPend=0x00000001,     ///<No interrupt is pending.
        };
        namespace intstatusValC{
            constexpr MPL::Value<intstatusVal,intstatusVal::atLeastOneInterru> atLeastOneInterru{};
            constexpr MPL::Value<intstatusVal,intstatusVal::noInterruptIsPend> noInterruptIsPend{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intstatusVal> intstatus{}; 
        ///Interrupt identification.  IER3:1 identifies an interrupt corresponding to the UART Rx FIFO. All other combinations of IER bit  3:1 not listed below are reserved (100,101,111).
        enum class intidVal {
            priority1Highest=0x00000003,     ///<Priority 1 (highest) - Receive Line Status (RLS).
            priority2Receive=0x00000002,     ///<Priority 2 - Receive Data Available (RDA).
            priority2Charact=0x00000006,     ///<Priority 2 - Character Time-out Indicator (CTI).
            priority3ThreIn=0x00000001,     ///<Priority 3 - THRE Interrupt.
            priority4Lowest=0x00000000,     ///<Priority 4 (lowest) - Reserved.
        };
        namespace intidValC{
            constexpr MPL::Value<intidVal,intidVal::priority1Highest> priority1Highest{};
            constexpr MPL::Value<intidVal,intidVal::priority2Receive> priority2Receive{};
            constexpr MPL::Value<intidVal,intidVal::priority2Charact> priority2Charact{};
            constexpr MPL::Value<intidVal,intidVal::priority3ThreIn> priority3ThreIn{};
            constexpr MPL::Value<intidVal,intidVal::priority4Lowest> priority4Lowest{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,intidVal> intid{}; 
        ///Copies of FCR bit  0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> fifoenable{}; 
        ///End of auto-baud interrupt.  True if auto-baud has finished successfully and interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> abeoint{}; 
        ///Auto-baud time-out interrupt.  True if auto-baud has timed out and interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> abtoint{}; 
    }
    namespace Nonefcr{    ///<FIFO Control Register. Controls UART FIFO usage and modes.
        using Addr = Register::Address<0x40081008,0xffffff30,0,unsigned>;
        ///FIFO Enable.
        enum class fifoenVal {
            uartFifosAreDisab=0x00000000,     ///<UART FIFOs are disabled. Must not be used in the application.
            activeHighEnableF=0x00000001,     ///<Active high enable for both UART Rx and TX FIFOs and FCR bit  7:1 access. This bit must be set for proper UART operation. Any transition on this bit will automatically clear the UART FIFOs.
        };
        namespace fifoenValC{
            constexpr MPL::Value<fifoenVal,fifoenVal::uartFifosAreDisab> uartFifosAreDisab{};
            constexpr MPL::Value<fifoenVal,fifoenVal::activeHighEnableF> activeHighEnableF{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fifoenVal> fifoen{}; 
        ///RX FIFO Reset.
        enum class rxfiforesVal {
            noImpactOnEither=0x00000000,     ///<No impact on either of UART FIFOs.
            writingALogic1To=0x00000001,     ///<Writing a logic 1 to FCR bit  1 will clear all bytes in UART Rx FIFO, reset the pointer logic. This bit is self-clearing.
        };
        namespace rxfiforesValC{
            constexpr MPL::Value<rxfiforesVal,rxfiforesVal::noImpactOnEither> noImpactOnEither{};
            constexpr MPL::Value<rxfiforesVal,rxfiforesVal::writingALogic1To> writingALogic1To{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rxfiforesVal> rxfifores{}; 
        ///TX FIFO Reset.
        enum class txfiforesVal {
            noImpactOnEither=0x00000000,     ///<No impact on either of UART FIFOs.
            writingALogic1To=0x00000001,     ///<Writing a logic 1 to FCR bit  2 will clear all bytes in UART TX FIFO, reset the pointer logic. This bit is self-clearing.
        };
        namespace txfiforesValC{
            constexpr MPL::Value<txfiforesVal,txfiforesVal::noImpactOnEither> noImpactOnEither{};
            constexpr MPL::Value<txfiforesVal,txfiforesVal::writingALogic1To> writingALogic1To{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,txfiforesVal> txfifores{}; 
        ///DMA Mode Select. When the FIFO enable bit (bit 0 of this register) is set, this bit selects the DMA mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dmamode{}; 
        ///RX Trigger Level. These two bits determine how many receiver UART FIFO characters must be written before an interrupt is activated.
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
        using Addr = Register::Address<0x4008100c,0xffffff00,0,unsigned>;
        ///Word Length Select.
        enum class wlsVal {
            v5BitCharacterLeng=0x00000000,     ///<5-bit character length.
            v6BitCharacterLeng=0x00000001,     ///<6-bit character length.
            v7BitCharacterLeng=0x00000002,     ///<7-bit character length.
            v8BitCharacterLeng=0x00000003,     ///<8-bit character length.
        };
        namespace wlsValC{
            constexpr MPL::Value<wlsVal,wlsVal::v5BitCharacterLeng> v5BitCharacterLeng{};
            constexpr MPL::Value<wlsVal,wlsVal::v6BitCharacterLeng> v6BitCharacterLeng{};
            constexpr MPL::Value<wlsVal,wlsVal::v7BitCharacterLeng> v7BitCharacterLeng{};
            constexpr MPL::Value<wlsVal,wlsVal::v8BitCharacterLeng> v8BitCharacterLeng{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,wlsVal> wls{}; 
        ///Stop Bit Select.
        enum class sbsVal {
            v1StopBit=0x00000000,     ///<1 stop bit.
            v2StopBits15If=0x00000001,     ///<2 stop bits (1.5 if LCR bit  1:0=00).
        };
        namespace sbsValC{
            constexpr MPL::Value<sbsVal,sbsVal::v1StopBit> v1StopBit{};
            constexpr MPL::Value<sbsVal,sbsVal::v2StopBits15If> v2StopBits15If{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sbsVal> sbs{}; 
        ///Parity Enable
        enum class peVal {
            disableParityGener=0x00000000,     ///<Disable parity generation and checking.
            enableParityGenera=0x00000001,     ///<Enable parity generation and checking.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::disableParityGener> disableParityGener{};
            constexpr MPL::Value<peVal,peVal::enableParityGenera> enableParityGenera{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,peVal> pe{}; 
        ///Parity Select.
        enum class psVal {
            oddParityNumberO=0x00000000,     ///<Odd parity. Number of 1s in the transmitted character and the attached parity bit will be odd.
            evenParityNumber=0x00000001,     ///<Even Parity. Number of 1s in the transmitted character and the attached parity bit will be even.
            forced1StickPar=0x00000002,     ///<Forced 1 stick parity.
            forced0StickPar=0x00000003,     ///<Forced 0 stick parity.
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::oddParityNumberO> oddParityNumberO{};
            constexpr MPL::Value<psVal,psVal::evenParityNumber> evenParityNumber{};
            constexpr MPL::Value<psVal,psVal::forced1StickPar> forced1StickPar{};
            constexpr MPL::Value<psVal,psVal::forced0StickPar> forced0StickPar{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,psVal> ps{}; 
        ///Break Control.
        enum class bcVal {
            disableBreakTransm=0x00000000,     ///<Disable break transmission.
            enableBreakTransmi=0x00000001,     ///<Enable break transmission. Output pin UART TXD is forced to logic 0 when LCR bit  6 is active high.
        };
        namespace bcValC{
            constexpr MPL::Value<bcVal,bcVal::disableBreakTransm> disableBreakTransm{};
            constexpr MPL::Value<bcVal,bcVal::enableBreakTransmi> enableBreakTransmi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bcVal> bc{}; 
        ///Divisor Latch Access Bit.
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
        using Addr = Register::Address<0x40081014,0xfffffe00,0,unsigned>;
        ///Receiver Data Ready. LSR bit  0 is set when the RBR holds an unread character and is cleared when the UART RBR FIFO is empty.
        enum class rdrVal {
            rbrIsEmpty=0x00000000,     ///<RBR is empty.
            rbrContainsValidD=0x00000001,     ///<RBR contains valid data.
        };
        namespace rdrValC{
            constexpr MPL::Value<rdrVal,rdrVal::rbrIsEmpty> rbrIsEmpty{};
            constexpr MPL::Value<rdrVal,rdrVal::rbrContainsValidD> rbrContainsValidD{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rdrVal> rdr{}; 
        ///Overrun Error. The overrun error condition is set as soon as it occurs. A LSR read clears LSR bit  1. LSR bit  1 is set when UART RSR has a new character assembled and the UART RBR FIFO is full. In this case, the UART RBR FIFO will not be overwritten and the character in the UART RSR will be lost.
        enum class oeVal {
            inactive=0x00000000,     ///<Overrun error status is inactive.
            active=0x00000001,     ///<Overrun error status is active.
        };
        namespace oeValC{
            constexpr MPL::Value<oeVal,oeVal::inactive> inactive{};
            constexpr MPL::Value<oeVal,oeVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oeVal> oe{}; 
        ///Parity Error. When the parity bit of a received character is in the wrong state, a parity error occurs. A LSR read clears LSR bit  2. Time of parity error detection is dependent on FCR bit  0. Note: A parity error is associated with the character at the top of the UART RBR FIFO.
        enum class peVal {
            inactive=0x00000000,     ///<Parity error status is inactive.
            active=0x00000001,     ///<Parity error status is active.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::inactive> inactive{};
            constexpr MPL::Value<peVal,peVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,peVal> pe{}; 
        ///Framing Error. When the stop bit of a received character is a logic 0, a framing error occurs. A LSR read clears LSR bit  3. The time of the framing error detection is dependent on FCR0. Upon detection of a framing error, the RX will attempt to re-synchronize to the data and assume that the bad stop bit is actually an early start bit. However, it cannot be assumed that the next received byte will be correct even if there is no Framing Error. Note: A framing error is associated with the character at the top of the UART RBR FIFO.
        enum class feVal {
            inactive=0x00000000,     ///<Framing error status is inactive.
            active=0x00000001,     ///<Framing error status is active.
        };
        namespace feValC{
            constexpr MPL::Value<feVal,feVal::inactive> inactive{};
            constexpr MPL::Value<feVal,feVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,feVal> fe{}; 
        ///Break Interrupt. When RXD1 is held in the spacing state (all zeros) for one full character transmission (start, data, parity, stop), a break interrupt occurs. Once the break condition has been detected, the receiver goes idle until RXD1 goes to marking state (all ones). A LSR read clears this status bit. The time of break detection is dependent on FCR bit  0. Note: The break interrupt is associated with the character at the top of the UART RBR FIFO.
        enum class biVal {
            inactive=0x00000000,     ///<Break interrupt status is inactive.
            active=0x00000001,     ///<Break interrupt status is active.
        };
        namespace biValC{
            constexpr MPL::Value<biVal,biVal::inactive> inactive{};
            constexpr MPL::Value<biVal,biVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,biVal> bi{}; 
        ///Transmitter Holding Register Empty. THRE is set immediately upon detection of an empty UART THR and is cleared on a THR write.
        enum class threVal {
            thrContainsValidD=0x00000000,     ///<THR contains valid data.
            thrIsEmpty=0x00000001,     ///<THR is empty.
        };
        namespace threValC{
            constexpr MPL::Value<threVal,threVal::thrContainsValidD> thrContainsValidD{};
            constexpr MPL::Value<threVal,threVal::thrIsEmpty> thrIsEmpty{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,threVal> thre{}; 
        ///Transmitter Empty. TEMT is set when both THR and TSR are empty; TEMT is cleared when either the TSR or the THR contain valid data.
        enum class temtVal {
            valid=0x00000000,     ///<THR and/or the TSR contains valid data.
            empty=0x00000001,     ///<THR and the TSR are empty.
        };
        namespace temtValC{
            constexpr MPL::Value<temtVal,temtVal::valid> valid{};
            constexpr MPL::Value<temtVal,temtVal::empty> empty{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,temtVal> temt{}; 
        ///Error in RX FIFO. LSR bit  7 is set when a character with a RX error such as framing error, parity error or break interrupt, is loaded into the RBR. This bit is cleared when the LSR register is read and there are no subsequent errors in the UART FIFO.
        enum class rxfeVal {
            rbrContainsNoUart=0x00000000,     ///<RBR contains no UART RX errors or FCR bit  0 =0.
            uartRbrContainsAt=0x00000001,     ///<UART RBR contains at least one UART RX error.
        };
        namespace rxfeValC{
            constexpr MPL::Value<rxfeVal,rxfeVal::rbrContainsNoUart> rbrContainsNoUart{};
            constexpr MPL::Value<rxfeVal,rxfeVal::uartRbrContainsAt> uartRbrContainsAt{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxfeVal> rxfe{}; 
        ///Error in transmitted character.   A NACK response is given by the receiver in Smart card T=0 mode. This bit is cleared when the LSR register is read.
        enum class txerrVal {
            noErrorNormalDef=0x00000000,     ///<No error (normal default condition).
            aNackResponseIsR=0x00000001,     ///<A NACK response is received during Smart card T=0 operation.
        };
        namespace txerrValC{
            constexpr MPL::Value<txerrVal,txerrVal::noErrorNormalDef> noErrorNormalDef{};
            constexpr MPL::Value<txerrVal,txerrVal::aNackResponseIsR> aNackResponseIsR{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,txerrVal> txerr{}; 
    }
    namespace Nonescr{    ///<Scratch Pad Register. Eight-bit temporary storage for software.
        using Addr = Register::Address<0x4008101c,0xffffff00,0,unsigned>;
        ///Scratch pad. A readable, writable byte.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pad{}; 
    }
    namespace Noneacr{    ///<Auto-baud Control Register. Contains controls for the auto-baud feature.
        using Addr = Register::Address<0x40081020,0xfffffcf8,0,unsigned>;
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
            noRestart=0x00000000,     ///<No restart
            restartInCaseOfT=0x00000001,     ///<Restart in case of time-out (counter restarts at next UART Rx falling edge)
        };
        namespace autorestartValC{
            constexpr MPL::Value<autorestartVal,autorestartVal::noRestart> noRestart{};
            constexpr MPL::Value<autorestartVal,autorestartVal::restartInCaseOfT> restartInCaseOfT{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,autorestartVal> autorestart{}; 
        ///End of auto-baud interrupt clear bit (write-only).
        enum class abeointclrVal {
            writingA0HasNoI=0x00000000,     ///<Writing a 0 has no impact.
            writingA1WillCle=0x00000001,     ///<Writing a 1 will clear the corresponding interrupt in the IIR.
        };
        namespace abeointclrValC{
            constexpr MPL::Value<abeointclrVal,abeointclrVal::writingA0HasNoI> writingA0HasNoI{};
            constexpr MPL::Value<abeointclrVal,abeointclrVal::writingA1WillCle> writingA1WillCle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,abeointclrVal> abeointclr{}; 
        ///Auto-baud time-out interrupt clear bit (write-only).
        enum class abtointclrVal {
            writingA0HasNoI=0x00000000,     ///<Writing a 0 has no impact.
            writingA1WillCle=0x00000001,     ///<Writing a 1 will clear the corresponding interrupt in the IIR.
        };
        namespace abtointclrValC{
            constexpr MPL::Value<abtointclrVal,abtointclrVal::writingA0HasNoI> writingA0HasNoI{};
            constexpr MPL::Value<abtointclrVal,abtointclrVal::writingA1WillCle> writingA1WillCle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,abtointclrVal> abtointclr{}; 
    }
    namespace Noneicr{    ///<IrDA control register (UART3 only)
        using Addr = Register::Address<0x40081024,0xffffffc0,0,unsigned>;
        ///IrDA mode enable.
        enum class irdaenVal {
            disabled=0x00000000,     ///<IrDA mode on UART3 is disabled, UART3 acts as a standard UART.
            enabled=0x00000001,     ///<IrDA mode on UART3 is enabled.
        };
        namespace irdaenValC{
            constexpr MPL::Value<irdaenVal,irdaenVal::disabled> disabled{};
            constexpr MPL::Value<irdaenVal,irdaenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,irdaenVal> irdaen{}; 
        ///Serial input direction.
        enum class irdainvVal {
            notInverted=0x00000000,     ///<The serial input is not inverted.
            inverted=0x00000001,     ///<The serial input is inverted. This has no effect on the serial output.
        };
        namespace irdainvValC{
            constexpr MPL::Value<irdainvVal,irdainvVal::notInverted> notInverted{};
            constexpr MPL::Value<irdainvVal,irdainvVal::inverted> inverted{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,irdainvVal> irdainv{}; 
        ///IrDA fixed pulse width mode.
        enum class fixpulseenVal {
            disabled=0x00000000,     ///<IrDA fixed pulse width mode disabled.
            enabled=0x00000001,     ///<IrDA fixed pulse width mode enabled.
        };
        namespace fixpulseenValC{
            constexpr MPL::Value<fixpulseenVal,fixpulseenVal::disabled> disabled{};
            constexpr MPL::Value<fixpulseenVal,fixpulseenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,fixpulseenVal> fixpulseen{}; 
        ///Configures the pulse when FixPulseEn = 1. See Table 589 for details.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> pulsediv{}; 
    }
    namespace Nonefdr{    ///<Fractional Divider Register. Generates a clock input for the baud rate divider.
        using Addr = Register::Address<0x40081028,0xffffff00,0,unsigned>;
        ///Baud rate generation pre-scaler divisor value.  If this field is 0, fractional baud rate generator will not impact the UART baud rate.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> divaddval{}; 
        ///Baud rate pre-scaler multiplier value.  This field must be greater or equal 1 for UART to operate properly, regardless of whether the fractional baud rate generator is used or not.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> mulval{}; 
    }
    namespace Noneosr{    ///<Oversampling Register. Controls the degree of oversampling during each bit time.
        using Addr = Register::Address<0x4008102c,0xffff8001,0,unsigned>;
        ///Fractional part of the oversampling ratio, in units of 1/8th of an input clock period. (001 = 0.125, ..., 111 = 0.875)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> osfrac{}; 
        ///Integer part of the oversampling ratio, minus 1. The reset values equate to the normal operating mode of 16 input clocks per bit time.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> osint{}; 
        ///In Smart Card mode, these bits act as a more-significant extension of the OSint field, allowing an oversampling ratio up to 2048 as required by ISO7816-3. In Smart Card mode, bits 14:4 should initially be set to 371, yielding an oversampling ratio of 372.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fdint{}; 
    }
    namespace Nonehden{    ///<Half-duplex enable Register
        using Addr = Register::Address<0x40081040,0xfffffffe,0,unsigned>;
        ///Half-duplex mode enable
        enum class hdenVal {
            disableHalfDuplex=0x00000000,     ///<Disable half-duplex mode.
            enableHalfDuplexM=0x00000001,     ///<Enable half-duplex mode.
        };
        namespace hdenValC{
            constexpr MPL::Value<hdenVal,hdenVal::disableHalfDuplex> disableHalfDuplex{};
            constexpr MPL::Value<hdenVal,hdenVal::enableHalfDuplexM> enableHalfDuplexM{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,hdenVal> hden{}; 
    }
    namespace Nonescictrl{    ///<Smart card interface control register
        using Addr = Register::Address<0x40081048,0xffff0018,0,unsigned>;
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
        using Addr = Register::Address<0x4008104c,0xffffffc8,0,unsigned>;
        ///NMM enable.
        enum class nmmenVal {
            disabled=0x00000000,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is disabled.
            enabled=0x00000001,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is enabled. In this mode, an address is detected when a received byte causes the UART to set the parity error and generate an interrupt.
        };
        namespace nmmenValC{
            constexpr MPL::Value<nmmenVal,nmmenVal::disabled> disabled{};
            constexpr MPL::Value<nmmenVal,nmmenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,nmmenVal> nmmen{}; 
        ///Receiver enable.
        enum class rxdisVal {
            theReceiverIsEnab=0x00000000,     ///<The receiver is enabled.
            theReceiverIsDisa=0x00000001,     ///<The receiver is disabled.
        };
        namespace rxdisValC{
            constexpr MPL::Value<rxdisVal,rxdisVal::theReceiverIsEnab> theReceiverIsEnab{};
            constexpr MPL::Value<rxdisVal,rxdisVal::theReceiverIsDisa> theReceiverIsDisa{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rxdisVal> rxdis{}; 
        ///AAD enable
        enum class aadenVal {
            disabled=0x00000000,     ///<Auto Address Detect (AAD) is disabled.
            enabled=0x00000001,     ///<Auto Address Detect (AAD) is enabled.
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
            pineq0=0x00000000,     ///<The direction control pin will be driven to logic 0 when the transmitter has data to be sent. It will be driven to logic 1 after the last bit of data has been transmitted.
            pineq1=0x00000001,     ///<The direction control pin will be driven to logic 1 when the transmitter has data to be sent. It will be driven to logic 0 after the last bit of data has been transmitted.
        };
        namespace oinvValC{
            constexpr MPL::Value<oinvVal,oinvVal::pineq0> pineq0{};
            constexpr MPL::Value<oinvVal,oinvVal::pineq1> pineq1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,oinvVal> oinv{}; 
    }
    namespace Noners485adrmatch{    ///<RS-485/EIA-485 address match. Contains the address match value for RS-485/EIA-485 mode.
        using Addr = Register::Address<0x40081050,0xffffff00,0,unsigned>;
        ///Contains the address match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adrmatch{}; 
    }
    namespace Noners485dly{    ///<RS-485/EIA-485 direction control delay.
        using Addr = Register::Address<0x40081054,0xffffff00,0,unsigned>;
        ///Contains the direction control delay value. This register works in conjunction with an 8-bit counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
    namespace Nonesyncctrl{    ///<Synchronous mode control register.
        using Addr = Register::Address<0x40081058,0xffffff80,0,unsigned>;
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
            rising=0x00000000,     ///<RxD is sampled on the rising edge of SCLK
            falling=0x00000001,     ///<RxD is sampled on the falling edge of SCLK
        };
        namespace fesValC{
            constexpr MPL::Value<fesVal,fesVal::rising> rising{};
            constexpr MPL::Value<fesVal,fesVal::falling> falling{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,fesVal> fes{}; 
        ///Transmit synchronization register bypass.
        enum class tsbypassVal {
            enum_=0x00000000,     ///<tbd.
            enum_=0x00000001,     ///<tbd.
        };
        namespace tsbypassValC{
            constexpr MPL::Value<tsbypassVal,tsbypassVal::enum_> enum_{};
            constexpr MPL::Value<tsbypassVal,tsbypassVal::enum_> enum_{};
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
            doNotSendStartst=0x00000001,     ///<Do not send start/stop bits.
        };
        namespace sssdisValC{
            constexpr MPL::Value<sssdisVal,sssdisVal::sendStartAndStop> sendStartAndStop{};
            constexpr MPL::Value<sssdisVal,sssdisVal::doNotSendStartst> doNotSendStartst{};
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
    namespace Noneter{    ///<Transmit Enable Register. Turns off UART transmitter for use with software flow control.
        using Addr = Register::Address<0x4008105c,0xfffffffe,0,unsigned>;
        ///Transmit enable.  After reset transmission is enabled. When the txen bit is de-asserted, no data will be transmitted although data may be pending in the TSR or THR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txen{}; 
    }
}
