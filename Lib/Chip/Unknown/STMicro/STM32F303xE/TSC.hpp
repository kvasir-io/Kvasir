#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Touch sensing controller
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40024000,0x00000f00,0,unsigned>;
        ///Charge transfer pulse high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ctph{}; 
        namespace CtphValC{
        }
        ///Charge transfer pulse low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> ctpl{}; 
        namespace CtplValC{
        }
        ///Spread spectrum deviation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::ReadWriteAccess,unsigned> ssd{}; 
        namespace SsdValC{
        }
        ///Spread spectrum enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sse{}; 
        namespace SseValC{
        }
        ///Spread spectrum prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sspsc{}; 
        namespace SspscValC{
        }
        ///pulse generator prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> pgpsc{}; 
        namespace PgpscValC{
        }
        ///Max count value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> mcv{}; 
        namespace McvValC{
        }
        ///I/O Default mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iodef{}; 
        namespace IodefValC{
        }
        ///Synchronization pin               polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncpol{}; 
        namespace SyncpolValC{
        }
        ///Acquisition mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> am{}; 
        namespace AmValC{
        }
        ///Start a new acquisition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///Touch sensing controller               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tsce{}; 
        namespace TsceValC{
        }
    }
    namespace Noneier{    ///<interrupt enable register
        using Addr = Register::Address<0x40024004,0xfffffffc,0,unsigned>;
        ///Max count error interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mceie{}; 
        namespace MceieValC{
        }
        ///End of acquisition interrupt               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoaie{}; 
        namespace EoaieValC{
        }
    }
    namespace Noneicr{    ///<interrupt clear register
        using Addr = Register::Address<0x40024008,0xfffffffc,0,unsigned>;
        ///Max count error interrupt               clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mceic{}; 
        namespace MceicValC{
        }
        ///End of acquisition interrupt               clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoaic{}; 
        namespace EoaicValC{
        }
    }
    namespace Noneisr{    ///<interrupt status register
        using Addr = Register::Address<0x4002400c,0xfffffffc,0,unsigned>;
        ///Max count error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mcef{}; 
        namespace McefValC{
        }
        ///End of acquisition flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoaf{}; 
        namespace EoafValC{
        }
    }
    namespace Noneiohcr{    ///<I/O hysteresis control           register
        using Addr = Register::Address<0x40024010,0x00000000,0,unsigned>;
        ///G1_IO1 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> g1Io1{}; 
        namespace G1io1ValC{
        }
        ///G1_IO2 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> g1Io2{}; 
        namespace G1io2ValC{
        }
        ///G1_IO3 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> g1Io3{}; 
        namespace G1io3ValC{
        }
        ///G1_IO4 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> g1Io4{}; 
        namespace G1io4ValC{
        }
        ///G2_IO1 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> g2Io1{}; 
        namespace G2io1ValC{
        }
        ///G2_IO2 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> g2Io2{}; 
        namespace G2io2ValC{
        }
        ///G2_IO3 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> g2Io3{}; 
        namespace G2io3ValC{
        }
        ///G2_IO4 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> g2Io4{}; 
        namespace G2io4ValC{
        }
        ///G3_IO1 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> g3Io1{}; 
        namespace G3io1ValC{
        }
        ///G3_IO2 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> g3Io2{}; 
        namespace G3io2ValC{
        }
        ///G3_IO3 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> g3Io3{}; 
        namespace G3io3ValC{
        }
        ///G3_IO4 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> g3Io4{}; 
        namespace G3io4ValC{
        }
        ///G4_IO1 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> g4Io1{}; 
        namespace G4io1ValC{
        }
        ///G4_IO2 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> g4Io2{}; 
        namespace G4io2ValC{
        }
        ///G4_IO3 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> g4Io3{}; 
        namespace G4io3ValC{
        }
        ///G4_IO4 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> g4Io4{}; 
        namespace G4io4ValC{
        }
        ///G5_IO1 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> g5Io1{}; 
        namespace G5io1ValC{
        }
        ///G5_IO2 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> g5Io2{}; 
        namespace G5io2ValC{
        }
        ///G5_IO3 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> g5Io3{}; 
        namespace G5io3ValC{
        }
        ///G5_IO4 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> g5Io4{}; 
        namespace G5io4ValC{
        }
        ///G6_IO1 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> g6Io1{}; 
        namespace G6io1ValC{
        }
        ///G6_IO2 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> g6Io2{}; 
        namespace G6io2ValC{
        }
        ///G6_IO3 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> g6Io3{}; 
        namespace G6io3ValC{
        }
        ///G6_IO4 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> g6Io4{}; 
        namespace G6io4ValC{
        }
        ///G7_IO1 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> g7Io1{}; 
        namespace G7io1ValC{
        }
        ///G7_IO2 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> g7Io2{}; 
        namespace G7io2ValC{
        }
        ///G7_IO3 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> g7Io3{}; 
        namespace G7io3ValC{
        }
        ///G7_IO4 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> g7Io4{}; 
        namespace G7io4ValC{
        }
        ///G8_IO1 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> g8Io1{}; 
        namespace G8io1ValC{
        }
        ///G8_IO2 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> g8Io2{}; 
        namespace G8io2ValC{
        }
        ///G8_IO3 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> g8Io3{}; 
        namespace G8io3ValC{
        }
        ///G8_IO4 Schmitt trigger hysteresis               mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> g8Io4{}; 
        namespace G8io4ValC{
        }
    }
    namespace Noneioascr{    ///<I/O analog switch control           register
        using Addr = Register::Address<0x40024018,0x00000000,0,unsigned>;
        ///G1_IO1 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> g1Io1{}; 
        namespace G1io1ValC{
        }
        ///G1_IO2 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> g1Io2{}; 
        namespace G1io2ValC{
        }
        ///G1_IO3 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> g1Io3{}; 
        namespace G1io3ValC{
        }
        ///G1_IO4 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> g1Io4{}; 
        namespace G1io4ValC{
        }
        ///G2_IO1 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> g2Io1{}; 
        namespace G2io1ValC{
        }
        ///G2_IO2 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> g2Io2{}; 
        namespace G2io2ValC{
        }
        ///G2_IO3 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> g2Io3{}; 
        namespace G2io3ValC{
        }
        ///G2_IO4 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> g2Io4{}; 
        namespace G2io4ValC{
        }
        ///G3_IO1 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> g3Io1{}; 
        namespace G3io1ValC{
        }
        ///G3_IO2 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> g3Io2{}; 
        namespace G3io2ValC{
        }
        ///G3_IO3 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> g3Io3{}; 
        namespace G3io3ValC{
        }
        ///G3_IO4 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> g3Io4{}; 
        namespace G3io4ValC{
        }
        ///G4_IO1 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> g4Io1{}; 
        namespace G4io1ValC{
        }
        ///G4_IO2 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> g4Io2{}; 
        namespace G4io2ValC{
        }
        ///G4_IO3 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> g4Io3{}; 
        namespace G4io3ValC{
        }
        ///G4_IO4 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> g4Io4{}; 
        namespace G4io4ValC{
        }
        ///G5_IO1 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> g5Io1{}; 
        namespace G5io1ValC{
        }
        ///G5_IO2 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> g5Io2{}; 
        namespace G5io2ValC{
        }
        ///G5_IO3 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> g5Io3{}; 
        namespace G5io3ValC{
        }
        ///G5_IO4 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> g5Io4{}; 
        namespace G5io4ValC{
        }
        ///G6_IO1 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> g6Io1{}; 
        namespace G6io1ValC{
        }
        ///G6_IO2 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> g6Io2{}; 
        namespace G6io2ValC{
        }
        ///G6_IO3 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> g6Io3{}; 
        namespace G6io3ValC{
        }
        ///G6_IO4 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> g6Io4{}; 
        namespace G6io4ValC{
        }
        ///G7_IO1 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> g7Io1{}; 
        namespace G7io1ValC{
        }
        ///G7_IO2 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> g7Io2{}; 
        namespace G7io2ValC{
        }
        ///G7_IO3 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> g7Io3{}; 
        namespace G7io3ValC{
        }
        ///G7_IO4 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> g7Io4{}; 
        namespace G7io4ValC{
        }
        ///G8_IO1 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> g8Io1{}; 
        namespace G8io1ValC{
        }
        ///G8_IO2 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> g8Io2{}; 
        namespace G8io2ValC{
        }
        ///G8_IO3 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> g8Io3{}; 
        namespace G8io3ValC{
        }
        ///G8_IO4 analog switch               enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> g8Io4{}; 
        namespace G8io4ValC{
        }
    }
    namespace Noneioscr{    ///<I/O sampling control register
        using Addr = Register::Address<0x40024020,0x00000000,0,unsigned>;
        ///G1_IO1 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> g1Io1{}; 
        namespace G1io1ValC{
        }
        ///G1_IO2 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> g1Io2{}; 
        namespace G1io2ValC{
        }
        ///G1_IO3 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> g1Io3{}; 
        namespace G1io3ValC{
        }
        ///G1_IO4 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> g1Io4{}; 
        namespace G1io4ValC{
        }
        ///G2_IO1 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> g2Io1{}; 
        namespace G2io1ValC{
        }
        ///G2_IO2 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> g2Io2{}; 
        namespace G2io2ValC{
        }
        ///G2_IO3 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> g2Io3{}; 
        namespace G2io3ValC{
        }
        ///G2_IO4 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> g2Io4{}; 
        namespace G2io4ValC{
        }
        ///G3_IO1 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> g3Io1{}; 
        namespace G3io1ValC{
        }
        ///G3_IO2 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> g3Io2{}; 
        namespace G3io2ValC{
        }
        ///G3_IO3 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> g3Io3{}; 
        namespace G3io3ValC{
        }
        ///G3_IO4 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> g3Io4{}; 
        namespace G3io4ValC{
        }
        ///G4_IO1 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> g4Io1{}; 
        namespace G4io1ValC{
        }
        ///G4_IO2 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> g4Io2{}; 
        namespace G4io2ValC{
        }
        ///G4_IO3 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> g4Io3{}; 
        namespace G4io3ValC{
        }
        ///G4_IO4 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> g4Io4{}; 
        namespace G4io4ValC{
        }
        ///G5_IO1 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> g5Io1{}; 
        namespace G5io1ValC{
        }
        ///G5_IO2 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> g5Io2{}; 
        namespace G5io2ValC{
        }
        ///G5_IO3 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> g5Io3{}; 
        namespace G5io3ValC{
        }
        ///G5_IO4 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> g5Io4{}; 
        namespace G5io4ValC{
        }
        ///G6_IO1 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> g6Io1{}; 
        namespace G6io1ValC{
        }
        ///G6_IO2 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> g6Io2{}; 
        namespace G6io2ValC{
        }
        ///G6_IO3 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> g6Io3{}; 
        namespace G6io3ValC{
        }
        ///G6_IO4 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> g6Io4{}; 
        namespace G6io4ValC{
        }
        ///G7_IO1 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> g7Io1{}; 
        namespace G7io1ValC{
        }
        ///G7_IO2 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> g7Io2{}; 
        namespace G7io2ValC{
        }
        ///G7_IO3 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> g7Io3{}; 
        namespace G7io3ValC{
        }
        ///G7_IO4 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> g7Io4{}; 
        namespace G7io4ValC{
        }
        ///G8_IO1 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> g8Io1{}; 
        namespace G8io1ValC{
        }
        ///G8_IO2 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> g8Io2{}; 
        namespace G8io2ValC{
        }
        ///G8_IO3 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> g8Io3{}; 
        namespace G8io3ValC{
        }
        ///G8_IO4 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> g8Io4{}; 
        namespace G8io4ValC{
        }
    }
    namespace Noneioccr{    ///<I/O channel control register
        using Addr = Register::Address<0x40024028,0x00000000,0,unsigned>;
        ///G1_IO1 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> g1Io1{}; 
        namespace G1io1ValC{
        }
        ///G1_IO2 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> g1Io2{}; 
        namespace G1io2ValC{
        }
        ///G1_IO3 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> g1Io3{}; 
        namespace G1io3ValC{
        }
        ///G1_IO4 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> g1Io4{}; 
        namespace G1io4ValC{
        }
        ///G2_IO1 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> g2Io1{}; 
        namespace G2io1ValC{
        }
        ///G2_IO2 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> g2Io2{}; 
        namespace G2io2ValC{
        }
        ///G2_IO3 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> g2Io3{}; 
        namespace G2io3ValC{
        }
        ///G2_IO4 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> g2Io4{}; 
        namespace G2io4ValC{
        }
        ///G3_IO1 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> g3Io1{}; 
        namespace G3io1ValC{
        }
        ///G3_IO2 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> g3Io2{}; 
        namespace G3io2ValC{
        }
        ///G3_IO3 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> g3Io3{}; 
        namespace G3io3ValC{
        }
        ///G3_IO4 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> g3Io4{}; 
        namespace G3io4ValC{
        }
        ///G4_IO1 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> g4Io1{}; 
        namespace G4io1ValC{
        }
        ///G4_IO2 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> g4Io2{}; 
        namespace G4io2ValC{
        }
        ///G4_IO3 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> g4Io3{}; 
        namespace G4io3ValC{
        }
        ///G4_IO4 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> g4Io4{}; 
        namespace G4io4ValC{
        }
        ///G5_IO1 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> g5Io1{}; 
        namespace G5io1ValC{
        }
        ///G5_IO2 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> g5Io2{}; 
        namespace G5io2ValC{
        }
        ///G5_IO3 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> g5Io3{}; 
        namespace G5io3ValC{
        }
        ///G5_IO4 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> g5Io4{}; 
        namespace G5io4ValC{
        }
        ///G6_IO1 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> g6Io1{}; 
        namespace G6io1ValC{
        }
        ///G6_IO2 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> g6Io2{}; 
        namespace G6io2ValC{
        }
        ///G6_IO3 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> g6Io3{}; 
        namespace G6io3ValC{
        }
        ///G6_IO4 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> g6Io4{}; 
        namespace G6io4ValC{
        }
        ///G7_IO1 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> g7Io1{}; 
        namespace G7io1ValC{
        }
        ///G7_IO2 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> g7Io2{}; 
        namespace G7io2ValC{
        }
        ///G7_IO3 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> g7Io3{}; 
        namespace G7io3ValC{
        }
        ///G7_IO4 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> g7Io4{}; 
        namespace G7io4ValC{
        }
        ///G8_IO1 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> g8Io1{}; 
        namespace G8io1ValC{
        }
        ///G8_IO2 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> g8Io2{}; 
        namespace G8io2ValC{
        }
        ///G8_IO3 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> g8Io3{}; 
        namespace G8io3ValC{
        }
        ///G8_IO4 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> g8Io4{}; 
        namespace G8io4ValC{
        }
    }
    namespace Noneiogcsr{    ///<I/O group control status           register
        using Addr = Register::Address<0x40024030,0xff00ff00,0,unsigned>;
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> g8s{}; 
        namespace G8sValC{
        }
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> g7s{}; 
        namespace G7sValC{
        }
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> g6s{}; 
        namespace G6sValC{
        }
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> g5s{}; 
        namespace G5sValC{
        }
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> g4s{}; 
        namespace G4sValC{
        }
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> g3s{}; 
        namespace G3sValC{
        }
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> g2s{}; 
        namespace G2sValC{
        }
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> g1s{}; 
        namespace G1sValC{
        }
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> g8e{}; 
        namespace G8eValC{
        }
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> g7e{}; 
        namespace G7eValC{
        }
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> g6e{}; 
        namespace G6eValC{
        }
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> g5e{}; 
        namespace G5eValC{
        }
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> g4e{}; 
        namespace G4eValC{
        }
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> g3e{}; 
        namespace G3eValC{
        }
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> g2e{}; 
        namespace G2eValC{
        }
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> g1e{}; 
        namespace G1eValC{
        }
    }
    namespace Noneiog1cr{    ///<I/O group x counter register
        using Addr = Register::Address<0x40024034,0xffffc000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Noneiog2cr{    ///<I/O group x counter register
        using Addr = Register::Address<0x40024038,0xffffc000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Noneiog3cr{    ///<I/O group x counter register
        using Addr = Register::Address<0x4002403c,0xffffc000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Noneiog4cr{    ///<I/O group x counter register
        using Addr = Register::Address<0x40024040,0xffffc000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Noneiog5cr{    ///<I/O group x counter register
        using Addr = Register::Address<0x40024044,0xffffc000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Noneiog6cr{    ///<I/O group x counter register
        using Addr = Register::Address<0x40024048,0xffffc000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Noneiog7cr{    ///<I/O group x counter register
        using Addr = Register::Address<0x4002404c,0xffffc000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
    namespace Noneiog8cr{    ///<I/O group x counter register
        using Addr = Register::Address<0x40024050,0xffffc000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
        }
    }
}
