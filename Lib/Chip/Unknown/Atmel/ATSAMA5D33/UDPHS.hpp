#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USB High Speed Device Port
    namespace UdphsCtrl{    ///<UDPHS Control Register
        using Addr = Register::Address<0xf8030000,0xfffff000,0x00000000,unsigned>;
        ///UDPHS Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> devAddr{}; 
        ///Function Address Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> faddrEn{}; 
        ///UDPHS Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> enUdphs{}; 
        ///Detach Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> detach{}; 
        ///Send Remote Wake Up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rewakeup{}; 
        ///Pull-Down Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pulldDis{}; 
    }
    namespace UdphsFnum{    ///<UDPHS Frame Number Register
        using Addr = Register::Address<0xf8030004,0x7fffc000,0x00000000,unsigned>;
        ///Microframe Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> microFrameNum{}; 
        ///Frame Number as defined in the Packet Field Formats
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frameNumber{}; 
        ///Frame Number CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fnumErr{}; 
    }
    namespace UdphsIen{    ///<UDPHS Interrupt Enable Register
        using Addr = Register::Address<0xf8030010,0x01000001,0x00000000,unsigned>;
        ///Suspend Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> detSuspd{}; 
        ///Micro-SOF Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> microSof{}; 
        ///SOF Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intSof{}; 
        ///End Of Reset Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endreset{}; 
        ///Wake Up CPU Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wakeUp{}; 
        ///End Of Resume Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endofrsm{}; 
        ///Upstream Resume Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upstrRes{}; 
        ///Endpoint 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ept0{}; 
        ///Endpoint 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ept1{}; 
        ///Endpoint 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ept2{}; 
        ///Endpoint 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ept3{}; 
        ///Endpoint 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ept4{}; 
        ///Endpoint 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ept5{}; 
        ///Endpoint 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ept6{}; 
        ///Endpoint 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ept7{}; 
        ///Endpoint 8 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ept8{}; 
        ///Endpoint 9 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ept9{}; 
        ///Endpoint 10 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ept10{}; 
        ///Endpoint 11 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ept11{}; 
        ///Endpoint 12 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ept12{}; 
        ///Endpoint 13 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ept13{}; 
        ///Endpoint 14 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> ept14{}; 
        ///Endpoint 15 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ept15{}; 
        ///DMA Channel 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma1{}; 
        ///DMA Channel 2 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dma2{}; 
        ///DMA Channel 3 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dma3{}; 
        ///DMA Channel 4 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dma4{}; 
        ///DMA Channel 5 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dma5{}; 
        ///DMA Channel 6 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dma6{}; 
        ///DMA Channel 7 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dma7{}; 
    }
    namespace UdphsIntsta{    ///<UDPHS Interrupt Status Register
        using Addr = Register::Address<0xf8030014,0x01000000,0x00000000,unsigned>;
        ///Speed Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> speed{}; 
        ///Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> detSuspd{}; 
        ///Micro Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> microSof{}; 
        ///Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSof{}; 
        ///End Of Reset Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endreset{}; 
        ///Wake Up CPU Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeUp{}; 
        ///End Of Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endofrsm{}; 
        ///Upstream Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> upstrRes{}; 
        ///Endpoint 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept0{}; 
        ///Endpoint 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept1{}; 
        ///Endpoint 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept2{}; 
        ///Endpoint 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept3{}; 
        ///Endpoint 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept4{}; 
        ///Endpoint 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept5{}; 
        ///Endpoint 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept6{}; 
        ///Endpoint 7 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept7{}; 
        ///Endpoint 8 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept8{}; 
        ///Endpoint 9 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept9{}; 
        ///Endpoint 10 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept10{}; 
        ///Endpoint 11 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept11{}; 
        ///Endpoint 12 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept12{}; 
        ///Endpoint 13 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept13{}; 
        ///Endpoint 14 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept14{}; 
        ///Endpoint 15 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept15{}; 
        ///DMA Channel 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma1{}; 
        ///DMA Channel 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma2{}; 
        ///DMA Channel 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma3{}; 
        ///DMA Channel 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma4{}; 
        ///DMA Channel 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma5{}; 
        ///DMA Channel 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma6{}; 
        ///DMA Channel 7 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dma7{}; 
    }
    namespace UdphsClrint{    ///<UDPHS Clear Interrupt Register
        using Addr = Register::Address<0xf8030018,0xffffff01,0x00000000,unsigned>;
        ///Suspend Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> detSuspd{}; 
        ///Micro Start Of Frame Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> microSof{}; 
        ///Start Of Frame Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSof{}; 
        ///End Of Reset Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endreset{}; 
        ///Wake Up CPU Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wakeUp{}; 
        ///End Of Resume Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endofrsm{}; 
        ///Upstream Resume Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> upstrRes{}; 
    }
    namespace UdphsEptrst{    ///<UDPHS Endpoints Reset Register
        using Addr = Register::Address<0xf803001c,0xffff0000,0x00000000,unsigned>;
        ///Endpoint 0 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept0{}; 
        ///Endpoint 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept1{}; 
        ///Endpoint 2 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept2{}; 
        ///Endpoint 3 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept3{}; 
        ///Endpoint 4 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept4{}; 
        ///Endpoint 5 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept5{}; 
        ///Endpoint 6 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept6{}; 
        ///Endpoint 7 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept7{}; 
        ///Endpoint 8 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept8{}; 
        ///Endpoint 9 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept9{}; 
        ///Endpoint 10 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept10{}; 
        ///Endpoint 11 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept11{}; 
        ///Endpoint 12 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept12{}; 
        ///Endpoint 13 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept13{}; 
        ///Endpoint 14 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept14{}; 
        ///Endpoint 15 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ept15{}; 
    }
    namespace UdphsTst{    ///<UDPHS Test Register
        using Addr = Register::Address<0xf80300e0,0xffffffc0,0x00000000,unsigned>;
        ///Speed Configuration
        enum class SpeedcfgVal {
            normal=0x00000000,     ///<Normal Mode: The macro is in Full Speed mode, ready to make a High Speed identification, if the host supports it and then to automatically switch to High Speed mode
            highSpeed=0x00000002,     ///<Force High Speed: Set this value to force the hardware to work in High Speed mode. Only for debug or test purpose.
            fullSpeed=0x00000003,     ///<Force Full Speed: Set this value to force the hardware to work only in Full Speed mode. In this configuration, the macro will not respond to a High Speed reset handshake.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,SpeedcfgVal> speedCfg{}; 
        namespace SpeedcfgValC{
            constexpr Register::FieldValue<decltype(speedCfg)::Type,SpeedcfgVal::normal> normal{};
            constexpr Register::FieldValue<decltype(speedCfg)::Type,SpeedcfgVal::highSpeed> highSpeed{};
            constexpr Register::FieldValue<decltype(speedCfg)::Type,SpeedcfgVal::fullSpeed> fullSpeed{};
        }
        ///Test J Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tstJ{}; 
        ///Test K Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tstK{}; 
        ///Test Packet Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tstPkt{}; 
        ///OpMode2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> opmode2{}; 
    }
    namespace UdphsEptcfg0{    ///<UDPHS Endpoint Configuration Register (endpoint = 0)
        using Addr = Register::Address<0xf8030100,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb0{    ///<UDPHS Endpoint Control Enable Register (endpoint = 0)
        using Addr = Register::Address<0xf8030104,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb0Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 0)
        using Addr = Register::Address<0xf8030104,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis0{    ///<UDPHS Endpoint Control Disable Register (endpoint = 0)
        using Addr = Register::Address<0xf8030108,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis0Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 0)
        using Addr = Register::Address<0xf8030108,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl0{    ///<UDPHS Endpoint Control Register (endpoint = 0)
        using Addr = Register::Address<0xf803010c,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl0Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 0)
        using Addr = Register::Address<0xf803010c,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta0{    ///<UDPHS Endpoint Set Status Register (endpoint = 0)
        using Addr = Register::Address<0xf8030114,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta0Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 0)
        using Addr = Register::Address<0xf8030114,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta0{    ///<UDPHS Endpoint Clear Status Register (endpoint = 0)
        using Addr = Register::Address<0xf8030118,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta0Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 0)
        using Addr = Register::Address<0xf8030118,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta0{    ///<UDPHS Endpoint Status Register (endpoint = 0)
        using Addr = Register::Address<0xf803011c,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta0Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 0)
        using Addr = Register::Address<0xf803011c,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg1{    ///<UDPHS Endpoint Configuration Register (endpoint = 1)
        using Addr = Register::Address<0xf8030120,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb1{    ///<UDPHS Endpoint Control Enable Register (endpoint = 1)
        using Addr = Register::Address<0xf8030124,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb1Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 1)
        using Addr = Register::Address<0xf8030124,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis1{    ///<UDPHS Endpoint Control Disable Register (endpoint = 1)
        using Addr = Register::Address<0xf8030128,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis1Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 1)
        using Addr = Register::Address<0xf8030128,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl1{    ///<UDPHS Endpoint Control Register (endpoint = 1)
        using Addr = Register::Address<0xf803012c,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl1Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 1)
        using Addr = Register::Address<0xf803012c,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta1{    ///<UDPHS Endpoint Set Status Register (endpoint = 1)
        using Addr = Register::Address<0xf8030134,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta1Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 1)
        using Addr = Register::Address<0xf8030134,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta1{    ///<UDPHS Endpoint Clear Status Register (endpoint = 1)
        using Addr = Register::Address<0xf8030138,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta1Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 1)
        using Addr = Register::Address<0xf8030138,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta1{    ///<UDPHS Endpoint Status Register (endpoint = 1)
        using Addr = Register::Address<0xf803013c,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta1Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 1)
        using Addr = Register::Address<0xf803013c,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg2{    ///<UDPHS Endpoint Configuration Register (endpoint = 2)
        using Addr = Register::Address<0xf8030140,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb2{    ///<UDPHS Endpoint Control Enable Register (endpoint = 2)
        using Addr = Register::Address<0xf8030144,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb2Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 2)
        using Addr = Register::Address<0xf8030144,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis2{    ///<UDPHS Endpoint Control Disable Register (endpoint = 2)
        using Addr = Register::Address<0xf8030148,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis2Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 2)
        using Addr = Register::Address<0xf8030148,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl2{    ///<UDPHS Endpoint Control Register (endpoint = 2)
        using Addr = Register::Address<0xf803014c,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl2Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 2)
        using Addr = Register::Address<0xf803014c,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta2{    ///<UDPHS Endpoint Set Status Register (endpoint = 2)
        using Addr = Register::Address<0xf8030154,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta2Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 2)
        using Addr = Register::Address<0xf8030154,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta2{    ///<UDPHS Endpoint Clear Status Register (endpoint = 2)
        using Addr = Register::Address<0xf8030158,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta2Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 2)
        using Addr = Register::Address<0xf8030158,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta2{    ///<UDPHS Endpoint Status Register (endpoint = 2)
        using Addr = Register::Address<0xf803015c,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta2Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 2)
        using Addr = Register::Address<0xf803015c,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg3{    ///<UDPHS Endpoint Configuration Register (endpoint = 3)
        using Addr = Register::Address<0xf8030160,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb3{    ///<UDPHS Endpoint Control Enable Register (endpoint = 3)
        using Addr = Register::Address<0xf8030164,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb3Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 3)
        using Addr = Register::Address<0xf8030164,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis3{    ///<UDPHS Endpoint Control Disable Register (endpoint = 3)
        using Addr = Register::Address<0xf8030168,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis3Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 3)
        using Addr = Register::Address<0xf8030168,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl3{    ///<UDPHS Endpoint Control Register (endpoint = 3)
        using Addr = Register::Address<0xf803016c,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl3Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 3)
        using Addr = Register::Address<0xf803016c,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta3{    ///<UDPHS Endpoint Set Status Register (endpoint = 3)
        using Addr = Register::Address<0xf8030174,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta3Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 3)
        using Addr = Register::Address<0xf8030174,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta3{    ///<UDPHS Endpoint Clear Status Register (endpoint = 3)
        using Addr = Register::Address<0xf8030178,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta3Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 3)
        using Addr = Register::Address<0xf8030178,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta3{    ///<UDPHS Endpoint Status Register (endpoint = 3)
        using Addr = Register::Address<0xf803017c,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta3Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 3)
        using Addr = Register::Address<0xf803017c,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg4{    ///<UDPHS Endpoint Configuration Register (endpoint = 4)
        using Addr = Register::Address<0xf8030180,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb4{    ///<UDPHS Endpoint Control Enable Register (endpoint = 4)
        using Addr = Register::Address<0xf8030184,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb4Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 4)
        using Addr = Register::Address<0xf8030184,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis4{    ///<UDPHS Endpoint Control Disable Register (endpoint = 4)
        using Addr = Register::Address<0xf8030188,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis4Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 4)
        using Addr = Register::Address<0xf8030188,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl4{    ///<UDPHS Endpoint Control Register (endpoint = 4)
        using Addr = Register::Address<0xf803018c,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl4Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 4)
        using Addr = Register::Address<0xf803018c,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta4{    ///<UDPHS Endpoint Set Status Register (endpoint = 4)
        using Addr = Register::Address<0xf8030194,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta4Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 4)
        using Addr = Register::Address<0xf8030194,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta4{    ///<UDPHS Endpoint Clear Status Register (endpoint = 4)
        using Addr = Register::Address<0xf8030198,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta4Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 4)
        using Addr = Register::Address<0xf8030198,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta4{    ///<UDPHS Endpoint Status Register (endpoint = 4)
        using Addr = Register::Address<0xf803019c,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta4Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 4)
        using Addr = Register::Address<0xf803019c,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg5{    ///<UDPHS Endpoint Configuration Register (endpoint = 5)
        using Addr = Register::Address<0xf80301a0,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb5{    ///<UDPHS Endpoint Control Enable Register (endpoint = 5)
        using Addr = Register::Address<0xf80301a4,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb5Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 5)
        using Addr = Register::Address<0xf80301a4,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis5{    ///<UDPHS Endpoint Control Disable Register (endpoint = 5)
        using Addr = Register::Address<0xf80301a8,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis5Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 5)
        using Addr = Register::Address<0xf80301a8,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl5{    ///<UDPHS Endpoint Control Register (endpoint = 5)
        using Addr = Register::Address<0xf80301ac,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl5Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 5)
        using Addr = Register::Address<0xf80301ac,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta5{    ///<UDPHS Endpoint Set Status Register (endpoint = 5)
        using Addr = Register::Address<0xf80301b4,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta5Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 5)
        using Addr = Register::Address<0xf80301b4,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta5{    ///<UDPHS Endpoint Clear Status Register (endpoint = 5)
        using Addr = Register::Address<0xf80301b8,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta5Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 5)
        using Addr = Register::Address<0xf80301b8,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta5{    ///<UDPHS Endpoint Status Register (endpoint = 5)
        using Addr = Register::Address<0xf80301bc,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta5Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 5)
        using Addr = Register::Address<0xf80301bc,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg6{    ///<UDPHS Endpoint Configuration Register (endpoint = 6)
        using Addr = Register::Address<0xf80301c0,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb6{    ///<UDPHS Endpoint Control Enable Register (endpoint = 6)
        using Addr = Register::Address<0xf80301c4,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb6Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 6)
        using Addr = Register::Address<0xf80301c4,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis6{    ///<UDPHS Endpoint Control Disable Register (endpoint = 6)
        using Addr = Register::Address<0xf80301c8,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis6Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 6)
        using Addr = Register::Address<0xf80301c8,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl6{    ///<UDPHS Endpoint Control Register (endpoint = 6)
        using Addr = Register::Address<0xf80301cc,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl6Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 6)
        using Addr = Register::Address<0xf80301cc,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta6{    ///<UDPHS Endpoint Set Status Register (endpoint = 6)
        using Addr = Register::Address<0xf80301d4,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta6Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 6)
        using Addr = Register::Address<0xf80301d4,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta6{    ///<UDPHS Endpoint Clear Status Register (endpoint = 6)
        using Addr = Register::Address<0xf80301d8,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta6Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 6)
        using Addr = Register::Address<0xf80301d8,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta6{    ///<UDPHS Endpoint Status Register (endpoint = 6)
        using Addr = Register::Address<0xf80301dc,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta6Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 6)
        using Addr = Register::Address<0xf80301dc,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg7{    ///<UDPHS Endpoint Configuration Register (endpoint = 7)
        using Addr = Register::Address<0xf80301e0,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb7{    ///<UDPHS Endpoint Control Enable Register (endpoint = 7)
        using Addr = Register::Address<0xf80301e4,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb7Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 7)
        using Addr = Register::Address<0xf80301e4,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis7{    ///<UDPHS Endpoint Control Disable Register (endpoint = 7)
        using Addr = Register::Address<0xf80301e8,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis7Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 7)
        using Addr = Register::Address<0xf80301e8,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl7{    ///<UDPHS Endpoint Control Register (endpoint = 7)
        using Addr = Register::Address<0xf80301ec,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl7Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 7)
        using Addr = Register::Address<0xf80301ec,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta7{    ///<UDPHS Endpoint Set Status Register (endpoint = 7)
        using Addr = Register::Address<0xf80301f4,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta7Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 7)
        using Addr = Register::Address<0xf80301f4,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta7{    ///<UDPHS Endpoint Clear Status Register (endpoint = 7)
        using Addr = Register::Address<0xf80301f8,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta7Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 7)
        using Addr = Register::Address<0xf80301f8,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta7{    ///<UDPHS Endpoint Status Register (endpoint = 7)
        using Addr = Register::Address<0xf80301fc,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta7Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 7)
        using Addr = Register::Address<0xf80301fc,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg8{    ///<UDPHS Endpoint Configuration Register (endpoint = 8)
        using Addr = Register::Address<0xf8030200,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb8{    ///<UDPHS Endpoint Control Enable Register (endpoint = 8)
        using Addr = Register::Address<0xf8030204,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb8Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 8)
        using Addr = Register::Address<0xf8030204,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis8{    ///<UDPHS Endpoint Control Disable Register (endpoint = 8)
        using Addr = Register::Address<0xf8030208,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis8Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 8)
        using Addr = Register::Address<0xf8030208,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl8{    ///<UDPHS Endpoint Control Register (endpoint = 8)
        using Addr = Register::Address<0xf803020c,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl8Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 8)
        using Addr = Register::Address<0xf803020c,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta8{    ///<UDPHS Endpoint Set Status Register (endpoint = 8)
        using Addr = Register::Address<0xf8030214,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta8Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 8)
        using Addr = Register::Address<0xf8030214,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta8{    ///<UDPHS Endpoint Clear Status Register (endpoint = 8)
        using Addr = Register::Address<0xf8030218,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta8Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 8)
        using Addr = Register::Address<0xf8030218,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta8{    ///<UDPHS Endpoint Status Register (endpoint = 8)
        using Addr = Register::Address<0xf803021c,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta8Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 8)
        using Addr = Register::Address<0xf803021c,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg9{    ///<UDPHS Endpoint Configuration Register (endpoint = 9)
        using Addr = Register::Address<0xf8030220,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb9{    ///<UDPHS Endpoint Control Enable Register (endpoint = 9)
        using Addr = Register::Address<0xf8030224,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb9Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 9)
        using Addr = Register::Address<0xf8030224,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis9{    ///<UDPHS Endpoint Control Disable Register (endpoint = 9)
        using Addr = Register::Address<0xf8030228,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis9Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 9)
        using Addr = Register::Address<0xf8030228,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl9{    ///<UDPHS Endpoint Control Register (endpoint = 9)
        using Addr = Register::Address<0xf803022c,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl9Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 9)
        using Addr = Register::Address<0xf803022c,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta9{    ///<UDPHS Endpoint Set Status Register (endpoint = 9)
        using Addr = Register::Address<0xf8030234,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta9Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 9)
        using Addr = Register::Address<0xf8030234,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta9{    ///<UDPHS Endpoint Clear Status Register (endpoint = 9)
        using Addr = Register::Address<0xf8030238,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta9Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 9)
        using Addr = Register::Address<0xf8030238,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta9{    ///<UDPHS Endpoint Status Register (endpoint = 9)
        using Addr = Register::Address<0xf803023c,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta9Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 9)
        using Addr = Register::Address<0xf803023c,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg10{    ///<UDPHS Endpoint Configuration Register (endpoint = 10)
        using Addr = Register::Address<0xf8030240,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb10{    ///<UDPHS Endpoint Control Enable Register (endpoint = 10)
        using Addr = Register::Address<0xf8030244,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb10Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 10)
        using Addr = Register::Address<0xf8030244,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis10{    ///<UDPHS Endpoint Control Disable Register (endpoint = 10)
        using Addr = Register::Address<0xf8030248,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis10Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 10)
        using Addr = Register::Address<0xf8030248,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl10{    ///<UDPHS Endpoint Control Register (endpoint = 10)
        using Addr = Register::Address<0xf803024c,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl10Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 10)
        using Addr = Register::Address<0xf803024c,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta10{    ///<UDPHS Endpoint Set Status Register (endpoint = 10)
        using Addr = Register::Address<0xf8030254,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta10Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 10)
        using Addr = Register::Address<0xf8030254,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta10{    ///<UDPHS Endpoint Clear Status Register (endpoint = 10)
        using Addr = Register::Address<0xf8030258,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta10Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 10)
        using Addr = Register::Address<0xf8030258,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta10{    ///<UDPHS Endpoint Status Register (endpoint = 10)
        using Addr = Register::Address<0xf803025c,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta10Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 10)
        using Addr = Register::Address<0xf803025c,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg11{    ///<UDPHS Endpoint Configuration Register (endpoint = 11)
        using Addr = Register::Address<0xf8030260,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb11{    ///<UDPHS Endpoint Control Enable Register (endpoint = 11)
        using Addr = Register::Address<0xf8030264,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb11Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 11)
        using Addr = Register::Address<0xf8030264,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis11{    ///<UDPHS Endpoint Control Disable Register (endpoint = 11)
        using Addr = Register::Address<0xf8030268,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis11Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 11)
        using Addr = Register::Address<0xf8030268,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl11{    ///<UDPHS Endpoint Control Register (endpoint = 11)
        using Addr = Register::Address<0xf803026c,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl11Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 11)
        using Addr = Register::Address<0xf803026c,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta11{    ///<UDPHS Endpoint Set Status Register (endpoint = 11)
        using Addr = Register::Address<0xf8030274,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta11Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 11)
        using Addr = Register::Address<0xf8030274,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta11{    ///<UDPHS Endpoint Clear Status Register (endpoint = 11)
        using Addr = Register::Address<0xf8030278,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta11Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 11)
        using Addr = Register::Address<0xf8030278,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta11{    ///<UDPHS Endpoint Status Register (endpoint = 11)
        using Addr = Register::Address<0xf803027c,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta11Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 11)
        using Addr = Register::Address<0xf803027c,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg12{    ///<UDPHS Endpoint Configuration Register (endpoint = 12)
        using Addr = Register::Address<0xf8030280,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb12{    ///<UDPHS Endpoint Control Enable Register (endpoint = 12)
        using Addr = Register::Address<0xf8030284,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb12Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 12)
        using Addr = Register::Address<0xf8030284,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis12{    ///<UDPHS Endpoint Control Disable Register (endpoint = 12)
        using Addr = Register::Address<0xf8030288,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis12Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 12)
        using Addr = Register::Address<0xf8030288,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl12{    ///<UDPHS Endpoint Control Register (endpoint = 12)
        using Addr = Register::Address<0xf803028c,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl12Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 12)
        using Addr = Register::Address<0xf803028c,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta12{    ///<UDPHS Endpoint Set Status Register (endpoint = 12)
        using Addr = Register::Address<0xf8030294,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta12Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 12)
        using Addr = Register::Address<0xf8030294,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta12{    ///<UDPHS Endpoint Clear Status Register (endpoint = 12)
        using Addr = Register::Address<0xf8030298,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta12Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 12)
        using Addr = Register::Address<0xf8030298,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta12{    ///<UDPHS Endpoint Status Register (endpoint = 12)
        using Addr = Register::Address<0xf803029c,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta12Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 12)
        using Addr = Register::Address<0xf803029c,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg13{    ///<UDPHS Endpoint Configuration Register (endpoint = 13)
        using Addr = Register::Address<0xf80302a0,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb13{    ///<UDPHS Endpoint Control Enable Register (endpoint = 13)
        using Addr = Register::Address<0xf80302a4,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb13Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 13)
        using Addr = Register::Address<0xf80302a4,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis13{    ///<UDPHS Endpoint Control Disable Register (endpoint = 13)
        using Addr = Register::Address<0xf80302a8,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis13Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 13)
        using Addr = Register::Address<0xf80302a8,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl13{    ///<UDPHS Endpoint Control Register (endpoint = 13)
        using Addr = Register::Address<0xf80302ac,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl13Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 13)
        using Addr = Register::Address<0xf80302ac,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta13{    ///<UDPHS Endpoint Set Status Register (endpoint = 13)
        using Addr = Register::Address<0xf80302b4,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta13Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 13)
        using Addr = Register::Address<0xf80302b4,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta13{    ///<UDPHS Endpoint Clear Status Register (endpoint = 13)
        using Addr = Register::Address<0xf80302b8,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta13Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 13)
        using Addr = Register::Address<0xf80302b8,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta13{    ///<UDPHS Endpoint Status Register (endpoint = 13)
        using Addr = Register::Address<0xf80302bc,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta13Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 13)
        using Addr = Register::Address<0xf80302bc,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg14{    ///<UDPHS Endpoint Configuration Register (endpoint = 14)
        using Addr = Register::Address<0xf80302c0,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb14{    ///<UDPHS Endpoint Control Enable Register (endpoint = 14)
        using Addr = Register::Address<0xf80302c4,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb14Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 14)
        using Addr = Register::Address<0xf80302c4,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis14{    ///<UDPHS Endpoint Control Disable Register (endpoint = 14)
        using Addr = Register::Address<0xf80302c8,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis14Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 14)
        using Addr = Register::Address<0xf80302c8,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl14{    ///<UDPHS Endpoint Control Register (endpoint = 14)
        using Addr = Register::Address<0xf80302cc,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl14Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 14)
        using Addr = Register::Address<0xf80302cc,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta14{    ///<UDPHS Endpoint Set Status Register (endpoint = 14)
        using Addr = Register::Address<0xf80302d4,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta14Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 14)
        using Addr = Register::Address<0xf80302d4,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta14{    ///<UDPHS Endpoint Clear Status Register (endpoint = 14)
        using Addr = Register::Address<0xf80302d8,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta14Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 14)
        using Addr = Register::Address<0xf80302d8,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta14{    ///<UDPHS Endpoint Status Register (endpoint = 14)
        using Addr = Register::Address<0xf80302dc,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta14Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 14)
        using Addr = Register::Address<0xf80302dc,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg15{    ///<UDPHS Endpoint Configuration Register (endpoint = 15)
        using Addr = Register::Address<0xf80302e0,0x7ffffc00,0x00000000,unsigned>;
        ///Endpoint Size
        enum class EptsizeVal {
            v8=0x00000000,     ///<8 bytes
            v16=0x00000001,     ///<16 bytes
            v32=0x00000002,     ///<32 bytes
            v64=0x00000003,     ///<64 bytes
            v128=0x00000004,     ///<128 bytes
            v256=0x00000005,     ///<256 bytes
            v512=0x00000006,     ///<512 bytes
            v1024=0x00000007,     ///<1024 bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,EptsizeVal> eptSize{}; 
        namespace EptsizeValC{
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v8> v8{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v16> v16{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v32> v32{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v64> v64{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v128> v128{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v256> v256{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v512> v512{};
            constexpr Register::FieldValue<decltype(eptSize)::Type,EptsizeVal::v1024> v1024{};
        }
        ///Endpoint Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eptDir{}; 
        ///Endpoint Type
        enum class EpttypeVal {
            ctrl8=0x00000000,     ///<Control endpoint
            iso=0x00000001,     ///<Isochronous endpoint
            bulk=0x00000002,     ///<Bulk endpoint
            int_=0x00000003,     ///<Interrupt endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EpttypeVal> eptType{}; 
        namespace EpttypeValC{
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::ctrl8> ctrl8{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::iso> iso{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::bulk> bulk{};
            constexpr Register::FieldValue<decltype(eptType)::Type,EpttypeVal::int_> int_{};
        }
        ///Number of Banks
        enum class BknumberVal {
            v0=0x00000000,     ///<Zero bank, the endpoint is not mapped in memory
            v1=0x00000001,     ///<One bank (bank 0)
            v2=0x00000002,     ///<Double bank (Ping-Pong: bank0/bank1)
            v3=0x00000003,     ///<Triple bank (bank0/bank1/bank2)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,BknumberVal> bkNumber{}; 
        namespace BknumberValC{
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v1> v1{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v2> v2{};
            constexpr Register::FieldValue<decltype(bkNumber)::Type,BknumberVal::v3> v3{};
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb15{    ///<UDPHS Endpoint Control Enable Register (endpoint = 15)
        using Addr = Register::Address<0xf80302e4,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb15Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 15)
        using Addr = Register::Address<0xf80302e4,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis15{    ///<UDPHS Endpoint Control Disable Register (endpoint = 15)
        using Addr = Register::Address<0xf80302e8,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis15Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 15)
        using Addr = Register::Address<0xf80302e8,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl15{    ///<UDPHS Endpoint Control Register (endpoint = 15)
        using Addr = Register::Address<0xf80302ec,0x7ffb00e4,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl15Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 15)
        using Addr = Register::Address<0xf80302ec,0x7ffb8034,0x00000000,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta15{    ///<UDPHS Endpoint Set Status Register (endpoint = 15)
        using Addr = Register::Address<0xf80302f4,0xfffff5df,0x00000000,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta15Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 15)
        using Addr = Register::Address<0xf80302f4,0xfffff5ff,0x00000000,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta15{    ///<UDPHS Endpoint Clear Status Register (endpoint = 15)
        using Addr = Register::Address<0xf80302f8,0xffff099f,0x00000000,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta15Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 15)
        using Addr = Register::Address<0xf80302f8,0xffff89bf,0x00000000,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta15{    ///<UDPHS Endpoint Status Register (endpoint = 15)
        using Addr = Register::Address<0xf80302fc,0x0000001f,0x00000000,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta15Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 15)
        using Addr = Register::Address<0xf80302fc,0x0000803f,0x00000000,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> shrtPckt{}; 
    }
    namespace UdphsDmanxtdsc0{    ///<UDPHS DMA Next Descriptor Address Register (channel = 0)
        using Addr = Register::Address<0xf8030300,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UdphsDmaaddress0{    ///<UDPHS DMA Channel Address Register (channel = 0)
        using Addr = Register::Address<0xf8030304,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UdphsDmacontrol0{    ///<UDPHS DMA Channel Control Register (channel = 0)
        using Addr = Register::Address<0xf8030308,0x0000ff00,0x00000000,unsigned>;
        ///(Channel Enable Command)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable (Command)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UdphsDmastatus0{    ///<UDPHS DMA Channel Status Register (channel = 0)
        using Addr = Register::Address<0xf803030c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UdphsDmanxtdsc1{    ///<UDPHS DMA Next Descriptor Address Register (channel = 1)
        using Addr = Register::Address<0xf8030310,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UdphsDmaaddress1{    ///<UDPHS DMA Channel Address Register (channel = 1)
        using Addr = Register::Address<0xf8030314,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UdphsDmacontrol1{    ///<UDPHS DMA Channel Control Register (channel = 1)
        using Addr = Register::Address<0xf8030318,0x0000ff00,0x00000000,unsigned>;
        ///(Channel Enable Command)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable (Command)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UdphsDmastatus1{    ///<UDPHS DMA Channel Status Register (channel = 1)
        using Addr = Register::Address<0xf803031c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UdphsDmanxtdsc2{    ///<UDPHS DMA Next Descriptor Address Register (channel = 2)
        using Addr = Register::Address<0xf8030320,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UdphsDmaaddress2{    ///<UDPHS DMA Channel Address Register (channel = 2)
        using Addr = Register::Address<0xf8030324,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UdphsDmacontrol2{    ///<UDPHS DMA Channel Control Register (channel = 2)
        using Addr = Register::Address<0xf8030328,0x0000ff00,0x00000000,unsigned>;
        ///(Channel Enable Command)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable (Command)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UdphsDmastatus2{    ///<UDPHS DMA Channel Status Register (channel = 2)
        using Addr = Register::Address<0xf803032c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UdphsDmanxtdsc3{    ///<UDPHS DMA Next Descriptor Address Register (channel = 3)
        using Addr = Register::Address<0xf8030330,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UdphsDmaaddress3{    ///<UDPHS DMA Channel Address Register (channel = 3)
        using Addr = Register::Address<0xf8030334,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UdphsDmacontrol3{    ///<UDPHS DMA Channel Control Register (channel = 3)
        using Addr = Register::Address<0xf8030338,0x0000ff00,0x00000000,unsigned>;
        ///(Channel Enable Command)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable (Command)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UdphsDmastatus3{    ///<UDPHS DMA Channel Status Register (channel = 3)
        using Addr = Register::Address<0xf803033c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UdphsDmanxtdsc4{    ///<UDPHS DMA Next Descriptor Address Register (channel = 4)
        using Addr = Register::Address<0xf8030340,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UdphsDmaaddress4{    ///<UDPHS DMA Channel Address Register (channel = 4)
        using Addr = Register::Address<0xf8030344,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UdphsDmacontrol4{    ///<UDPHS DMA Channel Control Register (channel = 4)
        using Addr = Register::Address<0xf8030348,0x0000ff00,0x00000000,unsigned>;
        ///(Channel Enable Command)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable (Command)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UdphsDmastatus4{    ///<UDPHS DMA Channel Status Register (channel = 4)
        using Addr = Register::Address<0xf803034c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UdphsDmanxtdsc5{    ///<UDPHS DMA Next Descriptor Address Register (channel = 5)
        using Addr = Register::Address<0xf8030350,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UdphsDmaaddress5{    ///<UDPHS DMA Channel Address Register (channel = 5)
        using Addr = Register::Address<0xf8030354,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UdphsDmacontrol5{    ///<UDPHS DMA Channel Control Register (channel = 5)
        using Addr = Register::Address<0xf8030358,0x0000ff00,0x00000000,unsigned>;
        ///(Channel Enable Command)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable (Command)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UdphsDmastatus5{    ///<UDPHS DMA Channel Status Register (channel = 5)
        using Addr = Register::Address<0xf803035c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
    namespace UdphsDmanxtdsc6{    ///<UDPHS DMA Next Descriptor Address Register (channel = 6)
        using Addr = Register::Address<0xf8030360,0x00000000,0x00000000,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UdphsDmaaddress6{    ///<UDPHS DMA Channel Address Register (channel = 6)
        using Addr = Register::Address<0xf8030364,0x00000000,0x00000000,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UdphsDmacontrol6{    ///<UDPHS DMA Channel Control Register (channel = 6)
        using Addr = Register::Address<0xf8030368,0x0000ff00,0x00000000,unsigned>;
        ///(Channel Enable Command)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Load Next Channel Transfer Descriptor Enable (Command)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ldnxtDsc{}; 
        ///End of Transfer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endTrEn{}; 
        ///End of Buffer Enable (Control)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> endBEn{}; 
        ///End of Transfer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrIt{}; 
        ///End of Buffer Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBuffit{}; 
        ///Descriptor Loaded Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdIt{}; 
        ///Burst Lock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> burstLck{}; 
        ///Buffer Byte Length (Write-only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffLength{}; 
    }
    namespace UdphsDmastatus6{    ///<UDPHS DMA Channel Status Register (channel = 6)
        using Addr = Register::Address<0xf803036c,0x0000ff8c,0x00000000,unsigned>;
        ///Channel Enable Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> channEnb{}; 
        ///Channel Active Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> channAct{}; 
        ///End of Channel Transfer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endTrSt{}; 
        ///End of Channel Buffer Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> endBfSt{}; 
        ///Descriptor Loaded Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> descLdst{}; 
        ///Buffer Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> buffCount{}; 
    }
}
