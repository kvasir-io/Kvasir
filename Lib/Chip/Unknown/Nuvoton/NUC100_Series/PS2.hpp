#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace Ps2Ps2con{    ///<PS2 Control Register
        using Addr = Register::Address<0x40100000,0xfffff000,0x00000000,unsigned>;
        ///Enable PS2 DeviceEnable PS2 device controller1 = Enable0 = Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ps2en{}; 
        ///Enable Transmit Interrupt1 = Enable data transmit complete interrupt0 = Disable data transmit complete interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txinten{}; 
        ///Enable Receive Interrupt1 = Enable data receive complete interrupt0 = Disable data receive complete interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxinten{}; 
        ///Transmit Data FIFO DepthThere is 16 bytes buffer for data transmit. S/W can define the FIFO depth from 1 to 16 bytes depends on application. 0 = 1 byte1 = 2 bytes...14 = 15 bytes15 = 16 bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,unsigned> txfifoDepth{}; 
        ///Acknowledge Enable1 = If parity error or stop bit is not received correctly, acknowledge bit will not be sent to host at 12th clock0 = Always send acknowledge to host at 12th clock for host to device communication.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Clear TX FIFO Write 1 to this bit to terminate device to host transmission. The TXEMPTY bit in PS2STATUS bit will be set to 1 and pointer BYTEIDEX is reset to 0 regardless there is residue data in buffer or not. The buffer content is not been cleared.1 = Clear FIFO 0 = Not active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> clrfifo{}; 
        ///Software Override PS2 CLK/DATA Pin State1 = PS2CLK and PS2DATA pins are controlled by S/W0 = PS2CLK and PS2DATA pins are controlled by internal state machine.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> override{}; 
        ///Force PS2CLK LineIt forces PS2CLK line high or low regardless of the internal state of the device controller if OVERRIDE is set to high.1 = Force PS2DATA line high0 = Force PS2DATA line low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fps2clk{}; 
        ///Force PS2DATA LineIt forces PS2DATA high or low regardless of the internal state of the device controller if OVERRIDE is set to high.1 = Force PS2DATA high0 = Force PS2DATA low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fps2dat{}; 
    }
    namespace Ps2Ps2txdata0{    ///<PS2 Transmit DATA Register 0
        using Addr = Register::Address<0x40100004,0x00000000,0x00000000,unsigned>;
        ///Transmit dataWrite data to this register starts device to host communication if bus is in IDLE state. S/W must enable PS2EN before writing data to TX buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Ps2Ps2txdata1{    ///<PS2 Transmit DATA Register 1
        using Addr = Register::Address<0x40100008,0x00000000,0x00000000,unsigned>;
        ///Transmit dataWrite data to this register starts device to host communication if bus is in IDLE state. S/W must enable PS2EN before writing data to TX buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Ps2Ps2txdata2{    ///<PS2 Transmit DATA Register 2
        using Addr = Register::Address<0x4010000c,0x00000000,0x00000000,unsigned>;
        ///Transmit dataWrite data to this register starts device to host communication if bus is in IDLE state. S/W must enable PS2EN before writing data to TX buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Ps2Ps2txdata3{    ///<PS2 Transmit DATA Register 3
        using Addr = Register::Address<0x40100010,0x00000000,0x00000000,unsigned>;
        ///Transmit dataWrite data to this register starts device to host communication if bus is in IDLE state. S/W must enable PS2EN before writing data to TX buffer.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Ps2Ps2rxdata{    ///<PS2 Receive DATA Register
        using Addr = Register::Address<0x40100014,0xffffff00,0x00000000,unsigned>;
        ///Received Data For host to device communication, after acknowledge bit is sent, the received data is copied from receive shift register to PS2RXDATA register. CPU must read this register before next byte reception complete, otherwise the data will be overwritten and RXOVF bit in PS2STATUS[6] will be set to 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ps2rxdata{}; 
    }
    namespace Ps2Ps2status{    ///<PS2 Status Register
        using Addr = Register::Address<0x40100018,0xfffff044,0x00000000,unsigned>;
        ///CLK Pin StateThis bit reflects the status of the PS2CLK line after synchronizing.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ps2clk{}; 
        ///DATA Pin StateThis bit reflects the status of the PS2DATA line after synchronizing and sampling.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ps2data{}; 
        ///Frame ErrorFor host to device communication, if STOP bit (logic 1) is not received it is a frame error. If frame error occurs, DATA line may keep at low state after 12th clock. At this moment, S/w overrides PS2CLK to send clock till PS2DATA release to high state. After that, device sends a "Resend" command to host.1 = Frame error occur0 = No frame errorWrite 1 to clear this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> framerr{}; 
        ///Received ParityThis bit reflects the parity bit for the last received data byte (odd parity).Read only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxparity{}; 
        ///Receive BusyThis bit indicates that the PS2 device is currently receiving data.0 = Idle.1 = Currently receiving data.Read only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxbusy{}; 
        ///Transmit BusyThis bit indicates that the PS2 device is currently sending data.0 = Idle.1 = Currently sending data.Read only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbusy{}; 
        ///RX Buffer Overwrite1 = Data in PS2RXDATA register is overwritten by new coming data.0 = No overwriteWrite 1 to clear this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> rxovf{}; 
        ///TX FIFO EmptyWhen S/W writes any data to PS2TXDATA0-3 the TXEMPTY bit is cleared to 0 immediately if PS2EN is enabled. When transmitted data byte number is equal to FIFODEPTH then TXEMPTY bit is clear to 1.1 = FIFO is empty0 = There is data to be transmittedRead only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
        ///Byte Index It indicates which data byte in transmit data shift register. When all data in FIFO is transmitted and it will be cleared to 0.It is a read only bit.BYTEIDX	DATA Transmit	BYTEIDX	DATA Transmit	0000	TXDATA0[7:0]	1000	TXDATA2[7:0]	0001	TXDATA0[15:8]	1001	TXDATA2[15:8]	0010	TXDATA0[23:16]	1010	TXDATA2[23:16]	0011	TXDATA0[31:24]	1011	TXDATA2[31:24]	0100	TXDATA1[7:0]	1100	TXDATA3[7:0]	0101	TXDATA1[15:8]	1101	TXDATA3[15:8]	0110	TXDATA1[23:16]	1110	TXDATA3[23:16]	0111	TXDATA1[31:24]	1111	TXDATA3[31:24]	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteidx{}; 
    }
    namespace Ps2Ps2intid{    ///<PS2 Interrupt Identification Register
        using Addr = Register::Address<0x4010001c,0xffffffff,0x00000000,unsigned>;
        ///Receive InterruptThis bit is set to 1 when acknowledge bit is sent for Host to device communication. Interrupt occurs if RXINTEN bit is set to 1.1 = Receive interrupt occurs0 = No interruptWrite 1 to clear this bit to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> rxint{}; 
        ///Transmit Interrupt This bit is set to 1 after STOP bit is transmitted. Interrupt occur if TXINTEN bit is set to 1.1 = Transmit interrupt occurs0 = No interruptWrite 1 to clear this bit to 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> txint{}; 
    }
}
