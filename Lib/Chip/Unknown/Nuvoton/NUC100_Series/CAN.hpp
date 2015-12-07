#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Registers group
    namespace NonecanCon{    ///<Control Register
        using Addr = Register::Address<0x40180000,0xffffff10,0,unsigned>;
        ///Init Initialization
1 = Initialization is started.
0 = Normal Operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> init{}; 
        namespace InitValC{
        }
        ///Module Interrupt Enable
1 = Enabled.
0 = Disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ie{}; 
        namespace IeValC{
        }
        ///Status Change Interrupt Enable
1 = Enabled - An interrupt will be generated when a message transfer is successfully completed or a CAN bus error is detected.
0 = Disabled - No Status Change Interrupt will be generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sie{}; 
        namespace SieValC{
        }
        ///Error Interrupt Enable
1 = Enabled - A change in the bits BOff or EWarn in the Status Register will generate an interrupt.
0 = Disabled - No Error Status Interrupt will be generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eie{}; 
        namespace EieValC{
        }
        ///Disable Automatic Re-transmission 
1 = Automatic Retransmission disabled.
0 = Automatic Retransmission of disturbed messages enabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dar{}; 
        namespace DarValC{
        }
        ///Configuration Change Enable
1 = Write access to the Bit Timing Register (CAN_BTIME & CAN_BRP) allowed. (while Init bit =1).
0 = No write access to the Bit Timing Register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cce{}; 
        namespace CceValC{
        }
        ///Test Mode Enable
1 = Test Mode.
0 = Normal Operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> test{}; 
        namespace TestValC{
        }
    }
    namespace NonecanStatus{    ///<Status Register
        using Addr = Register::Address<0x40180004,0xffffff00,0,unsigned>;
        ///Last Error Code (Type of the last error to occur on the CAN bus)
The LEC field holds a code, which indicates the type of the last error to occur on the CAN bus. This field will be cleared to '0' when a message has been transferred (reception or transmission) without error. The unused code '7' may be written by the CPU to check for updates. Table 5-17 describes the error codes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> lec{}; 
        namespace LecValC{
        }
        ///Transmitted a Message Successfully
1 = Since this bit was last reset by the CPU, a message has been successfully (error free and acknowledged by at least one other node) transmitted.
0 = Since this bit was reset by the CPU, no message has been successfully transmitted. This bit is never reset by the CAN Core.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txok{}; 
        namespace TxokValC{
        }
        ///Received a Message Successfully
1 = A message has been successfully received since this bit was last reset by the CPU (independent of the result of acceptance filtering).
0 = No message has been successfully received since this bit was last reset by the CPU. This bit is never reset by the CAN Core.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxok{}; 
        namespace RxokValC{
        }
        ///Error Passive (Read Only)
1 = The CAN Core is in the error passive state as defined in the CAN Specification.
0 = The CAN Core is error active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epass{}; 
        namespace EpassValC{
        }
        ///Error Warning Status (Read Only)
1 = At least one of the error counters in the EML has reached the error warning limit of 96.
0 = Both error counters are below the error warning limit of 96.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ewarn{}; 
        namespace EwarnValC{
        }
        ///Busoff Status (Read Only) 
1 = The CAN module is in busoff state.
0 = The CAN module is not in busoff state.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> boff{}; 
        namespace BoffValC{
        }
    }
    namespace NonecanErr{    ///<Error Counter
        using Addr = Register::Address<0x40180008,0xffff0000,0,unsigned>;
        ///Transmit Error Counter
Actual state of the Transmit Error Counter. Values between 0 and 255.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tec{}; 
        namespace TecValC{
        }
        ///Receive Error Counter
Actual state of the Receive Error Counter. Values between 0 and 127.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        ///Receive Error Passive
1 = The Receive Error Counter has reached the error passive level as defined in the CAN Specification.
0 = The Receive Error Counter is below the error passive level.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rp{}; 
        namespace RpValC{
        }
    }
    namespace NonecanBtime{    ///<Bit Timing Register
        using Addr = Register::Address<0x4018000c,0xffff8000,0,unsigned>;
        ///Baud Rate Prescaler 
0x01-0x3F: The value by which the oscillator frequency is divided for generating the bit time quanta. The bit time is built up from a multiple of this quanta. Valid values for the Baud Rate Prescaler are [0...63]. The actual interpretation by the hardware of this value is such that one more than the value programmed here is used.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> brp{}; 
        namespace BrpValC{
        }
        ///(Re)Synchronization Jump Width
0x0-0x3: Valid programmed values are [0 ... 3]. The actual interpretation by the hardware of this value is such that one more than the value programmed here is used.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sjw{}; 
        namespace SjwValC{
        }
        ///Time Segment before the sample Point Minus Sync_seg
0x01-0x0F: valid values for TSeg1 are [1 ... 15]. The actual interpretation by the hardware of this value is such that one more than the value programmed is used.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tseg1{}; 
        namespace Tseg1ValC{
        }
        ///Time Segment After sample Point 
0x0-0x7: Valid values for TSeg2 are [0 ... 7]. The actual interpretation by the hardware of this value is such that one more than the value programmed here is used.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> tseg2{}; 
        namespace Tseg2ValC{
        }
    }
    namespace NonecanIidr{    ///<Interrupt Identifier Register
        using Addr = Register::Address<0x40180010,0xffff0000,0,unsigned>;
        ///Interrupt Identifier (Indicates the source of the interrupt. Ref. Table 5-18)
If several interrupts are pending, the CAN Interrupt Register will point to the pending interrupt with the highest priority, disregarding their chronological order. An interrupt remains pending until the application software has cleared it. If IntId is different from 0x0000 and IE is set, the IRQ interrupt signal to the EIC is active. The interrupt remains active until IntId is back to value 0x0000 (the cause of the interrupt is reset) or until IE is reset.
The Status Interrupt has the highest priority. Among the message interrupts, the Message Object' s interrupt priority decreases with increasing message number.
A message interrupt is cleared by clearing the Message Object's IntPnd bit. The Status Interrupt is cleared by reading the Status Register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intid{}; 
        namespace IntidValC{
        }
    }
    namespace NonecanTest{    ///<Test Register
        using Addr = Register::Address<0x40180014,0xffffff00,0,unsigned>;
        ///Reserved
There are reserved bits.
These bits are always read as '0' and must always be written with '0'.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> res{}; 
        namespace ResValC{
        }
        ///Basic Mode
1= IF1 Registers used as Tx Buffer, IF2 Registers used as Rx Buffer.
0 = Basic Mode disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> basic{}; 
        namespace BasicValC{
        }
        ///Silent Mode
1 = The module is in Silent Mode.
0 = Normal operation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> silent{}; 
        namespace SilentValC{
        }
        ///Loop Back Mode
1 = Loop Back Mode is enabled.
0 = Loop Back Mode is disabled.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lback{}; 
        namespace LbackValC{
        }
        ///Tx[1:0]: Control of CAN_TX pin
00 = Reset value, CAN_TX is controlled by the CAN Core
01 = Sample Point can be monitored at CAN_TX pin
10 = CAN_TX pin drives a dominant ('0') value.
11 = CAN_TX pin drives a recessive ('1') value.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> tx{}; 
        namespace TxValC{
        }
        ///Monitors the actual value of CAN_RX Pin (Read Only)
1 = The CAN bus is recessive (CAN_RX = '1').
0 = The CAN bus is dominant (CAN_RX = '0').
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rx{}; 
        namespace RxValC{
        }
    }
    namespace NonecanBrpe{    ///<BRP Extension Register
        using Addr = Register::Address<0x40180018,0xfffffff0,0,unsigned>;
        ///BRPE: Baud Rate Prescaler Extension
0x00-0x0F: By programming BRPE, the Baud Rate Prescaler can be extended to values up to 1023. The actual interpretation by the hardware is that one more than the value programmed by BRPE (MSBs) and BTIME (LSBs) is used.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brpe{}; 
        namespace BrpeValC{
        }
    }
    namespace NonecanIf1Creq{    ///<IF1 Command Request Register
        using Addr = Register::Address<0x40180020,0xffff7fc0,0,unsigned>;
        ///Message Number
0x01-0x20: Valid Message Number, the Message Object in the Message
RAM is selected for data transfer.
0x00: Not a valid Message Number, interpreted as 0x20.
0x21-0x3F: Not a valid Message Number, interpreted as 0x01-0x1F.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> messagenumber{}; 
        namespace MessagenumberValC{
        }
        ///Busy Flag
1 = Writing to the IF1 Command Request Register is in progress. This bit can only be read by the software.
0 = Read/write action has finished.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
    }
    namespace NonecanIf1Cmask{    ///<IF1 Command Mask Registers
        using Addr = Register::Address<0x40180024,0xffffff00,0,unsigned>;
        ///Access Data Bytes [7:4]
Direction = Write 
1 = Transfer Data Bytes [7:4] to Message Object.
0 = Data Bytes [7:4] unchanged.
Direction = Read
1 = Transfer Data Bytes [7:4] to IF1 Message Buffer Register.
0 = Data Bytes [7:4] unchanged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datB{}; 
        namespace DatbValC{
        }
        ///Access Data Bytes [3:0]
Direction = Write
1 = Transfer Data Bytes [3:0] to Message Object 
0 = Data Bytes [3:0] unchanged.
Direction = Read
1 = Transfer Data Bytes [3:0] to IF1 Message Buffer Register.
0 = Data Bytes [3:0] unchanged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datA{}; 
        namespace DataValC{
        }
        ///Access Transmission Request Bit  when Direction = Write
1 = Set TxRqst bit.
0 = TxRqst bit unchanged.
Note: If a transmission is requested by programming bit TxRqst/NewDat in the IF1 Command Mask Register, bit TxRqst in the IF2 Message Control Register will be ignored.
Access New Data Bit when Direction = Read
1 = Clear NewDat bit in the Message Object 
0 = NewDat bit remains unchanged.
Note : A read access to a Message Object can be combined with the reset of the control bits IntPnd and NewDat. The values of these bits transferred to the IF1 Message Control Register always reflect the status before resetting these bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrqstornewdat{}; 
        namespace TxrqstornewdatValC{
        }
        ///Clear Interrupt Pending Bit
Direction = Write
When writing to a Message Object, this bit is ignored.
Direction = Read
1 = Clear IntPnd bit in the Message Object.
0 = IntPnd bit remains unchanged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrintpnd{}; 
        namespace ClrintpndValC{
        }
        ///Control Access Control Bits
Direction = Write
1 = Transfer Control Bits to Message Object.
0 = Control Bits unchanged
Direction = Read
1 = Transfer Control Bits to IF1 Message Buffer Register.
0 = Control Bits unchanged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> control{}; 
        namespace ControlValC{
        }
        ///Access Arbitration Bits
Direction = Write
1 = Transfer Identifier + Dir + Xtd + MsgVal to Message Object 
0 = Arbitration bits unchanged.
Direction = Read
1 = Transfer Identifier + Dir + Xtd + MsgVal to IF1 Message Buffer Register.
0 = Arbitration bits unchanged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> arb{}; 
        namespace ArbValC{
        }
        ///Access Mask Bits
Direction = Write
1 = Transfer Identifier Mask + MDir + MXtd to Message Object.
0: = Mask bits unchanged.
Direction = Read
1 = Transfer Identifier Mask + MDir + MXtd to IF1 Message Buffer Register.
0 = Mask bits unchanged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
        ///Write / Read
1 = Write: Transfer data from the selected Message Buffer Registers to the Message Object addressed by the Command Request Register.
0 = Read: Transfer data from the Message Object addressed by the Command Request Register into the selected Message Buffer Registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrorrd{}; 
        namespace WrorrdValC{
        }
    }
    namespace NonecanIf1Mask1{    ///<IF1 Mask 1 Register
        using Addr = Register::Address<0x40180028,0xffff0000,0,unsigned>;
        ///Identifier Mask 15-0
1 = The corresponding identifier bit is used for acceptance filtering.
0 = The corresponding bit in the identifier of the message object cannot inhibit the match in the acceptance filtering.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msk015{}; 
        namespace Msk015ValC{
        }
    }
    namespace NonecanIf1Mask2{    ///<IF1 Mask 2 Register
        using Addr = Register::Address<0x4018002c,0xffff2000,0,unsigned>;
        ///Identifier Mask 28-16
1 = The corresponding identifier bit is used for acceptance filtering.
0 = The corresponding bit in the identifier of the message object cannot inhibit the match in the acceptance filtering.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> msk1628{}; 
        namespace Msk1628ValC{
        }
        ///Mask Message Direction
1 = The message direction bit (Dir) is used for acceptance filtering.
0 = The message direction bit (Dir) has no effect on the acceptance filtering.            
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mdir{}; 
        namespace MdirValC{
        }
        ///Mask Extended Identifier
1 = The extended identifier bit (IDE) is used for acceptance filtering.
0 = The extended identifier bit (IDE) has no effect on the acceptance filtering.
Note: When 11-bit ("standard") Identifiers are used for a Message Object, the identifiers of received Data Frames are written into bits ID28 to ID18. For acceptance filtering, only these bits together with mask bits Msk28 to Msk18 are considered.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mxtd{}; 
        namespace MxtdValC{
        }
    }
    namespace NonecanIf1Arb1{    ///<IF1 Arbitration 1 Register
        using Addr = Register::Address<0x40180030,0xffff0000,0,unsigned>;
        ///Message Identifier 15-0
ID28 - ID0, 29-bit Identifier ("Extended Frame").
ID28 - ID18, 11-bit Identifier ("Standard Frame") 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id015{}; 
        namespace Id015ValC{
        }
    }
    namespace NonecanIf1Arb2{    ///<IF1 Arbitration 2 Register
        using Addr = Register::Address<0x40180034,0xffff0000,0,unsigned>;
        ///Message Identifier 28-16
ID28 - ID0, 29-bit Identifier ("Extended Frame").
ID28 - ID18, 11-bit Identifier ("Standard Frame")
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> id1628{}; 
        namespace Id1628ValC{
        }
        ///Message Direction
1 = Direction is transmit
On TxRqst, the respective Message Object is transmitted as a Data Frame. On reception of a Remote Frame with matching identifier, the TxRqst bit of this Message Object is set (if RmtEn = one).
0 = Direction is receive
On TxRqst, a Remote Frame with the identifier of this Message Object is transmitted. On reception of a Data Frame with matching identifier, that message is stored in this Message Object.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Extended Identifier
1 = The 29-bit ("extended") Identifier will be used for this Message Object.
0 = The 11-bit ("standard") Identifier will be used for this Message Object.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> xtd{}; 
        namespace XtdValC{
        }
        ///Message Valid
1 = The Message Object is configured and should be considered by the Message Handler.
0 = The Message Object is ignored by the Message Handler.
Note: The application software must reset the MsgVal bit of all unused Messages Objects during the initialization before it resets bit Init in the CAN Control Register. This bit must also be reset before the identifier Id28-0, the control bits Xtd, Dir, or the Data Length Code DLC3-0  are modified,  or if the Messages  Object  is no longer required.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msgval{}; 
        namespace MsgvalValC{
        }
    }
    namespace NonecanIf1Mcon{    ///<IF1 Message Control Registers
        using Addr = Register::Address<0x40180038,0xffff0070,0,unsigned>;
        ///Data Length Code
0-8: Data Frame has 0-8 data bytes.
9-15: Data Frame has 8 data bytes
Note: The Data Length Code of a Message Object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the Message Handler stores a data frame, it will write the DLC to the value given by the received message.
Data 0: 1st data byte of a CAN Data Frame
Data 1: 2nd data byte of a CAN Data Frame
Data 2: 3rd data byte of a CAN Data Frame
Data 3: 4th data byte of a CAN Data Frame
Data 4: 5th data byte of a CAN Data Frame
Data 5: 6th data byte of a CAN Data Frame
Data 6: 7th data byte of a CAN Data Frame
Data 7 : 8th data byte of a CAN Data Frame
Note: The Data 0 Byte is the first data byte shifted into the shift register of the CAN Core during a reception while the Data 7 byte is the last. When the Message Handler stores a Data Frame, it will write all the eight data bytes into a Message Object. If the Data Length Code is less than 8, the remaining bytes of the Message Object will be overwritten by unspecified values.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///End of Buffer
1 = Single Message Object or last Message Object of a FIFO Buffer.
0 = Message Object belongs to a FIFO Buffer and is not the last Message Object of that FIFO Buffer.
Note: This bit is used to concatenate two or more Message Objects (up to 32) to build a FIFO Buffer. For single Message Objects (not belonging to a FIFO Buffer), this bit must always be set to one. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eob{}; 
        namespace EobValC{
        }
        ///Transmit Request
1 = The transmission of this Message Object is requested and is not yet done.
0 = This Message Object is not waiting for transmission.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrqst{}; 
        namespace TxrqstValC{
        }
        ///Remote Enable
1 = At the reception of a Remote Frame, TxRqst is set.
0 = At the reception of a Remote Frame, TxRqst is left unchanged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rmten{}; 
        namespace RmtenValC{
        }
        ///Receive Interrupt Enable
1 = IntPnd will be set after a successful reception of a frame.
0 = IntPnd will be left unchanged after a successful reception of a frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxie{}; 
        namespace RxieValC{
        }
        ///Transmit Interrupt Enable
1 = IntPnd will be set after a successful transmission of a frame.
0 = IntPnd will be left unchanged after the successful transmission of a frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txie{}; 
        namespace TxieValC{
        }
        ///Use Acceptance Mask
1 = Use Mask (Msk28-0, MXtd, and MDir) for acceptance filtering.
0 = Mask ignored.
Note: If the UMask bit is set to one, the Message Object's mask bits have  to  be  programmed  during  initialization  of  the  Message Object before MsgVal is set to one.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> umask{}; 
        namespace UmaskValC{
        }
        ///Interrupt Pending
1 = This message object is the source of an interrupt. The Interrupt Identifier in the Interrupt Register will point to this message object if there is no other interrupt source with higher priority.
0 = This message object is not the source of an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> intpnd{}; 
        namespace IntpndValC{
        }
        ///Message Lost (only valid for Message Objects with direction = receive)
1 = The Message Handler stored a new message into this object when NewDat was still set, the CPU has lost a message.
0 = No message lost since last time this bit was reset by the CPU.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msglst{}; 
        namespace MsglstValC{
        }
        ///New Data
1 = The Message Handler or the application software has written new data into the data portion of this Message Object.
0 = No new data has been written into the data portion of this Message Object by the Message Handler since last time this flag was cleared by the application software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> newdat{}; 
        namespace NewdatValC{
        }
    }
    namespace NonecanIf1DatA1{    ///<IF1 Data A1 Registers
        using Addr = Register::Address<0x4018003c,0xffff0000,0,unsigned>;
        ///Data byte 0
1st data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
        ///Data byte 1
2nd data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
    }
    namespace NonecanIf1DatA2{    ///<IF1 Data A2 Registers
        using Addr = Register::Address<0x40180040,0xffff0000,0,unsigned>;
        ///Data byte 2
1st data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
        ///Data byte 3
2nd data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
    }
    namespace NonecanIf1DatB1{    ///<IF1 Data B1 Registers
        using Addr = Register::Address<0x40180044,0xffff0000,0,unsigned>;
        ///Data byte 4
1st data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
        ///Data byte 5
2nd data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
    }
    namespace NonecanIf1DatB2{    ///<IF1 Data B2 Registers
        using Addr = Register::Address<0x40180048,0xffff0000,0,unsigned>;
        ///Data byte 6
1st data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
        ///Data byte 7
2nd data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
    }
    namespace NonecanIf2Creq{    ///<IF2 Command Request Register
        using Addr = Register::Address<0x40180080,0xffff7fc0,0,unsigned>;
        ///Message Number
0x01-0x20: Valid Message Number, the Message Object in the Message
RAM is selected for data transfer.
0x00: Not a valid Message Number, interpreted as 0x20.
0x21-0x3F: Not a valid Message Number, interpreted as 0x01-0x1F.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> messagenumber{}; 
        namespace MessagenumberValC{
        }
        ///Busy Flag
1 = Writing to the IF2 Command Request Register is in progress. This bit can only be read by the software.
0 = Read/write action has finished.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
    }
    namespace NonecanIf2Cmask{    ///<IF2 Command Mask Register
        using Addr = Register::Address<0x40180084,0xffffff00,0,unsigned>;
        ///Access Data Bytes [7:4]
Direction = Write 
1 = Transfer Data Bytes [7:4] to Message Object.
0 = Data Bytes [7:4] unchanged.
Direction = Read
1 = Transfer Data Bytes [7:4] to IF2 Message Buffer Register.
0 = Data Bytes [7:4] unchanged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datB{}; 
        namespace DatbValC{
        }
        ///Access Data Bytes [3:0]
Direction = Write
1 = Transfer Data Bytes [3:0] to Message Object 
0 = Data Bytes [3:0] unchanged.
Direction = Read
1 = Transfer Data Bytes [3:0] to IF2 Message Buffer Register.
0 = Data Bytes [3:0] unchanged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> datA{}; 
        namespace DataValC{
        }
        ///Access Transmission Request Bit  when Direction = Write
1 = Set TxRqst bit.
0 = TxRqst bit unchanged.
Note: If a transmission is requested by programming bit TxRqst/NewDat in the IF2 Command Mask Register, bit TxRqst in the IF2 Message Control Register will be ignored.
Access New Data Bit when Direction = Read
1 = Clear NewDat bit in the Message Object 
0 = NewDat bit remains unchanged.
Note : A read access to a Message Object can be combined with the reset of the control bits IntPnd and NewDat. The values of these bits transferred to the IF2 Message Control Register always reflect the status before resetting these bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrqstornewdat{}; 
        namespace TxrqstornewdatValC{
        }
        ///Clear Interrupt Pending Bit
Direction = Write
When writing to a Message Object, this bit is ignored.
Direction = Read
1 = Clear IntPnd bit in the Message Object.
0 = IntPnd bit remains unchanged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrintpnd{}; 
        namespace ClrintpndValC{
        }
        ///Control Access Control Bits
Direction = Write
1 = Transfer Control Bits to Message Object.
0 = Control Bits unchanged
Direction = Read
1 = Transfer Control Bits to IF2 Message Buffer Register.
0 = Control Bits unchanged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> control{}; 
        namespace ControlValC{
        }
        ///Access Arbitration Bits
Direction = Write
1 = Transfer Identifier + Dir + Xtd + MsgVal to Message Object 
0 = Arbitration bits unchanged.
Direction = Read
1 = Transfer Identifier + Dir + Xtd + MsgVal to IF2 Message Buffer Register.
0 = Arbitration bits unchanged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> arb{}; 
        namespace ArbValC{
        }
        ///Access Mask Bits
Direction = Write
1 = Transfer Identifier Mask + MDir + MXtd to Message Object.
0: = Mask bits unchanged.
Direction = Read
1 = Transfer Identifier Mask + MDir + MXtd to IF2 Message Buffer Register.
0 = Mask bits unchanged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
        ///Write / Read
1 = Write: Transfer data from the selected Message Buffer Registers to the Message Object addressed by the Command Request Register.
0 = Read: Transfer data from the Message Object addressed by the Command Request Register into the selected Message Buffer Registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrorrd{}; 
        namespace WrorrdValC{
        }
    }
    namespace NonecanIf2Mask1{    ///<IF2 Mask 1 Registers
        using Addr = Register::Address<0x40180088,0xffff0000,0,unsigned>;
        ///Identifier Mask 15-0
1 = The corresponding identifier bit is used for acceptance filtering.
0 = The corresponding bit in the identifier of the message object cannot inhibit the match in the acceptance filtering.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msk015{}; 
        namespace Msk015ValC{
        }
    }
    namespace NonecanIf2Mask2{    ///<IF2 Mask 2 Registers
        using Addr = Register::Address<0x4018008c,0xffff2000,0,unsigned>;
        ///Identifier Mask 28-16
1 = The corresponding identifier bit is used for acceptance filtering.
0 = The corresponding bit in the identifier of the message object cannot inhibit the match in the acceptance filtering.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> msk1628{}; 
        namespace Msk1628ValC{
        }
        ///Mask Message Direction
1 = The message direction bit (Dir) is used for acceptance filtering.
0 = The message direction bit (Dir) has no effect on the acceptance filtering.            
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mdir{}; 
        namespace MdirValC{
        }
        ///Mask Extended Identifier
1 = The extended identifier bit (IDE) is used for acceptance filtering.
0 = The extended identifier bit (IDE) has no effect on the acceptance filtering.
Note: When 11-bit ("standard") Identifiers are used for a Message Object, the identifiers of received Data Frames are written into bits ID28 to ID18. For acceptance filtering, only these bits together with mask bits Msk28 to Msk18 are considered.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mxtd{}; 
        namespace MxtdValC{
        }
    }
    namespace NonecanIf2Arb1{    ///<IF2 Arbitration 1 Register
        using Addr = Register::Address<0x40180090,0xffff0000,0,unsigned>;
        ///Message Identifier 15-0
ID28 - ID0, 29-bit Identifier ("Extended Frame").
ID28 - ID18, 11-bit Identifier ("Standard Frame") 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> id015{}; 
        namespace Id015ValC{
        }
    }
    namespace NonecanIf2Arb2{    ///<IF2 Arbitration 2 Register
        using Addr = Register::Address<0x40180094,0xffff0000,0,unsigned>;
        ///Message Identifier 28-16
ID28 - ID0, 29-bit Identifier ("Extended Frame").
ID28 - ID18, 11-bit Identifier ("Standard Frame")
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> id1628{}; 
        namespace Id1628ValC{
        }
        ///Message Direction
1 = Direction is transmit
On TxRqst, the respective Message Object is transmitted as a Data Frame. On reception of a Remote Frame with matching identifier, the TxRqst bit of this Message Object is set (if RmtEn = one).
0 = Direction is receive
On TxRqst, a Remote Frame with the identifier of this Message Object is transmitted. On reception of a Data Frame with matching identifier, that message is stored in this Message Object.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///Extended Identifier
1 = The 29-bit ("extended") Identifier will be used for this Message Object.
0 = The 11-bit ("standard") Identifier will be used for this Message Object.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> xtd{}; 
        namespace XtdValC{
        }
        ///Message Valid
1 = The Message Object is configured and should be considered by the Message Handler.
0 = The Message Object is ignored by the Message Handler.
Note: The application software must reset the MsgVal bit of all unused Messages Objects during the initialization before it resets bit Init in the CAN Control Register. This bit must also be reset before the identifier Id28-0, the control bits Xtd, Dir, or the Data Length Code DLC3-0  are modified,  or if the Messages  Object  is no longer required.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msgval{}; 
        namespace MsgvalValC{
        }
    }
    namespace NonecanIf2Mcon{    ///<IF2 Message Control Register
        using Addr = Register::Address<0x40180098,0xffff0070,0,unsigned>;
        ///Data Length Code
0-8: Data Frame has 0-8 data bytes.
9-15: Data Frame has 8 data bytes
Note: The Data Length Code of a Message Object must be defined the same as in all the corresponding objects with the same identifier at other nodes. When the Message Handler stores a data frame, it will write the DLC to the value given by the received message.
Data 0: 1st data byte of a CAN Data Frame
Data 1: 2nd data byte of a CAN Data Frame
Data 2: 3rd data byte of a CAN Data Frame
Data 3: 4th data byte of a CAN Data Frame
Data 4: 5th data byte of a CAN Data Frame
Data 5: 6th data byte of a CAN Data Frame
Data 6: 7th data byte of a CAN Data Frame
Data 7 : 8th data byte of a CAN Data Frame
Note: The Data 0 Byte is the first data byte shifted into the shift register of the CAN Core during a reception while the Data 7 byte is the last. When the Message Handler stores a Data Frame, it will write all the eight data bytes into a Message Object. If the Data Length Code is less than 8, the remaining bytes of the Message Object will be overwritten by unspecified values.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
        ///End of Buffer
1 = Single Message Object or last Message Object of a FIFO Buffer.
0 = Message Object belongs to a FIFO Buffer and is not the last Message Object of that FIFO Buffer.
Note: This bit is used to concatenate two or more Message Objects (up to 32) to build a FIFO Buffer. For single Message Objects (not belonging to a FIFO Buffer), this bit must always be set to one. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eob{}; 
        namespace EobValC{
        }
        ///Transmit Request
1 = The transmission of this Message Object is requested and is not yet done.
0 = This Message Object is not waiting for transmission.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrqst{}; 
        namespace TxrqstValC{
        }
        ///Remote Enable
1 = At the reception of a Remote Frame, TxRqst is set.
0 = At the reception of a Remote Frame, TxRqst is left unchanged.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rmten{}; 
        namespace RmtenValC{
        }
        ///Receive Interrupt Enable
1 = IntPnd will be set after a successful reception of a frame.
0 = IntPnd will be left unchanged after a successful reception of a frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxie{}; 
        namespace RxieValC{
        }
        ///Transmit Interrupt Enable
1 = IntPnd will be set after a successful transmission of a frame.
0 = IntPnd will be left unchanged after the successful transmission of a frame.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txie{}; 
        namespace TxieValC{
        }
        ///Use Acceptance Mask
1 = Use Mask (Msk28-0, MXtd, and MDir) for acceptance filtering.
0 = Mask ignored.
Note: If the UMask bit is set to one, the Message Object's mask bits have  to  be  programmed  during  initialization  of  the  Message Object before MsgVal is set to one.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> umask{}; 
        namespace UmaskValC{
        }
        ///Interrupt Pending
1 = This message object is the source of an interrupt. The Interrupt Identifier in the Interrupt Register will point to this message object if there is no other interrupt source with higher priority.
0 = This message object is not the source of an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> intpnd{}; 
        namespace IntpndValC{
        }
        ///Message Lost (only valid for Message Objects with direction = receive)
1 = The Message Handler stored a new message into this object when NewDat was still set, the CPU has lost a message.
0 = No message lost since last time this bit was reset by the CPU.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msglst{}; 
        namespace MsglstValC{
        }
        ///New Data
1 = The Message Handler or the application software has written new data into the data portion of this Message Object.
0 = No new data has been written into the data portion of this Message Object by the Message Handler since last time this flag was cleared by the application software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> newdat{}; 
        namespace NewdatValC{
        }
    }
    namespace NonecanIf2DatA1{    ///<IF2 Data A1 Registers
        using Addr = Register::Address<0x4018009c,0xffff0000,0,unsigned>;
        ///Data byte 0
1st data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
        ///Data byte 1
2nd data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
    }
    namespace NonecanIf2DatA2{    ///<IF2 Data A2 Registers
        using Addr = Register::Address<0x401800a0,0xffff0000,0,unsigned>;
        ///Data byte 2
1st data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
        ///Data byte 3
2nd data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
    }
    namespace NonecanIf2DatB1{    ///<IF2 Data B1 Registers
        using Addr = Register::Address<0x401800a4,0xffff0000,0,unsigned>;
        ///Data byte 4
1st data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
        ///Data byte 5
2nd data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
    }
    namespace NonecanIf2DatB2{    ///<IF2 Data B2 Registers
        using Addr = Register::Address<0x401800a8,0xffff0000,0,unsigned>;
        ///Data byte 6
1st data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
        ///Data byte 7
2nd data byte of a CAN Data Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
    }
    namespace NonecanTxreq1{    ///<Transmission Request Registers 1
        using Addr = Register::Address<0x40180100,0xffff0000,0,unsigned>;
        ///Transmission Request Bits 1-16 (of all Message Objects)
1 = The transmission of this Message Object is requested and is not yet done.
0 = This Message Object is not waiting for transmission.
These bits are read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txrqst116{}; 
        namespace Txrqst116ValC{
        }
    }
    namespace NonecanTxreq2{    ///<Transmission Request Register 2
        using Addr = Register::Address<0x40180104,0xffff0000,0,unsigned>;
        ///Transmission Request Bits 17-32 (of all Message Objects)
1 = The transmission of this Message Object is requested and is not yet done.
0 = This Message Object is not waiting for transmission.
These bits are read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txrqst1732{}; 
        namespace Txrqst1732ValC{
        }
    }
    namespace NonecanNdat1{    ///<New Data Register 1
        using Addr = Register::Address<0x40180120,0xffff0000,0,unsigned>;
        ///New Data Bits 1-16 (of all Message Objects)
1 = The Message Handler or the application software has written new data into the data portion of this Message Object.
0 = No new data has been written into the data portion of this Message Object by the Message Handler since the last time this flag was cleared by the application software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> newdata116{}; 
        namespace Newdata116ValC{
        }
    }
    namespace NonecanNdat2{    ///<New Data Register 2
        using Addr = Register::Address<0x40180124,0xffff0000,0,unsigned>;
        ///New Data Bits 17-32 (of all Message Objects)
1 = The Message Handler or the application software has written new data into the data portion of this Message Object.
0 = No new data has been written into the data portion of this Message Object by the Message Handler since the last time this flag was cleared by the application software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> newdata1732{}; 
        namespace Newdata1732ValC{
        }
    }
    namespace NonecanIpnd1{    ///<Interrupt Pending Register 1
        using Addr = Register::Address<0x40180140,0xffff0000,0,unsigned>;
        ///Interrupt Pending Bits 1-16 (of all Message Objects)
1 = This message object is the source of an interrupt.
0 = This message object is not the source of an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intpnd116{}; 
        namespace Intpnd116ValC{
        }
    }
    namespace NonecanIpnd2{    ///<Interrupt Pending Register 2
        using Addr = Register::Address<0x40180144,0xffff0000,0,unsigned>;
        ///Interrupt Pending Bits 17-32 (of all Message Objects)
1 = This message object is the source of an interrupt.
0 = This message object is not the source of an interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intpnd1732{}; 
        namespace Intpnd1732ValC{
        }
    }
    namespace NonecanMvld1{    ///<Message Valid Register 1
        using Addr = Register::Address<0x40180160,0xffff0000,0,unsigned>;
        ///Message Valid Bits 1-16 (of all Message Objects) (Read Only)
1 = This Message Object is configured and should be considered by the Message Handler.
0 = This Message Object is ignored by the Message Handler.
Ex. CAN_MVLD1[0] means Message object No.1 is valid or not. If CAN_MVLD1[0] is set, message object No.1 is configured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msgval116{}; 
        namespace Msgval116ValC{
        }
    }
    namespace NonecanMvld2{    ///<Message Valid Register 2
        using Addr = Register::Address<0x40180164,0xffff0000,0,unsigned>;
        ///Message Valid Bits 17-32 (of all Message Objects) (Read Only)
1 = This Message Object is configured and should be considered by the Message Handler.
0 = This Message Object is ignored by the Message Handler.
Ex. CAN_MVLD1[0] means Message object No.1 is valid or not. If CAN_MVLD1[0] is set, message object No.1 is configured.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> msgval1732{}; 
        namespace Msgval1732ValC{
        }
    }
    namespace NonecanWuEn{    ///<Wake Up Function Enable
        using Addr = Register::Address<0x40180168,0xfffffffe,0,unsigned>;
        ///Wake Up Enable
1 = The wake-up function is enable.
0 = The wake-up function is disable.
Note: User can wake-up system when there is a falling edge in the CAN_Rx pin..
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakupEn{}; 
        namespace WakupenValC{
        }
    }
    namespace NonecanWuStatus{    ///<Wake Up Function Status
        using Addr = Register::Address<0x4018016c,0xfffffffe,0,unsigned>;
        ///Wake Up Status 
1 = Wake-up event is occurred.
0 = No wake-up event is occurred.
Note: The bit can be written '0' to clear.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakupSts{}; 
        namespace WakupstsValC{
        }
    }
}
