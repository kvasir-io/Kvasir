#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10375 Chapter title=LPC13xx UART Modification date=4/19/2011 Major revision=2 Minor revision=1 
    namespace Nonerbr{    ///<Receiver Buffer Register. Contains the next received character to be read. When DLAB=0.
        using Addr = Register::Address<0x40008000,0xffffff00,0,unsigned>;
        ///The UART Receiver Buffer Register contains the oldest received byte in the UART RX FIFO.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rbr{}; 
    }
    namespace Nonethr{    ///<Transmit Holding Register. The next character to be transmitted is written here. When DLAB=0.
        using Addr = Register::Address<0x40008000,0xffffff00,0,unsigned>;
        ///Writing to the UART Transmit Holding Register causes the data to be stored in the UART transmit FIFO. The byte will be sent when it reaches the bottom of the FIFO and the transmitter is available.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> thr{}; 
    }
    namespace Nonedll{    ///<Divisor Latch LSB. Least significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider. When DLAB=1.
        using Addr = Register::Address<0x40008000,0xffffff00,0,unsigned>;
        ///The UART Divisor Latch LSB Register, along with the DLM register, determines the baud rate of the UART.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dllsb{}; 
    }
    namespace Nonedlm{    ///<Divisor Latch MSB. Most significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider. When DLAB=1.
        using Addr = Register::Address<0x40008004,0xffffff00,0,unsigned>;
        ///The UART Divisor Latch MSB Register, along with the DLL register, determines the baud rate of the UART.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dlmsb{}; 
    }
    namespace Noneier{    ///<Interrupt Enable Register. Contains individual interrupt enable bits for the 7 potential UART interrupts. When DLAB=0.
        using Addr = Register::Address<0x40008004,0xfffffcf8,0,unsigned>;
        ///Interrupt Enable. Enables the Receive Data Available interrupt for UART. It also controls the Character Receive Time-out interrupt.
        enum class rbrieVal {
            disable=0x00000000,     ///<Disable the RDA interrupt.
            enable=0x00000001,     ///<Enable the RDA interrupt.
        };
        namespace rbrieValC{
            constexpr MPL::Value<rbrieVal,rbrieVal::disable> disable{};
            constexpr MPL::Value<rbrieVal,rbrieVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rbrieVal> rbrie{}; 
        ///Interrupt Enable. Enables the THRE interrupt for UART. The status of this interrupt can be read from LSR[5].
        enum class threieVal {
            disable=0x00000000,     ///<Disable the THRE interrupt.
            enable=0x00000001,     ///<Enable the THRE interrupt.
        };
        namespace threieValC{
            constexpr MPL::Value<threieVal,threieVal::disable> disable{};
            constexpr MPL::Value<threieVal,threieVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,threieVal> threie{}; 
        ///Line Interrupt Enable. Enables the UART RX line status interrupts. The status of this interrupt can be read from LSR[4:1].
        enum class rxlieVal {
            disable=0x00000000,     ///<Disable the RX line status
interrupts.
            enable=0x00000001,     ///<Enable
the RX line status interrupts.
        };
        namespace rxlieValC{
            constexpr MPL::Value<rxlieVal,rxlieVal::disable> disable{};
            constexpr MPL::Value<rxlieVal,rxlieVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rxlieVal> rxlie{}; 
        ///Enables the end of auto-baud interrupt.
        enum class abeointenVal {
            disable=0x00000000,     ///<Disable end of auto-baud
Interrupt.
            enable=0x00000001,     ///<Enable
end of auto-baud Interrupt.
        };
        namespace abeointenValC{
            constexpr MPL::Value<abeointenVal,abeointenVal::disable> disable{};
            constexpr MPL::Value<abeointenVal,abeointenVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,abeointenVal> abeointen{}; 
        ///Enables the auto-baud time-out interrupt.
        enum class abtointenVal {
            disable=0x00000000,     ///<Disable auto-baud time-out
Interrupt.
            enable=0x00000001,     ///<Enable
auto-baud time-out Interrupt.
        };
        namespace abtointenValC{
            constexpr MPL::Value<abtointenVal,abtointenVal::disable> disable{};
            constexpr MPL::Value<abtointenVal,abtointenVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,abtointenVal> abtointen{}; 
    }
    namespace Noneiir{    ///<Interrupt ID Register. Identifies which interrupt(s) are pending.
        using Addr = Register::Address<0x40008008,0xfffffc30,0,unsigned>;
        ///Interrupt status. Note that IIR[0] is active low. The pending interrupt can be determined by evaluating IIR[3:1].
        enum class intstatusVal {
            int_=0x00000000,     ///<At least one interrupt
is pending.
            noint=0x00000001,     ///<No
interrupt is pending.
        };
        namespace intstatusValC{
            constexpr MPL::Value<intstatusVal,intstatusVal::int_> int_{};
            constexpr MPL::Value<intstatusVal,intstatusVal::noint> noint{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intstatusVal> intstatus{}; 
        ///Interrupt identification. IER[3:1] identifies an interrupt corresponding to the UART Rx FIFO. All other combinations of IER[3:1] not listed below are reserved (100,101,111).
        enum class intidVal {
            receive=0x00000003,     ///<1   - Receive Line Status
(RLS).
            rda=0x00000002,     ///<2a
- Receive Data Available (RDA).
            ctimeout=0x00000006,     ///<2b - Character Time-out Indicator
(CTI).
            thre=0x00000001,     ///<3
  - THRE Interrupt.
            modem=0x00000000,     ///<4   - Modem interrupt.
        };
        namespace intidValC{
            constexpr MPL::Value<intidVal,intidVal::receive> receive{};
            constexpr MPL::Value<intidVal,intidVal::rda> rda{};
            constexpr MPL::Value<intidVal,intidVal::ctimeout> ctimeout{};
            constexpr MPL::Value<intidVal,intidVal::thre> thre{};
            constexpr MPL::Value<intidVal,intidVal::modem> modem{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,intidVal> intid{}; 
        ///These bits are equivalent to FCR[0].
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> fifoen{}; 
        ///End of auto-baud interrupt. True if auto-baud has finished successfully and interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> abeoint{}; 
        ///Auto-baud time-out interrupt. True if auto-baud has timed out and interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> abtoint{}; 
    }
    namespace Nonefcr{    ///<FIFO Control Register. Controls UART FIFO usage and modes.
        using Addr = Register::Address<0x40008008,0xffffff38,0,unsigned>;
        ///FIFO Enable
        enum class fifoenVal {
            disabled=0x00000000,     ///<UART FIFOs are disabled. Must not be used in the application.
            enabled=0x00000001,     ///<Active high enable for both UART Rx and TX FIFOs and FCR[7:1] access. This bit must be set for proper UART operation. Any transition on this bit will automatically clear the UART FIFOs.
        };
        namespace fifoenValC{
            constexpr MPL::Value<fifoenVal,fifoenVal::disabled> disabled{};
            constexpr MPL::Value<fifoenVal,fifoenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fifoenVal> fifoen{}; 
        ///RX FIFO Reset
        enum class rxfiforVal {
            noaction=0x00000000,     ///<No impact on either of UART FIFOs.
            clear=0x00000001,     ///<Writing a logic 1 to FCR[1] will clear all bytes in UART Rx FIFO, reset the pointer logic. This bit is self-clearing.
        };
        namespace rxfiforValC{
            constexpr MPL::Value<rxfiforVal,rxfiforVal::noaction> noaction{};
            constexpr MPL::Value<rxfiforVal,rxfiforVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rxfiforVal> rxfifor{}; 
        ///TX FIFO Reset
        enum class txfiforVal {
            noaction=0x00000000,     ///<No impact on either of UART FIFOs.
            clear=0x00000001,     ///<Writing a logic 1 to FCR[2] will clear all bytes in UART TX FIFO, reset the pointer logic. This bit is self-clearing.
        };
        namespace txfiforValC{
            constexpr MPL::Value<txfiforVal,txfiforVal::noaction> noaction{};
            constexpr MPL::Value<txfiforVal,txfiforVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,txfiforVal> txfifor{}; 
        ///RX Trigger Level. These two bits determine how many receiver UART FIFO characters must be written before an interrupt is activated.
        enum class rxtlvlVal {
            triggerLevel01C=0x00000000,     ///<Trigger level 0 (1 character or 0x01).
            triggerLevel14C=0x00000001,     ///<Trigger level 1 (4 characters or 0x04).
            triggerLevel28C=0x00000002,     ///<Trigger level 2 (8 characters or 0x08).
            triggerLevel314=0x00000003,     ///<Trigger level 3 (14 characters or 0x0E).
        };
        namespace rxtlvlValC{
            constexpr MPL::Value<rxtlvlVal,rxtlvlVal::triggerLevel01C> triggerLevel01C{};
            constexpr MPL::Value<rxtlvlVal,rxtlvlVal::triggerLevel14C> triggerLevel14C{};
            constexpr MPL::Value<rxtlvlVal,rxtlvlVal::triggerLevel28C> triggerLevel28C{};
            constexpr MPL::Value<rxtlvlVal,rxtlvlVal::triggerLevel314> triggerLevel314{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,rxtlvlVal> rxtlvl{}; 
    }
    namespace Nonelcr{    ///<Line Control Register. Contains controls for frame formatting and break generation.
        using Addr = Register::Address<0x4000800c,0xffffff00,0,unsigned>;
        ///Word Length Select
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
        ///Stop Bit Select
        enum class sbsVal {
            v1StopBit=0x00000000,     ///<1 stop bit.
            v2StopBits15If=0x00000001,     ///<2 stop bits (1.5 if LCR[1:0]=00).
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
            enableBreakTransmi=0x00000001,     ///<Enable break transmission. Output pin UART TXD is forced to logic 0 when LCR[6] is active high.
        };
        namespace bcValC{
            constexpr MPL::Value<bcVal,bcVal::disableBreakTransm> disableBreakTransm{};
            constexpr MPL::Value<bcVal,bcVal::enableBreakTransmi> enableBreakTransmi{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bcVal> bc{}; 
        ///Divisor Latch Access Bit (DLAB)
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
    namespace Nonemcr{    ///<Modem control register
        using Addr = Register::Address<0x40008010,0xffffff2c,0,unsigned>;
        ///Source for modem output pin, DTR. This bit reads as 0 when modem loopback mode is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtrctrl{}; 
        ///Source for modem output pin RTS. This bit reads as 0 when modem loopback mode is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtsctrl{}; 
        ///Loopback Mode Select. The modem loopback mode provides a mechanism to perform diagnostic loopback testing. Serial data from the transmitter is connected internally to serial input of the receiver. Input pin, RXD, has no effect on loopback and output pin, TXD is held in marking state. The four modem inputs (CTS, DSR, RI and  DCD) are disconnected externally. Externally, the modem outputs (RTS, DTR) are set inactive. Internally, the four modem outputs are connected to the four modem inputs. As a result of these connections, the upper four bits of the MSR will be driven by the lower four bits of the MCR rather than the four modem inputs in normal mode. This permits modem status interrupts to be generated in loopback mode by writing the lower four bits of MCR.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lms{}; 
        ///RTS enable
        enum class rtsenVal {
            disableAutoRtsFlo=0x00000000,     ///<Disable auto-rts flow control.
            enableAutoRtsFlow=0x00000001,     ///<Enable auto-rts flow control.
        };
        namespace rtsenValC{
            constexpr MPL::Value<rtsenVal,rtsenVal::disableAutoRtsFlo> disableAutoRtsFlo{};
            constexpr MPL::Value<rtsenVal,rtsenVal::enableAutoRtsFlow> enableAutoRtsFlow{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rtsenVal> rtsen{}; 
        ///CTS enable
        enum class ctsenVal {
            disableAutoCtsFlo=0x00000000,     ///<Disable auto-cts flow control.
            enableAutoCtsFlow=0x00000001,     ///<Enable auto-cts flow control.
        };
        namespace ctsenValC{
            constexpr MPL::Value<ctsenVal,ctsenVal::disableAutoCtsFlo> disableAutoCtsFlo{};
            constexpr MPL::Value<ctsenVal,ctsenVal::enableAutoCtsFlow> enableAutoCtsFlow{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ctsenVal> ctsen{}; 
    }
    namespace Nonelsr{    ///<Line Status Register. Contains flags for transmit and receive status, including line errors.
        using Addr = Register::Address<0x40008014,0xffffff00,0,unsigned>;
        ///Receiver Data Ready. LSR[0] is set when the RBR holds an unread character and is cleared when the UART RBR FIFO is empty.
        enum class rdrVal {
            rbrIsEmpty=0x00000000,     ///<RBR is empty.
            rbrContainsValid=0x00000001,     ///<RBR contains valid data.
        };
        namespace rdrValC{
            constexpr MPL::Value<rdrVal,rdrVal::rbrIsEmpty> rbrIsEmpty{};
            constexpr MPL::Value<rdrVal,rdrVal::rbrContainsValid> rbrContainsValid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rdrVal> rdr{}; 
        ///Overrun Error. The overrun error condition is set as soon as it occurs. A LSR read clears LSR[1]. LSR[1] is set when UART RSR has a new character assembled and the UART RBR FIFO is full. In this case, the UART RBR FIFO will not be overwritten and the character in the UART RSR will be lost.
        enum class oeVal {
            inactive=0x00000000,     ///<Overrun error status is inactive.
            active=0x00000001,     ///<Overrun error status is active.
        };
        namespace oeValC{
            constexpr MPL::Value<oeVal,oeVal::inactive> inactive{};
            constexpr MPL::Value<oeVal,oeVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oeVal> oe{}; 
        ///Parity Error. When the parity bit of a received character is in the wrong state, a parity error occurs. A LSR read clears LSR[2]. Time of parity error detection is dependent on FCR[0]. Note: A parity error is associated with the character at the top of the UART RBR FIFO.
        enum class peVal {
            inactive=0x00000000,     ///<Parity error status is inactive.
            active=0x00000001,     ///<Parity error status is active.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::inactive> inactive{};
            constexpr MPL::Value<peVal,peVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,peVal> pe{}; 
        ///Framing Error. When the stop bit of a received character is a logic 0, a framing error occurs. A LSR read clears LSR[3]. The time of the framing error detection is dependent on FCR0. Upon detection of a framing error, the RX will attempt to re-synchronize to the data and assume that the bad stop bit is actually an early start bit. However, it cannot be assumed that the next received byte will be correct even if there is no Framing Error. Note: A framing error is associated with the character at the top of the UART RBR FIFO.
        enum class feVal {
            inactive=0x00000000,     ///<Framing error status is inactive.
            active=0x00000001,     ///<Framing error status is active.
        };
        namespace feValC{
            constexpr MPL::Value<feVal,feVal::inactive> inactive{};
            constexpr MPL::Value<feVal,feVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,feVal> fe{}; 
        ///Break Interrupt. When RXD1 is held in the spacing state (all zeros) for one full character transmission (start, data, parity, stop), a break interrupt occurs. Once the break condition has been detected, the receiver goes idle until RXD1 goes to marking state (all ones). A LSR read clears this status bit. The time of break detection is dependent on FCR[0]. Note: The break interrupt is associated with the character at the top of the UART RBR FIFO.
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
            valid=0x00000000,     ///<THR contains valid data.
            empty=0x00000001,     ///<THR is empty.
        };
        namespace threValC{
            constexpr MPL::Value<threVal,threVal::valid> valid{};
            constexpr MPL::Value<threVal,threVal::empty> empty{};
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
        ///Error in RX FIFO. LSR[7] is set when a character with a RX error such as framing error, parity error or break interrupt, is loaded into the RBR. This bit is cleared when the LSR register is read and there are no subsequent errors in the UART FIFO.
        enum class rxfeVal {
            noerror=0x00000000,     ///<RBR contains no UART RX errors or FCR[0]=0.
            errors=0x00000001,     ///<UART RBR contains at least one UART RX error.
        };
        namespace rxfeValC{
            constexpr MPL::Value<rxfeVal,rxfeVal::noerror> noerror{};
            constexpr MPL::Value<rxfeVal,rxfeVal::errors> errors{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxfeVal> rxfe{}; 
    }
    namespace Nonemsr{    ///<Modem status register
        using Addr = Register::Address<0x40008018,0xffffff00,0,unsigned>;
        ///Set upon state change of input CTS. Cleared on a MSR read.
        enum class deltactsVal {
            noStateChange=0x00000000,     ///<No change detected on modem input CTS.
            stateChangeDetecte=0x00000001,     ///<State change detected on modem input CTS.
        };
        namespace deltactsValC{
            constexpr MPL::Value<deltactsVal,deltactsVal::noStateChange> noStateChange{};
            constexpr MPL::Value<deltactsVal,deltactsVal::stateChangeDetecte> stateChangeDetecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,deltactsVal> deltacts{}; 
        ///Set upon state change of input DSR. Cleared on a MSR read.
        enum class deltadsrVal {
            noStateChange=0x00000000,     ///<No change detected on modem input DSR.
            stateChangeDetecte=0x00000001,     ///<State change detected on modem input DSR.
        };
        namespace deltadsrValC{
            constexpr MPL::Value<deltadsrVal,deltadsrVal::noStateChange> noStateChange{};
            constexpr MPL::Value<deltadsrVal,deltadsrVal::stateChangeDetecte> stateChangeDetecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,deltadsrVal> deltadsr{}; 
        ///Trailing Edge RI. Set upon low to high transition of input RI. Cleared on a MSR read.
        enum class teriVal {
            noStateChange=0x00000000,     ///<No change detected on modem input, RI.
            lowToHighTransiti=0x00000001,     ///<Low-to-high transition detected on RI.
        };
        namespace teriValC{
            constexpr MPL::Value<teriVal,teriVal::noStateChange> noStateChange{};
            constexpr MPL::Value<teriVal,teriVal::lowToHighTransiti> lowToHighTransiti{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,teriVal> teri{}; 
        ///Set upon state change of input  DCD. Cleared on a MSR read.
        enum class deltadcdVal {
            noStateChange=0x00000000,     ///<No change detected on modem input DCD.
            stateChangeDetecte=0x00000001,     ///<State change detected on modem input DCD.
        };
        namespace deltadcdValC{
            constexpr MPL::Value<deltadcdVal,deltadcdVal::noStateChange> noStateChange{};
            constexpr MPL::Value<deltadcdVal,deltadcdVal::stateChangeDetecte> stateChangeDetecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,deltadcdVal> deltadcd{}; 
        ///Clear To Send State. Complement of input signal CTS. This bit is connected to MCR[1] in modem loopback mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> cts{}; 
        ///Data Set Ready State. Complement of input signal DSR. This bit is connected to MCR[0] in modem loopback mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dsr{}; 
        ///Ring Indicator State. Complement of input RI. This bit is connected to MCR[2] in modem loopback mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ri{}; 
        ///Data Carrier Detect State. Complement of input DCD. This bit is connected to MCR[3] in modem loopback mode.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcd{}; 
    }
    namespace Nonescr{    ///<Scratch Pad Register. Eight-bit temporary storage for software.
        using Addr = Register::Address<0x4000801c,0xffffff00,0,unsigned>;
        ///A readable, writable byte.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pad{}; 
    }
    namespace Noneacr{    ///<Auto-baud Control Register. Contains controls for the auto-baud feature.
        using Addr = Register::Address<0x40008020,0xfffffcf8,0,unsigned>;
        ///This bit is automatically cleared after auto-baud completion.
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
        ///Auto restart
        enum class autorestartVal {
            noRestart=0x00000000,     ///<No restart
            restartInCaseOfT=0x00000001,     ///<Restart in case of time-out (counter restarts at next UART Rx falling edge)
        };
        namespace autorestartValC{
            constexpr MPL::Value<autorestartVal,autorestartVal::noRestart> noRestart{};
            constexpr MPL::Value<autorestartVal,autorestartVal::restartInCaseOfT> restartInCaseOfT{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,autorestartVal> autorestart{}; 
        ///End of auto-baud interrupt clear bit (write only accessible).
        enum class abeointclrVal {
            noaction=0x00000000,     ///<Writing a 0 has no impact.
            clear=0x00000001,     ///<Writing a 1 will clear the corresponding interrupt in the IIR.
        };
        namespace abeointclrValC{
            constexpr MPL::Value<abeointclrVal,abeointclrVal::noaction> noaction{};
            constexpr MPL::Value<abeointclrVal,abeointclrVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,abeointclrVal> abeointclr{}; 
        ///Auto-baud time-out interrupt clear bit (write only accessible).
        enum class abtointclrVal {
            noaction=0x00000000,     ///<Writing a 0 has no impact.
            clear=0x00000001,     ///<Writing a 1 will clear the corresponding interrupt in the IIR.
        };
        namespace abtointclrValC{
            constexpr MPL::Value<abtointclrVal,abtointclrVal::noaction> noaction{};
            constexpr MPL::Value<abtointclrVal,abtointclrVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,abtointclrVal> abtointclr{}; 
    }
    namespace Nonefdr{    ///<Fractional Divider Register. Generates a clock input for the baud rate divider.
        using Addr = Register::Address<0x40008028,0xffffff00,0,unsigned>;
        ///Baud rate generation pre-scaler divisor value. If this field is 0, fractional baud rate generator will not impact the UART baud rate.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> divaddval{}; 
        ///Baud rate pre-scaler multiplier value. This field must be greater or equal 1 for UART to operate properly, regardless of whether the fractional baud rate generator is used or not.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> mulval{}; 
    }
    namespace Noneter{    ///<Transmit Enable Register. Turns off UART transmitter for use with software flow control.
        using Addr = Register::Address<0x40008030,0xffffff7f,0,unsigned>;
        ///When this bit is 1, as it is after a Reset, data written to the THR is output on the TXD pin as soon as any preceding data has been sent. If this bit cleared to 0 while a character is being sent, the transmission of that character is completed, but no further characters are sent until this bit is set again. In other words, a 0 in this bit blocks the transfer of characters from the THR or TX FIFO into the transmit shift register. Software can clear this bit when it detects that the a hardware-handshaking TX-permit signal (CTS) has gone false, or with software handshaking, when it receives an XOFF character (DC3). Software can set this bit again when it detects that the TX-permit signal has gone true, or when it receives an XON (DC1) character.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txen{}; 
    }
    namespace Noners485ctrl{    ///<RS-485/EIA-485 Control. Contains controls to configure various aspects of RS-485/EIA-485 modes.
        using Addr = Register::Address<0x4000804c,0xffffffc0,0,unsigned>;
        ///NMM enable
        enum class nmmenVal {
            disabled=0x00000000,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is disabled.
            enabled=0x00000001,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is enabled. In this mode, an address is detected when a received byte causes the UART to set the parity error and generate an interrupt.
        };
        namespace nmmenValC{
            constexpr MPL::Value<nmmenVal,nmmenVal::disabled> disabled{};
            constexpr MPL::Value<nmmenVal,nmmenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,nmmenVal> nmmen{}; 
        ///Receiver enable
        enum class rxdisVal {
            enabled=0x00000000,     ///<The receiver is enabled.
            disabled=0x00000001,     ///<The receiver is disabled.
        };
        namespace rxdisValC{
            constexpr MPL::Value<rxdisVal,rxdisVal::enabled> enabled{};
            constexpr MPL::Value<rxdisVal,rxdisVal::disabled> disabled{};
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
        ///Direction control pins select
        enum class selVal {
            rts=0x00000000,     ///<If direction control is enabled (bit DCTRL = 1), pin RTS is used for direction control.
            dtr=0x00000001,     ///<If direction control is enabled (bit DCTRL = 1), pin DTR is used for direction control.
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::rts> rts{};
            constexpr MPL::Value<selVal,selVal::dtr> dtr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,selVal> sel{}; 
        ///Direction control enable
        enum class dctrlVal {
            disableAutoDirecti=0x00000000,     ///<Disable Auto Direction Control.
            enableAutoDirectio=0x00000001,     ///<Enable Auto Direction Control.
        };
        namespace dctrlValC{
            constexpr MPL::Value<dctrlVal,dctrlVal::disableAutoDirecti> disableAutoDirecti{};
            constexpr MPL::Value<dctrlVal,dctrlVal::enableAutoDirectio> enableAutoDirectio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dctrlVal> dctrl{}; 
        ///This bit reverses the polarity of the direction control signal on the RTS (or DTR) pin.
        enum class oinvVal {
            low=0x00000000,     ///<The direction control pin will be driven to logic 0 when the transmitter has data to be sent. It will be driven to logic 1 after the last bit of data has been transmitted.
            high=0x00000001,     ///<The direction control pin will be driven to logic 1 when the transmitter has data to be sent. It will be driven to logic 0 after the last bit of data has been transmitted.
        };
        namespace oinvValC{
            constexpr MPL::Value<oinvVal,oinvVal::low> low{};
            constexpr MPL::Value<oinvVal,oinvVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,oinvVal> oinv{}; 
    }
    namespace Noners485adrmatch{    ///<RS-485/EIA-485 address match. Contains the address match value for RS-485/EIA-485 mode.
        using Addr = Register::Address<0x40008050,0xffffff00,0,unsigned>;
        ///Contains the address match value.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adrmatch{}; 
    }
    namespace Noners485dly{    ///<RS-485/EIA-485 direction control delay.
        using Addr = Register::Address<0x40008054,0xffffff00,0,unsigned>;
        ///Contains the direction control (RTS or DTR) delay value. This register works in conjunction with an 8-bit counter.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dly{}; 
    }
}
