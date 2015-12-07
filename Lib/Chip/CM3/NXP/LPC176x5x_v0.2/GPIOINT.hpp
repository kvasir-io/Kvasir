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
            constexpr Register::FieldValue<decltype(p0int),P0intVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(p0int),P0intVal::atLeastOnePending> atLeastOnePending{};
        }
        ///Port 2 GPIO interrupt pending.
        enum class P2intVal {
            noPendingInterrupt=0x00000000,     ///<No pending interrupts on Port 2.
            atLeastOnePending=0x00000001,     ///<At least one pending interrupt on Port 2.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,P2intVal> p2int{}; 
        namespace P2intValC{
            constexpr Register::FieldValue<decltype(p2int),P2intVal::noPendingInterrupt> noPendingInterrupt{};
            constexpr Register::FieldValue<decltype(p2int),P2intVal::atLeastOnePending> atLeastOnePending{};
        }
    }
    namespace Nonestatr0{    ///<GPIO Interrupt Status for Rising edge for Port 0.
        using Addr = Register::Address<0x40028084,0x80000000,0,unsigned>;
        ///Status of Rising Edge Interrupt for P0[0]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00rei{}; 
        namespace P00reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[1]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01rei{}; 
        namespace P01reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[2]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02rei{}; 
        namespace P02reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[3]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03rei{}; 
        namespace P03reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[4]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04rei{}; 
        namespace P04reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[5]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05rei{}; 
        namespace P05reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[6]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06rei{}; 
        namespace P06reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[7]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07rei{}; 
        namespace P07reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[8]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08rei{}; 
        namespace P08reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[9]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09rei{}; 
        namespace P09reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[10]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p010rei{}; 
        namespace P010reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[11]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p011rei{}; 
        namespace P011reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[12]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p012rei{}; 
        namespace P012reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[13]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p013rei{}; 
        namespace P013reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[14]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p014rei{}; 
        namespace P014reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[15]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p015rei{}; 
        namespace P015reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[16]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p016rei{}; 
        namespace P016reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[17]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p017rei{}; 
        namespace P017reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[18]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p018rei{}; 
        namespace P018reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[19]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p019rei{}; 
        namespace P019reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[20]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p020rei{}; 
        namespace P020reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[21]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p021rei{}; 
        namespace P021reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[22]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p022rei{}; 
        namespace P022reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[23]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p023rei{}; 
        namespace P023reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[24]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p024rei{}; 
        namespace P024reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[25]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p025rei{}; 
        namespace P025reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[26]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p026rei{}; 
        namespace P026reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[27]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p027rei{}; 
        namespace P027reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[28]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p028rei{}; 
        namespace P028reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[29]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p029rei{}; 
        namespace P029reiValC{
        }
        ///Status of Rising Edge Interrupt for P0[30]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p030rei{}; 
        namespace P030reiValC{
        }
    }
    namespace Nonestatf0{    ///<GPIO Interrupt Status for Falling edge for Port 0.
        using Addr = Register::Address<0x40028088,0x80000000,0,unsigned>;
        ///Status of Falling Edge Interrupt for P0[0]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00fei{}; 
        namespace P00feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[1]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01fei{}; 
        namespace P01feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[2]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02fei{}; 
        namespace P02feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[3]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03fei{}; 
        namespace P03feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[4]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04fei{}; 
        namespace P04feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[5]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05fei{}; 
        namespace P05feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[6]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06fei{}; 
        namespace P06feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[7]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07fei{}; 
        namespace P07feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[8]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08fei{}; 
        namespace P08feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[9]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09fei{}; 
        namespace P09feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[10]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p010fei{}; 
        namespace P010feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[11]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p011fei{}; 
        namespace P011feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[12]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p012fei{}; 
        namespace P012feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[13]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p013fei{}; 
        namespace P013feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[14]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p014fei{}; 
        namespace P014feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[15]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p015fei{}; 
        namespace P015feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[16]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p016fei{}; 
        namespace P016feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[17]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p017fei{}; 
        namespace P017feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[18]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p018fei{}; 
        namespace P018feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[19]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p019fei{}; 
        namespace P019feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[20]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p020fei{}; 
        namespace P020feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[21]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p021fei{}; 
        namespace P021feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[22]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p022fei{}; 
        namespace P022feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[23]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p023fei{}; 
        namespace P023feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[24]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p024fei{}; 
        namespace P024feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[25]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p025fei{}; 
        namespace P025feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[26]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p026fei{}; 
        namespace P026feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[27]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p027fei{}; 
        namespace P027feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[28]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p028fei{}; 
        namespace P028feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[29]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p029fei{}; 
        namespace P029feiValC{
        }
        ///Status of Falling Edge Interrupt for P0[30]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p030fei{}; 
        namespace P030feiValC{
        }
    }
    namespace Noneclr0{    ///<GPIO Interrupt Clear.
        using Addr = Register::Address<0x4002808c,0x80000000,0,unsigned>;
        ///Clear GPIO port Interrupts for P0[0]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00ci{}; 
        namespace P00ciValC{
        }
        ///Clear GPIO port Interrupts for P0[1]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01ci{}; 
        namespace P01ciValC{
        }
        ///Clear GPIO port Interrupts for P0[2]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02ci{}; 
        namespace P02ciValC{
        }
        ///Clear GPIO port Interrupts for P0[3]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03ci{}; 
        namespace P03ciValC{
        }
        ///Clear GPIO port Interrupts for P0[4]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04ci{}; 
        namespace P04ciValC{
        }
        ///Clear GPIO port Interrupts for P0[5]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05ci{}; 
        namespace P05ciValC{
        }
        ///Clear GPIO port Interrupts for P0[6]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06ci{}; 
        namespace P06ciValC{
        }
        ///Clear GPIO port Interrupts for P0[7]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07ci{}; 
        namespace P07ciValC{
        }
        ///Clear GPIO port Interrupts for P0[8]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08ci{}; 
        namespace P08ciValC{
        }
        ///Clear GPIO port Interrupts for P0[9]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09ci{}; 
        namespace P09ciValC{
        }
        ///Clear GPIO port Interrupts for P0[10]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p010ci{}; 
        namespace P010ciValC{
        }
        ///Clear GPIO port Interrupts for P0[11]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p011ci{}; 
        namespace P011ciValC{
        }
        ///Clear GPIO port Interrupts for P0[12]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p012ci{}; 
        namespace P012ciValC{
        }
        ///Clear GPIO port Interrupts for P0[13]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p013ci{}; 
        namespace P013ciValC{
        }
        ///Clear GPIO port Interrupts for P0[14]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p014ci{}; 
        namespace P014ciValC{
        }
        ///Clear GPIO port Interrupts for P0[15]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p015ci{}; 
        namespace P015ciValC{
        }
        ///Clear GPIO port Interrupts for P0[16]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p016ci{}; 
        namespace P016ciValC{
        }
        ///Clear GPIO port Interrupts for P0[17]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p017ci{}; 
        namespace P017ciValC{
        }
        ///Clear GPIO port Interrupts for P0[18]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p018ci{}; 
        namespace P018ciValC{
        }
        ///Clear GPIO port Interrupts for P0[19]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p019ci{}; 
        namespace P019ciValC{
        }
        ///Clear GPIO port Interrupts for P0[20]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p020ci{}; 
        namespace P020ciValC{
        }
        ///Clear GPIO port Interrupts for P0[21]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p021ci{}; 
        namespace P021ciValC{
        }
        ///Clear GPIO port Interrupts for P0[22]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p022ci{}; 
        namespace P022ciValC{
        }
        ///Clear GPIO port Interrupts for P0[23]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p023ci{}; 
        namespace P023ciValC{
        }
        ///Clear GPIO port Interrupts for P0[24]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p024ci{}; 
        namespace P024ciValC{
        }
        ///Clear GPIO port Interrupts for P0[25]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p025ci{}; 
        namespace P025ciValC{
        }
        ///Clear GPIO port Interrupts for P0[26]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p026ci{}; 
        namespace P026ciValC{
        }
        ///Clear GPIO port Interrupts for P0[27]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p027ci{}; 
        namespace P027ciValC{
        }
        ///Clear GPIO port Interrupts for P0[28]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p028ci{}; 
        namespace P028ciValC{
        }
        ///Clear GPIO port Interrupts for P0[29]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p029ci{}; 
        namespace P029ciValC{
        }
        ///Clear GPIO port Interrupts for P0[30]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p030ci{}; 
        namespace P030ciValC{
        }
    }
    namespace Noneenr0{    ///<GPIO Interrupt Enable for Rising edge for Port 0.
        using Addr = Register::Address<0x40028090,0x80000000,0,unsigned>;
        ///Enable rising edge interrupt for P0[0]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00er{}; 
        namespace P00erValC{
        }
        ///Enable rising edge interrupt for P0[1]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01er{}; 
        namespace P01erValC{
        }
        ///Enable rising edge interrupt for P0[2]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02er{}; 
        namespace P02erValC{
        }
        ///Enable rising edge interrupt for P0[3]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03er{}; 
        namespace P03erValC{
        }
        ///Enable rising edge interrupt for P0[4]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04er{}; 
        namespace P04erValC{
        }
        ///Enable rising edge interrupt for P0[5]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05er{}; 
        namespace P05erValC{
        }
        ///Enable rising edge interrupt for P0[6]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06er{}; 
        namespace P06erValC{
        }
        ///Enable rising edge interrupt for P0[7]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07er{}; 
        namespace P07erValC{
        }
        ///Enable rising edge interrupt for P0[8]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08er{}; 
        namespace P08erValC{
        }
        ///Enable rising edge interrupt for P0[9]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09er{}; 
        namespace P09erValC{
        }
        ///Enable rising edge interrupt for P0[10]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p010er{}; 
        namespace P010erValC{
        }
        ///Enable rising edge interrupt for P0[11]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p011er{}; 
        namespace P011erValC{
        }
        ///Enable rising edge interrupt for P0[12]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p012er{}; 
        namespace P012erValC{
        }
        ///Enable rising edge interrupt for P0[13]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p013er{}; 
        namespace P013erValC{
        }
        ///Enable rising edge interrupt for P0[14]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p014er{}; 
        namespace P014erValC{
        }
        ///Enable rising edge interrupt for P0[15]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p015er{}; 
        namespace P015erValC{
        }
        ///Enable rising edge interrupt for P0[16]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p016er{}; 
        namespace P016erValC{
        }
        ///Enable rising edge interrupt for P0[17]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p017er{}; 
        namespace P017erValC{
        }
        ///Enable rising edge interrupt for P0[18]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p018er{}; 
        namespace P018erValC{
        }
        ///Enable rising edge interrupt for P0[19]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p019er{}; 
        namespace P019erValC{
        }
        ///Enable rising edge interrupt for P0[20]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p020er{}; 
        namespace P020erValC{
        }
        ///Enable rising edge interrupt for P0[21]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p021er{}; 
        namespace P021erValC{
        }
        ///Enable rising edge interrupt for P0[22]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p022er{}; 
        namespace P022erValC{
        }
        ///Enable rising edge interrupt for P0[23]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p023er{}; 
        namespace P023erValC{
        }
        ///Enable rising edge interrupt for P0[24]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p024er{}; 
        namespace P024erValC{
        }
        ///Enable rising edge interrupt for P0[25]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p025er{}; 
        namespace P025erValC{
        }
        ///Enable rising edge interrupt for P0[26]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p026er{}; 
        namespace P026erValC{
        }
        ///Enable rising edge interrupt for P0[27]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p027er{}; 
        namespace P027erValC{
        }
        ///Enable rising edge interrupt for P0[28]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p028er{}; 
        namespace P028erValC{
        }
        ///Enable rising edge interrupt for P0[29]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p029er{}; 
        namespace P029erValC{
        }
        ///Enable rising edge interrupt for P0[30]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p030er{}; 
        namespace P030erValC{
        }
    }
    namespace Noneenf0{    ///<GPIO Interrupt Enable for Falling edge for Port 0.
        using Addr = Register::Address<0x40028094,0x80000000,0,unsigned>;
        ///Enable falling edge interrupt for P0[0]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p00ef{}; 
        namespace P00efValC{
        }
        ///Enable falling edge interrupt for P0[1]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p01ef{}; 
        namespace P01efValC{
        }
        ///Enable falling edge interrupt for P0[2]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p02ef{}; 
        namespace P02efValC{
        }
        ///Enable falling edge interrupt for P0[3]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p03ef{}; 
        namespace P03efValC{
        }
        ///Enable falling edge interrupt for P0[4]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p04ef{}; 
        namespace P04efValC{
        }
        ///Enable falling edge interrupt for P0[5]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p05ef{}; 
        namespace P05efValC{
        }
        ///Enable falling edge interrupt for P0[6]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p06ef{}; 
        namespace P06efValC{
        }
        ///Enable falling edge interrupt for P0[7]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p07ef{}; 
        namespace P07efValC{
        }
        ///Enable falling edge interrupt for P0[8]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p08ef{}; 
        namespace P08efValC{
        }
        ///Enable falling edge interrupt for P0[9]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p09ef{}; 
        namespace P09efValC{
        }
        ///Enable falling edge interrupt for P0[10]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p010ef{}; 
        namespace P010efValC{
        }
        ///Enable falling edge interrupt for P0[11]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p011ef{}; 
        namespace P011efValC{
        }
        ///Enable falling edge interrupt for P0[12]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p012ef{}; 
        namespace P012efValC{
        }
        ///Enable falling edge interrupt for P0[13]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p013ef{}; 
        namespace P013efValC{
        }
        ///Enable falling edge interrupt for P0[14]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> p014ef{}; 
        namespace P014efValC{
        }
        ///Enable falling edge interrupt for P0[15]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> p015ef{}; 
        namespace P015efValC{
        }
        ///Enable falling edge interrupt for P0[16]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> p016ef{}; 
        namespace P016efValC{
        }
        ///Enable falling edge interrupt for P0[17]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> p017ef{}; 
        namespace P017efValC{
        }
        ///Enable falling edge interrupt for P0[18]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> p018ef{}; 
        namespace P018efValC{
        }
        ///Enable falling edge interrupt for P0[19]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> p019ef{}; 
        namespace P019efValC{
        }
        ///Enable falling edge interrupt for P0[20]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> p020ef{}; 
        namespace P020efValC{
        }
        ///Enable falling edge interrupt for P0[21]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> p021ef{}; 
        namespace P021efValC{
        }
        ///Enable falling edge interrupt for P0[22]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> p022ef{}; 
        namespace P022efValC{
        }
        ///Enable falling edge interrupt for P0[23]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> p023ef{}; 
        namespace P023efValC{
        }
        ///Enable falling edge interrupt for P0[24]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> p024ef{}; 
        namespace P024efValC{
        }
        ///Enable falling edge interrupt for P0[25]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> p025ef{}; 
        namespace P025efValC{
        }
        ///Enable falling edge interrupt for P0[26]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> p026ef{}; 
        namespace P026efValC{
        }
        ///Enable falling edge interrupt for P0[27]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> p027ef{}; 
        namespace P027efValC{
        }
        ///Enable falling edge interrupt for P0[28]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> p028ef{}; 
        namespace P028efValC{
        }
        ///Enable falling edge interrupt for P0[29]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> p029ef{}; 
        namespace P029efValC{
        }
        ///Enable falling edge interrupt for P0[30]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> p030ef{}; 
        namespace P030efValC{
        }
    }
    namespace Nonestatr2{    ///<GPIO Interrupt Status for Rising edge for Port 0.
        using Addr = Register::Address<0x400280a4,0xffffc000,0,unsigned>;
        ///Status of Rising Edge Interrupt for P2[0]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20rei{}; 
        namespace P20reiValC{
        }
        ///Status of Rising Edge Interrupt for P2[1]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21rei{}; 
        namespace P21reiValC{
        }
        ///Status of Rising Edge Interrupt for P2[2]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22rei{}; 
        namespace P22reiValC{
        }
        ///Status of Rising Edge Interrupt for P2[3]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23rei{}; 
        namespace P23reiValC{
        }
        ///Status of Rising Edge Interrupt for P2[4]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24rei{}; 
        namespace P24reiValC{
        }
        ///Status of Rising Edge Interrupt for P2[5]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25rei{}; 
        namespace P25reiValC{
        }
        ///Status of Rising Edge Interrupt for P2[6]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26rei{}; 
        namespace P26reiValC{
        }
        ///Status of Rising Edge Interrupt for P2[7]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p27rei{}; 
        namespace P27reiValC{
        }
        ///Status of Rising Edge Interrupt for P2[8]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p28rei{}; 
        namespace P28reiValC{
        }
        ///Status of Rising Edge Interrupt for P2[9]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p29rei{}; 
        namespace P29reiValC{
        }
        ///Status of Rising Edge Interrupt for P2[10]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p210rei{}; 
        namespace P210reiValC{
        }
        ///Status of Rising Edge Interrupt for P2[11]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p211rei{}; 
        namespace P211reiValC{
        }
        ///Status of Rising Edge Interrupt for P2[12]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p212rei{}; 
        namespace P212reiValC{
        }
        ///Status of Rising Edge Interrupt for P2[13]. 0 = No rising edge detected. 1 = Rising edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p213rei{}; 
        namespace P213reiValC{
        }
    }
    namespace Nonestatf2{    ///<GPIO Interrupt Status for Falling edge for Port 0.
        using Addr = Register::Address<0x400280a8,0xffffc000,0,unsigned>;
        ///Status of Falling Edge Interrupt for P2[0]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20fei{}; 
        namespace P20feiValC{
        }
        ///Status of Falling Edge Interrupt for P2[1]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21fei{}; 
        namespace P21feiValC{
        }
        ///Status of Falling Edge Interrupt for P2[2]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22fei{}; 
        namespace P22feiValC{
        }
        ///Status of Falling Edge Interrupt for P2[3]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23fei{}; 
        namespace P23feiValC{
        }
        ///Status of Falling Edge Interrupt for P2[4]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24fei{}; 
        namespace P24feiValC{
        }
        ///Status of Falling Edge Interrupt for P2[5]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25fei{}; 
        namespace P25feiValC{
        }
        ///Status of Falling Edge Interrupt for P2[6]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26fei{}; 
        namespace P26feiValC{
        }
        ///Status of Falling Edge Interrupt for P2[7]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p27fei{}; 
        namespace P27feiValC{
        }
        ///Status of Falling Edge Interrupt for P2[8]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p28fei{}; 
        namespace P28feiValC{
        }
        ///Status of Falling Edge Interrupt for P2[9]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p29fei{}; 
        namespace P29feiValC{
        }
        ///Status of Falling Edge Interrupt for P2[10]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p210fei{}; 
        namespace P210feiValC{
        }
        ///Status of Falling Edge Interrupt for P2[11]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p211fei{}; 
        namespace P211feiValC{
        }
        ///Status of Falling Edge Interrupt for P2[12]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p212fei{}; 
        namespace P212feiValC{
        }
        ///Status of Falling Edge Interrupt for P2[13]. 0 = No falling edge detected. 1 = Falling edge interrupt generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p213fei{}; 
        namespace P213feiValC{
        }
    }
    namespace Noneclr2{    ///<GPIO Interrupt Clear.
        using Addr = Register::Address<0x400280ac,0xffffc000,0,unsigned>;
        ///Clear GPIO port Interrupts for P2[0]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20ci{}; 
        namespace P20ciValC{
        }
        ///Clear GPIO port Interrupts for P2[1]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21ci{}; 
        namespace P21ciValC{
        }
        ///Clear GPIO port Interrupts for P2[2]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22ci{}; 
        namespace P22ciValC{
        }
        ///Clear GPIO port Interrupts for P2[3]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23ci{}; 
        namespace P23ciValC{
        }
        ///Clear GPIO port Interrupts for P2[4]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24ci{}; 
        namespace P24ciValC{
        }
        ///Clear GPIO port Interrupts for P2[5]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25ci{}; 
        namespace P25ciValC{
        }
        ///Clear GPIO port Interrupts for P2[6]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26ci{}; 
        namespace P26ciValC{
        }
        ///Clear GPIO port Interrupts for P2[7]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p27ci{}; 
        namespace P27ciValC{
        }
        ///Clear GPIO port Interrupts for P2[8]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p28ci{}; 
        namespace P28ciValC{
        }
        ///Clear GPIO port Interrupts for P2[9]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p29ci{}; 
        namespace P29ciValC{
        }
        ///Clear GPIO port Interrupts for P2[10]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p210ci{}; 
        namespace P210ciValC{
        }
        ///Clear GPIO port Interrupts for P2[11]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p211ci{}; 
        namespace P211ciValC{
        }
        ///Clear GPIO port Interrupts for P2[12]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p212ci{}; 
        namespace P212ciValC{
        }
        ///Clear GPIO port Interrupts for P2[13]. 0 = No effect. 1 = Clear corresponding bits in IOnINTSTATR and IOnSTATF.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p213ci{}; 
        namespace P213ciValC{
        }
    }
    namespace Noneenr2{    ///<GPIO Interrupt Enable for Rising edge for Port 0.
        using Addr = Register::Address<0x400280b0,0xffffc000,0,unsigned>;
        ///Enable rising edge interrupt for P2[0]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20er{}; 
        namespace P20erValC{
        }
        ///Enable rising edge interrupt for P2[1]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21er{}; 
        namespace P21erValC{
        }
        ///Enable rising edge interrupt for P2[2]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22er{}; 
        namespace P22erValC{
        }
        ///Enable rising edge interrupt for P2[3]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23er{}; 
        namespace P23erValC{
        }
        ///Enable rising edge interrupt for P2[4]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24er{}; 
        namespace P24erValC{
        }
        ///Enable rising edge interrupt for P2[5]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25er{}; 
        namespace P25erValC{
        }
        ///Enable rising edge interrupt for P2[6]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26er{}; 
        namespace P26erValC{
        }
        ///Enable rising edge interrupt for P2[7]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p27er{}; 
        namespace P27erValC{
        }
        ///Enable rising edge interrupt for P2[8]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p28er{}; 
        namespace P28erValC{
        }
        ///Enable rising edge interrupt for P2[9]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p29er{}; 
        namespace P29erValC{
        }
        ///Enable rising edge interrupt for P2[10]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p210er{}; 
        namespace P210erValC{
        }
        ///Enable rising edge interrupt for P2[11]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p211er{}; 
        namespace P211erValC{
        }
        ///Enable rising edge interrupt for P2[12]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p212er{}; 
        namespace P212erValC{
        }
        ///Enable rising edge interrupt for P2[13]. 0 = Disable rising edge interrupt. 1 = Enable rising edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p213er{}; 
        namespace P213erValC{
        }
    }
    namespace Noneenf2{    ///<GPIO Interrupt Enable for Falling edge for Port 0.
        using Addr = Register::Address<0x400280b4,0xffffc000,0,unsigned>;
        ///Enable falling edge interrupt for P2[0]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> p20ef{}; 
        namespace P20efValC{
        }
        ///Enable falling edge interrupt for P2[1]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> p21ef{}; 
        namespace P21efValC{
        }
        ///Enable falling edge interrupt for P2[2]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> p22ef{}; 
        namespace P22efValC{
        }
        ///Enable falling edge interrupt for P2[3]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p23ef{}; 
        namespace P23efValC{
        }
        ///Enable falling edge interrupt for P2[4]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> p24ef{}; 
        namespace P24efValC{
        }
        ///Enable falling edge interrupt for P2[5]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> p25ef{}; 
        namespace P25efValC{
        }
        ///Enable falling edge interrupt for P2[6]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> p26ef{}; 
        namespace P26efValC{
        }
        ///Enable falling edge interrupt for P2[7]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> p27ef{}; 
        namespace P27efValC{
        }
        ///Enable falling edge interrupt for P2[8]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> p28ef{}; 
        namespace P28efValC{
        }
        ///Enable falling edge interrupt for P2[9]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> p29ef{}; 
        namespace P29efValC{
        }
        ///Enable falling edge interrupt for P2[10]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> p210ef{}; 
        namespace P210efValC{
        }
        ///Enable falling edge interrupt for P2[11]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> p211ef{}; 
        namespace P211efValC{
        }
        ///Enable falling edge interrupt for P2[12]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> p212ef{}; 
        namespace P212efValC{
        }
        ///Enable falling edge interrupt for P2[13]. 0 = Disable falling edge interrupt. 1 = Enable falling edge interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> p213ef{}; 
        namespace P213efValC{
        }
    }
}
