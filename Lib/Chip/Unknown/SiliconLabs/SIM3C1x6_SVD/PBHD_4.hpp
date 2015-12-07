#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonepb{    ///<Output Latch
        using Addr = Register::Address<0x4002a3c0,0xffffffc0,0,unsigned>;
        ///Output Latch. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pb{}; 
        namespace PbValC{
        }
    }
    namespace Nonepbpin{    ///<Pin Value
        using Addr = Register::Address<0x4002a3d0,0xffffffc0,0,unsigned>;
        ///Pin Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pbpin{}; 
        namespace PbpinValC{
        }
    }
    namespace Nonepbmdsel{    ///<Mode Select
        using Addr = Register::Address<0x4002a3e0,0xffffffc0,0,unsigned>;
        ///Mode Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pbmdsel{}; 
        namespace PbmdselValC{
        }
    }
    namespace Nonepbden{    ///<Driver Enable
        using Addr = Register::Address<0x4002a3f0,0xffc0ffc0,0,unsigned>;
        ///Port Bank N-Channel Driver Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pbnden{}; 
        namespace PbndenValC{
        }
        ///Port Bank P-Channel Driver Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> pbpden{}; 
        namespace PbpdenValC{
        }
    }
    namespace Nonepbdrv{    ///<Drive Strength
        using Addr = Register::Address<0x4002a400,0xff10ffc0,0,unsigned>;
        ///Drive Strength. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pbdrv{}; 
        namespace PbdrvValC{
        }
        ///Port Bank Weak Pull-up Enable. 
        enum class PbpuenVal {
            disabled=0x00000000,     ///<Disable weak pull-ups for this port.
            enabled=0x00000001,     ///<Enable weak pull-ups for this port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,PbpuenVal> pbpuen{}; 
        namespace PbpuenValC{
            constexpr Register::FieldValue<decltype(pbpuen),PbpuenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pbpuen),PbpuenVal::enabled> enabled{};
        }
        ///Port Low Voltage Mode. 
        enum class PblvmdVal {
            normal=0x00000000,     ///<Port configured for normal mode.
            low=0x00000001,     ///<Port configured for low power mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,PblvmdVal> pblvmd{}; 
        namespace PblvmdValC{
            constexpr Register::FieldValue<decltype(pblvmd),PblvmdVal::normal> normal{};
            constexpr Register::FieldValue<decltype(pblvmd),PblvmdVal::low> low{};
        }
        ///Port Slew Control. 
        enum class PbslewVal {
            fastest=0x00000000,     ///<Select the fastest transition speed for this port bank.
            faster=0x00000001,     ///<Select the faster transition speed for this port bank.
            slower=0x00000002,     ///<Select the slower transition speed for this port bank.
            slowest=0x00000003,     ///<Select the slowest transition speed for this port bank.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,PbslewVal> pbslew{}; 
        namespace PbslewValC{
            constexpr Register::FieldValue<decltype(pbslew),PbslewVal::fastest> fastest{};
            constexpr Register::FieldValue<decltype(pbslew),PbslewVal::faster> faster{};
            constexpr Register::FieldValue<decltype(pbslew),PbslewVal::slower> slower{};
            constexpr Register::FieldValue<decltype(pbslew),PbslewVal::slowest> slowest{};
        }
        ///Port Bias Enable. 
        enum class PbbiasenVal {
            disabled=0x00000000,     ///<Disable the biasing to the port pins.
            enabled=0x00000001,     ///<Enable the biasing to the port pins.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,PbbiasenVal> pbbiasen{}; 
        namespace PbbiasenValC{
            constexpr Register::FieldValue<decltype(pbbiasen),PbbiasenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pbbiasen),PbbiasenVal::enabled> enabled{};
        }
        ///Port Drive Enable. 
        enum class PbdrvenVal {
            disabled=0x00000000,     ///<Disable the port drivers.
            enabled=0x00000001,     ///<Enable the port drivers.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,PbdrvenVal> pbdrven{}; 
        namespace PbdrvenValC{
            constexpr Register::FieldValue<decltype(pbdrven),PbdrvenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pbdrven),PbdrvenVal::enabled> enabled{};
        }
        ///Port Voltage Supply Tracking Enable. 
        enum class PbvtrkenVal {
            disabled=0x00000000,     ///<Disable VIOHD tracking.
            enabled=0x00000001,     ///<Enable VIOHD tracking.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,PbvtrkenVal> pbvtrken{}; 
        namespace PbvtrkenValC{
            constexpr Register::FieldValue<decltype(pbvtrken),PbvtrkenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pbvtrken),PbvtrkenVal::enabled> enabled{};
        }
    }
    namespace Nonepbilimit{    ///<Current Limit
        using Addr = Register::Address<0x4002a410,0xff00ffc0,0,unsigned>;
        ///Current Limit Enable. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pbilen{}; 
        namespace PbilenValC{
        }
        ///N-Channel Current Limit. 
        enum class NilimitVal {
            mode0=0x00000000,     ///<Set sink limit to mode 0.
            mode1=0x00000001,     ///<Set sink limit to mode 1.
            mode2=0x00000002,     ///<Set sink limit to mode 2.
            mode3=0x00000003,     ///<Set sink limit to mode 3.
            mode4=0x00000004,     ///<Set sink limit to mode 4.
            mode5=0x00000005,     ///<Set sink limit to mode 5.
            mode6=0x00000006,     ///<Set sink limit to mode 6.
            mode7=0x00000007,     ///<Set sink limit to mode 7.
            mode8=0x00000008,     ///<Set sink limit to mode 8.
            mode9=0x00000009,     ///<Set sink limit to mode 9.
            mode10=0x0000000a,     ///<Set sink limit to mode 10.
            mode11=0x0000000b,     ///<Set sink limit to mode 11.
            mode12=0x0000000c,     ///<Set sink limit to mode 12.
            mode13=0x0000000d,     ///<Set sink limit to mode 13.
            mode14=0x0000000e,     ///<Set sink limit to mode 14.
            mode15=0x0000000f,     ///<Set sink limit to mode 15.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,NilimitVal> nilimit{}; 
        namespace NilimitValC{
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode0> mode0{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode1> mode1{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode2> mode2{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode3> mode3{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode4> mode4{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode5> mode5{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode6> mode6{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode7> mode7{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode8> mode8{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode9> mode9{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode10> mode10{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode11> mode11{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode12> mode12{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode13> mode13{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode14> mode14{};
            constexpr Register::FieldValue<decltype(nilimit),NilimitVal::mode15> mode15{};
        }
        ///P-Channel Current Limit. 
        enum class PilimitVal {
            mode0=0x00000000,     ///<Set source limit to mode 0.
            mode1=0x00000001,     ///<Set source limit to mode 1.
            mode2=0x00000002,     ///<Set source limit to mode 2.
            mode3=0x00000003,     ///<Set source limit to mode 3.
            mode4=0x00000004,     ///<Set source limit to mode 4.
            mode5=0x00000005,     ///<Set source limit to mode 5.
            mode6=0x00000006,     ///<Set source limit to mode 6.
            mode7=0x00000007,     ///<Set source limit to mode 7.
            mode8=0x00000008,     ///<Set source limit to mode 8.
            mode9=0x00000009,     ///<Set source limit to mode 9.
            mode10=0x0000000a,     ///<Set source limit to mode 10.
            mode11=0x0000000b,     ///<Set source limit to mode 11.
            mode12=0x0000000c,     ///<Set source limit to mode 12.
            mode13=0x0000000d,     ///<Set source limit to mode 13.
            mode14=0x0000000e,     ///<Set source limit to mode 14.
            mode15=0x0000000f,     ///<Set source limit to mode 15.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,PilimitVal> pilimit{}; 
        namespace PilimitValC{
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode0> mode0{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode1> mode1{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode2> mode2{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode3> mode3{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode4> mode4{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode5> mode5{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode6> mode6{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode7> mode7{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode8> mode8{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode9> mode9{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode10> mode10{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode11> mode11{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode12> mode12{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode13> mode13{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode14> mode14{};
            constexpr Register::FieldValue<decltype(pilimit),PilimitVal::mode15> mode15{};
        }
    }
    namespace Nonepbfsel{    ///<Function Select
        using Addr = Register::Address<0x4002a430,0xffffe000,0,unsigned>;
        ///Port Bank n.0 Function Select. 
        enum class Pb0selVal {
            gpio=0x00000000,     ///<Pin configured for GPIO.
            pmls=0x00000001,     ///<Pin configured for Port Mapped Level Shift.
            epca0=0x00000002,     ///<Pin configured for EPCA0 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Pb0selVal> pb0sel{}; 
        namespace Pb0selValC{
            constexpr Register::FieldValue<decltype(pb0sel),Pb0selVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(pb0sel),Pb0selVal::pmls> pmls{};
            constexpr Register::FieldValue<decltype(pb0sel),Pb0selVal::epca0> epca0{};
        }
        ///Port Bank n.1 Function Select. 
        enum class Pb1selVal {
            gpio=0x00000000,     ///<Pin configured for GPIO.
            pmls=0x00000001,     ///<Pin configured for Port Mapped Level Shift.
            epca0=0x00000002,     ///<Pin configured for EPCA0 output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pb1selVal> pb1sel{}; 
        namespace Pb1selValC{
            constexpr Register::FieldValue<decltype(pb1sel),Pb1selVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(pb1sel),Pb1selVal::pmls> pmls{};
            constexpr Register::FieldValue<decltype(pb1sel),Pb1selVal::epca0> epca0{};
        }
        ///Port Bank n.2 Function Select. 
        enum class Pb2selVal {
            gpio=0x00000000,     ///<Pin configured for GPIO.
            pmls=0x00000001,     ///<Pin configured for Port Mapped Level Shift.
            epca0=0x00000002,     ///<Pin configured for EPCA0 output.
            uart1=0x00000003,     ///<Pin configured for UART1 TX.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pb2selVal> pb2sel{}; 
        namespace Pb2selValC{
            constexpr Register::FieldValue<decltype(pb2sel),Pb2selVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(pb2sel),Pb2selVal::pmls> pmls{};
            constexpr Register::FieldValue<decltype(pb2sel),Pb2selVal::epca0> epca0{};
            constexpr Register::FieldValue<decltype(pb2sel),Pb2selVal::uart1> uart1{};
        }
        ///Port Bank n.3 Function Select. 
        enum class Pb3selVal {
            gpio=0x00000000,     ///<Pin configured for GPIO.
            pmls=0x00000001,     ///<Pin configured for Port Mapped Level Shift.
            epca0=0x00000002,     ///<Pin configured for EPCA0 output.
            uart1=0x00000003,     ///<Pin configured for UART1 RX.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pb3selVal> pb3sel{}; 
        namespace Pb3selValC{
            constexpr Register::FieldValue<decltype(pb3sel),Pb3selVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(pb3sel),Pb3selVal::pmls> pmls{};
            constexpr Register::FieldValue<decltype(pb3sel),Pb3selVal::epca0> epca0{};
            constexpr Register::FieldValue<decltype(pb3sel),Pb3selVal::uart1> uart1{};
        }
        ///Port Bank n.4 Function Select. 
        enum class Pb4selVal {
            gpio=0x00000000,     ///<Pin configured for GPIO.
            pmls=0x00000001,     ///<Pin configured for Port Mapped Level Shift.
            epca0=0x00000002,     ///<Pin configured for EPCA0 output.
            uart1=0x00000003,     ///<Pin configured for UART1 RTS.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pb4selVal> pb4sel{}; 
        namespace Pb4selValC{
            constexpr Register::FieldValue<decltype(pb4sel),Pb4selVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(pb4sel),Pb4selVal::pmls> pmls{};
            constexpr Register::FieldValue<decltype(pb4sel),Pb4selVal::epca0> epca0{};
            constexpr Register::FieldValue<decltype(pb4sel),Pb4selVal::uart1> uart1{};
        }
        ///Port Bank n.5 Function Select. 
        enum class Pb5selVal {
            gpio=0x00000000,     ///<Pin configured for GPIO.
            pmls=0x00000001,     ///<Pin configured for Port Mapped Level Shift.
            epca0=0x00000002,     ///<Pin configured for EPCA0 output.
            uart1=0x00000003,     ///<Pin configured for UART1 CTS.
            lptimer0=0x00000004,     ///<Pin configured for LPTIMER0 toggle output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,Pb5selVal> pb5sel{}; 
        namespace Pb5selValC{
            constexpr Register::FieldValue<decltype(pb5sel),Pb5selVal::gpio> gpio{};
            constexpr Register::FieldValue<decltype(pb5sel),Pb5selVal::pmls> pmls{};
            constexpr Register::FieldValue<decltype(pb5sel),Pb5selVal::epca0> epca0{};
            constexpr Register::FieldValue<decltype(pb5sel),Pb5selVal::uart1> uart1{};
            constexpr Register::FieldValue<decltype(pb5sel),Pb5selVal::lptimer0> lptimer0{};
        }
    }
    namespace Nonepbss{    ///<Safe State Control
        using Addr = Register::Address<0x4002a440,0xfffcf000,0,unsigned>;
        ///Port Bank n.0 Safe State Select. 
        enum class Pb0ssselVal {
            hiz=0x00000000,     ///<Place PBn.0 in a High Impedance state.
            high=0x00000001,     ///<Drive PBn.0 High.
            low=0x00000002,     ///<Drive PBn.0 Low.
            disabled=0x00000003,     ///<Ignore the safe state signal (weak pull-ups disabled).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,Pb0ssselVal> pb0sssel{}; 
        namespace Pb0ssselValC{
            constexpr Register::FieldValue<decltype(pb0sssel),Pb0ssselVal::hiz> hiz{};
            constexpr Register::FieldValue<decltype(pb0sssel),Pb0ssselVal::high> high{};
            constexpr Register::FieldValue<decltype(pb0sssel),Pb0ssselVal::low> low{};
            constexpr Register::FieldValue<decltype(pb0sssel),Pb0ssselVal::disabled> disabled{};
        }
        ///Port Bank n.1 Safe State Select. 
        enum class Pb1ssselVal {
            hiz=0x00000000,     ///<Place PBn.1 in a High Impedance state.
            high=0x00000001,     ///<Drive PBn.1 High.
            low=0x00000002,     ///<Drive PBn.1 Low.
            disabled=0x00000003,     ///<Ignore the safe state signal (weak pull-ups disabled).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,Pb1ssselVal> pb1sssel{}; 
        namespace Pb1ssselValC{
            constexpr Register::FieldValue<decltype(pb1sssel),Pb1ssselVal::hiz> hiz{};
            constexpr Register::FieldValue<decltype(pb1sssel),Pb1ssselVal::high> high{};
            constexpr Register::FieldValue<decltype(pb1sssel),Pb1ssselVal::low> low{};
            constexpr Register::FieldValue<decltype(pb1sssel),Pb1ssselVal::disabled> disabled{};
        }
        ///Port Bank n.2 Safe State Select. 
        enum class Pb2ssselVal {
            hiz=0x00000000,     ///<Place PBn.2 in a High Impedance state.
            high=0x00000001,     ///<Drive PBn.2 High.
            low=0x00000002,     ///<Drive PBn.2 Low.
            disabled=0x00000003,     ///<Ignore the safe state signal (weak pull-ups disabled).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,Pb2ssselVal> pb2sssel{}; 
        namespace Pb2ssselValC{
            constexpr Register::FieldValue<decltype(pb2sssel),Pb2ssselVal::hiz> hiz{};
            constexpr Register::FieldValue<decltype(pb2sssel),Pb2ssselVal::high> high{};
            constexpr Register::FieldValue<decltype(pb2sssel),Pb2ssselVal::low> low{};
            constexpr Register::FieldValue<decltype(pb2sssel),Pb2ssselVal::disabled> disabled{};
        }
        ///Port Bank n.3 Safe State Select. 
        enum class Pb3ssselVal {
            hiz=0x00000000,     ///<Place PBn.3 in a High Impedance state.
            high=0x00000001,     ///<Drive PBn.3 High.
            low=0x00000002,     ///<Drive PBn.3 Low.
            disabled=0x00000003,     ///<Ignore the safe state signal (weak pull-ups disabled).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,Pb3ssselVal> pb3sssel{}; 
        namespace Pb3ssselValC{
            constexpr Register::FieldValue<decltype(pb3sssel),Pb3ssselVal::hiz> hiz{};
            constexpr Register::FieldValue<decltype(pb3sssel),Pb3ssselVal::high> high{};
            constexpr Register::FieldValue<decltype(pb3sssel),Pb3ssselVal::low> low{};
            constexpr Register::FieldValue<decltype(pb3sssel),Pb3ssselVal::disabled> disabled{};
        }
        ///Port Bank n.4 Safe State Select. 
        enum class Pb4ssselVal {
            hiz=0x00000000,     ///<Place PBn.4 in a High Impedance state.
            high=0x00000001,     ///<Drive PBn.4 High.
            low=0x00000002,     ///<Drive PBn.4 Low.
            disabled=0x00000003,     ///<Ignore the safe state signal (weak pull-ups disabled).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,Pb4ssselVal> pb4sssel{}; 
        namespace Pb4ssselValC{
            constexpr Register::FieldValue<decltype(pb4sssel),Pb4ssselVal::hiz> hiz{};
            constexpr Register::FieldValue<decltype(pb4sssel),Pb4ssselVal::high> high{};
            constexpr Register::FieldValue<decltype(pb4sssel),Pb4ssselVal::low> low{};
            constexpr Register::FieldValue<decltype(pb4sssel),Pb4ssselVal::disabled> disabled{};
        }
        ///Port Bank n.5 Safe State Select. 
        enum class Pb5ssselVal {
            hiz=0x00000000,     ///<Place PBn.5 in a High Impedance state.
            high=0x00000001,     ///<Drive PBn.5 High.
            low=0x00000002,     ///<Drive PBn.5 Low.
            disabled=0x00000003,     ///<Ignore the safe state signal (weak pull-ups disabled).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,Pb5ssselVal> pb5sssel{}; 
        namespace Pb5ssselValC{
            constexpr Register::FieldValue<decltype(pb5sssel),Pb5ssselVal::hiz> hiz{};
            constexpr Register::FieldValue<decltype(pb5sssel),Pb5ssselVal::high> high{};
            constexpr Register::FieldValue<decltype(pb5sssel),Pb5ssselVal::low> low{};
            constexpr Register::FieldValue<decltype(pb5sssel),Pb5ssselVal::disabled> disabled{};
        }
        ///Enter Safe State Mode. 
        enum class SsmdenVal {
            disabled=0x00000000,     ///<Disable Safe State.
            enabled=0x00000001,     ///<Enter Safe State.  Each PBn.x pin will enter the states defined by PBxSSSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SsmdenVal> ssmden{}; 
        namespace SsmdenValC{
            constexpr Register::FieldValue<decltype(ssmden),SsmdenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ssmden),SsmdenVal::enabled> enabled{};
        }
        ///Safe State Signal Mode. 
        enum class PbsssmdVal {
            deglitch=0x00000000,     ///<Enable deglitching on the kill signal input. The kill signal must be asserted for two APB clocks to be recognized.
            immediate=0x00000001,     ///<Disable deglitching on the kill signal input.  The kill signal will take immediate effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,PbsssmdVal> pbsssmd{}; 
        namespace PbsssmdValC{
            constexpr Register::FieldValue<decltype(pbsssmd),PbsssmdVal::deglitch> deglitch{};
            constexpr Register::FieldValue<decltype(pbsssmd),PbsssmdVal::immediate> immediate{};
        }
    }
    namespace Nonepblock{    ///<Lock Control
        using Addr = Register::Address<0x4002a450,0xffffffc0,0,unsigned>;
        ///Port Bank Lock. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pblock{}; 
        namespace PblockValC{
        }
    }
}
