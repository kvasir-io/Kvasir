#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace Noneps2con{    ///<PS2 Control Register
        using Addr = Register::Address<0x40100000,0xfffff000,0,unsigned>;
        ///Enable PS2 Device
Enable PS2 device controller
1 = Enable
0 = Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ps2en{}; 
        ///Enable Transmit Interrupt
1 = Enable data transmit complete interrupt
0 = Disable data transmit complete interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txinten{}; 
        ///Enable Receive Interrupt
1 = Enable data receive complete interrupt
0 = Disable data receive complete interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxinten{}; 
        ///Transmit Data FIFO Depth
There is 16 bytes buffer for data transmit. S/W can define the FIFO depth from 1 to 16 bytes depends on application. 
0 = 1 byte
1 = 2 bytes
...
14 = 15 bytes
15 = 16 bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,unsigned> txfifoDepth{}; 
        ///Acknowledge Enable
1 = If parity error or stop bit is not received correctly, acknowledge bit will not be sent to host at 12th clock
0 = Always send acknowledge to host at 12th clock for host to device communication.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ack{}; 
        ///Clear TX FIFO 
Write 1 to this bit to terminate device to host transmission. The TXEMPTY bit in PS2STATUS bit will be set to 1 and pointer BYTEIDEX is reset to 0 regardless there is residue data in buffer or not. The buffer content is not been cleared.
1 = Clear FIFO 
0 = Not active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrfifo{}; 
        ///Software Override PS2 CLK/DATA Pin State
1 = PS2CLK and PS2DATA pins are controlled by S/W
0 = PS2CLK and PS2DATA pins are controlled by internal state machine.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> override{}; 
        ///Force PS2CLK Line
It forces PS2CLK line high or low regardless of the internal state of the device controller if OVERRIDE is set to high.
1 = Force PS2DATA line high
0 = Force PS2DATA line low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fps2clk{}; 
        ///Force PS2DATA Line
It forces PS2DATA high or low regardless of the internal state of the device controller if OVERRIDE is set to high.
1 = Force PS2DATA high
0 = Force PS2DATA low
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fps2dat{}; 
    }
    namespace Noneps2txdata0{    ///<PS2 Transmit DATA Register 0
        using Addr = Register::Address<0x40100004,0x00000000,0,unsigned>;
        ///Transmit data
Write data to this register starts device to host communication if bus is in IDLE state. S/W must enable PS2EN before writing data to TX buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Noneps2txdata1{    ///<PS2 Transmit DATA Register 1
        using Addr = Register::Address<0x40100008,0x00000000,0,unsigned>;
        ///Transmit data
Write data to this register starts device to host communication if bus is in IDLE state. S/W must enable PS2EN before writing data to TX buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Noneps2txdata2{    ///<PS2 Transmit DATA Register 2
        using Addr = Register::Address<0x4010000c,0x00000000,0,unsigned>;
        ///Transmit data
Write data to this register starts device to host communication if bus is in IDLE state. S/W must enable PS2EN before writing data to TX buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Noneps2txdata3{    ///<PS2 Transmit DATA Register 3
        using Addr = Register::Address<0x40100010,0x00000000,0,unsigned>;
        ///Transmit data
Write data to this register starts device to host communication if bus is in IDLE state. S/W must enable PS2EN before writing data to TX buffer.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Noneps2rxdata{    ///<PS2 Receive DATA Register
        using Addr = Register::Address<0x40100014,0xffffff00,0,unsigned>;
        ///Received Data 
For host to device communication, after acknowledge bit is sent, the received data is copied from receive shift register to PS2RXDATA register. CPU must read this register before next byte reception complete, otherwise the data will be overwritten and RXOVF bit in PS2STATUS[6] will be set to 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ps2rxdata{}; 
    }
    namespace Noneps2status{    ///<PS2 Status Register
        using Addr = Register::Address<0x40100018,0xfffff000,0,unsigned>;
        ///CLK Pin State
This bit reflects the status of the PS2CLK line after synchronizing.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ps2clk{}; 
        ///DATA Pin State
This bit reflects the status of the PS2DATA line after synchronizing and sampling.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ps2data{}; 
        ///Frame Error
For host to device communication, if STOP bit (logic 1) is not received it is a frame error. If frame error occurs, DATA line may keep at low state after 12th clock. At this moment, S/w overrides PS2CLK to send clock till PS2DATA release to high state. After that, device sends a "Resend" command to host.
1 = Frame error occur
0 = No frame error
Write 1 to clear this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> framerr{}; 
        ///Received Parity
This bit reflects the parity bit for the last received data byte (odd parity).
Read only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxparity{}; 
        ///Receive Busy
This bit indicates that the PS2 device is currently receiving data.
0 = Idle.
1 = Currently receiving data.
Read only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxbusy{}; 
        ///Transmit Busy
This bit indicates that the PS2 device is currently sending data.
0 = Idle.
1 = Currently sending data.
Read only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txbusy{}; 
        ///RX Buffer Overwrite
1 = Data in PS2RXDATA register is overwritten by new coming data.
0 = No overwrite
Write 1 to clear this bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxovf{}; 
        ///TX FIFO Empty
When S/W writes any data to PS2TXDATA0-3 the TXEMPTY bit is cleared to 0 immediately if PS2EN is enabled. When transmitted data byte number is equal to FIFODEPTH then TXEMPTY bit is clear to 1.
1 = FIFO is empty
0 = There is data to be transmitted
Read only bit.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Byte Index 
It indicates which data byte in transmit data shift register. When all data in FIFO is transmitted and it will be cleared to 0.
It is a read only bit.
BYTEIDX	DATA Transmit	BYTEIDX	DATA Transmit	
0000	TXDATA0[7:0]	1000	TXDATA2[7:0]	
0001	TXDATA0[15:8]	1001	TXDATA2[15:8]	
0010	TXDATA0[23:16]	1010	TXDATA2[23:16]	
0011	TXDATA0[31:24]	1011	TXDATA2[31:24]	
0100	TXDATA1[7:0]	1100	TXDATA3[7:0]	
0101	TXDATA1[15:8]	1101	TXDATA3[15:8]	
0110	TXDATA1[23:16]	1110	TXDATA3[23:16]	
0111	TXDATA1[31:24]	1111	TXDATA3[31:24]	
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> byteidx{}; 
    }
    namespace Noneps2intid{    ///<PS2 Interrupt Identification Register
        using Addr = Register::Address<0x4010001c,0xfffffffc,0,unsigned>;
        ///Receive Interrupt
This bit is set to 1 when acknowledge bit is sent for Host to device communication. Interrupt occurs if RXINTEN bit is set to 1.
1 = Receive interrupt occurs
0 = No interrupt
Write 1 to clear this bit to 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxint{}; 
        ///Transmit Interrupt 
This bit is set to 1 after STOP bit is transmitted. Interrupt occur if TXINTEN bit is set to 1.
1 = Transmit interrupt occurs
0 = No interrupt
Write 1 to clear this bit to 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txint{}; 
    }
}
