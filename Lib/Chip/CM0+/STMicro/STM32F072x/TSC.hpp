#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Touch sensing controller
    namespace TscCr{    ///<control register
        using Addr = Register::Address<0x40024000,0x00000f00,0,unsigned>;
        ///Charge transfer pulse high
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> ctph{}; 
        ///Charge transfer pulse low
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> ctpl{}; 
        ///Spread spectrum deviation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,17),Register::ReadWriteAccess,unsigned> ssd{}; 
        ///Spread spectrum enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sse{}; 
        ///Spread spectrum prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> sspsc{}; 
        ///pulse generator prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> pgpsc{}; 
        ///Max count value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> mcv{}; 
        ///I/O Default mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iodef{}; 
        ///Synchronization pin              polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> syncpol{}; 
        ///Acquisition mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> am{}; 
        ///Start a new acquisition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> start{}; 
        ///Touch sensing controller              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tsce{}; 
    }
    namespace TscIer{    ///<interrupt enable register
        using Addr = Register::Address<0x40024004,0xfffffffc,0,unsigned>;
        ///Max count error interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mceie{}; 
        ///End of acquisition interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoaie{}; 
    }
    namespace TscIcr{    ///<interrupt clear register
        using Addr = Register::Address<0x40024008,0xfffffffc,0,unsigned>;
        ///Max count error interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mceic{}; 
        ///End of acquisition interrupt              clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoaic{}; 
    }
    namespace TscIsr{    ///<interrupt status register
        using Addr = Register::Address<0x4002400c,0xfffffffc,0,unsigned>;
        ///Max count error flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mcef{}; 
        ///End of acquisition flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eoaf{}; 
    }
    namespace TscIohcr{    ///<I/O hysteresis control          register
        using Addr = Register::Address<0x40024010,0xff000000,0,unsigned>;
        ///G6_IO4 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> g6Io4{}; 
        ///G6_IO3 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> g6Io3{}; 
        ///G6_IO2 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> g6Io2{}; 
        ///G6_IO1 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> g6Io1{}; 
        ///G5_IO4 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> g5Io4{}; 
        ///G5_IO3 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> g5Io3{}; 
        ///G5_IO2 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> g5Io2{}; 
        ///G5_IO1 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> g5Io1{}; 
        ///G4_IO4 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> g4Io4{}; 
        ///G4_IO3 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> g4Io3{}; 
        ///G4_IO2 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> g4Io2{}; 
        ///G4_IO1 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> g4Io1{}; 
        ///G3_IO4 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> g3Io4{}; 
        ///G3_IO3 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> g3Io3{}; 
        ///G3_IO2 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> g3Io2{}; 
        ///G3_IO1 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> g3Io1{}; 
        ///G2_IO4 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> g2Io4{}; 
        ///G2_IO3 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> g2Io3{}; 
        ///G2_IO2 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> g2Io2{}; 
        ///G2_IO1 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> g2Io1{}; 
        ///G1_IO4 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> g1Io4{}; 
        ///G1_IO3 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> g1Io3{}; 
        ///G1_IO2 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> g1Io2{}; 
        ///G1_IO1 Schmitt trigger hysteresis              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> g1Io1{}; 
    }
    namespace TscIoascr{    ///<I/O analog switch control          register
        using Addr = Register::Address<0x40024018,0xff000000,0,unsigned>;
        ///G6_IO4 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> g6Io4{}; 
        ///G6_IO3 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> g6Io3{}; 
        ///G6_IO2 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> g6Io2{}; 
        ///G6_IO1 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> g6Io1{}; 
        ///G5_IO4 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> g5Io4{}; 
        ///G5_IO3 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> g5Io3{}; 
        ///G5_IO2 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> g5Io2{}; 
        ///G5_IO1 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> g5Io1{}; 
        ///G4_IO4 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> g4Io4{}; 
        ///G4_IO3 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> g4Io3{}; 
        ///G4_IO2 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> g4Io2{}; 
        ///G4_IO1 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> g4Io1{}; 
        ///G3_IO4 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> g3Io4{}; 
        ///G3_IO3 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> g3Io3{}; 
        ///G3_IO2 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> g3Io2{}; 
        ///G3_IO1 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> g3Io1{}; 
        ///G2_IO4 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> g2Io4{}; 
        ///G2_IO3 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> g2Io3{}; 
        ///G2_IO2 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> g2Io2{}; 
        ///G2_IO1 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> g2Io1{}; 
        ///G1_IO4 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> g1Io4{}; 
        ///G1_IO3 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> g1Io3{}; 
        ///G1_IO2 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> g1Io2{}; 
        ///G1_IO1 analog switch              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> g1Io1{}; 
    }
    namespace TscIoscr{    ///<I/O sampling control register
        using Addr = Register::Address<0x40024020,0xff000000,0,unsigned>;
        ///G6_IO4 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> g6Io4{}; 
        ///G6_IO3 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> g6Io3{}; 
        ///G6_IO2 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> g6Io2{}; 
        ///G6_IO1 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> g6Io1{}; 
        ///G5_IO4 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> g5Io4{}; 
        ///G5_IO3 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> g5Io3{}; 
        ///G5_IO2 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> g5Io2{}; 
        ///G5_IO1 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> g5Io1{}; 
        ///G4_IO4 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> g4Io4{}; 
        ///G4_IO3 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> g4Io3{}; 
        ///G4_IO2 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> g4Io2{}; 
        ///G4_IO1 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> g4Io1{}; 
        ///G3_IO4 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> g3Io4{}; 
        ///G3_IO3 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> g3Io3{}; 
        ///G3_IO2 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> g3Io2{}; 
        ///G3_IO1 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> g3Io1{}; 
        ///G2_IO4 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> g2Io4{}; 
        ///G2_IO3 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> g2Io3{}; 
        ///G2_IO2 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> g2Io2{}; 
        ///G2_IO1 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> g2Io1{}; 
        ///G1_IO4 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> g1Io4{}; 
        ///G1_IO3 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> g1Io3{}; 
        ///G1_IO2 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> g1Io2{}; 
        ///G1_IO1 sampling mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> g1Io1{}; 
    }
    namespace TscIoccr{    ///<I/O channel control register
        using Addr = Register::Address<0x40024028,0xff000000,0,unsigned>;
        ///G6_IO4 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> g6Io4{}; 
        ///G6_IO3 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> g6Io3{}; 
        ///G6_IO2 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> g6Io2{}; 
        ///G6_IO1 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> g6Io1{}; 
        ///G5_IO4 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> g5Io4{}; 
        ///G5_IO3 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> g5Io3{}; 
        ///G5_IO2 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> g5Io2{}; 
        ///G5_IO1 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> g5Io1{}; 
        ///G4_IO4 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> g4Io4{}; 
        ///G4_IO3 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> g4Io3{}; 
        ///G4_IO2 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> g4Io2{}; 
        ///G4_IO1 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> g4Io1{}; 
        ///G3_IO4 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> g3Io4{}; 
        ///G3_IO3 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> g3Io3{}; 
        ///G3_IO2 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> g3Io2{}; 
        ///G3_IO1 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> g3Io1{}; 
        ///G2_IO4 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> g2Io4{}; 
        ///G2_IO3 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> g2Io3{}; 
        ///G2_IO2 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> g2Io2{}; 
        ///G2_IO1 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> g2Io1{}; 
        ///G1_IO4 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> g1Io4{}; 
        ///G1_IO3 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> g1Io3{}; 
        ///G1_IO2 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> g1Io2{}; 
        ///G1_IO1 channel mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> g1Io1{}; 
    }
    namespace TscIogcsr{    ///<I/O group control status          register
        using Addr = Register::Address<0x40024030,0xff00ff00,0,unsigned>;
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> g8s{}; 
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> g7s{}; 
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> g6s{}; 
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> g5s{}; 
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> g4s{}; 
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> g3s{}; 
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> g2s{}; 
        ///Analog I/O group x status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> g1s{}; 
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> g8e{}; 
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> g7e{}; 
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> g6e{}; 
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> g5e{}; 
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> g4e{}; 
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> g3e{}; 
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> g2e{}; 
        ///Analog I/O group x enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> g1e{}; 
    }
    namespace TscIog1cr{    ///<I/O group x counter register
        using Addr = Register::Address<0x40024034,0xffffc000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace TscIog2cr{    ///<I/O group x counter register
        using Addr = Register::Address<0x40024038,0xffffc000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace TscIog3cr{    ///<I/O group x counter register
        using Addr = Register::Address<0x4002403c,0xffffc000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace TscIog4cr{    ///<I/O group x counter register
        using Addr = Register::Address<0x40024040,0xffffc000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace TscIog5cr{    ///<I/O group x counter register
        using Addr = Register::Address<0x40024044,0xffffc000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace TscIog6cr{    ///<I/O group x counter register
        using Addr = Register::Address<0x40024048,0xffffc000,0,unsigned>;
        ///Counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
}
