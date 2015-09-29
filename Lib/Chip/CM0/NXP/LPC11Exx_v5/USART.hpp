#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USART 
    namespace Nonerbr{    ///<Receiver Buffer Register. Contains the next received character to be read. (DLAB=0)
        using Addr = Register::Address<0x40008000,0xffffff00,0,unsigned>;
        ///The USART Receiver Buffer Register contains the oldest received byte in the USART RX FIFO.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rbr{}; 
    }
    namespace Nonethr{    ///<Transmit Holding Register. The next character to be transmitted is written here. (DLAB=0)
        using Addr = Register::Address<0x40008000,0xffffff00,0,unsigned>;
        ///Writing to the USART Transmit Holding Register causes the data to be stored in the USART transmit FIFO. The byte will be sent when it is the oldest byte in the FIFO and the transmitter is available.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> thr{}; 
    }
    namespace Nonedll{    ///<Divisor Latch LSB. Least significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider. (DLAB=1)
        using Addr = Register::Address<0x40008000,0xffffff00,0,unsigned>;
        ///The USART Divisor Latch LSB Register, along with the DLM register, determines the baud rate of the USART.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dllsb{}; 
    }
    namespace Nonedlm{    ///<Divisor Latch MSB. Most significant byte of the baud rate divisor value. The full divisor is used to generate a baud rate from the fractional rate divider. (DLAB=1)
        using Addr = Register::Address<0x40008004,0xffffff00,0,unsigned>;
        ///The USART Divisor Latch MSB Register, along with the DLL register, determines the baud rate of the USART.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dlmsb{}; 
    }
    namespace Noneier{    ///<Interrupt Enable Register. Contains individual interrupt enable bits for the 7 potential USART interrupts. (DLAB=0)
        using Addr = Register::Address<0x40008004,0xfffffcf0,0,unsigned>;
        ///RBR Interrupt Enable. Enables the Receive Data Available interrupt. It also controls the Character Receive Time-out interrupt.
        enum class rbrintenVal {
            disableTheRdaInte=0x00000000,     ///<Disable the RDA interrupt.
            enableTheRdaInter=0x00000001,     ///<Enable the RDA interrupt.
        };
        namespace rbrintenValC{
            constexpr MPL::Value<rbrintenVal,rbrintenVal::disableTheRdaInte> disableTheRdaInte{};
            constexpr MPL::Value<rbrintenVal,rbrintenVal::enableTheRdaInter> enableTheRdaInter{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rbrintenVal> rbrinten{}; 
        ///THRE Interrupt Enable. Enables the THRE interrupt. The status of this interrupt can be read from LSR[5].
        enum class threintenVal {
            disableTheThreInt=0x00000000,     ///<Disable the THRE interrupt.
            enableTheThreInte=0x00000001,     ///<Enable the THRE interrupt.
        };
        namespace threintenValC{
            constexpr MPL::Value<threintenVal,threintenVal::disableTheThreInt> disableTheThreInt{};
            constexpr MPL::Value<threintenVal,threintenVal::enableTheThreInte> enableTheThreInte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,threintenVal> threinten{}; 
        ///Enables the Receive Line Status interrupt. The status of this interrupt can be read from LSR[4:1].
        enum class rlsintenVal {
            disableTheRlsInte=0x00000000,     ///<Disable the RLS interrupt.
            enableTheRlsInter=0x00000001,     ///<Enable the RLS interrupt.
        };
        namespace rlsintenValC{
            constexpr MPL::Value<rlsintenVal,rlsintenVal::disableTheRlsInte> disableTheRlsInte{};
            constexpr MPL::Value<rlsintenVal,rlsintenVal::enableTheRlsInter> enableTheRlsInter{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,rlsintenVal> rlsinten{}; 
        ///Enables the Modem Status interrupt. The components of this interrupt can be read from the MSR.
        enum class msintenVal {
            disableTheMsInter=0x00000000,     ///<Disable the MS interrupt.
            enableTheMsInterr=0x00000001,     ///<Enable the MS interrupt.
        };
        namespace msintenValC{
            constexpr MPL::Value<msintenVal,msintenVal::disableTheMsInter> disableTheMsInter{};
            constexpr MPL::Value<msintenVal,msintenVal::enableTheMsInterr> enableTheMsInterr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,msintenVal> msinten{}; 
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
        using Addr = Register::Address<0x40008008,0xfffffc30,0,unsigned>;
        ///Interrupt status. Note that IIR[0] is active low. The pending interrupt can be determined by evaluating IIR[3:1].
        enum class intstatusVal {
            atLeastOneInterru=0x00000000,     ///<At least one interrupt is pending.
            noInterruptIsPend=0x00000001,     ///<No interrupt is pending.
        };
        namespace intstatusValC{
            constexpr MPL::Value<intstatusVal,intstatusVal::atLeastOneInterru> atLeastOneInterru{};
            constexpr MPL::Value<intstatusVal,intstatusVal::noInterruptIsPend> noInterruptIsPend{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,intstatusVal> intstatus{}; 
        ///Interrupt identification. IER[3:1] identifies an interrupt corresponding to the USART Rx FIFO. All other values of IER[3:1] not listed below are reserved.
        enum class intidVal {
            v1ReceiveLineS=0x00000003,     ///<1   - Receive Line Status (RLS).
            v2aReceiveDataAv=0x00000002,     ///<2a - Receive Data Available (RDA).
            v2bCharacterTime=0x00000006,     ///<2b - Character Time-out Indicator (CTI).
            v3ThreInterrupt=0x00000001,     ///<3   - THRE Interrupt.
            v4ModemStatus=0x00000000,     ///<4   - Modem status
        };
        namespace intidValC{
            constexpr MPL::Value<intidVal,intidVal::v1ReceiveLineS> v1ReceiveLineS{};
            constexpr MPL::Value<intidVal,intidVal::v2aReceiveDataAv> v2aReceiveDataAv{};
            constexpr MPL::Value<intidVal,intidVal::v2bCharacterTime> v2bCharacterTime{};
            constexpr MPL::Value<intidVal,intidVal::v3ThreInterrupt> v3ThreInterrupt{};
            constexpr MPL::Value<intidVal,intidVal::v4ModemStatus> v4ModemStatus{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,intidVal> intid{}; 
        ///These bits are equivalent to FCR[0].
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> fifoen{}; 
        ///End of auto-baud interrupt. True if auto-baud has finished successfully and interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> abeoint{}; 
        ///Auto-baud time-out interrupt. True if auto-baud has timed out and interrupt is enabled.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> abtoint{}; 
    }
    namespace Nonefcr{    ///<FIFO Control Register. Controls USART FIFO usage and modes.
        using Addr = Register::Address<0x40008008,0xffffff38,0,unsigned>;
        ///FIFO enable
        enum class fifoenVal {
            disabled=0x00000000,     ///<USART FIFOs are disabled. Must not be used in the application.
            enabled=0x00000001,     ///<Active high enable for both USART Rx and TX FIFOs and FCR[7:1] access. This bit must be set for proper USART operation. Any transition on this bit will automatically clear the USART FIFOs.
        };
        namespace fifoenValC{
            constexpr MPL::Value<fifoenVal,fifoenVal::disabled> disabled{};
            constexpr MPL::Value<fifoenVal,fifoenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fifoenVal> fifoen{}; 
        ///RX FIFO Reset
        enum class rxfiforesVal {
            noImpact=0x00000000,     ///<No impact on either of USART FIFOs.
            clear=0x00000001,     ///<Writing a logic 1 to FCR[1] will clear all bytes in USART Rx FIFO, reset the pointer logic. This bit is self-clearing.
        };
        namespace rxfiforesValC{
            constexpr MPL::Value<rxfiforesVal,rxfiforesVal::noImpact> noImpact{};
            constexpr MPL::Value<rxfiforesVal,rxfiforesVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rxfiforesVal> rxfifores{}; 
        ///TX FIFO Reset
        enum class txfiforesVal {
            noImpact=0x00000000,     ///<No impact on either of USART FIFOs.
            clear=0x00000001,     ///<Writing a logic 1 to FCR[2] will clear all bytes in USART TX FIFO, reset the pointer logic. This bit is self-clearing.
        };
        namespace txfiforesValC{
            constexpr MPL::Value<txfiforesVal,txfiforesVal::noImpact> noImpact{};
            constexpr MPL::Value<txfiforesVal,txfiforesVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,txfiforesVal> txfifores{}; 
        ///RX Trigger Level. These two bits determine how many receiver USART FIFO characters must be written before an interrupt is activated.
        enum class rxtlVal {
            triggerLevel01C=0x00000000,     ///<Trigger level 0 (1 character or 0x01).
            triggerLevel14C=0x00000001,     ///<Trigger level 1 (4 characters or 0x04).
            triggerLevel28C=0x00000002,     ///<Trigger level 2 (8 characters or 0x08).
            triggerLevel314=0x00000003,     ///<Trigger level 3 (14 characters or 0x0E).
        };
        namespace rxtlValC{
            constexpr MPL::Value<rxtlVal,rxtlVal::triggerLevel01C> triggerLevel01C{};
            constexpr MPL::Value<rxtlVal,rxtlVal::triggerLevel14C> triggerLevel14C{};
            constexpr MPL::Value<rxtlVal,rxtlVal::triggerLevel28C> triggerLevel28C{};
            constexpr MPL::Value<rxtlVal,rxtlVal::triggerLevel314> triggerLevel314{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,rxtlVal> rxtl{}; 
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
            enableBreakTransmi=0x00000001,     ///<Enable break transmission. Output pin USART TXD is forced to logic 0 when LCR[6] is active high.
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
    namespace Nonemcr{    ///<Modem Control Register.
        using Addr = Register::Address<0x40008010,0xffffff2c,0,unsigned>;
        ///Source for modem output pin DTR. This bit reads as 0 when modem loopback mode is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dtrctrl{}; 
        ///Source for modem output pin RTS. This bit reads as 0 when modem loopback mode is active.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rtsctrl{}; 
        ///Loopback Mode Select. The modem loopback mode provides a mechanism to perform diagnostic loopback testing. Serial data from the transmitter is connected internally to serial input of the receiver. Input pin, RXD, has no effect on loopback and output pin, TXD is held in marking state. The DSR, CTS, DCD, and RI pins are ignored. Externally, DTR and  RTS are set inactive. Internally, the upper four bits of the MSR are driven by the lower four bits of the MCR. This permits modem status interrupts to be generated in loopback mode by writing the lower four bits of MCR.
        enum class lmsVal {
            disableModemLoopba=0x00000000,     ///<Disable modem loopback mode.
            enableModemLoopbac=0x00000001,     ///<Enable modem loopback mode.
        };
        namespace lmsValC{
            constexpr MPL::Value<lmsVal,lmsVal::disableModemLoopba> disableModemLoopba{};
            constexpr MPL::Value<lmsVal,lmsVal::enableModemLoopbac> enableModemLoopbac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,lmsVal> lms{}; 
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
        using Addr = Register::Address<0x40008014,0xfffffe00,0,unsigned>;
        ///Receiver Data Ready:LSR[0] is set when the RBR holds an unread character and is cleared when the USART RBR FIFO is empty.
        enum class rdrVal {
            rbrIsEmpty=0x00000000,     ///<RBR is empty.
            rbrContainsValidD=0x00000001,     ///<RBR contains valid data.
        };
        namespace rdrValC{
            constexpr MPL::Value<rdrVal,rdrVal::rbrIsEmpty> rbrIsEmpty{};
            constexpr MPL::Value<rdrVal,rdrVal::rbrContainsValidD> rbrContainsValidD{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rdrVal> rdr{}; 
        ///Overrun Error. The overrun error condition is set as soon as it occurs. A LSR read clears LSR[1]. LSR[1] is set when USART RSR has a new character assembled and the USART RBR FIFO is full. In this case, the USART RBR FIFO will not be overwritten and the character in the USART RSR will be lost.
        enum class oeVal {
            inactive=0x00000000,     ///<Overrun error status is inactive.
            active=0x00000001,     ///<Overrun error status is active.
        };
        namespace oeValC{
            constexpr MPL::Value<oeVal,oeVal::inactive> inactive{};
            constexpr MPL::Value<oeVal,oeVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oeVal> oe{}; 
        ///Parity Error. When the parity bit of a received character is in the wrong state, a parity error occurs. A LSR read clears LSR[2]. Time of parity error detection is dependent on FCR[0]. Note: A parity error is associated with the character at the top of the USART RBR FIFO.
        enum class peVal {
            inactive=0x00000000,     ///<Parity error status is inactive.
            active=0x00000001,     ///<Parity error status is active.
        };
        namespace peValC{
            constexpr MPL::Value<peVal,peVal::inactive> inactive{};
            constexpr MPL::Value<peVal,peVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,peVal> pe{}; 
        ///Framing Error. When the stop bit of a received character is a logic 0, a framing error occurs. A LSR read clears LSR[3]. The time of the framing error detection is dependent on FCR0. Upon detection of a framing error, the RX will attempt to re-synchronize to the data and assume that the bad stop bit is actually an early start bit. However, it cannot be assumed that the next received byte will be correct even if there is no Framing Error. Note: A framing error is associated with the character at the top of the USART RBR FIFO.
        enum class feVal {
            inactive=0x00000000,     ///<Framing error status is inactive.
            active=0x00000001,     ///<Framing error status is active.
        };
        namespace feValC{
            constexpr MPL::Value<feVal,feVal::inactive> inactive{};
            constexpr MPL::Value<feVal,feVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,feVal> fe{}; 
        ///Break Interrupt. When RXD1 is held in the spacing state (all zeros) for one full character transmission (start, data, parity, stop), a break interrupt occurs. Once the break condition has been detected, the receiver goes idle until RXD1 goes to marking state (all ones). A LSR read clears this status bit. The time of break detection is dependent on FCR[0]. Note: The break interrupt is associated with the character at the top of the USART RBR FIFO.
        enum class biVal {
            inactive=0x00000000,     ///<Break interrupt status is inactive.
            active=0x00000001,     ///<Break interrupt status is active.
        };
        namespace biValC{
            constexpr MPL::Value<biVal,biVal::inactive> inactive{};
            constexpr MPL::Value<biVal,biVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,biVal> bi{}; 
        ///Transmitter Holding Register Empty. THRE is set immediately upon detection of an empty USART THR and is cleared on a THR write.
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
            validD=0x00000000,     ///<THR and/or the TSR contains valid data.
            empty=0x00000001,     ///<THR and the TSR are empty.
        };
        namespace temtValC{
            constexpr MPL::Value<temtVal,temtVal::validD> validD{};
            constexpr MPL::Value<temtVal,temtVal::empty> empty{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,temtVal> temt{}; 
        ///Error in RX FIFO. LSR[7] is set when a character with a RX error such as framing error, parity error or break interrupt, is loaded into the RBR. This bit is cleared when the LSR register is read and there are no subsequent errors in the USART FIFO.
        enum class rxfeVal {
            noError=0x00000000,     ///<RBR contains no USART RX errors or FCR[0]=0.
            erro=0x00000001,     ///<USART RBR contains at least one USART RX error.
        };
        namespace rxfeValC{
            constexpr MPL::Value<rxfeVal,rxfeVal::noError> noError{};
            constexpr MPL::Value<rxfeVal,rxfeVal::erro> erro{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxfeVal> rxfe{}; 
        ///Tx Error. In smart card T=0 operation, this bit is set when the smart card has NACKed a transmitted character, one more than the number of times indicated by the TXRETRY field.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txerr{}; 
    }
    namespace Nonemsr{    ///<Modem Status Register.
        using Addr = Register::Address<0x40008018,0xffffff00,0,unsigned>;
        ///Delta CTS. Set upon state change of input CTS. Cleared on an MSR read.
        enum class dctsVal {
            noChangeDetectedO=0x00000000,     ///<No change detected on modem input, CTS.
            stateChangeDetecte=0x00000001,     ///<State change detected on modem input, CTS.
        };
        namespace dctsValC{
            constexpr MPL::Value<dctsVal,dctsVal::noChangeDetectedO> noChangeDetectedO{};
            constexpr MPL::Value<dctsVal,dctsVal::stateChangeDetecte> stateChangeDetecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dctsVal> dcts{}; 
        ///Delta DSR. Set upon state change of input DSR. Cleared on an MSR read.
        enum class ddsrVal {
            noChangeDetectedO=0x00000000,     ///<No change detected on modem input, DSR.
            stateChangeDetecte=0x00000001,     ///<State change detected on modem input, DSR.
        };
        namespace ddsrValC{
            constexpr MPL::Value<ddsrVal,ddsrVal::noChangeDetectedO> noChangeDetectedO{};
            constexpr MPL::Value<ddsrVal,ddsrVal::stateChangeDetecte> stateChangeDetecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ddsrVal> ddsr{}; 
        ///Trailing Edge RI. Set upon low to high transition of input RI. Cleared on an MSR read.
        enum class teriVal {
            noChangeDetectedO=0x00000000,     ///<No change detected on modem input, RI.
            lowToHighTransiti=0x00000001,     ///<Low-to-high transition detected on RI.
        };
        namespace teriValC{
            constexpr MPL::Value<teriVal,teriVal::noChangeDetectedO> noChangeDetectedO{};
            constexpr MPL::Value<teriVal,teriVal::lowToHighTransiti> lowToHighTransiti{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,teriVal> teri{}; 
        ///Delta DCD. Set upon state change of input DCD. Cleared on an MSR read.
        enum class ddcdVal {
            noChangeDetectedO=0x00000000,     ///<No change detected on modem input, DCD.
            stateChangeDetecte=0x00000001,     ///<State change detected on modem input, DCD.
        };
        namespace ddcdValC{
            constexpr MPL::Value<ddcdVal,ddcdVal::noChangeDetectedO> noChangeDetectedO{};
            constexpr MPL::Value<ddcdVal,ddcdVal::stateChangeDetecte> stateChangeDetecte{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ddcdVal> ddcd{}; 
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
        ///Start mode
        enum class autorestartVal {
            noRestart=0x00000000,     ///<No restart
            restartInCaseOfT=0x00000001,     ///<Restart in case of time-out (counter restarts at next USART Rx falling edge)
        };
        namespace autorestartValC{
            constexpr MPL::Value<autorestartVal,autorestartVal::noRestart> noRestart{};
            constexpr MPL::Value<autorestartVal,autorestartVal::restartInCaseOfT> restartInCaseOfT{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,autorestartVal> autorestart{}; 
        ///End of auto-baud interrupt clear bit (write only accessible).
        enum class abeointclrVal {
            noImpact=0x00000000,     ///<Writing a 0 has no impact.
            clear=0x00000001,     ///<Writing a 1 will clear the corresponding interrupt in the IIR.
        };
        namespace abeointclrValC{
            constexpr MPL::Value<abeointclrVal,abeointclrVal::noImpact> noImpact{};
            constexpr MPL::Value<abeointclrVal,abeointclrVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,abeointclrVal> abeointclr{}; 
        ///Auto-baud time-out interrupt clear bit (write only accessible).
        enum class abtointclrVal {
            noImpact=0x00000000,     ///<Writing a 0 has no impact.
            clear=0x00000001,     ///<Writing a 1 will clear the corresponding interrupt in the IIR.
        };
        namespace abtointclrValC{
            constexpr MPL::Value<abtointclrVal,abtointclrVal::noImpact> noImpact{};
            constexpr MPL::Value<abtointclrVal,abtointclrVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,abtointclrVal> abtointclr{}; 
    }
    namespace Noneicr{    ///<IrDA Control Register. Enables and configures the IrDA (remote control) mode.
        using Addr = Register::Address<0x40008024,0xffffffc0,0,unsigned>;
        ///IrDA mode enable
        enum class irdaenVal {
            irdaModeIsDisable=0x00000000,     ///<IrDA mode is disabled, USARTn acts as a standard USART.
            irdaModeIsEnabled=0x00000001,     ///<IrDA mode is enabled.
        };
        namespace irdaenValC{
            constexpr MPL::Value<irdaenVal,irdaenVal::irdaModeIsDisable> irdaModeIsDisable{};
            constexpr MPL::Value<irdaenVal,irdaenVal::irdaModeIsEnabled> irdaModeIsEnabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,irdaenVal> irdaen{}; 
        ///Serial input inverter
        enum class irdainvVal {
            inverted=0x00000000,     ///<The serial input is not inverted.
            notInverted=0x00000001,     ///<The serial input is inverted. This has no effect on the serial output.
        };
        namespace irdainvValC{
            constexpr MPL::Value<irdainvVal,irdainvVal::inverted> inverted{};
            constexpr MPL::Value<irdainvVal,irdainvVal::notInverted> notInverted{};
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
        ///Configures the pulse width when FixPulseEn = 1.
        enum class pulsedivVal {
            v3Div16XBaudRate=0x00000000,     ///<3 / (16 x baud rate)
            v2XTpclk=0x00000001,     ///<2 x TPCLK
            v4XTpclk=0x00000002,     ///<4 x TPCLK
            v8XTpclk=0x00000003,     ///<8 x TPCLK
            v16XTpclk=0x00000004,     ///<16 x TPCLK
            v32XTpclk=0x00000005,     ///<32 x TPCLK
            v64XTpclk=0x00000006,     ///<64 x TPCLK
            v128XTpclk=0x00000007,     ///<128 x TPCLK
        };
        namespace pulsedivValC{
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v3Div16XBaudRate> v3Div16XBaudRate{};
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v2XTpclk> v2XTpclk{};
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v4XTpclk> v4XTpclk{};
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v8XTpclk> v8XTpclk{};
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v16XTpclk> v16XTpclk{};
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v32XTpclk> v32XTpclk{};
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v64XTpclk> v64XTpclk{};
            constexpr MPL::Value<pulsedivVal,pulsedivVal::v128XTpclk> v128XTpclk{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,pulsedivVal> pulsediv{}; 
    }
    namespace Nonefdr{    ///<Fractional Divider Register. Generates a clock input for the baud rate divider.
        using Addr = Register::Address<0x40008028,0xffffff00,0,unsigned>;
        ///Baud rate generation pre-scaler divisor value. If this field is 0, fractional baud rate generator will not impact the USART baud rate.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> divaddval{}; 
        ///Baud rate pre-scaler multiplier value. This field must be greater or equal 1 for USART to operate properly, regardless of whether the fractional baud rate generator is used or not.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> mulval{}; 
    }
    namespace Noneosr{    ///<Oversampling Register. Controls the degree of oversampling during each bit time.
        using Addr = Register::Address<0x4000802c,0xffff8001,0,unsigned>;
        ///Fractional part of the oversampling ratio, in units of 1/8th of an input clock period. (001 = 0.125, ..., 111 = 0.875)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> osfrac{}; 
        ///Integer part of the oversampling ratio, minus 1. The reset values equate to the normal operating mode of 16 input clocks per bit time.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> osint{}; 
        ///In Smart Card mode, these bits act as a more-significant extension of the OSint field, allowing an oversampling ratio up to 2048 as required by ISO7816-3. In Smart Card mode, bits 14:4 should initially be set to 371, yielding an oversampling ratio of 372.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> fdint{}; 
    }
    namespace Noneter{    ///<Transmit Enable Register. Turns off USART transmitter for use with software flow control.
        using Addr = Register::Address<0x40008030,0xffffff7f,0,unsigned>;
        ///When this bit is 1, as it is after a Reset, data written to the THR is output on the TXD pin as soon as any preceding data has been sent. If this bit cleared to 0 while a character is being sent, the transmission of that character is completed, but no further characters are sent until this bit is set again. In other words, a 0 in this bit blocks the transfer of characters from the THR or TX FIFO into the transmit shift register. Software can clear this bit when it detects that the a hardware-handshaking TX-permit signal (CTS) has gone false, or with software handshaking, when it receives an XOFF character (DC3). Software can set this bit again when it detects that the TX-permit signal has gone true, or when it receives an XON (DC1) character.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txen{}; 
    }
    namespace Nonehden{    ///<Half duplex enable register.
        using Addr = Register::Address<0x40008040,0xfffffffe,0,unsigned>;
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
    namespace Nonescictrl{    ///<Smart Card Interface Control register. Enables and configures the Smart Card Interface feature.
        using Addr = Register::Address<0x40008048,0xffff0018,0,unsigned>;
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
            enabled=0x00000000,     ///<A NACK response is enabled.
            disabled=0x00000001,     ///<A NACK response is inhibited.
        };
        namespace nackdisValC{
            constexpr MPL::Value<nackdisVal,nackdisVal::enabled> enabled{};
            constexpr MPL::Value<nackdisVal,nackdisVal::disabled> disabled{};
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
        ///When the protocol selection T bit (above) is 0, the field controls the maximum number of retransmissions that the USART will attempt if the remote device signals NACK. When NACK has occurred this number of times plus one, the Tx Error bit in the LSR is set, an interrupt is requested if enabled, and the USART is locked until the FIFO is cleared.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> txretry{}; 
        ///When the protocol selection T bit (above) is 0, this field indicates the number of bit times (ETUs) by which the guard time after a character transmitted by the USART should exceed the nominal 2 bit times. 0xFF in this field may indicate that there is just a single bit after a character and 11 bit times/character
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> xtraguard{}; 
    }
    namespace Noners485ctrl{    ///<RS-485/EIA-485 Control. Contains controls to configure various aspects of RS-485/EIA-485 modes.
        using Addr = Register::Address<0x4000804c,0xffffffc0,0,unsigned>;
        ///NMM enable.
        enum class nmmenVal {
            rs485Eia485Norma=0x00000000,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is disabled.
            rs485Eia485Norma=0x00000001,     ///<RS-485/EIA-485 Normal Multidrop Mode (NMM) is enabled. In this mode, an address is detected when a received byte causes the USART to set the parity error and generate an interrupt.
        };
        namespace nmmenValC{
            constexpr MPL::Value<nmmenVal,nmmenVal::rs485Eia485Norma> rs485Eia485Norma{};
            constexpr MPL::Value<nmmenVal,nmmenVal::rs485Eia485Norma> rs485Eia485Norma{};
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
        ///AAD enable.
        enum class aadenVal {
            autoAddressDetect=0x00000000,     ///<Auto Address Detect (AAD) is disabled.
            autoAddressDetect=0x00000001,     ///<Auto Address Detect (AAD) is enabled.
        };
        namespace aadenValC{
            constexpr MPL::Value<aadenVal,aadenVal::autoAddressDetect> autoAddressDetect{};
            constexpr MPL::Value<aadenVal,aadenVal::autoAddressDetect> autoAddressDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,aadenVal> aaden{}; 
        ///Select direction control pin
        enum class selVal {
            rts=0x00000000,     ///<If direction control is enabled (bit DCTRL = 1), pin RTS is used for direction control.
            dtr=0x00000001,     ///<If direction control is enabled (bit DCTRL = 1), pin DTR is used for direction control.
        };
        namespace selValC{
            constexpr MPL::Value<selVal,selVal::rts> rts{};
            constexpr MPL::Value<selVal,selVal::dtr> dtr{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,selVal> sel{}; 
        ///Auto direction control enable.
        enum class dctrlVal {
            disableAutoDirecti=0x00000000,     ///<Disable Auto Direction Control.
            enableAutoDirectio=0x00000001,     ///<Enable Auto Direction Control.
        };
        namespace dctrlValC{
            constexpr MPL::Value<dctrlVal,dctrlVal::disableAutoDirecti> disableAutoDirecti{};
            constexpr MPL::Value<dctrlVal,dctrlVal::enableAutoDirectio> enableAutoDirectio{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dctrlVal> dctrl{}; 
        ///Polarity control. This bit reverses the polarity of the direction control signal on the RTS (or DTR) pin.
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
    namespace Nonesyncctrl{    ///<Synchronous mode control register.
        using Addr = Register::Address<0x40008058,0xffffff80,0,unsigned>;
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
        ///Transmit synchronization bypass in synchronous slave mode.
        enum class tsbypassVal {
            sync=0x00000000,     ///<The input clock is synchronized prior to being used in clock edge detection logic
            nosync=0x00000001,     ///<The input clock is not synchronized prior to being used in clock edge detection logic. This allows for a high er input clock rate at the expense of potential metastability.
        };
        namespace tsbypassValC{
            constexpr MPL::Value<tsbypassVal,tsbypassVal::sync> sync{};
            constexpr MPL::Value<tsbypassVal,tsbypassVal::nosync> nosync{};
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
        enum class ssdisVal {
            sendStartAndStop=0x00000000,     ///<Send start and stop bits as in other modes.
            doNotSendStartStop=0x00000001,     ///<Do not send start/stop bits.
        };
        namespace ssdisValC{
            constexpr MPL::Value<ssdisVal,ssdisVal::sendStartAndStop> sendStartAndStop{};
            constexpr MPL::Value<ssdisVal,ssdisVal::doNotSendStartStop> doNotSendStartStop{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ssdisVal> ssdis{}; 
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
