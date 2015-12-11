#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//GPIO
    namespace Nonestatus{    ///<GPIO overall Interrupt Status.
        using Addr = Register::Address<0x40028080,0xfffffffa,0,unsigned>;
        ///Port 0 GPIO interrupt pending.
        enum class P0intVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupts on Port 0.
            atLeastOnePending=0x00000001,     ///<At least one pending interrupt on Port 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,P0intVal> p0int{}; 
        namespace P0intValC{
            constexpr Register::FieldValue<decltype(p0int)::Type,P0intVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(p0int)::Type,P0intVal::atLeastOnePending> atLeastOnePending{};
        }
        }
        ///Port 2 GPIO interrupt pending.
        enum class P2intVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupts on Port 2.
            atLeastOnePending=0x00000001,     ///<At least one pending interrupt on Port 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,P2intVal> p2int{}; 
        namespace P2intValC{
            constexpr Register::FieldValue<decltype(p2int)::Type,P2intVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(p2int)::Type,P2intVal::atLeastOnePending> atLeastOnePending{};
        }
        }
    }
    namespace Nonestatr0{    ///<GPIO Interrupt Status for Rising edge for Port 0.
        using Addr = Register::Address<0x40028084,0x00000000,0,unsigned>;
        ///Status of Rising Edge Interrupt for P0[0]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00rei{}; 
        ///Status of Rising Edge Interrupt for P0[1]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01rei{}; 
        ///Status of Rising Edge Interrupt for P0[2]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02rei{}; 
        ///Status of Rising Edge Interrupt for P0[3]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03rei{}; 
        ///Status of Rising Edge Interrupt for P0[4]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04rei{}; 
        ///Status of Rising Edge Interrupt for P0[5]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05rei{}; 
        ///Status of Rising Edge Interrupt for P0[6]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06rei{}; 
        ///Status of Rising Edge Interrupt for P0[7]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07rei{}; 
        ///Status of Rising Edge Interrupt for P0[8]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08rei{}; 
        ///Status of Rising Edge Interrupt for P0[9]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09rei{}; 
        ///Status of Rising Edge Interrupt for P0[10]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p010rei{}; 
        ///Status of Rising Edge Interrupt for P0[11]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p011rei{}; 
        ///Status of Rising Edge Interrupt for P0[12]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p012rei{}; 
        ///Status of Rising Edge Interrupt for P0[13]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p013rei{}; 
        ///Status of Rising Edge Interrupt for P0[14]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p014rei{}; 
        ///Status of Rising Edge Interrupt for P0[15]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p015rei{}; 
        ///Status of Rising Edge Interrupt for P0[16]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p016rei{}; 
        ///Status of Rising Edge Interrupt for P0[17]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p017rei{}; 
        ///Status of Rising Edge Interrupt for P0[18]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p018rei{}; 
        ///Status of Rising Edge Interrupt for P0[19]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p019rei{}; 
        ///Status of Rising Edge Interrupt for P0[20]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p020rei{}; 
        ///Status of Rising Edge Interrupt for P0[21]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p021rei{}; 
        ///Status of Rising Edge Interrupt for P0[22]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p022rei{}; 
        ///Status of Rising Edge Interrupt for P0[23]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p023rei{}; 
        ///Status of Rising Edge Interrupt for P0[24]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p024rei{}; 
        ///Status of Rising Edge Interrupt for P0[25]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p025rei{}; 
        ///Status of Rising Edge Interrupt for P0[26]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p026rei{}; 
        ///Status of Rising Edge Interrupt for P0[27]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p027rei{}; 
        ///Status of Rising Edge Interrupt for P0[28]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p028rei{}; 
        ///Status of Rising Edge Interrupt for P0[29]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p029rei{}; 
        ///Status of Rising Edge Interrupt for P0[30]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p030rei{}; 
        ///Status of Rising Edge Interrupt for P0[31]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p031rei{}; 
    }
    namespace Nonestatf0{    ///<GPIO Interrupt Status for Falling edge for Port 0.
        using Addr = Register::Address<0x40028088,0x00000000,0,unsigned>;
        ///Status of Falling Edge Interrupt for P0[0]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00fei{}; 
        ///Status of Falling Edge Interrupt for P0[1]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01fei{}; 
        ///Status of Falling Edge Interrupt for P0[2]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02fei{}; 
        ///Status of Falling Edge Interrupt for P0[3]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03fei{}; 
        ///Status of Falling Edge Interrupt for P0[4]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04fei{}; 
        ///Status of Falling Edge Interrupt for P0[5]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05fei{}; 
        ///Status of Falling Edge Interrupt for P0[6]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06fei{}; 
        ///Status of Falling Edge Interrupt for P0[7]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07fei{}; 
        ///Status of Falling Edge Interrupt for P0[8]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08fei{}; 
        ///Status of Falling Edge Interrupt for P0[9]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09fei{}; 
        ///Status of Falling Edge Interrupt for P0[10]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p010fei{}; 
        ///Status of Falling Edge Interrupt for P0[11]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p011fei{}; 
        ///Status of Falling Edge Interrupt for P0[12]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p012fei{}; 
        ///Status of Falling Edge Interrupt for P0[13]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p013fei{}; 
        ///Status of Falling Edge Interrupt for P0[14]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p014fei{}; 
        ///Status of Falling Edge Interrupt for P0[15]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p015fei{}; 
        ///Status of Falling Edge Interrupt for P0[16]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p016fei{}; 
        ///Status of Falling Edge Interrupt for P0[17]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p017fei{}; 
        ///Status of Falling Edge Interrupt for P0[18]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p018fei{}; 
        ///Status of Falling Edge Interrupt for P0[19]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p019fei{}; 
        ///Status of Falling Edge Interrupt for P0[20]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p020fei{}; 
        ///Status of Falling Edge Interrupt for P0[21]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p021fei{}; 
        ///Status of Falling Edge Interrupt for P0[22]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p022fei{}; 
        ///Status of Falling Edge Interrupt for P0[23]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p023fei{}; 
        ///Status of Falling Edge Interrupt for P0[24]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p024fei{}; 
        ///Status of Falling Edge Interrupt for P0[25]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p025fei{}; 
        ///Status of Falling Edge Interrupt for P0[26]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p026fei{}; 
        ///Status of Falling Edge Interrupt for P0[27]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p027fei{}; 
        ///Status of Falling Edge Interrupt for P0[28]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p028fei{}; 
        ///Status of Falling Edge Interrupt for P0[29]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p029fei{}; 
        ///Status of Falling Edge Interrupt for P0[30]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p030fei{}; 
        ///Status of Falling Edge Interrupt for P0[31]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p031fei{}; 
    }
    namespace Noneclr0{    ///<GPIO Interrupt Clear.
        using Addr = Register::Address<0x4002808c,0x00000000,0,unsigned>;
        ///Clear GPIO port Interrupts for P0[0]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00ci{}; 
        ///Clear GPIO port Interrupts for P0[1]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01ci{}; 
        ///Clear GPIO port Interrupts for P0[2]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02ci{}; 
        ///Clear GPIO port Interrupts for P0[3]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03ci{}; 
        ///Clear GPIO port Interrupts for P0[4]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04ci{}; 
        ///Clear GPIO port Interrupts for P0[5]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05ci{}; 
        ///Clear GPIO port Interrupts for P0[6]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06ci{}; 
        ///Clear GPIO port Interrupts for P0[7]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07ci{}; 
        ///Clear GPIO port Interrupts for P0[8]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08ci{}; 
        ///Clear GPIO port Interrupts for P0[9]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09ci{}; 
        ///Clear GPIO port Interrupts for P0[10]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p010ci{}; 
        ///Clear GPIO port Interrupts for P0[11]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p011ci{}; 
        ///Clear GPIO port Interrupts for P0[12]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p012ci{}; 
        ///Clear GPIO port Interrupts for P0[13]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p013ci{}; 
        ///Clear GPIO port Interrupts for P0[14]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p014ci{}; 
        ///Clear GPIO port Interrupts for P0[15]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p015ci{}; 
        ///Clear GPIO port Interrupts for P0[16]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p016ci{}; 
        ///Clear GPIO port Interrupts for P0[17]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p017ci{}; 
        ///Clear GPIO port Interrupts for P0[18]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p018ci{}; 
        ///Clear GPIO port Interrupts for P0[19]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p019ci{}; 
        ///Clear GPIO port Interrupts for P0[20]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p020ci{}; 
        ///Clear GPIO port Interrupts for P0[21]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p021ci{}; 
        ///Clear GPIO port Interrupts for P0[22]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p022ci{}; 
        ///Clear GPIO port Interrupts for P0[23]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p023ci{}; 
        ///Clear GPIO port Interrupts for P0[24]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p024ci{}; 
        ///Clear GPIO port Interrupts for P0[25]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p025ci{}; 
        ///Clear GPIO port Interrupts for P0[26]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p026ci{}; 
        ///Clear GPIO port Interrupts for P0[27]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p027ci{}; 
        ///Clear GPIO port Interrupts for P0[28]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p028ci{}; 
        ///Clear GPIO port Interrupts for P0[29]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p029ci{}; 
        ///Clear GPIO port Interrupts for P0[30]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p030ci{}; 
        ///Clear GPIO port Interrupts for P0[31]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p031ci{}; 
    }
    namespace Noneenr0{    ///<GPIO Interrupt Enable for Rising edge for Port 0.
        using Addr = Register::Address<0x40028090,0x00000000,0,unsigned>;
        ///Enable rising edge interrupt for P0[0]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00er{}; 
        ///Enable rising edge interrupt for P0[1]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01er{}; 
        ///Enable rising edge interrupt for P0[2]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02er{}; 
        ///Enable rising edge interrupt for P0[3]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03er{}; 
        ///Enable rising edge interrupt for P0[4]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04er{}; 
        ///Enable rising edge interrupt for P0[5]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05er{}; 
        ///Enable rising edge interrupt for P0[6]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06er{}; 
        ///Enable rising edge interrupt for P0[7]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07er{}; 
        ///Enable rising edge interrupt for P0[8]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08er{}; 
        ///Enable rising edge interrupt for P0[9]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09er{}; 
        ///Enable rising edge interrupt for P0[10]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p010er{}; 
        ///Enable rising edge interrupt for P0[11]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p011er{}; 
        ///Enable rising edge interrupt for P0[12]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p012er{}; 
        ///Enable rising edge interrupt for P0[13]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p013er{}; 
        ///Enable rising edge interrupt for P0[14]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p014er{}; 
        ///Enable rising edge interrupt for P0[15]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p015er{}; 
        ///Enable rising edge interrupt for P0[16]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p016er{}; 
        ///Enable rising edge interrupt for P0[17]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p017er{}; 
        ///Enable rising edge interrupt for P0[18]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p018er{}; 
        ///Enable rising edge interrupt for P0[19]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p019er{}; 
        ///Enable rising edge interrupt for P0[20]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p020er{}; 
        ///Enable rising edge interrupt for P0[21]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p021er{}; 
        ///Enable rising edge interrupt for P0[22]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p022er{}; 
        ///Enable rising edge interrupt for P0[23]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p023er{}; 
        ///Enable rising edge interrupt for P0[24]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p024er{}; 
        ///Enable rising edge interrupt for P0[25]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p025er{}; 
        ///Enable rising edge interrupt for P0[26]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p026er{}; 
        ///Enable rising edge interrupt for P0[27]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p027er{}; 
        ///Enable rising edge interrupt for P0[28]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p028er{}; 
        ///Enable rising edge interrupt for P0[29]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p029er{}; 
        ///Enable rising edge interrupt for P0[30]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p030er{}; 
        ///Enable rising edge interrupt for P0[31]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p031er{}; 
    }
    namespace Noneenf0{    ///<GPIO Interrupt Enable for Falling edge for Port 0.
        using Addr = Register::Address<0x40028094,0x00000000,0,unsigned>;
        ///Enable falling edge interrupt for P0[0]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00ef{}; 
        ///Enable falling edge interrupt for P0[1]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01ef{}; 
        ///Enable falling edge interrupt for P0[2]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02ef{}; 
        ///Enable falling edge interrupt for P0[3]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03ef{}; 
        ///Enable falling edge interrupt for P0[4]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04ef{}; 
        ///Enable falling edge interrupt for P0[5]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05ef{}; 
        ///Enable falling edge interrupt for P0[6]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06ef{}; 
        ///Enable falling edge interrupt for P0[7]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07ef{}; 
        ///Enable falling edge interrupt for P0[8]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08ef{}; 
        ///Enable falling edge interrupt for P0[9]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09ef{}; 
        ///Enable falling edge interrupt for P0[10]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p010ef{}; 
        ///Enable falling edge interrupt for P0[11]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p011ef{}; 
        ///Enable falling edge interrupt for P0[12]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p012ef{}; 
        ///Enable falling edge interrupt for P0[13]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p013ef{}; 
        ///Enable falling edge interrupt for P0[14]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p014ef{}; 
        ///Enable falling edge interrupt for P0[15]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p015ef{}; 
        ///Enable falling edge interrupt for P0[16]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p016ef{}; 
        ///Enable falling edge interrupt for P0[17]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p017ef{}; 
        ///Enable falling edge interrupt for P0[18]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p018ef{}; 
        ///Enable falling edge interrupt for P0[19]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p019ef{}; 
        ///Enable falling edge interrupt for P0[20]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p020ef{}; 
        ///Enable falling edge interrupt for P0[21]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p021ef{}; 
        ///Enable falling edge interrupt for P0[22]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p022ef{}; 
        ///Enable falling edge interrupt for P0[23]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p023ef{}; 
        ///Enable falling edge interrupt for P0[24]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p024ef{}; 
        ///Enable falling edge interrupt for P0[25]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p025ef{}; 
        ///Enable falling edge interrupt for P0[26]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p026ef{}; 
        ///Enable falling edge interrupt for P0[27]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p027ef{}; 
        ///Enable falling edge interrupt for P0[28]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p028ef{}; 
        ///Enable falling edge interrupt for P0[29]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p029ef{}; 
        ///Enable falling edge interrupt for P0[30]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p030ef{}; 
        ///Enable falling edge interrupt for P0[31]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p031ef{}; 
    }
    namespace Nonestatr2{    ///<GPIO Interrupt Status for Rising edge for Port 0.
        using Addr = Register::Address<0x400280a4,0x00000000,0,unsigned>;
        ///Status of Rising Edge Interrupt for P2[0]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20rei{}; 
        ///Status of Rising Edge Interrupt for P2[1]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21rei{}; 
        ///Status of Rising Edge Interrupt for P2[2]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22rei{}; 
        ///Status of Rising Edge Interrupt for P2[3]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23rei{}; 
        ///Status of Rising Edge Interrupt for P2[4]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24rei{}; 
        ///Status of Rising Edge Interrupt for P2[5]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25rei{}; 
        ///Status of Rising Edge Interrupt for P2[6]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26rei{}; 
        ///Status of Rising Edge Interrupt for P2[7]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p27rei{}; 
        ///Status of Rising Edge Interrupt for P2[8]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p28rei{}; 
        ///Status of Rising Edge Interrupt for P2[9]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p29rei{}; 
        ///Status of Rising Edge Interrupt for P2[10]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p210rei{}; 
        ///Status of Rising Edge Interrupt for P2[11]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p211rei{}; 
        ///Status of Rising Edge Interrupt for P2[12]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p212rei{}; 
        ///Status of Rising Edge Interrupt for P2[13]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p213rei{}; 
        ///Status of Rising Edge Interrupt for P2[14]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p214rei{}; 
        ///Status of Rising Edge Interrupt for P2[15]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p215rei{}; 
        ///Status of Rising Edge Interrupt for P2[16]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p216rei{}; 
        ///Status of Rising Edge Interrupt for P2[17]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p217rei{}; 
        ///Status of Rising Edge Interrupt for P2[18]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p218rei{}; 
        ///Status of Rising Edge Interrupt for P2[19]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p219rei{}; 
        ///Status of Rising Edge Interrupt for P2[20]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p220rei{}; 
        ///Status of Rising Edge Interrupt for P2[21]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p221rei{}; 
        ///Status of Rising Edge Interrupt for P2[22]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p222rei{}; 
        ///Status of Rising Edge Interrupt for P2[23]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p223rei{}; 
        ///Status of Rising Edge Interrupt for P2[24]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p224rei{}; 
        ///Status of Rising Edge Interrupt for P2[25]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p225rei{}; 
        ///Status of Rising Edge Interrupt for P2[26]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p226rei{}; 
        ///Status of Rising Edge Interrupt for P2[27]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p227rei{}; 
        ///Status of Rising Edge Interrupt for P2[28]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p228rei{}; 
        ///Status of Rising Edge Interrupt for P2[29]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p229rei{}; 
        ///Status of Rising Edge Interrupt for P2[30]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p230rei{}; 
        ///Status of Rising Edge Interrupt for P2[31]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p231rei{}; 
    }
    namespace Nonestatf2{    ///<GPIO Interrupt Status for Falling edge for Port 0.
        using Addr = Register::Address<0x400280a8,0x00000000,0,unsigned>;
        ///Status of Falling Edge Interrupt for P2[0]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20fei{}; 
        ///Status of Falling Edge Interrupt for P2[1]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21fei{}; 
        ///Status of Falling Edge Interrupt for P2[2]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22fei{}; 
        ///Status of Falling Edge Interrupt for P2[3]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23fei{}; 
        ///Status of Falling Edge Interrupt for P2[4]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24fei{}; 
        ///Status of Falling Edge Interrupt for P2[5]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25fei{}; 
        ///Status of Falling Edge Interrupt for P2[6]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26fei{}; 
        ///Status of Falling Edge Interrupt for P2[7]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p27fei{}; 
        ///Status of Falling Edge Interrupt for P2[8]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p28fei{}; 
        ///Status of Falling Edge Interrupt for P2[9]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p29fei{}; 
        ///Status of Falling Edge Interrupt for P2[10]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p210fei{}; 
        ///Status of Falling Edge Interrupt for P2[11]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p211fei{}; 
        ///Status of Falling Edge Interrupt for P2[12]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p212fei{}; 
        ///Status of Falling Edge Interrupt for P2[13]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p213fei{}; 
        ///Status of Falling Edge Interrupt for P2[14]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p214fei{}; 
        ///Status of Falling Edge Interrupt for P2[15]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p215fei{}; 
        ///Status of Falling Edge Interrupt for P2[16]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p216fei{}; 
        ///Status of Falling Edge Interrupt for P2[17]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p217fei{}; 
        ///Status of Falling Edge Interrupt for P2[18]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p218fei{}; 
        ///Status of Falling Edge Interrupt for P2[19]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p219fei{}; 
        ///Status of Falling Edge Interrupt for P2[20]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p220fei{}; 
        ///Status of Falling Edge Interrupt for P2[21]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p221fei{}; 
        ///Status of Falling Edge Interrupt for P2[22]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p222fei{}; 
        ///Status of Falling Edge Interrupt for P2[23]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p223fei{}; 
        ///Status of Falling Edge Interrupt for P2[24]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p224fei{}; 
        ///Status of Falling Edge Interrupt for P2[25]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p225fei{}; 
        ///Status of Falling Edge Interrupt for P2[26]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p226fei{}; 
        ///Status of Falling Edge Interrupt for P2[27]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p227fei{}; 
        ///Status of Falling Edge Interrupt for P2[28]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p228fei{}; 
        ///Status of Falling Edge Interrupt for P2[29]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p229fei{}; 
        ///Status of Falling Edge Interrupt for P2[30]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p230fei{}; 
        ///Status of Falling Edge Interrupt for P2[31]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p231fei{}; 
    }
    namespace Noneclr2{    ///<GPIO Interrupt Clear.
        using Addr = Register::Address<0x400280ac,0x00000000,0,unsigned>;
        ///Clear GPIO port Interrupts for P2[0]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20ci{}; 
        ///Clear GPIO port Interrupts for P2[1]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21ci{}; 
        ///Clear GPIO port Interrupts for P2[2]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22ci{}; 
        ///Clear GPIO port Interrupts for P2[3]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23ci{}; 
        ///Clear GPIO port Interrupts for P2[4]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24ci{}; 
        ///Clear GPIO port Interrupts for P2[5]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25ci{}; 
        ///Clear GPIO port Interrupts for P2[6]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26ci{}; 
        ///Clear GPIO port Interrupts for P2[7]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p27ci{}; 
        ///Clear GPIO port Interrupts for P2[8]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p28ci{}; 
        ///Clear GPIO port Interrupts for P2[9]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p29ci{}; 
        ///Clear GPIO port Interrupts for P2[10]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p210ci{}; 
        ///Clear GPIO port Interrupts for P2[11]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p211ci{}; 
        ///Clear GPIO port Interrupts for P2[12]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p212ci{}; 
        ///Clear GPIO port Interrupts for P2[13]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p213ci{}; 
        ///Clear GPIO port Interrupts for P2[14]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p214ci{}; 
        ///Clear GPIO port Interrupts for P2[15]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p215ci{}; 
        ///Clear GPIO port Interrupts for P2[16]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p216ci{}; 
        ///Clear GPIO port Interrupts for P2[17]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p217ci{}; 
        ///Clear GPIO port Interrupts for P2[18]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p218ci{}; 
        ///Clear GPIO port Interrupts for P2[19]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p219ci{}; 
        ///Clear GPIO port Interrupts for P2[20]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p220ci{}; 
        ///Clear GPIO port Interrupts for P2[21]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p221ci{}; 
        ///Clear GPIO port Interrupts for P2[22]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p222ci{}; 
        ///Clear GPIO port Interrupts for P2[23]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p223ci{}; 
        ///Clear GPIO port Interrupts for P2[24]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p224ci{}; 
        ///Clear GPIO port Interrupts for P2[25]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p225ci{}; 
        ///Clear GPIO port Interrupts for P2[26]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p226ci{}; 
        ///Clear GPIO port Interrupts for P2[27]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p227ci{}; 
        ///Clear GPIO port Interrupts for P2[28]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p228ci{}; 
        ///Clear GPIO port Interrupts for P2[29]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p229ci{}; 
        ///Clear GPIO port Interrupts for P2[30]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p230ci{}; 
        ///Clear GPIO port Interrupts for P2[31]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p231ci{}; 
    }
    namespace Noneenr2{    ///<GPIO Interrupt Enable for Rising edge for Port 0.
        using Addr = Register::Address<0x400280b0,0x00000000,0,unsigned>;
        ///Enable rising edge interrupt for P2[0]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20er{}; 
        ///Enable rising edge interrupt for P2[1]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21er{}; 
        ///Enable rising edge interrupt for P2[2]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22er{}; 
        ///Enable rising edge interrupt for P2[3]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23er{}; 
        ///Enable rising edge interrupt for P2[4]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24er{}; 
        ///Enable rising edge interrupt for P2[5]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25er{}; 
        ///Enable rising edge interrupt for P2[6]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26er{}; 
        ///Enable rising edge interrupt for P2[7]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p27er{}; 
        ///Enable rising edge interrupt for P2[8]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p28er{}; 
        ///Enable rising edge interrupt for P2[9]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p29er{}; 
        ///Enable rising edge interrupt for P2[10]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p210er{}; 
        ///Enable rising edge interrupt for P2[11]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p211er{}; 
        ///Enable rising edge interrupt for P2[12]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p212er{}; 
        ///Enable rising edge interrupt for P2[13]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p213er{}; 
        ///Enable rising edge interrupt for P2[14]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p214er{}; 
        ///Enable rising edge interrupt for P2[15]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p215er{}; 
        ///Enable rising edge interrupt for P2[16]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p216er{}; 
        ///Enable rising edge interrupt for P2[17]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p217er{}; 
        ///Enable rising edge interrupt for P2[18]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p218er{}; 
        ///Enable rising edge interrupt for P2[19]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p219er{}; 
        ///Enable rising edge interrupt for P2[20]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p220er{}; 
        ///Enable rising edge interrupt for P2[21]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p221er{}; 
        ///Enable rising edge interrupt for P2[22]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p222er{}; 
        ///Enable rising edge interrupt for P2[23]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p223er{}; 
        ///Enable rising edge interrupt for P2[24]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p224er{}; 
        ///Enable rising edge interrupt for P2[25]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p225er{}; 
        ///Enable rising edge interrupt for P2[26]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p226er{}; 
        ///Enable rising edge interrupt for P2[27]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p227er{}; 
        ///Enable rising edge interrupt for P2[28]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p228er{}; 
        ///Enable rising edge interrupt for P2[29]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p229er{}; 
        ///Enable rising edge interrupt for P2[30]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p230er{}; 
        ///Enable rising edge interrupt for P2[31]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p231er{}; 
    }
    namespace Noneenf2{    ///<GPIO Interrupt Enable for Falling edge for Port 0.
        using Addr = Register::Address<0x400280b4,0x00000000,0,unsigned>;
        ///Enable falling edge interrupt for P2[0]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20ef{}; 
        ///Enable falling edge interrupt for P2[1]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21ef{}; 
        ///Enable falling edge interrupt for P2[2]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22ef{}; 
        ///Enable falling edge interrupt for P2[3]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23ef{}; 
        ///Enable falling edge interrupt for P2[4]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24ef{}; 
        ///Enable falling edge interrupt for P2[5]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25ef{}; 
        ///Enable falling edge interrupt for P2[6]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26ef{}; 
        ///Enable falling edge interrupt for P2[7]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p27ef{}; 
        ///Enable falling edge interrupt for P2[8]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p28ef{}; 
        ///Enable falling edge interrupt for P2[9]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p29ef{}; 
        ///Enable falling edge interrupt for P2[10]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p210ef{}; 
        ///Enable falling edge interrupt for P2[11]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p211ef{}; 
        ///Enable falling edge interrupt for P2[12]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p212ef{}; 
        ///Enable falling edge interrupt for P2[13]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p213ef{}; 
        ///Enable falling edge interrupt for P2[14]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p214ef{}; 
        ///Enable falling edge interrupt for P2[15]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p215ef{}; 
        ///Enable falling edge interrupt for P2[16]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p216ef{}; 
        ///Enable falling edge interrupt for P2[17]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p217ef{}; 
        ///Enable falling edge interrupt for P2[18]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p218ef{}; 
        ///Enable falling edge interrupt for P2[19]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p219ef{}; 
        ///Enable falling edge interrupt for P2[20]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p220ef{}; 
        ///Enable falling edge interrupt for P2[21]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p221ef{}; 
        ///Enable falling edge interrupt for P2[22]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p222ef{}; 
        ///Enable falling edge interrupt for P2[23]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p223ef{}; 
        ///Enable falling edge interrupt for P2[24]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p224ef{}; 
        ///Enable falling edge interrupt for P2[25]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p225ef{}; 
        ///Enable falling edge interrupt for P2[26]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p226ef{}; 
        ///Enable falling edge interrupt for P2[27]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p227ef{}; 
        ///Enable falling edge interrupt for P2[28]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p228ef{}; 
        ///Enable falling edge interrupt for P2[29]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p229ef{}; 
        ///Enable falling edge interrupt for P2[30]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p230ef{}; 
        ///Enable falling edge interrupt for P2[31]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> p231ef{}; 
    }
}
