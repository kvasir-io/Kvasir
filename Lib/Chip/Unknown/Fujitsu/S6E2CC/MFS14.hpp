#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Multi-function Serial Interface 0
    namespace Mfs14UartScr{    ///<Serial Control Register
        using Addr = Register::Address<0x40038e01,0xffffff60,0x00000000,unsigned char>;
        ///Programmable Clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        ///Received interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Transmit interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        ///Transmit bus idle interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        ///Received operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        ///Transmission operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace Mfs14UartSmr{    ///<Serial Mode Register
        using Addr = Register::Address<0x40038e00,0xffffff12,0x00000000,unsigned char>;
        ///Operation mode set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        ///Stop bit length select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbl{}; 
        ///Transfer direction select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bds{}; 
        ///Serial data output enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
    }
    namespace Mfs14UartSsr{    ///<Serial Status Register
        using Addr = Register::Address<0x40038e05,0xffffff40,0x00000000,unsigned char>;
        ///Received error flag clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        ///Parity error flag bit (only functions in operation mode 0) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pe{}; 
        ///Framing error flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fre{}; 
        ///Overrun error flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ore{}; 
        ///Received data full flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdrf{}; 
        ///Transmit data empty flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdre{}; 
        ///Transmit bus idle flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbi{}; 
    }
    namespace Mfs14UartEscr{    ///<Extended Communication Control Register
        using Addr = Register::Address<0x40038e04,0xffffff00,0x00000000,unsigned char>;
        ///Flow control enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flwen{}; 
        ///Extension stop bit length select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> esbl{}; 
        ///Inverted serial data format bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inv{}; 
        ///Parity enable bit (only functions in operation mode 0) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen{}; 
        ///Parity select bit (only functions in operation mode 0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p{}; 
        ///Data length select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> l{}; 
    }
    namespace Mfs14UartRdr{    ///<Received Data Register
        using Addr = Register::Address<0x40038e08,0xfffffe00,0x00000000,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs14UartTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40038e08,0xfffffe00,0x00000000,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs14UartBgr{    ///<Baud Rate Generator Registers
        using Addr = Register::Address<0x40038e0c,0xffff0000,0x00000000,unsigned>;
        ///External clock select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Baud Rate Generator Registers 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        ///Baud Rate Generator Registers 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace Mfs14UartFcr1{    ///<FIFO Control Register 1
        using Addr = Register::Address<0x40038e15,0xffffffe0,0x00000000,unsigned char>;
        ///Re-transmission data lost detect enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        ///Received FIFO idle detection enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        ///Transmit FIFO data request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        ///Transmit FIFO interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        ///FIFO select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
    }
    namespace Mfs14UartFcr0{    ///<FIFO Control Register 0
        using Addr = Register::Address<0x40038e14,0xffffff80,0x00000000,unsigned char>;
        ///FIFO re-transmit data lost flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flst{}; 
        ///FIFO pointer reload bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        ///FIFO pointer save bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        ///FIFO2 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        ///FIFO1 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        ///FIFO2 operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        ///FIFO1 operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
    }
    namespace Mfs14UartFbyte1{    ///<FIFO Byte Register 1
        using Addr = Register::Address<0x40038e18,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs14UartFbyte2{    ///<FIFO Byte Register 2
        using Addr = Register::Address<0x40038e19,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs14CsioScr{    ///<Serial Control Register
        using Addr = Register::Address<0x40038e01,0xffffff00,0x00000000,unsigned char>;
        ///Programmable clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        ///Master/Slave function select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ms{}; 
        ///SPI corresponding bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi{}; 
        ///Received interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Transmit interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        ///Transmit bus idle interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        ///Data received enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        ///Data transmission enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace Mfs14CsioSmr{    ///<Serial Mode Register
        using Addr = Register::Address<0x40038e00,0xffffff10,0x00000000,unsigned char>;
        ///Operation mode set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        ///Serial clock invert bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> scinv{}; 
        ///Transfer direction select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bds{}; 
        ///Master mode serial clock output enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scke{}; 
        ///Serial data output enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
    }
    namespace Mfs14CsioSsr{    ///<Serial Status Register
        using Addr = Register::Address<0x40038e05,0xffffff60,0x00000000,unsigned char>;
        ///Received error flag clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        ///Access Width Control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awc{}; 
        ///Overrun error flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ore{}; 
        ///Received data full flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdrf{}; 
        ///Transmit data empty flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdre{}; 
        ///Transmit bus idle flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbi{}; 
    }
    namespace Mfs14CsioEscr{    ///<Extended Communication Control Register
        using Addr = Register::Address<0x40038e04,0xffffff00,0x00000000,unsigned char>;
        ///Serial output pin set bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sop{}; 
        ///Bit3 of Data length select bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> l3{}; 
        ///Serial Chip Select Format enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> csfe{}; 
        ///Data transmit/received wait select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> wt{}; 
        ///Data length select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> l{}; 
    }
    namespace Mfs14CsioRdr{    ///<Received Data Register
        using Addr = Register::Address<0x40038e08,0xffff0000,0x00000000,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs14CsioTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40038e08,0xffff0000,0x00000000,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs14CsioBgr{    ///<Baud Rate Generator Registers
        using Addr = Register::Address<0x40038e0c,0xffff8000,0x00000000,unsigned>;
        ///Baud Rate Generator Registers 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        ///Baud Rate Generator Registers 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace Mfs14CsioFcr1{    ///<FIFO Control Register 1
        using Addr = Register::Address<0x40038e15,0xffffffe0,0x00000000,unsigned char>;
        ///Re-transmission data lost detect enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        ///Received FIFO idle detection enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        ///Transmit FIFO data request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        ///Transmit FIFO interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        ///FIFO select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
    }
    namespace Mfs14CsioFcr0{    ///<FIFO Control Register 0
        using Addr = Register::Address<0x40038e14,0xffffff80,0x00000000,unsigned char>;
        ///FIFO re-transmit data lost flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flst{}; 
        ///FIFO pointer reload bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        ///FIFO pointer save bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        ///FIFO2 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        ///FIFO1 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        ///FIFO2 operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        ///FIFO1 operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
    }
    namespace Mfs14CsioFbyte1{    ///<FIFO Byte Register 1
        using Addr = Register::Address<0x40038e18,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs14CsioFbyte2{    ///<FIFO Byte Register 2
        using Addr = Register::Address<0x40038e19,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs14CsioScstr0{    ///<Serial Chip Select Timing Register 0
        using Addr = Register::Address<0x40038e1c,0xffffff00,0x00000000,unsigned char>;
        ///Serial Chip Select Hold Delay bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cshd{}; 
    }
    namespace Mfs14CsioScstr1{    ///<Serial Chip Select Timing Register 1
        using Addr = Register::Address<0x40038e1d,0xffffff00,0x00000000,unsigned char>;
        ///Serial Chip Select Setup Delay bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cssu{}; 
    }
    namespace Mfs14CsioScstr2{    ///<Serial Chip Select Timing Registers 2/3
        using Addr = Register::Address<0x40038e20,0xffff0000,0x00000000,unsigned>;
        ///Serial Chip Deselect bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> csds{}; 
    }
    namespace Mfs14CsioScstr3{    ///<Serial Chip Select Timing Registers 3
        using Addr = Register::Address<0x40038e21,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs14CsioSacsr{    ///<Serial Support Control Register
        using Addr = Register::Address<0x40038e24,0xffffc620,0x00000000,unsigned>;
        ///Transfer Byte Error Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tbeen{}; 
        ///Chip Select Error Interupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cseie{}; 
        ///Chip Select Error Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cse{}; 
        ///Timer Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tint{}; 
        ///Timer Interrupt Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tinte{}; 
        ///Synchronous Transmission Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tsyne{}; 
        ///Timer Operation Clock Division bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> tdiv{}; 
        ///Serial Timer Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tmre{}; 
    }
    namespace Mfs14CsioStmr{    ///<Serial Timer Register
        using Addr = Register::Address<0x40038e28,0xffff0000,0x00000000,unsigned>;
        ///Timer Data bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tm{}; 
    }
    namespace Mfs14CsioStmcr{    ///<Serial Timer Comparison Register
        using Addr = Register::Address<0x40038e2c,0xffff0000,0x00000000,unsigned>;
        ///Compare bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tc{}; 
    }
    namespace Mfs14CsioScscr{    ///<Serial Chip Select Control Status Register
        using Addr = Register::Address<0x40038e30,0xffff0000,0x00000000,unsigned>;
        ///Serial Chip Select Active Start bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> sst{}; 
        ///Serial Chip Select Active End bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> sed{}; 
        ///Serial Chip Select Active Display bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> scd{}; 
        ///Serial Chip Select Active Hold bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> scam{}; 
        ///Serial Chip Select Timing Operation Clock Division bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> cdiv{}; 
        ///Serial Chip Select Level Setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cslvl{}; 
        ///Serial Chip Select Enable bit with SCS3 pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> csen3{}; 
        ///Serial Chip Select Enable bit with SCS2 pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csen2{}; 
        ///Serial Chip Select Enable bit with SCS1 pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> csen1{}; 
        ///Serial Chip Select Enable bit with SCS0 pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csen0{}; 
        ///Serial Chip Select Output Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csoe{}; 
    }
    namespace Mfs14CsioScsfr0{    ///<Serial Chip Select Format Register 0
        using Addr = Register::Address<0x40038e34,0xffffff00,0x00000000,unsigned char>;
        ///Serial Chip Select 1 Level Setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cs1cslvl{}; 
        ///Serial Clock Invert bit of Serial Chip Select 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cs1scinv{}; 
        ///SPI corresponding bit of Serial Chip Select 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cs1spi{}; 
        ///Transfer direction select bit of Serial Chip Select 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cs1l{}; 
    }
    namespace Mfs14CsioScsfr1{    ///<Serial Chip Select Format Register 1
        using Addr = Register::Address<0x40038e35,0xffffff00,0x00000000,unsigned char>;
        ///Serial Chip Select 2 Level Setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cs2cslvl{}; 
        ///Serial Clock Invert bit of Serial Chip Select 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cs2scinv{}; 
        ///SPI corresponding bit of Serial Chip Select 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cs2spi{}; 
        ///Transfer direction select bit of Serial Chip Select 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cs2l{}; 
    }
    namespace Mfs14CsioScsfr2{    ///<Serial Chip Select Format Register 2
        using Addr = Register::Address<0x40038e38,0xffffff00,0x00000000,unsigned char>;
        ///Serial Chip Select 3 Level Setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cs3cslvl{}; 
        ///Serial Clock Invert bit of Serial Chip Select 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cs3scinv{}; 
        ///SPI corresponding bit of Serial Chip Select 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cs3spi{}; 
        ///Transfer direction select bit of Serial Chip Select 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> cs3l{}; 
    }
    namespace Mfs14CsioTbyte0{    ///<Transfer Byte Register 0
        using Addr = Register::Address<0x40038e3c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs14CsioTbyte1{    ///<Transfer Byte Register 1
        using Addr = Register::Address<0x40038e3d,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs14CsioTbyte2{    ///<Transfer Byte Register 2
        using Addr = Register::Address<0x40038e40,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs14CsioTbyte3{    ///<Transfer Byte Register 3
        using Addr = Register::Address<0x40038e41,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs14LinScr{    ///<Serial Control Register
        using Addr = Register::Address<0x40038e01,0xffffff00,0x00000000,unsigned char>;
        ///Programmable clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        ///Master/Slave function select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ms{}; 
        ///LIN Break Field setting bit (valid in master mode only) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbr{}; 
        ///Received interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Transmit interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        ///Transmit bus idle interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        ///Data reception enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        ///Data transmission enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace Mfs14LinSmr{    ///<Serial Mode Register
        using Addr = Register::Address<0x40038e00,0xffffff06,0x00000000,unsigned char>;
        ///Operation mode setting bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        ///Wake-up control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        ///Stop bit length select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbl{}; 
        ///Serial data output enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
    }
    namespace Mfs14LinSsr{    ///<Serial Status Register
        using Addr = Register::Address<0x40038e05,0xffffff40,0x00000000,unsigned char>;
        ///Received Error flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        ///LIN Break field detection flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbd{}; 
        ///Framing error flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fre{}; 
        ///Overrun error flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ore{}; 
        ///Received data full flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdrf{}; 
        ///Transmit data empty flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdre{}; 
        ///Transmit bus idle flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbi{}; 
    }
    namespace Mfs14LinEscr{    ///<Extended Communication Control Register
        using Addr = Register::Address<0x40038e04,0xffffffa0,0x00000000,unsigned char>;
        ///Extended stop bit length select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> esbl{}; 
        ///LIN Break field detect interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lbie{}; 
        ///LIN Break field length select bits (valid in master mode only) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> lbl{}; 
        ///LIN Break delimiter length select bits (valid in master mode only) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> del{}; 
    }
    namespace Mfs14LinRdr{    ///<Received Data Register
        using Addr = Register::Address<0x40038e08,0xffffff00,0x00000000,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs14LinTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40038e08,0xffffff00,0x00000000,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs14LinBgr{    ///<Baud Rate Generator Registers
        using Addr = Register::Address<0x40038e0c,0xffff0000,0x00000000,unsigned>;
        ///External clock select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ext{}; 
        ///Baud Rate Generator Registers 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        ///Baud Rate Generator Registers 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace Mfs14LinFcr1{    ///<FIFO Control Register 1
        using Addr = Register::Address<0x40038e15,0xffffffe0,0x00000000,unsigned char>;
        ///Re-transmission data lost detect enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        ///Received FIFO idle detection enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        ///Transmit FIFO data request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        ///Transmit FIFO interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        ///FIFO select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
    }
    namespace Mfs14LinFcr0{    ///<FIFO Control Register 0
        using Addr = Register::Address<0x40038e14,0xffffff80,0x00000000,unsigned char>;
        ///FIFO re-transmit data lost flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flst{}; 
        ///FIFO pointer reload bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        ///FIFO pointer save bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        ///FIFO2 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        ///FIFO1 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        ///FIFO2 operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        ///FIFO1 operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
    }
    namespace Mfs14LinFbyte1{    ///<FIFO Byte Register 1
        using Addr = Register::Address<0x40038e18,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs14LinFbyte2{    ///<FIFO Byte Register 2
        using Addr = Register::Address<0x40038e19,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs14I2cIbcr{    ///<I2C Bus Control Register
        using Addr = Register::Address<0x40038e01,0xffffff00,0x00000000,unsigned char>;
        ///Master/slave select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mss{}; 
        ///Operation flag/iteration start condition generation bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> actScc{}; 
        ///Data byte acknowledge enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> acke{}; 
        ///Wait selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wsel{}; 
        ///Condition detection interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cnde{}; 
        ///Interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inte{}; 
        ///Bus error flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ber{}; 
        ///interrupt flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> int_{}; 
    }
    namespace Mfs14I2cSmr{    ///<Serial Mode Register
        using Addr = Register::Address<0x40038e00,0xffffff13,0x00000000,unsigned char>;
        ///operation mode set bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        ///Received interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rie{}; 
        ///Transmit interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tie{}; 
    }
    namespace Mfs14I2cIbsr{    ///<I2C Bus Status Register
        using Addr = Register::Address<0x40038e04,0xffffff00,0x00000000,unsigned char>;
        ///First byte bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fbt{}; 
        ///Acknowledge flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rack{}; 
        ///Reserved address detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsa{}; 
        ///Data direction bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trx{}; 
        ///Arbitration lost bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> al{}; 
        ///Iteration start condition check bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsc{}; 
        ///Stop condition check bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> spc{}; 
        ///Bus state bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bb{}; 
    }
    namespace Mfs14I2cSsr{    ///<Serial Status Register 
        using Addr = Register::Address<0x40038e05,0xffffff00,0x00000000,unsigned char>;
        ///Received error flag clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        ///Transmit empty flag set bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tset{}; 
        ///DMA mode enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dma{}; 
        ///Transmit bus idle interrupt enable bit (Effective only when DMA mode is enabled) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tbie{}; 
        ///Overrun error flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ore{}; 
        ///Received data full flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdrf{}; 
        ///Transmit data empty flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdre{}; 
        ///Transmit bus idle flag bit (Effective only when DMA mode is enabled) 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbi{}; 
    }
    namespace Mfs14I2cRdr{    ///<Received Data Register
        using Addr = Register::Address<0x40038e08,0xffffff00,0x00000000,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs14I2cTdr{    ///<Transmit Data Register
        using Addr = Register::Address<0x40038e08,0xffffff00,0x00000000,unsigned>;
        ///Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs14I2cBgr{    ///<Baud Rate Generator Registers
        using Addr = Register::Address<0x40038e0c,0xffff8000,0x00000000,unsigned>;
        ///Baud Rate Generator Registers 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        ///Baud Rate Generator Registers 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace Mfs14I2cIsmk{    ///<7-bit Slave Address Mask Register
        using Addr = Register::Address<0x40038e11,0xffffff00,0x00000000,unsigned char>;
        ///I2C interface operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en{}; 
        ///Slave address mask bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sm{}; 
    }
    namespace Mfs14I2cIsba{    ///<7-bit Slave Address Register
        using Addr = Register::Address<0x40038e10,0xffffff00,0x00000000,unsigned char>;
        ///Slave address enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> saen{}; 
        ///7-bit slave address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace Mfs14I2cFcr1{    ///<FIFO Control Register 1
        using Addr = Register::Address<0x40038e15,0xffffffe0,0x00000000,unsigned char>;
        ///Re-transmission data lost detect enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        ///Received FIFO idle detection enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        ///Transmit FIFO data request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        ///Transmit FIFO interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        ///FIFO select bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
    }
    namespace Mfs14I2cFcr0{    ///<FIFO Control Register 0
        using Addr = Register::Address<0x40038e14,0xffffff80,0x00000000,unsigned char>;
        ///FIFO re-transmit data lost flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flst{}; 
        ///FIFO pointer reload bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        ///FIFO pointer save bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        ///FIFO2 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        ///FIFO1 reset bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        ///FIFO2 operation enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        ///FIFO1 operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
    }
    namespace Mfs14I2cFbyte1{    ///<FIFO Byte Register 1
        using Addr = Register::Address<0x40038e18,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs14I2cFbyte2{    ///<FIFO Byte Register 2
        using Addr = Register::Address<0x40038e19,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs14I2cNfcr{    ///<Noise Filter Control Register
        using Addr = Register::Address<0x40038e1c,0xffffffe0,0x00000000,unsigned char>;
        ///Noise Filter Time Select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> nft{}; 
    }
    namespace Mfs14I2cEibcr{    ///<Extension I2C Bus Control Register
        using Addr = Register::Address<0x40038e1d,0xffffffc0,0x00000000,unsigned char>;
        ///SDA status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sdas{}; 
        ///SCL status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> scls{}; 
        ///SDA output control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sdac{}; 
        ///SCL output control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sclc{}; 
        ///Serial output enabled bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> soce{}; 
        ///Bus error control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bec{}; 
    }
}
