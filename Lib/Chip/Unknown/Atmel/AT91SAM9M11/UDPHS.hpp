#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB High Speed Device Port
    namespace UdphsCtrl{    ///<UDPHS Control Register
        using Addr = Register::Address<0xfff78000,0xfffff000,0,unsigned>;
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
        using Addr = Register::Address<0xfff78004,0x7fffc000,0,unsigned>;
        ///Microframe Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> microFrameNum{}; 
        ///Frame Number as defined in the Packet Field Formats
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,3),Register::ReadWriteAccess,unsigned> frameNumber{}; 
        ///Frame Number CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> fnumErr{}; 
    }
    namespace UdphsIen{    ///<UDPHS Interrupt Enable Register
        using Addr = Register::Address<0xfff78010,0x81ff8001,0,unsigned>;
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
    }
    namespace UdphsIntsta{    ///<UDPHS Interrupt Status Register
        using Addr = Register::Address<0xfff78014,0x81ff8000,0,unsigned>;
        ///Speed Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> speed{}; 
        ///Suspend Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> detSuspd{}; 
        ///Micro Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> microSof{}; 
        ///Start Of Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intSof{}; 
        ///End Of Reset Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endreset{}; 
        ///Wake Up CPU Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wakeUp{}; 
        ///End Of Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endofrsm{}; 
        ///Upstream Resume Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upstrRes{}; 
        ///Endpoint 0 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ept0{}; 
        ///Endpoint 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ept1{}; 
        ///Endpoint 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ept2{}; 
        ///Endpoint 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ept3{}; 
        ///Endpoint 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ept4{}; 
        ///Endpoint 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ept5{}; 
        ///Endpoint 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ept6{}; 
        ///DMA Channel 1 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> dma1{}; 
        ///DMA Channel 2 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> dma2{}; 
        ///DMA Channel 3 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> dma3{}; 
        ///DMA Channel 4 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dma4{}; 
        ///DMA Channel 5 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dma5{}; 
        ///DMA Channel 6 Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dma6{}; 
    }
    namespace UdphsClrint{    ///<UDPHS Clear Interrupt Register
        using Addr = Register::Address<0xfff78018,0xffffff01,0,unsigned>;
        ///Suspend Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> detSuspd{}; 
        ///Micro Start Of Frame Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> microSof{}; 
        ///Start Of Frame Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intSof{}; 
        ///End Of Reset Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> endreset{}; 
        ///Wake Up CPU Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wakeUp{}; 
        ///End Of Resume Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endofrsm{}; 
        ///Upstream Resume Interrupt Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upstrRes{}; 
    }
    namespace UdphsEptrst{    ///<UDPHS Endpoints Reset Register
        using Addr = Register::Address<0xfff7801c,0xffffff80,0,unsigned>;
        ///Endpoint 0 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ept0{}; 
        ///Endpoint 1 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ept1{}; 
        ///Endpoint 2 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ept2{}; 
        ///Endpoint 3 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ept3{}; 
        ///Endpoint 4 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ept4{}; 
        ///Endpoint 5 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ept5{}; 
        ///Endpoint 6 Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ept6{}; 
    }
    namespace UdphsTst{    ///<UDPHS Test Register
        using Addr = Register::Address<0xfff780e0,0xffffffc0,0,unsigned>;
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
        using Addr = Register::Address<0xfff78100,0x7ffffc00,0,unsigned>;
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
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb0{    ///<UDPHS Endpoint Control Enable Register (endpoint = 0)
        using Addr = Register::Address<0xfff78104,0x7ffb00e4,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb0Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 0)
        using Addr = Register::Address<0xfff78104,0x7ffb8034,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis0{    ///<UDPHS Endpoint Control Disable Register (endpoint = 0)
        using Addr = Register::Address<0xfff78108,0x7ffb00e4,0,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis0Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 0)
        using Addr = Register::Address<0xfff78108,0x7ffb8034,0,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl0{    ///<UDPHS Endpoint Control Register (endpoint = 0)
        using Addr = Register::Address<0xfff7810c,0x7ffb00e4,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl0Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 0)
        using Addr = Register::Address<0xfff7810c,0x7ffb8034,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta0{    ///<UDPHS Endpoint Set Status Register (endpoint = 0)
        using Addr = Register::Address<0xfff78114,0xfffff5df,0,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta0Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 0)
        using Addr = Register::Address<0xfff78114,0xfffff5ff,0,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta0{    ///<UDPHS Endpoint Clear Status Register (endpoint = 0)
        using Addr = Register::Address<0xfff78118,0xffff099f,0,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta0Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 0)
        using Addr = Register::Address<0xfff78118,0xffff89bf,0,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta0{    ///<UDPHS Endpoint Status Register (endpoint = 0)
        using Addr = Register::Address<0xfff7811c,0x0000001f,0,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta0Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 0)
        using Addr = Register::Address<0xfff7811c,0x0000803f,0,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg1{    ///<UDPHS Endpoint Configuration Register (endpoint = 1)
        using Addr = Register::Address<0xfff78120,0x7ffffc00,0,unsigned>;
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
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb1{    ///<UDPHS Endpoint Control Enable Register (endpoint = 1)
        using Addr = Register::Address<0xfff78124,0x7ffb00e4,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb1Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 1)
        using Addr = Register::Address<0xfff78124,0x7ffb8034,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis1{    ///<UDPHS Endpoint Control Disable Register (endpoint = 1)
        using Addr = Register::Address<0xfff78128,0x7ffb00e4,0,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis1Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 1)
        using Addr = Register::Address<0xfff78128,0x7ffb8034,0,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl1{    ///<UDPHS Endpoint Control Register (endpoint = 1)
        using Addr = Register::Address<0xfff7812c,0x7ffb00e4,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl1Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 1)
        using Addr = Register::Address<0xfff7812c,0x7ffb8034,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta1{    ///<UDPHS Endpoint Set Status Register (endpoint = 1)
        using Addr = Register::Address<0xfff78134,0xfffff5df,0,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta1Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 1)
        using Addr = Register::Address<0xfff78134,0xfffff5ff,0,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta1{    ///<UDPHS Endpoint Clear Status Register (endpoint = 1)
        using Addr = Register::Address<0xfff78138,0xffff099f,0,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta1Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 1)
        using Addr = Register::Address<0xfff78138,0xffff89bf,0,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta1{    ///<UDPHS Endpoint Status Register (endpoint = 1)
        using Addr = Register::Address<0xfff7813c,0x0000001f,0,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta1Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 1)
        using Addr = Register::Address<0xfff7813c,0x0000803f,0,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg2{    ///<UDPHS Endpoint Configuration Register (endpoint = 2)
        using Addr = Register::Address<0xfff78140,0x7ffffc00,0,unsigned>;
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
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb2{    ///<UDPHS Endpoint Control Enable Register (endpoint = 2)
        using Addr = Register::Address<0xfff78144,0x7ffb00e4,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb2Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 2)
        using Addr = Register::Address<0xfff78144,0x7ffb8034,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis2{    ///<UDPHS Endpoint Control Disable Register (endpoint = 2)
        using Addr = Register::Address<0xfff78148,0x7ffb00e4,0,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis2Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 2)
        using Addr = Register::Address<0xfff78148,0x7ffb8034,0,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl2{    ///<UDPHS Endpoint Control Register (endpoint = 2)
        using Addr = Register::Address<0xfff7814c,0x7ffb00e4,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl2Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 2)
        using Addr = Register::Address<0xfff7814c,0x7ffb8034,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta2{    ///<UDPHS Endpoint Set Status Register (endpoint = 2)
        using Addr = Register::Address<0xfff78154,0xfffff5df,0,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta2Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 2)
        using Addr = Register::Address<0xfff78154,0xfffff5ff,0,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta2{    ///<UDPHS Endpoint Clear Status Register (endpoint = 2)
        using Addr = Register::Address<0xfff78158,0xffff099f,0,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta2Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 2)
        using Addr = Register::Address<0xfff78158,0xffff89bf,0,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta2{    ///<UDPHS Endpoint Status Register (endpoint = 2)
        using Addr = Register::Address<0xfff7815c,0x0000001f,0,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta2Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 2)
        using Addr = Register::Address<0xfff7815c,0x0000803f,0,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg3{    ///<UDPHS Endpoint Configuration Register (endpoint = 3)
        using Addr = Register::Address<0xfff78160,0x7ffffc00,0,unsigned>;
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
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb3{    ///<UDPHS Endpoint Control Enable Register (endpoint = 3)
        using Addr = Register::Address<0xfff78164,0x7ffb00e4,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb3Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 3)
        using Addr = Register::Address<0xfff78164,0x7ffb8034,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis3{    ///<UDPHS Endpoint Control Disable Register (endpoint = 3)
        using Addr = Register::Address<0xfff78168,0x7ffb00e4,0,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis3Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 3)
        using Addr = Register::Address<0xfff78168,0x7ffb8034,0,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl3{    ///<UDPHS Endpoint Control Register (endpoint = 3)
        using Addr = Register::Address<0xfff7816c,0x7ffb00e4,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl3Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 3)
        using Addr = Register::Address<0xfff7816c,0x7ffb8034,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta3{    ///<UDPHS Endpoint Set Status Register (endpoint = 3)
        using Addr = Register::Address<0xfff78174,0xfffff5df,0,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta3Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 3)
        using Addr = Register::Address<0xfff78174,0xfffff5ff,0,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta3{    ///<UDPHS Endpoint Clear Status Register (endpoint = 3)
        using Addr = Register::Address<0xfff78178,0xffff099f,0,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta3Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 3)
        using Addr = Register::Address<0xfff78178,0xffff89bf,0,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta3{    ///<UDPHS Endpoint Status Register (endpoint = 3)
        using Addr = Register::Address<0xfff7817c,0x0000001f,0,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta3Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 3)
        using Addr = Register::Address<0xfff7817c,0x0000803f,0,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg4{    ///<UDPHS Endpoint Configuration Register (endpoint = 4)
        using Addr = Register::Address<0xfff78180,0x7ffffc00,0,unsigned>;
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
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb4{    ///<UDPHS Endpoint Control Enable Register (endpoint = 4)
        using Addr = Register::Address<0xfff78184,0x7ffb00e4,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb4Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 4)
        using Addr = Register::Address<0xfff78184,0x7ffb8034,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis4{    ///<UDPHS Endpoint Control Disable Register (endpoint = 4)
        using Addr = Register::Address<0xfff78188,0x7ffb00e4,0,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis4Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 4)
        using Addr = Register::Address<0xfff78188,0x7ffb8034,0,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl4{    ///<UDPHS Endpoint Control Register (endpoint = 4)
        using Addr = Register::Address<0xfff7818c,0x7ffb00e4,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl4Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 4)
        using Addr = Register::Address<0xfff7818c,0x7ffb8034,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta4{    ///<UDPHS Endpoint Set Status Register (endpoint = 4)
        using Addr = Register::Address<0xfff78194,0xfffff5df,0,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta4Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 4)
        using Addr = Register::Address<0xfff78194,0xfffff5ff,0,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta4{    ///<UDPHS Endpoint Clear Status Register (endpoint = 4)
        using Addr = Register::Address<0xfff78198,0xffff099f,0,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta4Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 4)
        using Addr = Register::Address<0xfff78198,0xffff89bf,0,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta4{    ///<UDPHS Endpoint Status Register (endpoint = 4)
        using Addr = Register::Address<0xfff7819c,0x0000001f,0,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta4Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 4)
        using Addr = Register::Address<0xfff7819c,0x0000803f,0,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg5{    ///<UDPHS Endpoint Configuration Register (endpoint = 5)
        using Addr = Register::Address<0xfff781a0,0x7ffffc00,0,unsigned>;
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
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb5{    ///<UDPHS Endpoint Control Enable Register (endpoint = 5)
        using Addr = Register::Address<0xfff781a4,0x7ffb00e4,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb5Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 5)
        using Addr = Register::Address<0xfff781a4,0x7ffb8034,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis5{    ///<UDPHS Endpoint Control Disable Register (endpoint = 5)
        using Addr = Register::Address<0xfff781a8,0x7ffb00e4,0,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis5Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 5)
        using Addr = Register::Address<0xfff781a8,0x7ffb8034,0,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl5{    ///<UDPHS Endpoint Control Register (endpoint = 5)
        using Addr = Register::Address<0xfff781ac,0x7ffb00e4,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl5Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 5)
        using Addr = Register::Address<0xfff781ac,0x7ffb8034,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta5{    ///<UDPHS Endpoint Set Status Register (endpoint = 5)
        using Addr = Register::Address<0xfff781b4,0xfffff5df,0,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta5Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 5)
        using Addr = Register::Address<0xfff781b4,0xfffff5ff,0,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta5{    ///<UDPHS Endpoint Clear Status Register (endpoint = 5)
        using Addr = Register::Address<0xfff781b8,0xffff099f,0,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta5Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 5)
        using Addr = Register::Address<0xfff781b8,0xffff89bf,0,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta5{    ///<UDPHS Endpoint Status Register (endpoint = 5)
        using Addr = Register::Address<0xfff781bc,0x0000001f,0,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta5Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 5)
        using Addr = Register::Address<0xfff781bc,0x0000803f,0,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptcfg6{    ///<UDPHS Endpoint Configuration Register (endpoint = 6)
        using Addr = Register::Address<0xfff781c0,0x7ffffc00,0,unsigned>;
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
        }
        ///Number Of Transaction per Microframe
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> nbTrans{}; 
        ///Endpoint Mapped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eptMapd{}; 
    }
    namespace UdphsEptctlenb6{    ///<UDPHS Endpoint Control Enable Register (endpoint = 6)
        using Addr = Register::Address<0xfff781c4,0x7ffb00e4,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctlenb6Isoendpt{    ///<UDPHS Endpoint Control Enable Register (endpoint = 6)
        using Addr = Register::Address<0xfff781c4,0x7ffb8034,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enable (Only for high bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Send/Short Packet Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis6{    ///<UDPHS Endpoint Control Disable Register (endpoint = 6)
        using Addr = Register::Address<0xfff781c8,0x7ffb00e4,0,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Enable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctldis6Isoendpt{    ///<UDPHS Endpoint Control Disable Register (endpoint = 6)
        using Addr = Register::Address<0xfff781c8,0x7ffb8034,0,unsigned>;
        ///Endpoint Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptDisabl{}; 
        ///Packet Auto-Valid Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupts Disable DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Disable (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///bank flush error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl6{    ///<UDPHS Endpoint Control Register (endpoint = 6)
        using Addr = Register::Address<0xfff781cc,0x7ffb00e4,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled (Not for CONTROL Endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///NYET Disable (Only for High Speed Bulk OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nyetDis{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptctl6Isoendpt{    ///<UDPHS Endpoint Control Register (endpoint = 6)
        using Addr = Register::Address<0xfff781cc,0x7ffb8034,0,unsigned>;
        ///Endpoint Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eptEnabl{}; 
        ///Packet Auto-Valid Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autoValid{}; 
        ///Interrupt Disables DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intdisDma{}; 
        ///DATAx Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> dataxRx{}; 
        ///MDATA Interrupt Enabled (Only for High Bandwidth Isochronous OUT endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mdataRx{}; 
        ///Overflow Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///ISO CRC Error/Number of Transaction Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Busy Bank Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> busyBank{}; 
        ///Short Packet Interrupt Enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsetsta6{    ///<UDPHS Endpoint Set Status Register (endpoint = 6)
        using Addr = Register::Address<0xfff781d4,0xfffff5df,0,unsigned>;
        ///Stall Handshake Request Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
    }
    namespace UdphsEptsetsta6Isoendpt{    ///<UDPHS Endpoint Set Status Register (endpoint = 6)
        using Addr = Register::Address<0xfff781d4,0xfffff5ff,0,unsigned>;
        ///KILL Bank Set (for IN Endpoint)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///TX Packet Ready Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
    }
    namespace UdphsEptclrsta6{    ///<UDPHS Endpoint Clear Status Register (endpoint = 6)
        using Addr = Register::Address<0xfff781d8,0xffff099f,0,unsigned>;
        ///Stall Handshake Request Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///Received SETUP Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAKIN Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAKOUT Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
    }
    namespace UdphsEptclrsta6Isoendpt{    ///<UDPHS Endpoint Clear Status Register (endpoint = 6)
        using Addr = Register::Address<0xfff781d8,0xffff89bf,0,unsigned>;
        ///Data Toggle Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> togglesq{}; 
        ///Received OUT Data Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///Error Flow Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///Number of Transaction Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
    }
    namespace UdphsEptsta6{    ///<UDPHS Endpoint Status Register (endpoint = 6)
        using Addr = Register::Address<0xfff781dc,0x0000001f,0,unsigned>;
        ///Stall Handshake Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> frcestall{}; 
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Reserved for High Bandwidth Isochronous Endpoint
            mdata=0x00000003,     ///<Reserved for High Bandwidth Isochronous Endpoint
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Received SETUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rxSetup{}; 
        ///Stall Sent
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> stallSnt{}; 
        ///NAK IN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nakIn{}; 
        ///NAK OUT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> nakOut{}; 
        ///Current Bank/Control Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> curbkCtldir{}; 
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsEptsta6Isoendpt{    ///<UDPHS Endpoint Status Register (endpoint = 6)
        using Addr = Register::Address<0xfff781dc,0x0000803f,0,unsigned>;
        ///Toggle Sequencing
        enum class TogglesqstaVal {
            data0=0x00000000,     ///<DATA0
            data1=0x00000001,     ///<DATA1
            data2=0x00000002,     ///<Data2 (only for High Bandwidth Isochronous Endpoint)
            mdata=0x00000003,     ///<MData (only for High Bandwidth Isochronous Endpoint)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,TogglesqstaVal> togglesqSta{}; 
        namespace TogglesqstaValC{
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data0> data0{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data1> data1{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::data2> data2{};
            constexpr Register::FieldValue<decltype(togglesqSta)::Type,TogglesqstaVal::mdata> mdata{};
        }
        }
        ///Overflow Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> errOvflw{}; 
        ///Received OUT Data/KILL Bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxrdyTxkl{}; 
        ///Transmitted IN Data Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txComplt{}; 
        ///TX Packet Ready/Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrdyTrer{}; 
        ///Error Flow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> errFlIso{}; 
        ///CRC ISO Error/Number of Transaction Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> errCrcNtr{}; 
        ///Bank Flush Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> errFlush{}; 
        ///Current Bank
        enum class CurbkVal {
            bank0=0x00000000,     ///<Bank 0 (or single bank)
            bank1=0x00000001,     ///<Bank 1
            bank2=0x00000002,     ///<Bank 2
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,CurbkVal> curbk{}; 
        namespace CurbkValC{
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank0> bank0{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank1> bank1{};
            constexpr Register::FieldValue<decltype(curbk)::Type,CurbkVal::bank2> bank2{};
        }
        }
        ///Busy Bank Number
        enum class BusybankstaVal {
            v1busybank=0x00000000,     ///<1 busy bank
            v2busybanks=0x00000001,     ///<2 busy banks
            v3busybanks=0x00000002,     ///<3 busy banks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,BusybankstaVal> busyBankSta{}; 
        namespace BusybankstaValC{
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v1busybank> v1busybank{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v2busybanks> v2busybanks{};
            constexpr Register::FieldValue<decltype(busyBankSta)::Type,BusybankstaVal::v3busybanks> v3busybanks{};
        }
        }
        ///UDPHS Byte Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,20),Register::ReadWriteAccess,unsigned> byteCount{}; 
        ///Short Packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> shrtPckt{}; 
    }
    namespace UdphsDmanxtdsc0{    ///<UDPHS DMA Next Descriptor Address Register (channel = 0)
        using Addr = Register::Address<0xfff78300,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UdphsDmaaddress0{    ///<UDPHS DMA Channel Address Register (channel = 0)
        using Addr = Register::Address<0xfff78304,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UdphsDmacontrol0{    ///<UDPHS DMA Channel Control Register (channel = 0)
        using Addr = Register::Address<0xfff78308,0x0000ff00,0,unsigned>;
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
        using Addr = Register::Address<0xfff7830c,0x0000ff8c,0,unsigned>;
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
        using Addr = Register::Address<0xfff78310,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UdphsDmaaddress1{    ///<UDPHS DMA Channel Address Register (channel = 1)
        using Addr = Register::Address<0xfff78314,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UdphsDmacontrol1{    ///<UDPHS DMA Channel Control Register (channel = 1)
        using Addr = Register::Address<0xfff78318,0x0000ff00,0,unsigned>;
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
        using Addr = Register::Address<0xfff7831c,0x0000ff8c,0,unsigned>;
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
        using Addr = Register::Address<0xfff78320,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UdphsDmaaddress2{    ///<UDPHS DMA Channel Address Register (channel = 2)
        using Addr = Register::Address<0xfff78324,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UdphsDmacontrol2{    ///<UDPHS DMA Channel Control Register (channel = 2)
        using Addr = Register::Address<0xfff78328,0x0000ff00,0,unsigned>;
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
        using Addr = Register::Address<0xfff7832c,0x0000ff8c,0,unsigned>;
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
        using Addr = Register::Address<0xfff78330,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UdphsDmaaddress3{    ///<UDPHS DMA Channel Address Register (channel = 3)
        using Addr = Register::Address<0xfff78334,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UdphsDmacontrol3{    ///<UDPHS DMA Channel Control Register (channel = 3)
        using Addr = Register::Address<0xfff78338,0x0000ff00,0,unsigned>;
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
        using Addr = Register::Address<0xfff7833c,0x0000ff8c,0,unsigned>;
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
        using Addr = Register::Address<0xfff78340,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UdphsDmaaddress4{    ///<UDPHS DMA Channel Address Register (channel = 4)
        using Addr = Register::Address<0xfff78344,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UdphsDmacontrol4{    ///<UDPHS DMA Channel Control Register (channel = 4)
        using Addr = Register::Address<0xfff78348,0x0000ff00,0,unsigned>;
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
        using Addr = Register::Address<0xfff7834c,0x0000ff8c,0,unsigned>;
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
        using Addr = Register::Address<0xfff78350,0x00000000,0,unsigned>;
        ///Next Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> nxtDscAdd{}; 
    }
    namespace UdphsDmaaddress5{    ///<UDPHS DMA Channel Address Register (channel = 5)
        using Addr = Register::Address<0xfff78354,0x00000000,0,unsigned>;
        ///Buffer Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> buffAdd{}; 
    }
    namespace UdphsDmacontrol5{    ///<UDPHS DMA Channel Control Register (channel = 5)
        using Addr = Register::Address<0xfff78358,0x0000ff00,0,unsigned>;
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
        using Addr = Register::Address<0xfff7835c,0x0000ff8c,0,unsigned>;
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
