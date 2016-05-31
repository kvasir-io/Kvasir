#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace Uart0UaRbr{    ///<UART0 Receive Buffer Register.
        using Addr = Register::Address<0x40050000,0xffffff00,0x00000000,unsigned>;
        ///Receive Buffer RegisterBy reading this register, the UART will return an 8-bit data received from Rx pin (LSB first).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> 8Bitreceiveddata{}; 
    }
    namespace Uart0UaThr{    ///<UART0 Transmit Holding Register.
        using Addr = Register::Address<0x40050000,0xffffff00,0x00000000,unsigned>;
        ///Transmit Holding RegisterBy writing to this register, the UART will send out an 8-bit data through the Tx pin (LSB first).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> 8Bittransmitteddata{}; 
    }
    namespace Uart0UaIer{    ///<UART0 Interrupt Enable Register.
        using Addr = Register::Address<0x40050004,0xffffffff,0x00000000,unsigned>;
        ///Receive Data Available Interrupt Enable.0 = Mask off INT_RDA1 = Enable INT_RDA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> rdaIen{}; 
        ///Transmit Holding Register Empty Interrupt Enable0 = Mask off INT_THRE1 = Enable INT_THRE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> threIen{}; 
        ///Receive Line Status Interrupt Enable 0 = Mask off INT_RLS1 = Enable INT_RLS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> rlsIen{}; 
        ///Modem Status Interrupt Enable 0 = Mask off INT_MOS1 = Enable INT_MOS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> modemIen{}; 
        ///Rx Time out Interrupt Enable0 = Mask off INT_tout1 = Enable INT_tout 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> rtoIen{}; 
        ///Buffer Error Interrupt Enable0 = Mask off INT_Buf_err1 = Enable INT_Buf_err
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> bufErrIen{}; 
        ///Wake up CPU function enable 0 = Disable UART wake up CPU function1 = Enable wake up function, when the system is in deep sleep mode, an external /CTS change will wake up CPU from deep sleep mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> wakeEn{}; 
        ///Time-Out Counter Enable1 = Enable Time-out counter.0 = Disable Time-out counter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> timeOutEn{}; 
        ///RTS Auto Flow Control Enable 1 = Enable RTS auto flow control.0 = Disable RTS auto flow control.When RTS auto-flow is enabled, if the number of bytes in the Rx FIFO equals the UA_FCR [RTS_Tri_Lev], the UART will dessert RTS signal.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> autoRtsEn{}; 
        ///CTS Auto Flow Control Enable1 = Enable CTS auto flow control.0 = Disable CTS auto flow control.When CTS auto-flow is enabled, the UART will send data to external device when CTS input assert (UART will not send data to device until CTS is asserted).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> autoCtsEn{}; 
    }
    namespace Uart0UaFcr{    ///<UART0 FIFO Control Register.
        using Addr = Register::Address<0x40050008,0xffffffff,0x00000000,unsigned>;
        ///Rx Software ResetWhen Rx_RST is set, all the bytes in the transmit FIFO and Rx internal state machine are cleared.0 = Writing 0 to this bit has no effect.1 = Writing 1 to this bit will reset the Rx internal state machine and pointers.Note: This bit will auto clear and takes at least 3 UART engine clock cycles.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> rfr{}; 
        ///Tx Software ResetWhen Tx_RST is set, all the bytes in the transmit FIFO and Tx internal state machine are cleared.0 = Writing 0 to this bit has no effect.1 = Writing 1 to this bit will reset the Tx internal state machine and pointers.Note: This bit will auto clear and takes at least 3 UART engine clock cycles.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> tfr{}; 
        ///Word Length SelectRFITL	INTR_RDA Tigger Level(Bytes)	0000	01	0001	04	0010	08	0011	14	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> rfitl{}; 
        ///Receiver Disable register.The receiver is disabled or not (set 1 is disable receiver)1: Disable Receiver0: Enable ReceiverNote: This field is used for RS-485 Normal Multi-drop mode. It should be programmed before RS-485 enable function in UA_FUN_SEL. FUN_SEL is programmed.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> rxDis{}; 
        ///Word Length SelectRTS_Tri_Lev	Trigger Level(Bytes)	0000	01	0001	04	0010	08	0011	14	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> rtsTriLev{}; 
    }
    namespace Uart0UaLcr{    ///<UART0 Line Control Register.
        using Addr = Register::Address<0x4005000c,0xffffffff,0x00000000,unsigned>;
        ///Word Length SelectWLS[1:0]	Character length	00	5 bits	01	6 bits	10	7 bits	11	8 bits	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> wls{}; 
        ///Number of "STOP bit"0= One "STOP bit" is generated in the transmitted data1= One and a half "STOP bit" is generated in the transmitted data when 5-bit word length is selected;Two "STOP bit" is generated when 6-, 7- and 8-bit word length is selected.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> nsb{}; 
        ///Parity Bit Enable0 = Parity bit is not generated (transmit data) or checked (receive data) during transfer.1 = Parity bit is generated or checked between the "last data word bit" and "stop bit" of the serial data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> pbe{}; 
        ///Even Parity Enable0 = Odd number of logic 1's are transmitted or checked in the data word and parity bits.1 = Even number of logic 1's are transmitted or checked in the data word and parity bits.This bit has effect only when bit 3 (parity bit enable) is set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> epe{}; 
        ///Stick Parity Enable 0 = Disable stick parity 1 = When bits PBE , EPE and SPE are set, the parity bit is transmitted and checked as cleared. When PBE and SPE are set and EPE is cleared, the parity bit is transmitted and checked as set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> spe{}; 
        ///Break Control Bit When this bit is set to logic 1, the serial data output (Tx) is forced to the Spacing State (logic 0). This bit acts only on Tx and has no effect on the transmitter logic.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> bcb{}; 
    }
    namespace Uart0UaMcr{    ///<UART0 Modem Control Register.
        using Addr = Register::Address<0x40050010,0xffffdfff,0x00000000,unsigned>;
        ///RTS (Request-To-Send) Signal 0: Drive RTS pin to logic 1 (If the Lev_RTS set to low level triggered).1: Drive RTS pin to logic 0 (If the Lev_RTS set to low level triggered).0: Drive RTS pin to logic 0 (If the Lev_RTS set to high level triggered).1: Drive RTS pin to logic 1 (If the Lev_RTS set to high level triggered).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> rts{}; 
        ///RTS Trigger Level This bit can change the RTS trigger level.0= low level triggered1= high level triggered
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> levRts{}; 
        ///RTS Pin State This bit is the pin status of RTS.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rtsSt{}; 
    }
    namespace Uart0UaMsr{    ///<UART0 Modem Status Register.
        using Addr = Register::Address<0x40050014,0xffffffef,0x00000000,unsigned>;
        ///Detect CTS State Change Flag This bit is set whenever CTS input has change state, and it will generate Modem interrupt to CPU when IER [Modem_IEN].NOTE: This bit is cleared by writing 1 to itself.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> dctsf{}; 
        ///CTS Pin Status This bit is the pin status of CTS. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctsSt{}; 
        ///CTS Trigger LevelThis bit can change the CTS trigger level.0= low level triggered1= high level triggered
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> levCts{}; 
    }
    namespace Uart0UaFsr{    ///<UART0 FIFO Status Register.
        using Addr = Register::Address<0x40050018,0xee000086,0x00000000,unsigned>;
        ///Rx overflow Error IF (Read Only) This bit is set when Rx FIFO overflow.If the number of bytes of received data is greater than Rx FIFO(UA_RBR) size, 16 bytes of UART0/UART1, this bit will be set.NOTE: This bit is cleared by writing 1 to itself.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxOverIf{}; 
        ///RS-485 Address Byte Detection FlagThis bit is set to logic 1 and set UA_RS-485_CSR [RS-485_Add_EN] whenever in RS-485 mode the receiver detect any address byte received address byte character (bit9 = '1') bit", and it is reset whenever the CPU writes 1 to this bit.Note: This field is used for RS-485 mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rs485AddDet{}; 
        ///Parity Error FlagThis bit is set to logic 1 whenever the received character does not have a valid "parity bit", and is reset whenever the CPU writes 1 to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pef{}; 
        ///Framing Error FlagThis bit is set to logic 1 whenever the received character does not have a valid "stop bit" (that is, the stop bit following the last data bit or parity bit is detected as a logic 0), and is reset whenever the CPU writes 1 to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fef{}; 
        ///Break Interrupt FlagThis bit is set to a logic 1 whenever the received data input(Rx) is held in the "spacing state" (logic 0) for longer than a full word transmission time (that is, the total time of "start bit" + data bits + parity + stop bits) and is reset whenever the CPU writes 1 to this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bif{}; 
        ///Rx FIFO pointer (Read Only)This field indicates the Rx FIFO Buffer Pointer. When UART receives one byte from external device, Rx_Pointer increases one. When one byte of Rx FIFO is read by CPU, Rx_Pointer decreases one.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxPointer{}; 
        ///Receiver FIFO Empty (Read Only)This bit initiate Rx FIFO empty or not.When the last byte of Rx FIFO has been read by CPU, hardware sets this bit high. It will be cleared when UART receives any new data.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxEmpty{}; 
        ///Receiver FIFO Full (Read Only)This bit initiates Rx FIFO full or not.This bit is set when Rx_Pointer is equal to 16(UART0/UART1), otherwise is cleared by hardware.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxFull{}; 
        ///TX FIFO Pointer (Read Only)This field indicates the Tx FIFO Buffer Pointer. When CPU write one byte into UA_THR, Tx_Pointer increases one. When one byte of Tx FIFO is transferred to Transmitter Shift Register, Tx_Pointer decreases one.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txPointer{}; 
        ///Transmitter FIFO Empty (Read Only)This bit indicates Tx FIFO empty or not.When the last byte of Tx FIFO has been transferred to Transmitter Shift Register, hardware sets this bit high. It will be cleared when writing data into THR (Tx FIFO not empty).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txEmpty{}; 
        ///Transmitter FIFO Full (Read Only)This bit indicates Tx FIFO full or not.This bit is set when Tx_Pointer is equal to 64/16(UART0/UART1), otherwise is cleared by hardware.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txFull{}; 
        ///Tx Overflow Error Interrupt Flag (Read Only)If Tx FIFO(UA_THR) is full, an additional write to UA_THR will cause this bit to logic 1. NOTE: This bit is cleared by writing 1 to itself.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txOverIf{}; 
        ///Transmitter Empty Flag (Read Only)Bit is set by hardware when Tx FIFO(UA_THR) is empty and the STOP bit of the last byte has been transmitted.Bit is cleared automatically when Tx FIFO is not empty or the last byte transmission has not completed.NOTE: This bit is read only. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> teFlag{}; 
    }
    namespace Uart0UaIsr{    ///<UART0 Interrupt Status Register.
        using Addr = Register::Address<0x4005001c,0xffffc0c0,0x00000000,unsigned>;
        ///Receive Data Available Interrupt Flag (Read Only).When the number of bytes in the Rx FIFO equals the RFITL then the RDA_IF will be set. If IER[RDA_IEN] is enabled, the RDA interrupt will be generated. NOTE: This bit is read only and it will be cleared when the number of unread bytes of Rx FIFO drops below the threshold level (RFITL).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdaIf{}; 
        ///Transmit Holding Register Empty Interrupt Flag (Read Only). This bit is set when the last data of Tx FIFO is transferred to Transmitter Shift Register. If IER[THRE_IEN] is enabled, the THRE interrupt will be generated.NOTE: This bit is read only and it will be cleared when writing data into THR (Tx FIFO not empty).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> threIf{}; 
        ///Receive Line Interrupt Flag (Read Only).In UART mode this bit is set when the Rx receive data have parity error, framing error or break error (at least one of 3 bits, BIF, FEF and PEF, is set). In RS-485 mode, the field includes RS-485 Address Byte Detection Flag. If IER[RLS_IEN] is enabled, the RLS interrupt will be generated.NOTE: This bit is read only and reset to 0 when all bits of BIF, FEF, PEF and RS-485_Add_Det are cleared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rlsIf{}; 
        ///MODEM Interrupt Flag (Read Only) This bit is set when the CTS pin has state change (DCTSF=1). If IER[Modem_IEN] is enabled, the Modem interrupt will be generated.NOTE: This bit is read only and reset to 0 when bit DCTSF is cleared by a write 1 on DCTSF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> modemIf{}; 
        ///Time Out Interrupt Flag (Read Only)This bit is set when the Rx FIFO is not empty and no activities occur in the Rx FIFO and the time out counter equal to TOIC. If IER [Tout_IEN] is enabled, the Tout interrupt will be generated. NOTE: This bit is read only and user can read UA_RBR (Rx is in active) to clear it.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> toutIf{}; 
        ///Buffer Error Interrupt Flag (Read Only)This bit is set when the Tx or Rx FIFO overflows (Tx_Over_IF or Rx_Over_IF is set). When Buf_Err_IF is set, the transfer maybe not correct. If IER[Buf_Err_IEN] is enabled, the buffer error interrupt will be generated.NOTE: This bit is cleared when both Tx_Over_IF and Rx_Over_IF are cleared. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bufErrIf{}; 
        ///Receive Data Available Interrupt Indicator to Interrupt Controller (INT_RDA).An AND output with inputs of RDA_IEN and RDA_IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdaInt{}; 
        ///Transmit Holding Register Empty Interrupt Indicator to Interrupt Controller (INT_THRE).An AND output with inputs of THRE_IEN and THRE_IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> threInt{}; 
        ///Receive Line Status Interrupt Indicator to Interrupt Controller (INT_RLS). An AND output with inputs of RLS_IEN and RLS_IFNote: In RS-485 mode, the field includes RS-485 Address Byte Detection Flag.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rlsInt{}; 
        ///MODEM Status Interrupt Indicator to Interrupt Controller (INT_MOS). An AND output with inputs of Modem_IEN and Modem_IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> modemInt{}; 
        ///Time Out Interrupt Indicator to Interrupt Controller (INT_Tout)An AND output with inputs of RTO_IEN and Tout_IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> toutInt{}; 
        ///Buffer Error Interrupt Indicator to Interrupt Controller (INT_Buf_err)An AND output with inputs of BUF_ERR_IEN and Buf_Err_IF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bufErrInt{}; 
    }
    namespace Uart0UaTor{    ///<UART0 Time Out Register
        using Addr = Register::Address<0x40050020,0xffffff80,0x00000000,unsigned>;
        ///Time Out Interrupt ComparatorThe time out counter resets and starts counting (the counting clock = baud rate) whenever the RX FIFO receives a new data word. Once the content of time out counter (TOUT_CNT) is equal to that of time out interrupt comparator (TOIC), a receiver time out interrupt (INT_TOUT) is generated if UA_IER [RTO_IEN]. A new incoming data word or RX FIFO empty clears INT_TOUT.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> toic{}; 
        ///TX Delay time valueThis field is use to programming the transfer delay time between the last stop bit leaving the TX-FIFO and the de-assertion of by setting UA_TOR. DLY register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> dly{}; 
    }
    namespace Uart0UaBaud{    ///<UART0 Baud Rate Divisor Register
        using Addr = Register::Address<0x40050024,0xffffffff,0x00000000,unsigned>;
        ///Baud Rate Divider The low byte of the baud rate divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> brdLowbyte{}; 
        ///Baud Rate Divider The high byte of the baud rate divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> brdHighbyte{}; 
        ///Divider XThe baud rate divider M = X+1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> dividerX{}; 
        ///Divider X equal 10 = Divider M = X (the equation of M = X+1, but Divider_X[27:24] must > 8)1 = Divider M = 1 (the equation of M = 1, but BRD[15:0] must > 3).Mode	DIV_X_EN 	DIV_X_ONE 	DIVIDER X 	BRD 	Baud rate equation 	0 	Disable 	0 	B	A	UART_CLK / [16 * (A+2)]	1 	Enable 	0 	B	A	UART_CLK/[(B+1)*(A+2)],B must >= 8	2 	Enable 	1	Don't Care	A	UART_CLK / (A+2), A must >=3	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> divXOne{}; 
        ///Divider X EnableThe BRD = Baud Rate Divider, and the baud rate equation is Baud Rate = Clock / [ M * (BRD + 2) ] ; The default value of M is 16.0 = Disable divider X (the equation of M = 16)1 = Enable divider X (the equation of M = X+1, but Divider_X[27:24 must > 8).NOTE: When in IrDA mode, this bit must disable.Mode	DIV_X_EN 	DIV_X_ONE 	DIVIDER X 	BRD 	Baud rate equation 	0 	Disable 	0 	B	A	UART_CLK / [16 * (A+2)]	1 	Enable 	0 	B	A	UART_CLK/[(B+1)*(A+2)],B must >= 8	2 	Enable 	1	Don't Care	A	UART_CLK / (A+2), A must >=3	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> divXEn{}; 
    }
    namespace Uart0UaIrcr{    ///<UART0 IrDA Control Register.
        using Addr = Register::Address<0x40050028,0xffffffff,0x00000000,unsigned>;
        ///Tx_SELECT1: Enable IrDA transmitter0: Enable IrDA receiver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> txSelect{}; 
        ///IrDA loop back mode for self test.1: Enable IrDA loop back mode0: Disable IrDA loop back mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> lb{}; 
        ///INV_Tx1= Inverse Tx output signal0= No inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> invTx{}; 
        ///INV_Rx1= Inverse Rx input signal0= No inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> invRx{}; 
    }
    namespace Uart0UaActCsr{    ///<UART0 RS485 Control State Register.
        using Addr = Register::Address<0x4005002c,0xffffffff,0x00000000,unsigned>;
        ///RS-485 Normal Multi-drop Operation Mode (NMM)1: Enable RS-485 Normal Multi-drop Operation Mode (NMM)0: Disable RS-485 Normal Multi-drop Operation Mode (NMM)Note: It can't be active with RS-485_AAD operation mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> rs485Nmm{}; 
        ///RS-485 Auto Address Detection Operation Mode (AAD)1: Enable RS-485 Auto Address Detection Operation Mode (AAD)0: Disable RS-485 Auto Address Detection Operation Mode (AAD)Note: It can't be active with RS-485_NMM operation mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> rs485Aad{}; 
        ///RS-485 Auto Direction Mode (AUD)1: Enable RS-485 Auto Direction Mode (AUD)0: Disable RS-485 Auto Direction Mode (AUD)Note: It can be active with RS-485_AAD or RS-485_NMM operation mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> rs485Aud{}; 
        ///RS-485 Address Detection EnableThis bit is use to enable RS-485 address detection mode. 1: Enable address detection mode0: Disable address detection mode Note: This field is used for RS-485 any operation mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> rs485AddEn{}; 
        ///Address match value registerThis field contains the RS-485 address match values.Note: This field is used for RS-485 auto address detection mode.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> addrMatch{}; 
    }
    namespace Uart0UaFunSel{    ///<UART0 Function Select Register.
        using Addr = Register::Address<0x40050030,0xffffffff,0x00000000,unsigned>;
        ///Function Select Enable00 = UART Function.01 = Reserved.10 = Enable IrDA Function.11 = Enable RS-485 Function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToSet>,unsigned> funSel{}; 
    }
}
