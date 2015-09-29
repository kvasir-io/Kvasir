#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonepb{    ///<Output Latch
        using Addr = Register::Address<0x4002a3c0,0xffffffc0,0,unsigned>;
        ///Output Latch. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pb{}; 
    }
    namespace Nonepbpin{    ///<Pin Value
        using Addr = Register::Address<0x4002a3d0,0xffffffc0,0,unsigned>;
        ///Pin Value. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pbpin{}; 
    }
    namespace Nonepbmdsel{    ///<Mode Select
        using Addr = Register::Address<0x4002a3e0,0xffffffc0,0,unsigned>;
        ///Mode Select. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pbmdsel{}; 
    }
    namespace Nonepbden{    ///<Driver Enable
        using Addr = Register::Address<0x4002a3f0,0xffc0ffc0,0,unsigned>;
        ///Port Bank N-Channel Driver Enable. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pbnden{}; 
        ///Port Bank P-Channel Driver Enable. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> pbpden{}; 
    }
    namespace Nonepbdrv{    ///<Drive Strength
        using Addr = Register::Address<0x4002a400,0xff10ffc0,0,unsigned>;
        ///Drive Strength. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pbdrv{}; 
        ///Port Bank Weak Pull-up Enable. 
        enum class pbpuenVal {
            disabled=0x00000000,     ///<Disable weak pull-ups for this port.
            enabled=0x00000001,     ///<Enable weak pull-ups for this port.
        };
        namespace pbpuenValC{
            constexpr MPL::Value<pbpuenVal,pbpuenVal::disabled> disabled{};
            constexpr MPL::Value<pbpuenVal,pbpuenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,pbpuenVal> pbpuen{}; 
        ///Port Low Voltage Mode. 
        enum class pblvmdVal {
            normal=0x00000000,     ///<Port configured for normal mode.
            low=0x00000001,     ///<Port configured for low power mode.
        };
        namespace pblvmdValC{
            constexpr MPL::Value<pblvmdVal,pblvmdVal::normal> normal{};
            constexpr MPL::Value<pblvmdVal,pblvmdVal::low> low{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,pblvmdVal> pblvmd{}; 
        ///Port Slew Control. 
        enum class pbslewVal {
            fastest=0x00000000,     ///<Select the fastest transition speed for this port bank.
            faster=0x00000001,     ///<Select the faster transition speed for this port bank.
            slower=0x00000002,     ///<Select the slower transition speed for this port bank.
            slowest=0x00000003,     ///<Select the slowest transition speed for this port bank.
        };
        namespace pbslewValC{
            constexpr MPL::Value<pbslewVal,pbslewVal::fastest> fastest{};
            constexpr MPL::Value<pbslewVal,pbslewVal::faster> faster{};
            constexpr MPL::Value<pbslewVal,pbslewVal::slower> slower{};
            constexpr MPL::Value<pbslewVal,pbslewVal::slowest> slowest{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,pbslewVal> pbslew{}; 
        ///Port Bias Enable. 
        enum class pbbiasenVal {
            disabled=0x00000000,     ///<Disable the biasing to the port pins.
            enabled=0x00000001,     ///<Enable the biasing to the port pins.
        };
        namespace pbbiasenValC{
            constexpr MPL::Value<pbbiasenVal,pbbiasenVal::disabled> disabled{};
            constexpr MPL::Value<pbbiasenVal,pbbiasenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,pbbiasenVal> pbbiasen{}; 
        ///Port Drive Enable. 
        enum class pbdrvenVal {
            disabled=0x00000000,     ///<Disable the port drivers.
            enabled=0x00000001,     ///<Enable the port drivers.
        };
        namespace pbdrvenValC{
            constexpr MPL::Value<pbdrvenVal,pbdrvenVal::disabled> disabled{};
            constexpr MPL::Value<pbdrvenVal,pbdrvenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,pbdrvenVal> pbdrven{}; 
        ///Port Voltage Supply Tracking Enable. 
        enum class pbvtrkenVal {
            disabled=0x00000000,     ///<Disable VIOHD tracking.
            enabled=0x00000001,     ///<Enable VIOHD tracking.
        };
        namespace pbvtrkenValC{
            constexpr MPL::Value<pbvtrkenVal,pbvtrkenVal::disabled> disabled{};
            constexpr MPL::Value<pbvtrkenVal,pbvtrkenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,pbvtrkenVal> pbvtrken{}; 
    }
    namespace Nonepbilimit{    ///<Current Limit
        using Addr = Register::Address<0x4002a410,0xff00ffc0,0,unsigned>;
        ///Current Limit Enable. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pbilen{}; 
        ///N-Channel Current Limit. 
        enum class nilimitVal {
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
        namespace nilimitValC{
            constexpr MPL::Value<nilimitVal,nilimitVal::mode0> mode0{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode1> mode1{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode2> mode2{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode3> mode3{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode4> mode4{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode5> mode5{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode6> mode6{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode7> mode7{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode8> mode8{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode9> mode9{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode10> mode10{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode11> mode11{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode12> mode12{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode13> mode13{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode14> mode14{};
            constexpr MPL::Value<nilimitVal,nilimitVal::mode15> mode15{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,nilimitVal> nilimit{}; 
        ///P-Channel Current Limit. 
        enum class pilimitVal {
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
        namespace pilimitValC{
            constexpr MPL::Value<pilimitVal,pilimitVal::mode0> mode0{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode1> mode1{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode2> mode2{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode3> mode3{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode4> mode4{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode5> mode5{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode6> mode6{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode7> mode7{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode8> mode8{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode9> mode9{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode10> mode10{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode11> mode11{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode12> mode12{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode13> mode13{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode14> mode14{};
            constexpr MPL::Value<pilimitVal,pilimitVal::mode15> mode15{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,pilimitVal> pilimit{}; 
    }
    namespace Nonepbfsel{    ///<Function Select
        using Addr = Register::Address<0x4002a430,0xffffe000,0,unsigned>;
        ///Port Bank n.0 Function Select. 
        enum class pb0selVal {
            gpio=0x00000000,     ///<Pin configured for GPIO.
            pmls=0x00000001,     ///<Pin configured for Port Mapped Level Shift.
            epca0=0x00000002,     ///<Pin configured for EPCA0 output.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace pb0selValC{
            constexpr MPL::Value<pb0selVal,pb0selVal::gpio> gpio{};
            constexpr MPL::Value<pb0selVal,pb0selVal::pmls> pmls{};
            constexpr MPL::Value<pb0selVal,pb0selVal::epca0> epca0{};
            constexpr MPL::Value<pb0selVal,pb0selVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pb0selVal> pb0sel{}; 
        ///Port Bank n.1 Function Select. 
        enum class pb1selVal {
            gpio=0x00000000,     ///<Pin configured for GPIO.
            pmls=0x00000001,     ///<Pin configured for Port Mapped Level Shift.
            epca0=0x00000002,     ///<Pin configured for EPCA0 output.
            reserved=0x00000003,     ///<Reserved.
        };
        namespace pb1selValC{
            constexpr MPL::Value<pb1selVal,pb1selVal::gpio> gpio{};
            constexpr MPL::Value<pb1selVal,pb1selVal::pmls> pmls{};
            constexpr MPL::Value<pb1selVal,pb1selVal::epca0> epca0{};
            constexpr MPL::Value<pb1selVal,pb1selVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pb1selVal> pb1sel{}; 
        ///Port Bank n.2 Function Select. 
        enum class pb2selVal {
            gpio=0x00000000,     ///<Pin configured for GPIO.
            pmls=0x00000001,     ///<Pin configured for Port Mapped Level Shift.
            epca0=0x00000002,     ///<Pin configured for EPCA0 output.
            uart1=0x00000003,     ///<Pin configured for UART1 TX.
        };
        namespace pb2selValC{
            constexpr MPL::Value<pb2selVal,pb2selVal::gpio> gpio{};
            constexpr MPL::Value<pb2selVal,pb2selVal::pmls> pmls{};
            constexpr MPL::Value<pb2selVal,pb2selVal::epca0> epca0{};
            constexpr MPL::Value<pb2selVal,pb2selVal::uart1> uart1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pb2selVal> pb2sel{}; 
        ///Port Bank n.3 Function Select. 
        enum class pb3selVal {
            gpio=0x00000000,     ///<Pin configured for GPIO.
            pmls=0x00000001,     ///<Pin configured for Port Mapped Level Shift.
            epca0=0x00000002,     ///<Pin configured for EPCA0 output.
            uart1=0x00000003,     ///<Pin configured for UART1 RX.
        };
        namespace pb3selValC{
            constexpr MPL::Value<pb3selVal,pb3selVal::gpio> gpio{};
            constexpr MPL::Value<pb3selVal,pb3selVal::pmls> pmls{};
            constexpr MPL::Value<pb3selVal,pb3selVal::epca0> epca0{};
            constexpr MPL::Value<pb3selVal,pb3selVal::uart1> uart1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pb3selVal> pb3sel{}; 
        ///Port Bank n.4 Function Select. 
        enum class pb4selVal {
            gpio=0x00000000,     ///<Pin configured for GPIO.
            pmls=0x00000001,     ///<Pin configured for Port Mapped Level Shift.
            epca0=0x00000002,     ///<Pin configured for EPCA0 output.
            uart1=0x00000003,     ///<Pin configured for UART1 RTS.
        };
        namespace pb4selValC{
            constexpr MPL::Value<pb4selVal,pb4selVal::gpio> gpio{};
            constexpr MPL::Value<pb4selVal,pb4selVal::pmls> pmls{};
            constexpr MPL::Value<pb4selVal,pb4selVal::epca0> epca0{};
            constexpr MPL::Value<pb4selVal,pb4selVal::uart1> uart1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pb4selVal> pb4sel{}; 
        ///Port Bank n.5 Function Select. 
        enum class pb5selVal {
            gpio=0x00000000,     ///<Pin configured for GPIO.
            pmls=0x00000001,     ///<Pin configured for Port Mapped Level Shift.
            epca0=0x00000002,     ///<Pin configured for EPCA0 output.
            uart1=0x00000003,     ///<Pin configured for UART1 CTS.
            lptimer0=0x00000004,     ///<Pin configured for LPTIMER0 toggle output.
        };
        namespace pb5selValC{
            constexpr MPL::Value<pb5selVal,pb5selVal::gpio> gpio{};
            constexpr MPL::Value<pb5selVal,pb5selVal::pmls> pmls{};
            constexpr MPL::Value<pb5selVal,pb5selVal::epca0> epca0{};
            constexpr MPL::Value<pb5selVal,pb5selVal::uart1> uart1{};
            constexpr MPL::Value<pb5selVal,pb5selVal::lptimer0> lptimer0{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,pb5selVal> pb5sel{}; 
    }
    namespace Nonepbss{    ///<Safe State Control
        using Addr = Register::Address<0x4002a440,0xfffcf000,0,unsigned>;
        ///Port Bank n.0 Safe State Select. 
        enum class pb0ssselVal {
            hiz=0x00000000,     ///<Place PBn.0 in a High Impedance state.
            high=0x00000001,     ///<Drive PBn.0 High.
            low=0x00000002,     ///<Drive PBn.0 Low.
            disabled=0x00000003,     ///<Ignore the safe state signal (weak pull-ups disabled).
        };
        namespace pb0ssselValC{
            constexpr MPL::Value<pb0ssselVal,pb0ssselVal::hiz> hiz{};
            constexpr MPL::Value<pb0ssselVal,pb0ssselVal::high> high{};
            constexpr MPL::Value<pb0ssselVal,pb0ssselVal::low> low{};
            constexpr MPL::Value<pb0ssselVal,pb0ssselVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pb0ssselVal> pb0sssel{}; 
        ///Port Bank n.1 Safe State Select. 
        enum class pb1ssselVal {
            hiz=0x00000000,     ///<Place PBn.1 in a High Impedance state.
            high=0x00000001,     ///<Drive PBn.1 High.
            low=0x00000002,     ///<Drive PBn.1 Low.
            disabled=0x00000003,     ///<Ignore the safe state signal (weak pull-ups disabled).
        };
        namespace pb1ssselValC{
            constexpr MPL::Value<pb1ssselVal,pb1ssselVal::hiz> hiz{};
            constexpr MPL::Value<pb1ssselVal,pb1ssselVal::high> high{};
            constexpr MPL::Value<pb1ssselVal,pb1ssselVal::low> low{};
            constexpr MPL::Value<pb1ssselVal,pb1ssselVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pb1ssselVal> pb1sssel{}; 
        ///Port Bank n.2 Safe State Select. 
        enum class pb2ssselVal {
            hiz=0x00000000,     ///<Place PBn.2 in a High Impedance state.
            high=0x00000001,     ///<Drive PBn.2 High.
            low=0x00000002,     ///<Drive PBn.2 Low.
            disabled=0x00000003,     ///<Ignore the safe state signal (weak pull-ups disabled).
        };
        namespace pb2ssselValC{
            constexpr MPL::Value<pb2ssselVal,pb2ssselVal::hiz> hiz{};
            constexpr MPL::Value<pb2ssselVal,pb2ssselVal::high> high{};
            constexpr MPL::Value<pb2ssselVal,pb2ssselVal::low> low{};
            constexpr MPL::Value<pb2ssselVal,pb2ssselVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pb2ssselVal> pb2sssel{}; 
        ///Port Bank n.3 Safe State Select. 
        enum class pb3ssselVal {
            hiz=0x00000000,     ///<Place PBn.3 in a High Impedance state.
            high=0x00000001,     ///<Drive PBn.3 High.
            low=0x00000002,     ///<Drive PBn.3 Low.
            disabled=0x00000003,     ///<Ignore the safe state signal (weak pull-ups disabled).
        };
        namespace pb3ssselValC{
            constexpr MPL::Value<pb3ssselVal,pb3ssselVal::hiz> hiz{};
            constexpr MPL::Value<pb3ssselVal,pb3ssselVal::high> high{};
            constexpr MPL::Value<pb3ssselVal,pb3ssselVal::low> low{};
            constexpr MPL::Value<pb3ssselVal,pb3ssselVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,pb3ssselVal> pb3sssel{}; 
        ///Port Bank n.4 Safe State Select. 
        enum class pb4ssselVal {
            hiz=0x00000000,     ///<Place PBn.4 in a High Impedance state.
            high=0x00000001,     ///<Drive PBn.4 High.
            low=0x00000002,     ///<Drive PBn.4 Low.
            disabled=0x00000003,     ///<Ignore the safe state signal (weak pull-ups disabled).
        };
        namespace pb4ssselValC{
            constexpr MPL::Value<pb4ssselVal,pb4ssselVal::hiz> hiz{};
            constexpr MPL::Value<pb4ssselVal,pb4ssselVal::high> high{};
            constexpr MPL::Value<pb4ssselVal,pb4ssselVal::low> low{};
            constexpr MPL::Value<pb4ssselVal,pb4ssselVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,pb4ssselVal> pb4sssel{}; 
        ///Port Bank n.5 Safe State Select. 
        enum class pb5ssselVal {
            hiz=0x00000000,     ///<Place PBn.5 in a High Impedance state.
            high=0x00000001,     ///<Drive PBn.5 High.
            low=0x00000002,     ///<Drive PBn.5 Low.
            disabled=0x00000003,     ///<Ignore the safe state signal (weak pull-ups disabled).
        };
        namespace pb5ssselValC{
            constexpr MPL::Value<pb5ssselVal,pb5ssselVal::hiz> hiz{};
            constexpr MPL::Value<pb5ssselVal,pb5ssselVal::high> high{};
            constexpr MPL::Value<pb5ssselVal,pb5ssselVal::low> low{};
            constexpr MPL::Value<pb5ssselVal,pb5ssselVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,pb5ssselVal> pb5sssel{}; 
        ///Enter Safe State Mode. 
        enum class ssmdenVal {
            disabled=0x00000000,     ///<Disable Safe State.
            enabled=0x00000001,     ///<Enter Safe State.  Each PBn.x pin will enter the states defined by PBxSSSEL.
        };
        namespace ssmdenValC{
            constexpr MPL::Value<ssmdenVal,ssmdenVal::disabled> disabled{};
            constexpr MPL::Value<ssmdenVal,ssmdenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ssmdenVal> ssmden{}; 
        ///Safe State Signal Mode. 
        enum class pbsssmdVal {
            deglitch=0x00000000,     ///<Enable deglitching on the kill signal input. The kill signal must be asserted for two APB clocks to be recognized.
            immediate=0x00000001,     ///<Disable deglitching on the kill signal input.  The kill signal will take immediate effect.
        };
        namespace pbsssmdValC{
            constexpr MPL::Value<pbsssmdVal,pbsssmdVal::deglitch> deglitch{};
            constexpr MPL::Value<pbsssmdVal,pbsssmdVal::immediate> immediate{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,pbsssmdVal> pbsssmd{}; 
    }
    namespace Nonepblock{    ///<Lock Control
        using Addr = Register::Address<0x4002a450,0xffffffc0,0,unsigned>;
        ///Port Bank Lock. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> pblock{}; 
    }
}
