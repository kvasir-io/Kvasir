#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Pulse Width Modulator with nano edge placement
    namespace PwmaSm0cnt{    ///<Counter Register
        using Addr = Register::Address<0x40033000,0xffff0000,0,unsigned>;
        ///Counter Register Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace PwmaSm1cnt{    ///<Counter Register
        using Addr = Register::Address<0x40033060,0xffff0000,0,unsigned>;
        ///Counter Register Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace PwmaSm2cnt{    ///<Counter Register
        using Addr = Register::Address<0x400330c0,0xffff0000,0,unsigned>;
        ///Counter Register Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace PwmaSm3cnt{    ///<Counter Register
        using Addr = Register::Address<0x40033120,0xffff0000,0,unsigned>;
        ///Counter Register Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace PwmaSm0init{    ///<Initial Count Register
        using Addr = Register::Address<0x40033002,0xffff0000,0,unsigned>;
        ///Initial Count Register Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace PwmaSm1init{    ///<Initial Count Register
        using Addr = Register::Address<0x40033062,0xffff0000,0,unsigned>;
        ///Initial Count Register Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace PwmaSm2init{    ///<Initial Count Register
        using Addr = Register::Address<0x400330c2,0xffff0000,0,unsigned>;
        ///Initial Count Register Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace PwmaSm3init{    ///<Initial Count Register
        using Addr = Register::Address<0x40033122,0xffff0000,0,unsigned>;
        ///Initial Count Register Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace PwmaSm0ctrl2{    ///<Control 2 Register
        using Addr = Register::Address<0x40033004,0xffff0000,0,unsigned>;
        ///Clock Source Select
        enum class clkSelVal {
            v00=0x00000000,     ///<The IPBus clock is used as the clock for the local prescaler and counter.
            v01=0x00000001,     ///<EXT_CLK is used as the clock for the local prescaler and counter.
            v10=0x00000002,     ///<Submodule 0's clock (AUX_CLK) is used as the source clock for the local prescaler and counter. This setting should not be used in submodule 0 as it will force the clock to logic 0.
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v00> v00{};
            constexpr MPL::Value<clkSelVal,clkSelVal::v01> v01{};
            constexpr MPL::Value<clkSelVal,clkSelVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
        ///Reload Source Select
        enum class reloadSelVal {
            v0=0x00000000,     ///<The local RELOAD signal is used to reload registers.
            v1=0x00000001,     ///<The master RELOAD signal (from submodule 0) is used to reload registers. This setting should not be used in submodule 0 as it will force the RELOAD signal to logic 0.
        };
        namespace reloadSelValC{
            constexpr MPL::Value<reloadSelVal,reloadSelVal::v0> v0{};
            constexpr MPL::Value<reloadSelVal,reloadSelVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,reloadSelVal> reloadSel{}; 
        ///This read/write bit determines the source of the FORCE OUTPUT signal for this submodule.
        enum class forceSelVal {
            v000=0x00000000,     ///<The local force signal, CTRL2[FORCE], from this submodule is used to force updates.
            v001=0x00000001,     ///<The master force signal from submodule 0 is used to force updates. This setting should not be used in submodule 0 as it will hold the FORCE OUTPUT signal to logic 0.
            v010=0x00000002,     ///<The local reload signal from this submodule is used to force updates without regard to the state of LDOK.
            v011=0x00000003,     ///<The master reload signal from submodule0 is used to force updates if LDOK is set. This setting should not be used in submodule0 as it will hold the FORCE OUTPUT signal to logic 0.
            v100=0x00000004,     ///<The local sync signal from this submodule is used to force updates.
            v101=0x00000005,     ///<The master sync signal from submodule0 is used to force updates. This setting should not be used in submodule0 as it will hold the FORCE OUTPUT signal to logic 0.
            v110=0x00000006,     ///<The external force signal, EXT_FORCE, from outside the PWM module causes updates.
            v111=0x00000007,     ///<The external sync signal, EXT_SYNC, from outside the PWM module causes updates.
        };
        namespace forceSelValC{
            constexpr MPL::Value<forceSelVal,forceSelVal::v000> v000{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v001> v001{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v010> v010{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v011> v011{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v100> v100{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v101> v101{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v110> v110{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,forceSelVal> forceSel{}; 
        ///Force Initialization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> force{}; 
        ///Force Initialization Enable
        enum class frcenVal {
            v0=0x00000000,     ///<Initialization from a FORCE_OUT event is disabled.
            v1=0x00000001,     ///<Initialization from a FORCE_OUT event is enabled.
        };
        namespace frcenValC{
            constexpr MPL::Value<frcenVal,frcenVal::v0> v0{};
            constexpr MPL::Value<frcenVal,frcenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,frcenVal> frcen{}; 
        ///Initialization Control Select
        enum class initSelVal {
            v00=0x00000000,     ///<Local sync (PWM_X) causes initialization.
            v01=0x00000001,     ///<Master reload from submodule 0 causes initialization. This setting should not be used in submodule 0 as it will force the INIT signal to logic 0. The submodule counter will only reinitialize when a master reload occurs.
            v10=0x00000002,     ///<Master sync from submodule 0 causes initialization. This setting should not be used in submodule 0 as it will force the INIT signal to logic 0.
            v11=0x00000003,     ///<EXT_SYNC causes initialization.
        };
        namespace initSelValC{
            constexpr MPL::Value<initSelVal,initSelVal::v00> v00{};
            constexpr MPL::Value<initSelVal,initSelVal::v01> v01{};
            constexpr MPL::Value<initSelVal,initSelVal::v10> v10{};
            constexpr MPL::Value<initSelVal,initSelVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,initSelVal> initSel{}; 
        ///PWM_X Initial Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pwmxInit{}; 
        ///PWM45 Initial Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pwm45Init{}; 
        ///PWM23 Initial Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pwm23Init{}; 
        ///Independent or Complementary Pair Operation
        enum class indepVal {
            v0=0x00000000,     ///<PWM_A and PWM_B form a complementary PWM pair.
            v1=0x00000001,     ///<PWM_A and PWM_B outputs are independent PWMs.
        };
        namespace indepValC{
            constexpr MPL::Value<indepVal,indepVal::v0> v0{};
            constexpr MPL::Value<indepVal,indepVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,indepVal> indep{}; 
        ///WAIT Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///Debug Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dbgen{}; 
    }
    namespace PwmaSm1ctrl2{    ///<Control 2 Register
        using Addr = Register::Address<0x40033064,0xffff0000,0,unsigned>;
        ///Clock Source Select
        enum class clkSelVal {
            v00=0x00000000,     ///<The IPBus clock is used as the clock for the local prescaler and counter.
            v01=0x00000001,     ///<EXT_CLK is used as the clock for the local prescaler and counter.
            v10=0x00000002,     ///<Submodule 0's clock (AUX_CLK) is used as the source clock for the local prescaler and counter. This setting should not be used in submodule 0 as it will force the clock to logic 0.
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v00> v00{};
            constexpr MPL::Value<clkSelVal,clkSelVal::v01> v01{};
            constexpr MPL::Value<clkSelVal,clkSelVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
        ///Reload Source Select
        enum class reloadSelVal {
            v0=0x00000000,     ///<The local RELOAD signal is used to reload registers.
            v1=0x00000001,     ///<The master RELOAD signal (from submodule 0) is used to reload registers. This setting should not be used in submodule 0 as it will force the RELOAD signal to logic 0.
        };
        namespace reloadSelValC{
            constexpr MPL::Value<reloadSelVal,reloadSelVal::v0> v0{};
            constexpr MPL::Value<reloadSelVal,reloadSelVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,reloadSelVal> reloadSel{}; 
        ///This read/write bit determines the source of the FORCE OUTPUT signal for this submodule.
        enum class forceSelVal {
            v000=0x00000000,     ///<The local force signal, CTRL2[FORCE], from this submodule is used to force updates.
            v001=0x00000001,     ///<The master force signal from submodule 0 is used to force updates. This setting should not be used in submodule 0 as it will hold the FORCE OUTPUT signal to logic 0.
            v010=0x00000002,     ///<The local reload signal from this submodule is used to force updates without regard to the state of LDOK.
            v011=0x00000003,     ///<The master reload signal from submodule0 is used to force updates if LDOK is set. This setting should not be used in submodule0 as it will hold the FORCE OUTPUT signal to logic 0.
            v100=0x00000004,     ///<The local sync signal from this submodule is used to force updates.
            v101=0x00000005,     ///<The master sync signal from submodule0 is used to force updates. This setting should not be used in submodule0 as it will hold the FORCE OUTPUT signal to logic 0.
            v110=0x00000006,     ///<The external force signal, EXT_FORCE, from outside the PWM module causes updates.
            v111=0x00000007,     ///<The external sync signal, EXT_SYNC, from outside the PWM module causes updates.
        };
        namespace forceSelValC{
            constexpr MPL::Value<forceSelVal,forceSelVal::v000> v000{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v001> v001{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v010> v010{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v011> v011{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v100> v100{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v101> v101{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v110> v110{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,forceSelVal> forceSel{}; 
        ///Force Initialization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> force{}; 
        ///Force Initialization Enable
        enum class frcenVal {
            v0=0x00000000,     ///<Initialization from a FORCE_OUT event is disabled.
            v1=0x00000001,     ///<Initialization from a FORCE_OUT event is enabled.
        };
        namespace frcenValC{
            constexpr MPL::Value<frcenVal,frcenVal::v0> v0{};
            constexpr MPL::Value<frcenVal,frcenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,frcenVal> frcen{}; 
        ///Initialization Control Select
        enum class initSelVal {
            v00=0x00000000,     ///<Local sync (PWM_X) causes initialization.
            v01=0x00000001,     ///<Master reload from submodule 0 causes initialization. This setting should not be used in submodule 0 as it will force the INIT signal to logic 0. The submodule counter will only reinitialize when a master reload occurs.
            v10=0x00000002,     ///<Master sync from submodule 0 causes initialization. This setting should not be used in submodule 0 as it will force the INIT signal to logic 0.
            v11=0x00000003,     ///<EXT_SYNC causes initialization.
        };
        namespace initSelValC{
            constexpr MPL::Value<initSelVal,initSelVal::v00> v00{};
            constexpr MPL::Value<initSelVal,initSelVal::v01> v01{};
            constexpr MPL::Value<initSelVal,initSelVal::v10> v10{};
            constexpr MPL::Value<initSelVal,initSelVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,initSelVal> initSel{}; 
        ///PWM_X Initial Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pwmxInit{}; 
        ///PWM45 Initial Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pwm45Init{}; 
        ///PWM23 Initial Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pwm23Init{}; 
        ///Independent or Complementary Pair Operation
        enum class indepVal {
            v0=0x00000000,     ///<PWM_A and PWM_B form a complementary PWM pair.
            v1=0x00000001,     ///<PWM_A and PWM_B outputs are independent PWMs.
        };
        namespace indepValC{
            constexpr MPL::Value<indepVal,indepVal::v0> v0{};
            constexpr MPL::Value<indepVal,indepVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,indepVal> indep{}; 
        ///WAIT Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///Debug Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dbgen{}; 
    }
    namespace PwmaSm2ctrl2{    ///<Control 2 Register
        using Addr = Register::Address<0x400330c4,0xffff0000,0,unsigned>;
        ///Clock Source Select
        enum class clkSelVal {
            v00=0x00000000,     ///<The IPBus clock is used as the clock for the local prescaler and counter.
            v01=0x00000001,     ///<EXT_CLK is used as the clock for the local prescaler and counter.
            v10=0x00000002,     ///<Submodule 0's clock (AUX_CLK) is used as the source clock for the local prescaler and counter. This setting should not be used in submodule 0 as it will force the clock to logic 0.
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v00> v00{};
            constexpr MPL::Value<clkSelVal,clkSelVal::v01> v01{};
            constexpr MPL::Value<clkSelVal,clkSelVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
        ///Reload Source Select
        enum class reloadSelVal {
            v0=0x00000000,     ///<The local RELOAD signal is used to reload registers.
            v1=0x00000001,     ///<The master RELOAD signal (from submodule 0) is used to reload registers. This setting should not be used in submodule 0 as it will force the RELOAD signal to logic 0.
        };
        namespace reloadSelValC{
            constexpr MPL::Value<reloadSelVal,reloadSelVal::v0> v0{};
            constexpr MPL::Value<reloadSelVal,reloadSelVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,reloadSelVal> reloadSel{}; 
        ///This read/write bit determines the source of the FORCE OUTPUT signal for this submodule.
        enum class forceSelVal {
            v000=0x00000000,     ///<The local force signal, CTRL2[FORCE], from this submodule is used to force updates.
            v001=0x00000001,     ///<The master force signal from submodule 0 is used to force updates. This setting should not be used in submodule 0 as it will hold the FORCE OUTPUT signal to logic 0.
            v010=0x00000002,     ///<The local reload signal from this submodule is used to force updates without regard to the state of LDOK.
            v011=0x00000003,     ///<The master reload signal from submodule0 is used to force updates if LDOK is set. This setting should not be used in submodule0 as it will hold the FORCE OUTPUT signal to logic 0.
            v100=0x00000004,     ///<The local sync signal from this submodule is used to force updates.
            v101=0x00000005,     ///<The master sync signal from submodule0 is used to force updates. This setting should not be used in submodule0 as it will hold the FORCE OUTPUT signal to logic 0.
            v110=0x00000006,     ///<The external force signal, EXT_FORCE, from outside the PWM module causes updates.
            v111=0x00000007,     ///<The external sync signal, EXT_SYNC, from outside the PWM module causes updates.
        };
        namespace forceSelValC{
            constexpr MPL::Value<forceSelVal,forceSelVal::v000> v000{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v001> v001{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v010> v010{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v011> v011{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v100> v100{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v101> v101{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v110> v110{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,forceSelVal> forceSel{}; 
        ///Force Initialization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> force{}; 
        ///Force Initialization Enable
        enum class frcenVal {
            v0=0x00000000,     ///<Initialization from a FORCE_OUT event is disabled.
            v1=0x00000001,     ///<Initialization from a FORCE_OUT event is enabled.
        };
        namespace frcenValC{
            constexpr MPL::Value<frcenVal,frcenVal::v0> v0{};
            constexpr MPL::Value<frcenVal,frcenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,frcenVal> frcen{}; 
        ///Initialization Control Select
        enum class initSelVal {
            v00=0x00000000,     ///<Local sync (PWM_X) causes initialization.
            v01=0x00000001,     ///<Master reload from submodule 0 causes initialization. This setting should not be used in submodule 0 as it will force the INIT signal to logic 0. The submodule counter will only reinitialize when a master reload occurs.
            v10=0x00000002,     ///<Master sync from submodule 0 causes initialization. This setting should not be used in submodule 0 as it will force the INIT signal to logic 0.
            v11=0x00000003,     ///<EXT_SYNC causes initialization.
        };
        namespace initSelValC{
            constexpr MPL::Value<initSelVal,initSelVal::v00> v00{};
            constexpr MPL::Value<initSelVal,initSelVal::v01> v01{};
            constexpr MPL::Value<initSelVal,initSelVal::v10> v10{};
            constexpr MPL::Value<initSelVal,initSelVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,initSelVal> initSel{}; 
        ///PWM_X Initial Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pwmxInit{}; 
        ///PWM45 Initial Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pwm45Init{}; 
        ///PWM23 Initial Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pwm23Init{}; 
        ///Independent or Complementary Pair Operation
        enum class indepVal {
            v0=0x00000000,     ///<PWM_A and PWM_B form a complementary PWM pair.
            v1=0x00000001,     ///<PWM_A and PWM_B outputs are independent PWMs.
        };
        namespace indepValC{
            constexpr MPL::Value<indepVal,indepVal::v0> v0{};
            constexpr MPL::Value<indepVal,indepVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,indepVal> indep{}; 
        ///WAIT Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///Debug Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dbgen{}; 
    }
    namespace PwmaSm3ctrl2{    ///<Control 2 Register
        using Addr = Register::Address<0x40033124,0xffff0000,0,unsigned>;
        ///Clock Source Select
        enum class clkSelVal {
            v00=0x00000000,     ///<The IPBus clock is used as the clock for the local prescaler and counter.
            v01=0x00000001,     ///<EXT_CLK is used as the clock for the local prescaler and counter.
            v10=0x00000002,     ///<Submodule 0's clock (AUX_CLK) is used as the source clock for the local prescaler and counter. This setting should not be used in submodule 0 as it will force the clock to logic 0.
        };
        namespace clkSelValC{
            constexpr MPL::Value<clkSelVal,clkSelVal::v00> v00{};
            constexpr MPL::Value<clkSelVal,clkSelVal::v01> v01{};
            constexpr MPL::Value<clkSelVal,clkSelVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,clkSelVal> clkSel{}; 
        ///Reload Source Select
        enum class reloadSelVal {
            v0=0x00000000,     ///<The local RELOAD signal is used to reload registers.
            v1=0x00000001,     ///<The master RELOAD signal (from submodule 0) is used to reload registers. This setting should not be used in submodule 0 as it will force the RELOAD signal to logic 0.
        };
        namespace reloadSelValC{
            constexpr MPL::Value<reloadSelVal,reloadSelVal::v0> v0{};
            constexpr MPL::Value<reloadSelVal,reloadSelVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,reloadSelVal> reloadSel{}; 
        ///This read/write bit determines the source of the FORCE OUTPUT signal for this submodule.
        enum class forceSelVal {
            v000=0x00000000,     ///<The local force signal, CTRL2[FORCE], from this submodule is used to force updates.
            v001=0x00000001,     ///<The master force signal from submodule 0 is used to force updates. This setting should not be used in submodule 0 as it will hold the FORCE OUTPUT signal to logic 0.
            v010=0x00000002,     ///<The local reload signal from this submodule is used to force updates without regard to the state of LDOK.
            v011=0x00000003,     ///<The master reload signal from submodule0 is used to force updates if LDOK is set. This setting should not be used in submodule0 as it will hold the FORCE OUTPUT signal to logic 0.
            v100=0x00000004,     ///<The local sync signal from this submodule is used to force updates.
            v101=0x00000005,     ///<The master sync signal from submodule0 is used to force updates. This setting should not be used in submodule0 as it will hold the FORCE OUTPUT signal to logic 0.
            v110=0x00000006,     ///<The external force signal, EXT_FORCE, from outside the PWM module causes updates.
            v111=0x00000007,     ///<The external sync signal, EXT_SYNC, from outside the PWM module causes updates.
        };
        namespace forceSelValC{
            constexpr MPL::Value<forceSelVal,forceSelVal::v000> v000{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v001> v001{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v010> v010{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v011> v011{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v100> v100{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v101> v101{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v110> v110{};
            constexpr MPL::Value<forceSelVal,forceSelVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,forceSelVal> forceSel{}; 
        ///Force Initialization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> force{}; 
        ///Force Initialization Enable
        enum class frcenVal {
            v0=0x00000000,     ///<Initialization from a FORCE_OUT event is disabled.
            v1=0x00000001,     ///<Initialization from a FORCE_OUT event is enabled.
        };
        namespace frcenValC{
            constexpr MPL::Value<frcenVal,frcenVal::v0> v0{};
            constexpr MPL::Value<frcenVal,frcenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,frcenVal> frcen{}; 
        ///Initialization Control Select
        enum class initSelVal {
            v00=0x00000000,     ///<Local sync (PWM_X) causes initialization.
            v01=0x00000001,     ///<Master reload from submodule 0 causes initialization. This setting should not be used in submodule 0 as it will force the INIT signal to logic 0. The submodule counter will only reinitialize when a master reload occurs.
            v10=0x00000002,     ///<Master sync from submodule 0 causes initialization. This setting should not be used in submodule 0 as it will force the INIT signal to logic 0.
            v11=0x00000003,     ///<EXT_SYNC causes initialization.
        };
        namespace initSelValC{
            constexpr MPL::Value<initSelVal,initSelVal::v00> v00{};
            constexpr MPL::Value<initSelVal,initSelVal::v01> v01{};
            constexpr MPL::Value<initSelVal,initSelVal::v10> v10{};
            constexpr MPL::Value<initSelVal,initSelVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,initSelVal> initSel{}; 
        ///PWM_X Initial Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pwmxInit{}; 
        ///PWM45 Initial Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pwm45Init{}; 
        ///PWM23 Initial Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pwm23Init{}; 
        ///Independent or Complementary Pair Operation
        enum class indepVal {
            v0=0x00000000,     ///<PWM_A and PWM_B form a complementary PWM pair.
            v1=0x00000001,     ///<PWM_A and PWM_B outputs are independent PWMs.
        };
        namespace indepValC{
            constexpr MPL::Value<indepVal,indepVal::v0> v0{};
            constexpr MPL::Value<indepVal,indepVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,indepVal> indep{}; 
        ///WAIT Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> waiten{}; 
        ///Debug Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dbgen{}; 
    }
    namespace PwmaSm0ctrl{    ///<Control Register
        using Addr = Register::Address<0x40033006,0xffff0088,0,unsigned>;
        ///Double Switching Enable
        enum class dblenVal {
            v0=0x00000000,     ///<Double switching disabled.
            v1=0x00000001,     ///<Double switching enabled.
        };
        namespace dblenValC{
            constexpr MPL::Value<dblenVal,dblenVal::v0> v0{};
            constexpr MPL::Value<dblenVal,dblenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dblenVal> dblen{}; 
        ///PWMX Double Switching Enable
        enum class dblxVal {
            v0=0x00000000,     ///<PWMX double pulse disabled.
            v1=0x00000001,     ///<PWMX double pulse enabled.
        };
        namespace dblxValC{
            constexpr MPL::Value<dblxVal,dblxVal::v0> v0{};
            constexpr MPL::Value<dblxVal,dblxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dblxVal> dblx{}; 
        ///Load Mode Select
        enum class ldmodVal {
            v0=0x00000000,     ///<Buffered registers of this submodule are loaded and take effect at the next PWM reload if MCTRL[LDOK] is set.
            v1=0x00000001,     ///<Buffered registers of this submodule are loaded and take effect immediately upon MCTRL[LDOK] being set. In this case it is not necessary to set CTRL[FULL] or CTRL[HALF].
        };
        namespace ldmodValC{
            constexpr MPL::Value<ldmodVal,ldmodVal::v0> v0{};
            constexpr MPL::Value<ldmodVal,ldmodVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ldmodVal> ldmod{}; 
        ///Prescaler
        enum class prscVal {
            v000=0x00000000,     ///<PWM clock frequency = fclk
            v001=0x00000001,     ///<PWM clock frequency = fclk/2
            v010=0x00000002,     ///<PWM clock frequency = fclk/4
            v011=0x00000003,     ///<PWM clock frequency = fclk/8
            v100=0x00000004,     ///<PWM clock frequency = fclk/16
            v101=0x00000005,     ///<PWM clock frequency = fclk/32
            v110=0x00000006,     ///<PWM clock frequency = fclk/64
            v111=0x00000007,     ///<PWM clock frequency = fclk/128
        };
        namespace prscValC{
            constexpr MPL::Value<prscVal,prscVal::v000> v000{};
            constexpr MPL::Value<prscVal,prscVal::v001> v001{};
            constexpr MPL::Value<prscVal,prscVal::v010> v010{};
            constexpr MPL::Value<prscVal,prscVal::v011> v011{};
            constexpr MPL::Value<prscVal,prscVal::v100> v100{};
            constexpr MPL::Value<prscVal,prscVal::v101> v101{};
            constexpr MPL::Value<prscVal,prscVal::v110> v110{};
            constexpr MPL::Value<prscVal,prscVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,prscVal> prsc{}; 
        ///Deadtime
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Full Cycle Reload
        enum class fullVal {
            v0=0x00000000,     ///<Full-cycle reloads disabled.
            v1=0x00000001,     ///<Full-cycle reloads enabled.
        };
        namespace fullValC{
            constexpr MPL::Value<fullVal,fullVal::v0> v0{};
            constexpr MPL::Value<fullVal,fullVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,fullVal> full{}; 
        ///Half Cycle Reload
        enum class halfVal {
            v0=0x00000000,     ///<Half-cycle reloads disabled.
            v1=0x00000001,     ///<Half-cycle reloads enabled.
        };
        namespace halfValC{
            constexpr MPL::Value<halfVal,halfVal::v0> v0{};
            constexpr MPL::Value<halfVal,halfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,halfVal> half{}; 
        ///no description available
        enum class ldfqVal {
            v0000=0x00000000,     ///<Every PWM opportunity
            v0001=0x00000001,     ///<Every 2 PWM opportunities
            v0010=0x00000002,     ///<Every 3 PWM opportunities
            v0011=0x00000003,     ///<Every 4 PWM opportunities
            v0100=0x00000004,     ///<Every 5 PWM opportunities
            v0101=0x00000005,     ///<Every 6 PWM opportunities
            v0110=0x00000006,     ///<Every 7 PWM opportunities
            v0111=0x00000007,     ///<Every 8 PWM opportunities
            v1000=0x00000008,     ///<Every 9 PWM opportunities
            v1001=0x00000009,     ///<Every 10 PWM opportunities
            v1010=0x0000000a,     ///<Every 11 PWM opportunities
            v1011=0x0000000b,     ///<Every 12 PWM opportunities
            v1100=0x0000000c,     ///<Every 13 PWM opportunities
            v1101=0x0000000d,     ///<Every 14 PWM opportunities
            v1110=0x0000000e,     ///<Every 15 PWM opportunities
            v1111=0x0000000f,     ///<Every 16 PWM opportunities
        };
        namespace ldfqValC{
            constexpr MPL::Value<ldfqVal,ldfqVal::v0000> v0000{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0001> v0001{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0010> v0010{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0011> v0011{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0100> v0100{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0101> v0101{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0110> v0110{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0111> v0111{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1000> v1000{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1001> v1001{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1010> v1010{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1011> v1011{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1100> v1100{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1101> v1101{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1110> v1110{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,ldfqVal> ldfq{}; 
    }
    namespace PwmaSm1ctrl{    ///<Control Register
        using Addr = Register::Address<0x40033066,0xffff0088,0,unsigned>;
        ///Double Switching Enable
        enum class dblenVal {
            v0=0x00000000,     ///<Double switching disabled.
            v1=0x00000001,     ///<Double switching enabled.
        };
        namespace dblenValC{
            constexpr MPL::Value<dblenVal,dblenVal::v0> v0{};
            constexpr MPL::Value<dblenVal,dblenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dblenVal> dblen{}; 
        ///PWMX Double Switching Enable
        enum class dblxVal {
            v0=0x00000000,     ///<PWMX double pulse disabled.
            v1=0x00000001,     ///<PWMX double pulse enabled.
        };
        namespace dblxValC{
            constexpr MPL::Value<dblxVal,dblxVal::v0> v0{};
            constexpr MPL::Value<dblxVal,dblxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dblxVal> dblx{}; 
        ///Load Mode Select
        enum class ldmodVal {
            v0=0x00000000,     ///<Buffered registers of this submodule are loaded and take effect at the next PWM reload if MCTRL[LDOK] is set.
            v1=0x00000001,     ///<Buffered registers of this submodule are loaded and take effect immediately upon MCTRL[LDOK] being set. In this case it is not necessary to set CTRL[FULL] or CTRL[HALF].
        };
        namespace ldmodValC{
            constexpr MPL::Value<ldmodVal,ldmodVal::v0> v0{};
            constexpr MPL::Value<ldmodVal,ldmodVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ldmodVal> ldmod{}; 
        ///Prescaler
        enum class prscVal {
            v000=0x00000000,     ///<PWM clock frequency = fclk
            v001=0x00000001,     ///<PWM clock frequency = fclk/2
            v010=0x00000002,     ///<PWM clock frequency = fclk/4
            v011=0x00000003,     ///<PWM clock frequency = fclk/8
            v100=0x00000004,     ///<PWM clock frequency = fclk/16
            v101=0x00000005,     ///<PWM clock frequency = fclk/32
            v110=0x00000006,     ///<PWM clock frequency = fclk/64
            v111=0x00000007,     ///<PWM clock frequency = fclk/128
        };
        namespace prscValC{
            constexpr MPL::Value<prscVal,prscVal::v000> v000{};
            constexpr MPL::Value<prscVal,prscVal::v001> v001{};
            constexpr MPL::Value<prscVal,prscVal::v010> v010{};
            constexpr MPL::Value<prscVal,prscVal::v011> v011{};
            constexpr MPL::Value<prscVal,prscVal::v100> v100{};
            constexpr MPL::Value<prscVal,prscVal::v101> v101{};
            constexpr MPL::Value<prscVal,prscVal::v110> v110{};
            constexpr MPL::Value<prscVal,prscVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,prscVal> prsc{}; 
        ///Deadtime
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Full Cycle Reload
        enum class fullVal {
            v0=0x00000000,     ///<Full-cycle reloads disabled.
            v1=0x00000001,     ///<Full-cycle reloads enabled.
        };
        namespace fullValC{
            constexpr MPL::Value<fullVal,fullVal::v0> v0{};
            constexpr MPL::Value<fullVal,fullVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,fullVal> full{}; 
        ///Half Cycle Reload
        enum class halfVal {
            v0=0x00000000,     ///<Half-cycle reloads disabled.
            v1=0x00000001,     ///<Half-cycle reloads enabled.
        };
        namespace halfValC{
            constexpr MPL::Value<halfVal,halfVal::v0> v0{};
            constexpr MPL::Value<halfVal,halfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,halfVal> half{}; 
        ///no description available
        enum class ldfqVal {
            v0000=0x00000000,     ///<Every PWM opportunity
            v0001=0x00000001,     ///<Every 2 PWM opportunities
            v0010=0x00000002,     ///<Every 3 PWM opportunities
            v0011=0x00000003,     ///<Every 4 PWM opportunities
            v0100=0x00000004,     ///<Every 5 PWM opportunities
            v0101=0x00000005,     ///<Every 6 PWM opportunities
            v0110=0x00000006,     ///<Every 7 PWM opportunities
            v0111=0x00000007,     ///<Every 8 PWM opportunities
            v1000=0x00000008,     ///<Every 9 PWM opportunities
            v1001=0x00000009,     ///<Every 10 PWM opportunities
            v1010=0x0000000a,     ///<Every 11 PWM opportunities
            v1011=0x0000000b,     ///<Every 12 PWM opportunities
            v1100=0x0000000c,     ///<Every 13 PWM opportunities
            v1101=0x0000000d,     ///<Every 14 PWM opportunities
            v1110=0x0000000e,     ///<Every 15 PWM opportunities
            v1111=0x0000000f,     ///<Every 16 PWM opportunities
        };
        namespace ldfqValC{
            constexpr MPL::Value<ldfqVal,ldfqVal::v0000> v0000{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0001> v0001{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0010> v0010{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0011> v0011{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0100> v0100{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0101> v0101{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0110> v0110{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0111> v0111{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1000> v1000{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1001> v1001{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1010> v1010{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1011> v1011{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1100> v1100{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1101> v1101{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1110> v1110{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,ldfqVal> ldfq{}; 
    }
    namespace PwmaSm2ctrl{    ///<Control Register
        using Addr = Register::Address<0x400330c6,0xffff0088,0,unsigned>;
        ///Double Switching Enable
        enum class dblenVal {
            v0=0x00000000,     ///<Double switching disabled.
            v1=0x00000001,     ///<Double switching enabled.
        };
        namespace dblenValC{
            constexpr MPL::Value<dblenVal,dblenVal::v0> v0{};
            constexpr MPL::Value<dblenVal,dblenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dblenVal> dblen{}; 
        ///PWMX Double Switching Enable
        enum class dblxVal {
            v0=0x00000000,     ///<PWMX double pulse disabled.
            v1=0x00000001,     ///<PWMX double pulse enabled.
        };
        namespace dblxValC{
            constexpr MPL::Value<dblxVal,dblxVal::v0> v0{};
            constexpr MPL::Value<dblxVal,dblxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dblxVal> dblx{}; 
        ///Load Mode Select
        enum class ldmodVal {
            v0=0x00000000,     ///<Buffered registers of this submodule are loaded and take effect at the next PWM reload if MCTRL[LDOK] is set.
            v1=0x00000001,     ///<Buffered registers of this submodule are loaded and take effect immediately upon MCTRL[LDOK] being set. In this case it is not necessary to set CTRL[FULL] or CTRL[HALF].
        };
        namespace ldmodValC{
            constexpr MPL::Value<ldmodVal,ldmodVal::v0> v0{};
            constexpr MPL::Value<ldmodVal,ldmodVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ldmodVal> ldmod{}; 
        ///Prescaler
        enum class prscVal {
            v000=0x00000000,     ///<PWM clock frequency = fclk
            v001=0x00000001,     ///<PWM clock frequency = fclk/2
            v010=0x00000002,     ///<PWM clock frequency = fclk/4
            v011=0x00000003,     ///<PWM clock frequency = fclk/8
            v100=0x00000004,     ///<PWM clock frequency = fclk/16
            v101=0x00000005,     ///<PWM clock frequency = fclk/32
            v110=0x00000006,     ///<PWM clock frequency = fclk/64
            v111=0x00000007,     ///<PWM clock frequency = fclk/128
        };
        namespace prscValC{
            constexpr MPL::Value<prscVal,prscVal::v000> v000{};
            constexpr MPL::Value<prscVal,prscVal::v001> v001{};
            constexpr MPL::Value<prscVal,prscVal::v010> v010{};
            constexpr MPL::Value<prscVal,prscVal::v011> v011{};
            constexpr MPL::Value<prscVal,prscVal::v100> v100{};
            constexpr MPL::Value<prscVal,prscVal::v101> v101{};
            constexpr MPL::Value<prscVal,prscVal::v110> v110{};
            constexpr MPL::Value<prscVal,prscVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,prscVal> prsc{}; 
        ///Deadtime
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Full Cycle Reload
        enum class fullVal {
            v0=0x00000000,     ///<Full-cycle reloads disabled.
            v1=0x00000001,     ///<Full-cycle reloads enabled.
        };
        namespace fullValC{
            constexpr MPL::Value<fullVal,fullVal::v0> v0{};
            constexpr MPL::Value<fullVal,fullVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,fullVal> full{}; 
        ///Half Cycle Reload
        enum class halfVal {
            v0=0x00000000,     ///<Half-cycle reloads disabled.
            v1=0x00000001,     ///<Half-cycle reloads enabled.
        };
        namespace halfValC{
            constexpr MPL::Value<halfVal,halfVal::v0> v0{};
            constexpr MPL::Value<halfVal,halfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,halfVal> half{}; 
        ///no description available
        enum class ldfqVal {
            v0000=0x00000000,     ///<Every PWM opportunity
            v0001=0x00000001,     ///<Every 2 PWM opportunities
            v0010=0x00000002,     ///<Every 3 PWM opportunities
            v0011=0x00000003,     ///<Every 4 PWM opportunities
            v0100=0x00000004,     ///<Every 5 PWM opportunities
            v0101=0x00000005,     ///<Every 6 PWM opportunities
            v0110=0x00000006,     ///<Every 7 PWM opportunities
            v0111=0x00000007,     ///<Every 8 PWM opportunities
            v1000=0x00000008,     ///<Every 9 PWM opportunities
            v1001=0x00000009,     ///<Every 10 PWM opportunities
            v1010=0x0000000a,     ///<Every 11 PWM opportunities
            v1011=0x0000000b,     ///<Every 12 PWM opportunities
            v1100=0x0000000c,     ///<Every 13 PWM opportunities
            v1101=0x0000000d,     ///<Every 14 PWM opportunities
            v1110=0x0000000e,     ///<Every 15 PWM opportunities
            v1111=0x0000000f,     ///<Every 16 PWM opportunities
        };
        namespace ldfqValC{
            constexpr MPL::Value<ldfqVal,ldfqVal::v0000> v0000{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0001> v0001{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0010> v0010{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0011> v0011{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0100> v0100{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0101> v0101{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0110> v0110{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0111> v0111{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1000> v1000{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1001> v1001{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1010> v1010{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1011> v1011{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1100> v1100{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1101> v1101{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1110> v1110{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,ldfqVal> ldfq{}; 
    }
    namespace PwmaSm3ctrl{    ///<Control Register
        using Addr = Register::Address<0x40033126,0xffff0088,0,unsigned>;
        ///Double Switching Enable
        enum class dblenVal {
            v0=0x00000000,     ///<Double switching disabled.
            v1=0x00000001,     ///<Double switching enabled.
        };
        namespace dblenValC{
            constexpr MPL::Value<dblenVal,dblenVal::v0> v0{};
            constexpr MPL::Value<dblenVal,dblenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dblenVal> dblen{}; 
        ///PWMX Double Switching Enable
        enum class dblxVal {
            v0=0x00000000,     ///<PWMX double pulse disabled.
            v1=0x00000001,     ///<PWMX double pulse enabled.
        };
        namespace dblxValC{
            constexpr MPL::Value<dblxVal,dblxVal::v0> v0{};
            constexpr MPL::Value<dblxVal,dblxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dblxVal> dblx{}; 
        ///Load Mode Select
        enum class ldmodVal {
            v0=0x00000000,     ///<Buffered registers of this submodule are loaded and take effect at the next PWM reload if MCTRL[LDOK] is set.
            v1=0x00000001,     ///<Buffered registers of this submodule are loaded and take effect immediately upon MCTRL[LDOK] being set. In this case it is not necessary to set CTRL[FULL] or CTRL[HALF].
        };
        namespace ldmodValC{
            constexpr MPL::Value<ldmodVal,ldmodVal::v0> v0{};
            constexpr MPL::Value<ldmodVal,ldmodVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ldmodVal> ldmod{}; 
        ///Prescaler
        enum class prscVal {
            v000=0x00000000,     ///<PWM clock frequency = fclk
            v001=0x00000001,     ///<PWM clock frequency = fclk/2
            v010=0x00000002,     ///<PWM clock frequency = fclk/4
            v011=0x00000003,     ///<PWM clock frequency = fclk/8
            v100=0x00000004,     ///<PWM clock frequency = fclk/16
            v101=0x00000005,     ///<PWM clock frequency = fclk/32
            v110=0x00000006,     ///<PWM clock frequency = fclk/64
            v111=0x00000007,     ///<PWM clock frequency = fclk/128
        };
        namespace prscValC{
            constexpr MPL::Value<prscVal,prscVal::v000> v000{};
            constexpr MPL::Value<prscVal,prscVal::v001> v001{};
            constexpr MPL::Value<prscVal,prscVal::v010> v010{};
            constexpr MPL::Value<prscVal,prscVal::v011> v011{};
            constexpr MPL::Value<prscVal,prscVal::v100> v100{};
            constexpr MPL::Value<prscVal,prscVal::v101> v101{};
            constexpr MPL::Value<prscVal,prscVal::v110> v110{};
            constexpr MPL::Value<prscVal,prscVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,prscVal> prsc{}; 
        ///Deadtime
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> dt{}; 
        ///Full Cycle Reload
        enum class fullVal {
            v0=0x00000000,     ///<Full-cycle reloads disabled.
            v1=0x00000001,     ///<Full-cycle reloads enabled.
        };
        namespace fullValC{
            constexpr MPL::Value<fullVal,fullVal::v0> v0{};
            constexpr MPL::Value<fullVal,fullVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,fullVal> full{}; 
        ///Half Cycle Reload
        enum class halfVal {
            v0=0x00000000,     ///<Half-cycle reloads disabled.
            v1=0x00000001,     ///<Half-cycle reloads enabled.
        };
        namespace halfValC{
            constexpr MPL::Value<halfVal,halfVal::v0> v0{};
            constexpr MPL::Value<halfVal,halfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,halfVal> half{}; 
        ///no description available
        enum class ldfqVal {
            v0000=0x00000000,     ///<Every PWM opportunity
            v0001=0x00000001,     ///<Every 2 PWM opportunities
            v0010=0x00000002,     ///<Every 3 PWM opportunities
            v0011=0x00000003,     ///<Every 4 PWM opportunities
            v0100=0x00000004,     ///<Every 5 PWM opportunities
            v0101=0x00000005,     ///<Every 6 PWM opportunities
            v0110=0x00000006,     ///<Every 7 PWM opportunities
            v0111=0x00000007,     ///<Every 8 PWM opportunities
            v1000=0x00000008,     ///<Every 9 PWM opportunities
            v1001=0x00000009,     ///<Every 10 PWM opportunities
            v1010=0x0000000a,     ///<Every 11 PWM opportunities
            v1011=0x0000000b,     ///<Every 12 PWM opportunities
            v1100=0x0000000c,     ///<Every 13 PWM opportunities
            v1101=0x0000000d,     ///<Every 14 PWM opportunities
            v1110=0x0000000e,     ///<Every 15 PWM opportunities
            v1111=0x0000000f,     ///<Every 16 PWM opportunities
        };
        namespace ldfqValC{
            constexpr MPL::Value<ldfqVal,ldfqVal::v0000> v0000{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0001> v0001{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0010> v0010{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0011> v0011{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0100> v0100{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0101> v0101{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0110> v0110{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v0111> v0111{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1000> v1000{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1001> v1001{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1010> v1010{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1011> v1011{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1100> v1100{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1101> v1101{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1110> v1110{};
            constexpr MPL::Value<ldfqVal,ldfqVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,ldfqVal> ldfq{}; 
    }
    namespace PwmaSm0val0{    ///<Value Register 0
        using Addr = Register::Address<0x4003300a,0xffff0000,0,unsigned>;
        ///Value Register 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val0{}; 
    }
    namespace PwmaSm1val0{    ///<Value Register 0
        using Addr = Register::Address<0x4003306a,0xffff0000,0,unsigned>;
        ///Value Register 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val0{}; 
    }
    namespace PwmaSm2val0{    ///<Value Register 0
        using Addr = Register::Address<0x400330ca,0xffff0000,0,unsigned>;
        ///Value Register 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val0{}; 
    }
    namespace PwmaSm3val0{    ///<Value Register 0
        using Addr = Register::Address<0x4003312a,0xffff0000,0,unsigned>;
        ///Value Register 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val0{}; 
    }
    namespace PwmaSm0fracval1{    ///<Fractional Value Register 1
        using Addr = Register::Address<0x4003300c,0xffff07ff,0,unsigned>;
        ///Fractional Value 1 Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval1{}; 
    }
    namespace PwmaSm1fracval1{    ///<Fractional Value Register 1
        using Addr = Register::Address<0x4003306c,0xffff07ff,0,unsigned>;
        ///Fractional Value 1 Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval1{}; 
    }
    namespace PwmaSm2fracval1{    ///<Fractional Value Register 1
        using Addr = Register::Address<0x400330cc,0xffff07ff,0,unsigned>;
        ///Fractional Value 1 Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval1{}; 
    }
    namespace PwmaSm3fracval1{    ///<Fractional Value Register 1
        using Addr = Register::Address<0x4003312c,0xffff07ff,0,unsigned>;
        ///Fractional Value 1 Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval1{}; 
    }
    namespace PwmaSm0val1{    ///<Value Register 1
        using Addr = Register::Address<0x4003300e,0xffff0000,0,unsigned>;
        ///Value Register 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val1{}; 
    }
    namespace PwmaSm1val1{    ///<Value Register 1
        using Addr = Register::Address<0x4003306e,0xffff0000,0,unsigned>;
        ///Value Register 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val1{}; 
    }
    namespace PwmaSm2val1{    ///<Value Register 1
        using Addr = Register::Address<0x400330ce,0xffff0000,0,unsigned>;
        ///Value Register 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val1{}; 
    }
    namespace PwmaSm3val1{    ///<Value Register 1
        using Addr = Register::Address<0x4003312e,0xffff0000,0,unsigned>;
        ///Value Register 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val1{}; 
    }
    namespace PwmaSm0fracval2{    ///<Fractional Value Register 2
        using Addr = Register::Address<0x40033010,0xffff07ff,0,unsigned>;
        ///Fractional Value 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval2{}; 
    }
    namespace PwmaSm1fracval2{    ///<Fractional Value Register 2
        using Addr = Register::Address<0x40033070,0xffff07ff,0,unsigned>;
        ///Fractional Value 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval2{}; 
    }
    namespace PwmaSm2fracval2{    ///<Fractional Value Register 2
        using Addr = Register::Address<0x400330d0,0xffff07ff,0,unsigned>;
        ///Fractional Value 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval2{}; 
    }
    namespace PwmaSm3fracval2{    ///<Fractional Value Register 2
        using Addr = Register::Address<0x40033130,0xffff07ff,0,unsigned>;
        ///Fractional Value 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval2{}; 
    }
    namespace PwmaSm0val2{    ///<Value Register 2
        using Addr = Register::Address<0x40033012,0xffff0000,0,unsigned>;
        ///Value Register 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val2{}; 
    }
    namespace PwmaSm1val2{    ///<Value Register 2
        using Addr = Register::Address<0x40033072,0xffff0000,0,unsigned>;
        ///Value Register 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val2{}; 
    }
    namespace PwmaSm2val2{    ///<Value Register 2
        using Addr = Register::Address<0x400330d2,0xffff0000,0,unsigned>;
        ///Value Register 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val2{}; 
    }
    namespace PwmaSm3val2{    ///<Value Register 2
        using Addr = Register::Address<0x40033132,0xffff0000,0,unsigned>;
        ///Value Register 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val2{}; 
    }
    namespace PwmaSm0fracval3{    ///<Fractional Value Register 3
        using Addr = Register::Address<0x40033014,0xffff07ff,0,unsigned>;
        ///Fractional Value 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval3{}; 
    }
    namespace PwmaSm1fracval3{    ///<Fractional Value Register 3
        using Addr = Register::Address<0x40033074,0xffff07ff,0,unsigned>;
        ///Fractional Value 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval3{}; 
    }
    namespace PwmaSm2fracval3{    ///<Fractional Value Register 3
        using Addr = Register::Address<0x400330d4,0xffff07ff,0,unsigned>;
        ///Fractional Value 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval3{}; 
    }
    namespace PwmaSm3fracval3{    ///<Fractional Value Register 3
        using Addr = Register::Address<0x40033134,0xffff07ff,0,unsigned>;
        ///Fractional Value 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval3{}; 
    }
    namespace PwmaSm0val3{    ///<Value Register 3
        using Addr = Register::Address<0x40033016,0xffff0000,0,unsigned>;
        ///Value Register 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val3{}; 
    }
    namespace PwmaSm1val3{    ///<Value Register 3
        using Addr = Register::Address<0x40033076,0xffff0000,0,unsigned>;
        ///Value Register 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val3{}; 
    }
    namespace PwmaSm2val3{    ///<Value Register 3
        using Addr = Register::Address<0x400330d6,0xffff0000,0,unsigned>;
        ///Value Register 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val3{}; 
    }
    namespace PwmaSm3val3{    ///<Value Register 3
        using Addr = Register::Address<0x40033136,0xffff0000,0,unsigned>;
        ///Value Register 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val3{}; 
    }
    namespace PwmaSm0fracval4{    ///<Fractional Value Register 4
        using Addr = Register::Address<0x40033018,0xffff07ff,0,unsigned>;
        ///Fractional Value 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval4{}; 
    }
    namespace PwmaSm1fracval4{    ///<Fractional Value Register 4
        using Addr = Register::Address<0x40033078,0xffff07ff,0,unsigned>;
        ///Fractional Value 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval4{}; 
    }
    namespace PwmaSm2fracval4{    ///<Fractional Value Register 4
        using Addr = Register::Address<0x400330d8,0xffff07ff,0,unsigned>;
        ///Fractional Value 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval4{}; 
    }
    namespace PwmaSm3fracval4{    ///<Fractional Value Register 4
        using Addr = Register::Address<0x40033138,0xffff07ff,0,unsigned>;
        ///Fractional Value 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval4{}; 
    }
    namespace PwmaSm0val4{    ///<Value Register 4
        using Addr = Register::Address<0x4003301a,0xffff0000,0,unsigned>;
        ///Value Register 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val4{}; 
    }
    namespace PwmaSm1val4{    ///<Value Register 4
        using Addr = Register::Address<0x4003307a,0xffff0000,0,unsigned>;
        ///Value Register 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val4{}; 
    }
    namespace PwmaSm2val4{    ///<Value Register 4
        using Addr = Register::Address<0x400330da,0xffff0000,0,unsigned>;
        ///Value Register 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val4{}; 
    }
    namespace PwmaSm3val4{    ///<Value Register 4
        using Addr = Register::Address<0x4003313a,0xffff0000,0,unsigned>;
        ///Value Register 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val4{}; 
    }
    namespace PwmaSm0fracval5{    ///<Fractional Value Register 5
        using Addr = Register::Address<0x4003301c,0xffff07ff,0,unsigned>;
        ///Fractional Value 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval5{}; 
    }
    namespace PwmaSm1fracval5{    ///<Fractional Value Register 5
        using Addr = Register::Address<0x4003307c,0xffff07ff,0,unsigned>;
        ///Fractional Value 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval5{}; 
    }
    namespace PwmaSm2fracval5{    ///<Fractional Value Register 5
        using Addr = Register::Address<0x400330dc,0xffff07ff,0,unsigned>;
        ///Fractional Value 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval5{}; 
    }
    namespace PwmaSm3fracval5{    ///<Fractional Value Register 5
        using Addr = Register::Address<0x4003313c,0xffff07ff,0,unsigned>;
        ///Fractional Value 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11),Register::ReadWriteAccess,unsigned> fracval5{}; 
    }
    namespace PwmaSm0val5{    ///<Value Register 5
        using Addr = Register::Address<0x4003301e,0xffff0000,0,unsigned>;
        ///Value Register 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val5{}; 
    }
    namespace PwmaSm1val5{    ///<Value Register 5
        using Addr = Register::Address<0x4003307e,0xffff0000,0,unsigned>;
        ///Value Register 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val5{}; 
    }
    namespace PwmaSm2val5{    ///<Value Register 5
        using Addr = Register::Address<0x400330de,0xffff0000,0,unsigned>;
        ///Value Register 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val5{}; 
    }
    namespace PwmaSm3val5{    ///<Value Register 5
        using Addr = Register::Address<0x4003313e,0xffff0000,0,unsigned>;
        ///Value Register 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> val5{}; 
    }
    namespace PwmaSm0frctrl{    ///<Fractional Control Register
        using Addr = Register::Address<0x40033020,0xffff7ee9,0,unsigned>;
        ///Fractional Cycle PWM Period Enable
        enum class frac1EnVal {
            v0=0x00000000,     ///<Disable fractional cycle length for the PWM period.
            v1=0x00000001,     ///<Enable fractional cycle length for the PWM period.
        };
        namespace frac1EnValC{
            constexpr MPL::Value<frac1EnVal,frac1EnVal::v0> v0{};
            constexpr MPL::Value<frac1EnVal,frac1EnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,frac1EnVal> frac1En{}; 
        ///Fractional Cycle Placement Enable for PWM_A
        enum class frac23EnVal {
            v0=0x00000000,     ///<Disable fractional cycle placement for PWM_A.
            v1=0x00000001,     ///<Enable fractional cycle placement for PWM_A.
        };
        namespace frac23EnValC{
            constexpr MPL::Value<frac23EnVal,frac23EnVal::v0> v0{};
            constexpr MPL::Value<frac23EnVal,frac23EnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,frac23EnVal> frac23En{}; 
        ///Fractional Cycle Placement Enable for PWM_B
        enum class frac45EnVal {
            v0=0x00000000,     ///<Disable fractional cycle placement for PWM_B.
            v1=0x00000001,     ///<Enable fractional cycle placement for PWM_B.
        };
        namespace frac45EnValC{
            constexpr MPL::Value<frac45EnVal,frac45EnVal::v0> v0{};
            constexpr MPL::Value<frac45EnVal,frac45EnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,frac45EnVal> frac45En{}; 
        ///Fractional Delay Circuit Power Up
        enum class fracPuVal {
            v0=0x00000000,     ///<Turn off fractional delay logic.
            v1=0x00000001,     ///<Power up fractional delay logic.
        };
        namespace fracPuValC{
            constexpr MPL::Value<fracPuVal,fracPuVal::v0> v0{};
            constexpr MPL::Value<fracPuVal,fracPuVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fracPuVal> fracPu{}; 
        ///Test Status Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> test{}; 
    }
    namespace PwmaSm1frctrl{    ///<Fractional Control Register
        using Addr = Register::Address<0x40033080,0xffff7ee9,0,unsigned>;
        ///Fractional Cycle PWM Period Enable
        enum class frac1EnVal {
            v0=0x00000000,     ///<Disable fractional cycle length for the PWM period.
            v1=0x00000001,     ///<Enable fractional cycle length for the PWM period.
        };
        namespace frac1EnValC{
            constexpr MPL::Value<frac1EnVal,frac1EnVal::v0> v0{};
            constexpr MPL::Value<frac1EnVal,frac1EnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,frac1EnVal> frac1En{}; 
        ///Fractional Cycle Placement Enable for PWM_A
        enum class frac23EnVal {
            v0=0x00000000,     ///<Disable fractional cycle placement for PWM_A.
            v1=0x00000001,     ///<Enable fractional cycle placement for PWM_A.
        };
        namespace frac23EnValC{
            constexpr MPL::Value<frac23EnVal,frac23EnVal::v0> v0{};
            constexpr MPL::Value<frac23EnVal,frac23EnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,frac23EnVal> frac23En{}; 
        ///Fractional Cycle Placement Enable for PWM_B
        enum class frac45EnVal {
            v0=0x00000000,     ///<Disable fractional cycle placement for PWM_B.
            v1=0x00000001,     ///<Enable fractional cycle placement for PWM_B.
        };
        namespace frac45EnValC{
            constexpr MPL::Value<frac45EnVal,frac45EnVal::v0> v0{};
            constexpr MPL::Value<frac45EnVal,frac45EnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,frac45EnVal> frac45En{}; 
        ///Fractional Delay Circuit Power Up
        enum class fracPuVal {
            v0=0x00000000,     ///<Turn off fractional delay logic.
            v1=0x00000001,     ///<Power up fractional delay logic.
        };
        namespace fracPuValC{
            constexpr MPL::Value<fracPuVal,fracPuVal::v0> v0{};
            constexpr MPL::Value<fracPuVal,fracPuVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fracPuVal> fracPu{}; 
        ///Test Status Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> test{}; 
    }
    namespace PwmaSm2frctrl{    ///<Fractional Control Register
        using Addr = Register::Address<0x400330e0,0xffff7ee9,0,unsigned>;
        ///Fractional Cycle PWM Period Enable
        enum class frac1EnVal {
            v0=0x00000000,     ///<Disable fractional cycle length for the PWM period.
            v1=0x00000001,     ///<Enable fractional cycle length for the PWM period.
        };
        namespace frac1EnValC{
            constexpr MPL::Value<frac1EnVal,frac1EnVal::v0> v0{};
            constexpr MPL::Value<frac1EnVal,frac1EnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,frac1EnVal> frac1En{}; 
        ///Fractional Cycle Placement Enable for PWM_A
        enum class frac23EnVal {
            v0=0x00000000,     ///<Disable fractional cycle placement for PWM_A.
            v1=0x00000001,     ///<Enable fractional cycle placement for PWM_A.
        };
        namespace frac23EnValC{
            constexpr MPL::Value<frac23EnVal,frac23EnVal::v0> v0{};
            constexpr MPL::Value<frac23EnVal,frac23EnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,frac23EnVal> frac23En{}; 
        ///Fractional Cycle Placement Enable for PWM_B
        enum class frac45EnVal {
            v0=0x00000000,     ///<Disable fractional cycle placement for PWM_B.
            v1=0x00000001,     ///<Enable fractional cycle placement for PWM_B.
        };
        namespace frac45EnValC{
            constexpr MPL::Value<frac45EnVal,frac45EnVal::v0> v0{};
            constexpr MPL::Value<frac45EnVal,frac45EnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,frac45EnVal> frac45En{}; 
        ///Fractional Delay Circuit Power Up
        enum class fracPuVal {
            v0=0x00000000,     ///<Turn off fractional delay logic.
            v1=0x00000001,     ///<Power up fractional delay logic.
        };
        namespace fracPuValC{
            constexpr MPL::Value<fracPuVal,fracPuVal::v0> v0{};
            constexpr MPL::Value<fracPuVal,fracPuVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fracPuVal> fracPu{}; 
        ///Test Status Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> test{}; 
    }
    namespace PwmaSm3frctrl{    ///<Fractional Control Register
        using Addr = Register::Address<0x40033140,0xffff7ee9,0,unsigned>;
        ///Fractional Cycle PWM Period Enable
        enum class frac1EnVal {
            v0=0x00000000,     ///<Disable fractional cycle length for the PWM period.
            v1=0x00000001,     ///<Enable fractional cycle length for the PWM period.
        };
        namespace frac1EnValC{
            constexpr MPL::Value<frac1EnVal,frac1EnVal::v0> v0{};
            constexpr MPL::Value<frac1EnVal,frac1EnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,frac1EnVal> frac1En{}; 
        ///Fractional Cycle Placement Enable for PWM_A
        enum class frac23EnVal {
            v0=0x00000000,     ///<Disable fractional cycle placement for PWM_A.
            v1=0x00000001,     ///<Enable fractional cycle placement for PWM_A.
        };
        namespace frac23EnValC{
            constexpr MPL::Value<frac23EnVal,frac23EnVal::v0> v0{};
            constexpr MPL::Value<frac23EnVal,frac23EnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,frac23EnVal> frac23En{}; 
        ///Fractional Cycle Placement Enable for PWM_B
        enum class frac45EnVal {
            v0=0x00000000,     ///<Disable fractional cycle placement for PWM_B.
            v1=0x00000001,     ///<Enable fractional cycle placement for PWM_B.
        };
        namespace frac45EnValC{
            constexpr MPL::Value<frac45EnVal,frac45EnVal::v0> v0{};
            constexpr MPL::Value<frac45EnVal,frac45EnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,frac45EnVal> frac45En{}; 
        ///Fractional Delay Circuit Power Up
        enum class fracPuVal {
            v0=0x00000000,     ///<Turn off fractional delay logic.
            v1=0x00000001,     ///<Power up fractional delay logic.
        };
        namespace fracPuValC{
            constexpr MPL::Value<fracPuVal,fracPuVal::v0> v0{};
            constexpr MPL::Value<fracPuVal,fracPuVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fracPuVal> fracPu{}; 
        ///Test Status Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> test{}; 
    }
    namespace PwmaSm0octrl{    ///<Output Control Register
        using Addr = Register::Address<0x40033022,0xffff18c0,0,unsigned>;
        ///PWM_X Fault State
        enum class pwmxfsVal {
            v00=0x00000000,     ///<Output is forced to logic 0 state prior to consideration of output polarity control.
            v01=0x00000001,     ///<Output is forced to logic 1 state prior to consideration of output polarity control.
            v10=0x00000002,     ///<Output is tristated.
            v11=0x00000003,     ///<Output is tristated.
        };
        namespace pwmxfsValC{
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v00> v00{};
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v01> v01{};
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v10> v10{};
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pwmxfsVal> pwmxfs{}; 
        ///PWM_B Fault State
        enum class pwmbfsVal {
            v00=0x00000000,     ///<Output is forced to logic 0 state prior to consideration of output polarity control.
            v01=0x00000001,     ///<Output is forced to logic 1 state prior to consideration of output polarity control.
            v10=0x00000002,     ///<Output is tristated.
            v11=0x00000003,     ///<Output is tristated.
        };
        namespace pwmbfsValC{
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v00> v00{};
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v01> v01{};
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v10> v10{};
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pwmbfsVal> pwmbfs{}; 
        ///PWM_A Fault State
        enum class pwmafsVal {
            v00=0x00000000,     ///<Output is forced to logic 0 state prior to consideration of output polarity control.
            v01=0x00000001,     ///<Output is forced to logic 1 state prior to consideration of output polarity control.
            v10=0x00000002,     ///<Output is tristated.
            v11=0x00000003,     ///<Output is tristated.
        };
        namespace pwmafsValC{
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v00> v00{};
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v01> v01{};
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v10> v10{};
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pwmafsVal> pwmafs{}; 
        ///PWM_X Output Polarity
        enum class polxVal {
            v0=0x00000000,     ///<PWM_X output not inverted. A high level on the PWM_X pin represents the "on" or "active" state.
            v1=0x00000001,     ///<PWM_X output inverted. A low level on the PWM_X pin represents the "on" or "active" state.
        };
        namespace polxValC{
            constexpr MPL::Value<polxVal,polxVal::v0> v0{};
            constexpr MPL::Value<polxVal,polxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,polxVal> polx{}; 
        ///PWM_B Output Polarity
        enum class polbVal {
            v0=0x00000000,     ///<PWM_B output not inverted. A high level on the PWM_B pin represents the "on" or "active" state.
            v1=0x00000001,     ///<PWM_B output inverted. A low level on the PWM_B pin represents the "on" or "active" state.
        };
        namespace polbValC{
            constexpr MPL::Value<polbVal,polbVal::v0> v0{};
            constexpr MPL::Value<polbVal,polbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,polbVal> polb{}; 
        ///PWM_A Output Polarity
        enum class polaVal {
            v0=0x00000000,     ///<PWM_A output not inverted. A high level on the PWM_A pin represents the "on" or "active" state.
            v1=0x00000001,     ///<PWM_A output inverted. A low level on the PWM_A pin represents the "on" or "active" state.
        };
        namespace polaValC{
            constexpr MPL::Value<polaVal,polaVal::v0> v0{};
            constexpr MPL::Value<polaVal,polaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,polaVal> pola{}; 
        ///PWM_X Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pwmxIn{}; 
        ///PWM_B Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pwmbIn{}; 
        ///PWM_A Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pwmaIn{}; 
    }
    namespace PwmaSm1octrl{    ///<Output Control Register
        using Addr = Register::Address<0x40033082,0xffff18c0,0,unsigned>;
        ///PWM_X Fault State
        enum class pwmxfsVal {
            v00=0x00000000,     ///<Output is forced to logic 0 state prior to consideration of output polarity control.
            v01=0x00000001,     ///<Output is forced to logic 1 state prior to consideration of output polarity control.
            v10=0x00000002,     ///<Output is tristated.
            v11=0x00000003,     ///<Output is tristated.
        };
        namespace pwmxfsValC{
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v00> v00{};
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v01> v01{};
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v10> v10{};
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pwmxfsVal> pwmxfs{}; 
        ///PWM_B Fault State
        enum class pwmbfsVal {
            v00=0x00000000,     ///<Output is forced to logic 0 state prior to consideration of output polarity control.
            v01=0x00000001,     ///<Output is forced to logic 1 state prior to consideration of output polarity control.
            v10=0x00000002,     ///<Output is tristated.
            v11=0x00000003,     ///<Output is tristated.
        };
        namespace pwmbfsValC{
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v00> v00{};
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v01> v01{};
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v10> v10{};
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pwmbfsVal> pwmbfs{}; 
        ///PWM_A Fault State
        enum class pwmafsVal {
            v00=0x00000000,     ///<Output is forced to logic 0 state prior to consideration of output polarity control.
            v01=0x00000001,     ///<Output is forced to logic 1 state prior to consideration of output polarity control.
            v10=0x00000002,     ///<Output is tristated.
            v11=0x00000003,     ///<Output is tristated.
        };
        namespace pwmafsValC{
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v00> v00{};
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v01> v01{};
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v10> v10{};
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pwmafsVal> pwmafs{}; 
        ///PWM_X Output Polarity
        enum class polxVal {
            v0=0x00000000,     ///<PWM_X output not inverted. A high level on the PWM_X pin represents the "on" or "active" state.
            v1=0x00000001,     ///<PWM_X output inverted. A low level on the PWM_X pin represents the "on" or "active" state.
        };
        namespace polxValC{
            constexpr MPL::Value<polxVal,polxVal::v0> v0{};
            constexpr MPL::Value<polxVal,polxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,polxVal> polx{}; 
        ///PWM_B Output Polarity
        enum class polbVal {
            v0=0x00000000,     ///<PWM_B output not inverted. A high level on the PWM_B pin represents the "on" or "active" state.
            v1=0x00000001,     ///<PWM_B output inverted. A low level on the PWM_B pin represents the "on" or "active" state.
        };
        namespace polbValC{
            constexpr MPL::Value<polbVal,polbVal::v0> v0{};
            constexpr MPL::Value<polbVal,polbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,polbVal> polb{}; 
        ///PWM_A Output Polarity
        enum class polaVal {
            v0=0x00000000,     ///<PWM_A output not inverted. A high level on the PWM_A pin represents the "on" or "active" state.
            v1=0x00000001,     ///<PWM_A output inverted. A low level on the PWM_A pin represents the "on" or "active" state.
        };
        namespace polaValC{
            constexpr MPL::Value<polaVal,polaVal::v0> v0{};
            constexpr MPL::Value<polaVal,polaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,polaVal> pola{}; 
        ///PWM_X Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pwmxIn{}; 
        ///PWM_B Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pwmbIn{}; 
        ///PWM_A Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pwmaIn{}; 
    }
    namespace PwmaSm2octrl{    ///<Output Control Register
        using Addr = Register::Address<0x400330e2,0xffff18c0,0,unsigned>;
        ///PWM_X Fault State
        enum class pwmxfsVal {
            v00=0x00000000,     ///<Output is forced to logic 0 state prior to consideration of output polarity control.
            v01=0x00000001,     ///<Output is forced to logic 1 state prior to consideration of output polarity control.
            v10=0x00000002,     ///<Output is tristated.
            v11=0x00000003,     ///<Output is tristated.
        };
        namespace pwmxfsValC{
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v00> v00{};
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v01> v01{};
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v10> v10{};
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pwmxfsVal> pwmxfs{}; 
        ///PWM_B Fault State
        enum class pwmbfsVal {
            v00=0x00000000,     ///<Output is forced to logic 0 state prior to consideration of output polarity control.
            v01=0x00000001,     ///<Output is forced to logic 1 state prior to consideration of output polarity control.
            v10=0x00000002,     ///<Output is tristated.
            v11=0x00000003,     ///<Output is tristated.
        };
        namespace pwmbfsValC{
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v00> v00{};
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v01> v01{};
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v10> v10{};
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pwmbfsVal> pwmbfs{}; 
        ///PWM_A Fault State
        enum class pwmafsVal {
            v00=0x00000000,     ///<Output is forced to logic 0 state prior to consideration of output polarity control.
            v01=0x00000001,     ///<Output is forced to logic 1 state prior to consideration of output polarity control.
            v10=0x00000002,     ///<Output is tristated.
            v11=0x00000003,     ///<Output is tristated.
        };
        namespace pwmafsValC{
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v00> v00{};
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v01> v01{};
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v10> v10{};
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pwmafsVal> pwmafs{}; 
        ///PWM_X Output Polarity
        enum class polxVal {
            v0=0x00000000,     ///<PWM_X output not inverted. A high level on the PWM_X pin represents the "on" or "active" state.
            v1=0x00000001,     ///<PWM_X output inverted. A low level on the PWM_X pin represents the "on" or "active" state.
        };
        namespace polxValC{
            constexpr MPL::Value<polxVal,polxVal::v0> v0{};
            constexpr MPL::Value<polxVal,polxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,polxVal> polx{}; 
        ///PWM_B Output Polarity
        enum class polbVal {
            v0=0x00000000,     ///<PWM_B output not inverted. A high level on the PWM_B pin represents the "on" or "active" state.
            v1=0x00000001,     ///<PWM_B output inverted. A low level on the PWM_B pin represents the "on" or "active" state.
        };
        namespace polbValC{
            constexpr MPL::Value<polbVal,polbVal::v0> v0{};
            constexpr MPL::Value<polbVal,polbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,polbVal> polb{}; 
        ///PWM_A Output Polarity
        enum class polaVal {
            v0=0x00000000,     ///<PWM_A output not inverted. A high level on the PWM_A pin represents the "on" or "active" state.
            v1=0x00000001,     ///<PWM_A output inverted. A low level on the PWM_A pin represents the "on" or "active" state.
        };
        namespace polaValC{
            constexpr MPL::Value<polaVal,polaVal::v0> v0{};
            constexpr MPL::Value<polaVal,polaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,polaVal> pola{}; 
        ///PWM_X Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pwmxIn{}; 
        ///PWM_B Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pwmbIn{}; 
        ///PWM_A Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pwmaIn{}; 
    }
    namespace PwmaSm3octrl{    ///<Output Control Register
        using Addr = Register::Address<0x40033142,0xffff18c0,0,unsigned>;
        ///PWM_X Fault State
        enum class pwmxfsVal {
            v00=0x00000000,     ///<Output is forced to logic 0 state prior to consideration of output polarity control.
            v01=0x00000001,     ///<Output is forced to logic 1 state prior to consideration of output polarity control.
            v10=0x00000002,     ///<Output is tristated.
            v11=0x00000003,     ///<Output is tristated.
        };
        namespace pwmxfsValC{
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v00> v00{};
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v01> v01{};
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v10> v10{};
            constexpr MPL::Value<pwmxfsVal,pwmxfsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,pwmxfsVal> pwmxfs{}; 
        ///PWM_B Fault State
        enum class pwmbfsVal {
            v00=0x00000000,     ///<Output is forced to logic 0 state prior to consideration of output polarity control.
            v01=0x00000001,     ///<Output is forced to logic 1 state prior to consideration of output polarity control.
            v10=0x00000002,     ///<Output is tristated.
            v11=0x00000003,     ///<Output is tristated.
        };
        namespace pwmbfsValC{
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v00> v00{};
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v01> v01{};
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v10> v10{};
            constexpr MPL::Value<pwmbfsVal,pwmbfsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,pwmbfsVal> pwmbfs{}; 
        ///PWM_A Fault State
        enum class pwmafsVal {
            v00=0x00000000,     ///<Output is forced to logic 0 state prior to consideration of output polarity control.
            v01=0x00000001,     ///<Output is forced to logic 1 state prior to consideration of output polarity control.
            v10=0x00000002,     ///<Output is tristated.
            v11=0x00000003,     ///<Output is tristated.
        };
        namespace pwmafsValC{
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v00> v00{};
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v01> v01{};
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v10> v10{};
            constexpr MPL::Value<pwmafsVal,pwmafsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,pwmafsVal> pwmafs{}; 
        ///PWM_X Output Polarity
        enum class polxVal {
            v0=0x00000000,     ///<PWM_X output not inverted. A high level on the PWM_X pin represents the "on" or "active" state.
            v1=0x00000001,     ///<PWM_X output inverted. A low level on the PWM_X pin represents the "on" or "active" state.
        };
        namespace polxValC{
            constexpr MPL::Value<polxVal,polxVal::v0> v0{};
            constexpr MPL::Value<polxVal,polxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,polxVal> polx{}; 
        ///PWM_B Output Polarity
        enum class polbVal {
            v0=0x00000000,     ///<PWM_B output not inverted. A high level on the PWM_B pin represents the "on" or "active" state.
            v1=0x00000001,     ///<PWM_B output inverted. A low level on the PWM_B pin represents the "on" or "active" state.
        };
        namespace polbValC{
            constexpr MPL::Value<polbVal,polbVal::v0> v0{};
            constexpr MPL::Value<polbVal,polbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,polbVal> polb{}; 
        ///PWM_A Output Polarity
        enum class polaVal {
            v0=0x00000000,     ///<PWM_A output not inverted. A high level on the PWM_A pin represents the "on" or "active" state.
            v1=0x00000001,     ///<PWM_A output inverted. A low level on the PWM_A pin represents the "on" or "active" state.
        };
        namespace polaValC{
            constexpr MPL::Value<polaVal,polaVal::v0> v0{};
            constexpr MPL::Value<polaVal,polaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,polaVal> pola{}; 
        ///PWM_X Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> pwmxIn{}; 
        ///PWM_B Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pwmbIn{}; 
        ///PWM_A Input
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> pwmaIn{}; 
    }
    namespace PwmaSm0sts{    ///<Status Register
        using Addr = Register::Address<0x40033024,0xffff8000,0,unsigned>;
        ///Compare Flags
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmpf{}; 
        ///Capture Flag X0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cfx0{}; 
        ///Capture Flag X1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cfx1{}; 
        ///Capture Flag B0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cfb0{}; 
        ///Capture Flag B1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cfb1{}; 
        ///Capture Flag A0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cfa0{}; 
        ///Capture Flag A1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cfa1{}; 
        ///Reload Flag
        enum class rfVal {
            v0=0x00000000,     ///<No new reload cycle since last STS[RF] clearing
            v1=0x00000001,     ///<New reload cycle since last STS[RF] clearing
        };
        namespace rfValC{
            constexpr MPL::Value<rfVal,rfVal::v0> v0{};
            constexpr MPL::Value<rfVal,rfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,rfVal> rf{}; 
        ///Reload Error Flag
        enum class refVal {
            v0=0x00000000,     ///<No reload error occurred.
            v1=0x00000001,     ///<Reload signal occurred with non-coherent data and MCTRL[LDOK] = 0.
        };
        namespace refValC{
            constexpr MPL::Value<refVal,refVal::v0> v0{};
            constexpr MPL::Value<refVal,refVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,refVal> ref{}; 
        ///Registers Updated Flag
        enum class rufVal {
            v0=0x00000000,     ///<No register update has occurred since last reload.
            v1=0x00000001,     ///<At least one of the double buffered registers has been updated since the last reload.
        };
        namespace rufValC{
            constexpr MPL::Value<rufVal,rufVal::v0> v0{};
            constexpr MPL::Value<rufVal,rufVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,rufVal> ruf{}; 
    }
    namespace PwmaSm1sts{    ///<Status Register
        using Addr = Register::Address<0x40033084,0xffff8000,0,unsigned>;
        ///Compare Flags
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmpf{}; 
        ///Capture Flag X0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cfx0{}; 
        ///Capture Flag X1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cfx1{}; 
        ///Capture Flag B0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cfb0{}; 
        ///Capture Flag B1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cfb1{}; 
        ///Capture Flag A0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cfa0{}; 
        ///Capture Flag A1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cfa1{}; 
        ///Reload Flag
        enum class rfVal {
            v0=0x00000000,     ///<No new reload cycle since last STS[RF] clearing
            v1=0x00000001,     ///<New reload cycle since last STS[RF] clearing
        };
        namespace rfValC{
            constexpr MPL::Value<rfVal,rfVal::v0> v0{};
            constexpr MPL::Value<rfVal,rfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,rfVal> rf{}; 
        ///Reload Error Flag
        enum class refVal {
            v0=0x00000000,     ///<No reload error occurred.
            v1=0x00000001,     ///<Reload signal occurred with non-coherent data and MCTRL[LDOK] = 0.
        };
        namespace refValC{
            constexpr MPL::Value<refVal,refVal::v0> v0{};
            constexpr MPL::Value<refVal,refVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,refVal> ref{}; 
        ///Registers Updated Flag
        enum class rufVal {
            v0=0x00000000,     ///<No register update has occurred since last reload.
            v1=0x00000001,     ///<At least one of the double buffered registers has been updated since the last reload.
        };
        namespace rufValC{
            constexpr MPL::Value<rufVal,rufVal::v0> v0{};
            constexpr MPL::Value<rufVal,rufVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,rufVal> ruf{}; 
    }
    namespace PwmaSm2sts{    ///<Status Register
        using Addr = Register::Address<0x400330e4,0xffff8000,0,unsigned>;
        ///Compare Flags
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmpf{}; 
        ///Capture Flag X0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cfx0{}; 
        ///Capture Flag X1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cfx1{}; 
        ///Capture Flag B0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cfb0{}; 
        ///Capture Flag B1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cfb1{}; 
        ///Capture Flag A0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cfa0{}; 
        ///Capture Flag A1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cfa1{}; 
        ///Reload Flag
        enum class rfVal {
            v0=0x00000000,     ///<No new reload cycle since last STS[RF] clearing
            v1=0x00000001,     ///<New reload cycle since last STS[RF] clearing
        };
        namespace rfValC{
            constexpr MPL::Value<rfVal,rfVal::v0> v0{};
            constexpr MPL::Value<rfVal,rfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,rfVal> rf{}; 
        ///Reload Error Flag
        enum class refVal {
            v0=0x00000000,     ///<No reload error occurred.
            v1=0x00000001,     ///<Reload signal occurred with non-coherent data and MCTRL[LDOK] = 0.
        };
        namespace refValC{
            constexpr MPL::Value<refVal,refVal::v0> v0{};
            constexpr MPL::Value<refVal,refVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,refVal> ref{}; 
        ///Registers Updated Flag
        enum class rufVal {
            v0=0x00000000,     ///<No register update has occurred since last reload.
            v1=0x00000001,     ///<At least one of the double buffered registers has been updated since the last reload.
        };
        namespace rufValC{
            constexpr MPL::Value<rufVal,rufVal::v0> v0{};
            constexpr MPL::Value<rufVal,rufVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,rufVal> ruf{}; 
    }
    namespace PwmaSm3sts{    ///<Status Register
        using Addr = Register::Address<0x40033144,0xffff8000,0,unsigned>;
        ///Compare Flags
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmpf{}; 
        ///Capture Flag X0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cfx0{}; 
        ///Capture Flag X1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cfx1{}; 
        ///Capture Flag B0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cfb0{}; 
        ///Capture Flag B1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cfb1{}; 
        ///Capture Flag A0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cfa0{}; 
        ///Capture Flag A1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cfa1{}; 
        ///Reload Flag
        enum class rfVal {
            v0=0x00000000,     ///<No new reload cycle since last STS[RF] clearing
            v1=0x00000001,     ///<New reload cycle since last STS[RF] clearing
        };
        namespace rfValC{
            constexpr MPL::Value<rfVal,rfVal::v0> v0{};
            constexpr MPL::Value<rfVal,rfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,rfVal> rf{}; 
        ///Reload Error Flag
        enum class refVal {
            v0=0x00000000,     ///<No reload error occurred.
            v1=0x00000001,     ///<Reload signal occurred with non-coherent data and MCTRL[LDOK] = 0.
        };
        namespace refValC{
            constexpr MPL::Value<refVal,refVal::v0> v0{};
            constexpr MPL::Value<refVal,refVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,refVal> ref{}; 
        ///Registers Updated Flag
        enum class rufVal {
            v0=0x00000000,     ///<No register update has occurred since last reload.
            v1=0x00000001,     ///<At least one of the double buffered registers has been updated since the last reload.
        };
        namespace rufValC{
            constexpr MPL::Value<rufVal,rufVal::v0> v0{};
            constexpr MPL::Value<rufVal,rufVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,rufVal> ruf{}; 
    }
    namespace PwmaSm0inten{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40033026,0xffffc000,0,unsigned>;
        ///Compare Interrupt Enables
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmpie{}; 
        ///Capture X 0 Interrupt Enable
        enum class cx0ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFX0].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFX0].
        };
        namespace cx0ieValC{
            constexpr MPL::Value<cx0ieVal,cx0ieVal::v0> v0{};
            constexpr MPL::Value<cx0ieVal,cx0ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cx0ieVal> cx0ie{}; 
        ///Capture X 1 Interrupt Enable
        enum class cx1ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFX1].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFX1].
        };
        namespace cx1ieValC{
            constexpr MPL::Value<cx1ieVal,cx1ieVal::v0> v0{};
            constexpr MPL::Value<cx1ieVal,cx1ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,cx1ieVal> cx1ie{}; 
        ///Capture B 0 Interrupt Enable
        enum class cb0ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFB0].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFB0].
        };
        namespace cb0ieValC{
            constexpr MPL::Value<cb0ieVal,cb0ieVal::v0> v0{};
            constexpr MPL::Value<cb0ieVal,cb0ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cb0ieVal> cb0ie{}; 
        ///Capture B 1 Interrupt Enable
        enum class cb1ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFB1].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFB1].
        };
        namespace cb1ieValC{
            constexpr MPL::Value<cb1ieVal,cb1ieVal::v0> v0{};
            constexpr MPL::Value<cb1ieVal,cb1ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,cb1ieVal> cb1ie{}; 
        ///Capture A 0 Interrupt Enable
        enum class ca0ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFA0].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFA0].
        };
        namespace ca0ieValC{
            constexpr MPL::Value<ca0ieVal,ca0ieVal::v0> v0{};
            constexpr MPL::Value<ca0ieVal,ca0ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ca0ieVal> ca0ie{}; 
        ///Capture A 1 Interrupt Enable
        enum class ca1ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFA1].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFA1].
        };
        namespace ca1ieValC{
            constexpr MPL::Value<ca1ieVal,ca1ieVal::v0> v0{};
            constexpr MPL::Value<ca1ieVal,ca1ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ca1ieVal> ca1ie{}; 
        ///Reload Interrupt Enable
        enum class rieVal {
            v0=0x00000000,     ///<STS[RF] CPU interrupt requests disabled
            v1=0x00000001,     ///<STS[RF] CPU interrupt requests enabled
        };
        namespace rieValC{
            constexpr MPL::Value<rieVal,rieVal::v0> v0{};
            constexpr MPL::Value<rieVal,rieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,rieVal> rie{}; 
        ///Reload Error Interrupt Enable
        enum class reieVal {
            v0=0x00000000,     ///<STS[REF] CPU interrupt requests disabled
            v1=0x00000001,     ///<STS[REF] CPU interrupt requests enabled
        };
        namespace reieValC{
            constexpr MPL::Value<reieVal,reieVal::v0> v0{};
            constexpr MPL::Value<reieVal,reieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,reieVal> reie{}; 
    }
    namespace PwmaSm1inten{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40033086,0xffffc000,0,unsigned>;
        ///Compare Interrupt Enables
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmpie{}; 
        ///Capture X 0 Interrupt Enable
        enum class cx0ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFX0].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFX0].
        };
        namespace cx0ieValC{
            constexpr MPL::Value<cx0ieVal,cx0ieVal::v0> v0{};
            constexpr MPL::Value<cx0ieVal,cx0ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cx0ieVal> cx0ie{}; 
        ///Capture X 1 Interrupt Enable
        enum class cx1ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFX1].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFX1].
        };
        namespace cx1ieValC{
            constexpr MPL::Value<cx1ieVal,cx1ieVal::v0> v0{};
            constexpr MPL::Value<cx1ieVal,cx1ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,cx1ieVal> cx1ie{}; 
        ///Capture B 0 Interrupt Enable
        enum class cb0ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFB0].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFB0].
        };
        namespace cb0ieValC{
            constexpr MPL::Value<cb0ieVal,cb0ieVal::v0> v0{};
            constexpr MPL::Value<cb0ieVal,cb0ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cb0ieVal> cb0ie{}; 
        ///Capture B 1 Interrupt Enable
        enum class cb1ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFB1].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFB1].
        };
        namespace cb1ieValC{
            constexpr MPL::Value<cb1ieVal,cb1ieVal::v0> v0{};
            constexpr MPL::Value<cb1ieVal,cb1ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,cb1ieVal> cb1ie{}; 
        ///Capture A 0 Interrupt Enable
        enum class ca0ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFA0].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFA0].
        };
        namespace ca0ieValC{
            constexpr MPL::Value<ca0ieVal,ca0ieVal::v0> v0{};
            constexpr MPL::Value<ca0ieVal,ca0ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ca0ieVal> ca0ie{}; 
        ///Capture A 1 Interrupt Enable
        enum class ca1ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFA1].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFA1].
        };
        namespace ca1ieValC{
            constexpr MPL::Value<ca1ieVal,ca1ieVal::v0> v0{};
            constexpr MPL::Value<ca1ieVal,ca1ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ca1ieVal> ca1ie{}; 
        ///Reload Interrupt Enable
        enum class rieVal {
            v0=0x00000000,     ///<STS[RF] CPU interrupt requests disabled
            v1=0x00000001,     ///<STS[RF] CPU interrupt requests enabled
        };
        namespace rieValC{
            constexpr MPL::Value<rieVal,rieVal::v0> v0{};
            constexpr MPL::Value<rieVal,rieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,rieVal> rie{}; 
        ///Reload Error Interrupt Enable
        enum class reieVal {
            v0=0x00000000,     ///<STS[REF] CPU interrupt requests disabled
            v1=0x00000001,     ///<STS[REF] CPU interrupt requests enabled
        };
        namespace reieValC{
            constexpr MPL::Value<reieVal,reieVal::v0> v0{};
            constexpr MPL::Value<reieVal,reieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,reieVal> reie{}; 
    }
    namespace PwmaSm2inten{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x400330e6,0xffffc000,0,unsigned>;
        ///Compare Interrupt Enables
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmpie{}; 
        ///Capture X 0 Interrupt Enable
        enum class cx0ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFX0].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFX0].
        };
        namespace cx0ieValC{
            constexpr MPL::Value<cx0ieVal,cx0ieVal::v0> v0{};
            constexpr MPL::Value<cx0ieVal,cx0ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cx0ieVal> cx0ie{}; 
        ///Capture X 1 Interrupt Enable
        enum class cx1ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFX1].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFX1].
        };
        namespace cx1ieValC{
            constexpr MPL::Value<cx1ieVal,cx1ieVal::v0> v0{};
            constexpr MPL::Value<cx1ieVal,cx1ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,cx1ieVal> cx1ie{}; 
        ///Capture B 0 Interrupt Enable
        enum class cb0ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFB0].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFB0].
        };
        namespace cb0ieValC{
            constexpr MPL::Value<cb0ieVal,cb0ieVal::v0> v0{};
            constexpr MPL::Value<cb0ieVal,cb0ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cb0ieVal> cb0ie{}; 
        ///Capture B 1 Interrupt Enable
        enum class cb1ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFB1].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFB1].
        };
        namespace cb1ieValC{
            constexpr MPL::Value<cb1ieVal,cb1ieVal::v0> v0{};
            constexpr MPL::Value<cb1ieVal,cb1ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,cb1ieVal> cb1ie{}; 
        ///Capture A 0 Interrupt Enable
        enum class ca0ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFA0].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFA0].
        };
        namespace ca0ieValC{
            constexpr MPL::Value<ca0ieVal,ca0ieVal::v0> v0{};
            constexpr MPL::Value<ca0ieVal,ca0ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ca0ieVal> ca0ie{}; 
        ///Capture A 1 Interrupt Enable
        enum class ca1ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFA1].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFA1].
        };
        namespace ca1ieValC{
            constexpr MPL::Value<ca1ieVal,ca1ieVal::v0> v0{};
            constexpr MPL::Value<ca1ieVal,ca1ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ca1ieVal> ca1ie{}; 
        ///Reload Interrupt Enable
        enum class rieVal {
            v0=0x00000000,     ///<STS[RF] CPU interrupt requests disabled
            v1=0x00000001,     ///<STS[RF] CPU interrupt requests enabled
        };
        namespace rieValC{
            constexpr MPL::Value<rieVal,rieVal::v0> v0{};
            constexpr MPL::Value<rieVal,rieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,rieVal> rie{}; 
        ///Reload Error Interrupt Enable
        enum class reieVal {
            v0=0x00000000,     ///<STS[REF] CPU interrupt requests disabled
            v1=0x00000001,     ///<STS[REF] CPU interrupt requests enabled
        };
        namespace reieValC{
            constexpr MPL::Value<reieVal,reieVal::v0> v0{};
            constexpr MPL::Value<reieVal,reieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,reieVal> reie{}; 
    }
    namespace PwmaSm3inten{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40033146,0xffffc000,0,unsigned>;
        ///Compare Interrupt Enables
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> cmpie{}; 
        ///Capture X 0 Interrupt Enable
        enum class cx0ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFX0].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFX0].
        };
        namespace cx0ieValC{
            constexpr MPL::Value<cx0ieVal,cx0ieVal::v0> v0{};
            constexpr MPL::Value<cx0ieVal,cx0ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cx0ieVal> cx0ie{}; 
        ///Capture X 1 Interrupt Enable
        enum class cx1ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFX1].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFX1].
        };
        namespace cx1ieValC{
            constexpr MPL::Value<cx1ieVal,cx1ieVal::v0> v0{};
            constexpr MPL::Value<cx1ieVal,cx1ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,cx1ieVal> cx1ie{}; 
        ///Capture B 0 Interrupt Enable
        enum class cb0ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFB0].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFB0].
        };
        namespace cb0ieValC{
            constexpr MPL::Value<cb0ieVal,cb0ieVal::v0> v0{};
            constexpr MPL::Value<cb0ieVal,cb0ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cb0ieVal> cb0ie{}; 
        ///Capture B 1 Interrupt Enable
        enum class cb1ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFB1].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFB1].
        };
        namespace cb1ieValC{
            constexpr MPL::Value<cb1ieVal,cb1ieVal::v0> v0{};
            constexpr MPL::Value<cb1ieVal,cb1ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,cb1ieVal> cb1ie{}; 
        ///Capture A 0 Interrupt Enable
        enum class ca0ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFA0].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFA0].
        };
        namespace ca0ieValC{
            constexpr MPL::Value<ca0ieVal,ca0ieVal::v0> v0{};
            constexpr MPL::Value<ca0ieVal,ca0ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,ca0ieVal> ca0ie{}; 
        ///Capture A 1 Interrupt Enable
        enum class ca1ieVal {
            v0=0x00000000,     ///<Interrupt request disabled for STS[CFA1].
            v1=0x00000001,     ///<Interrupt request enabled for STS[CFA1].
        };
        namespace ca1ieValC{
            constexpr MPL::Value<ca1ieVal,ca1ieVal::v0> v0{};
            constexpr MPL::Value<ca1ieVal,ca1ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ca1ieVal> ca1ie{}; 
        ///Reload Interrupt Enable
        enum class rieVal {
            v0=0x00000000,     ///<STS[RF] CPU interrupt requests disabled
            v1=0x00000001,     ///<STS[RF] CPU interrupt requests enabled
        };
        namespace rieValC{
            constexpr MPL::Value<rieVal,rieVal::v0> v0{};
            constexpr MPL::Value<rieVal,rieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,rieVal> rie{}; 
        ///Reload Error Interrupt Enable
        enum class reieVal {
            v0=0x00000000,     ///<STS[REF] CPU interrupt requests disabled
            v1=0x00000001,     ///<STS[REF] CPU interrupt requests enabled
        };
        namespace reieValC{
            constexpr MPL::Value<reieVal,reieVal::v0> v0{};
            constexpr MPL::Value<reieVal,reieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,reieVal> reie{}; 
    }
    namespace PwmaSm0dmaen{    ///<DMA Enable Register
        using Addr = Register::Address<0x40033028,0xfffffc00,0,unsigned>;
        ///Capture X0 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cx0de{}; 
        ///Capture X1 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cx1de{}; 
        ///Capture B0 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cb0de{}; 
        ///Capture B1 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cb1de{}; 
        ///Capture A0 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ca0de{}; 
        ///Capture A1 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ca1de{}; 
        ///Capture DMA Enable Source Select
        enum class captdeVal {
            v00=0x00000000,     ///<Read DMA requests disabled.
            v01=0x00000001,     ///<Exceeding a FIFO watermark sets the DMA read request. This requires at least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DMAEN[CX1DE], or DMAEN[CX0DE] to also be set in order to determine to which watermark(s) the DMA request is sensitive.
            v10=0x00000002,     ///<A local sync (VAL1 matches counter) sets the read DMA request.
            v11=0x00000003,     ///<A local reload (STS[RF] being set) sets the read DMA request.
        };
        namespace captdeValC{
            constexpr MPL::Value<captdeVal,captdeVal::v00> v00{};
            constexpr MPL::Value<captdeVal,captdeVal::v01> v01{};
            constexpr MPL::Value<captdeVal,captdeVal::v10> v10{};
            constexpr MPL::Value<captdeVal,captdeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,captdeVal> captde{}; 
        ///FIFO Watermark AND Control
        enum class fandVal {
            v0=0x00000000,     ///<Selected FIFO watermarks are OR'ed together.
            v1=0x00000001,     ///<Selected FIFO watermarks are AND'ed together.
        };
        namespace fandValC{
            constexpr MPL::Value<fandVal,fandVal::v0> v0{};
            constexpr MPL::Value<fandVal,fandVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fandVal> fand{}; 
        ///Value Registers DMA Enable
        enum class valdeVal {
            v0=0x00000000,     ///<DMA write requests disabled
            v1=0x00000001,     ///<DMA write requests for the VALx and FRACVALx registers enabled
        };
        namespace valdeValC{
            constexpr MPL::Value<valdeVal,valdeVal::v0> v0{};
            constexpr MPL::Value<valdeVal,valdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,valdeVal> valde{}; 
    }
    namespace PwmaSm1dmaen{    ///<DMA Enable Register
        using Addr = Register::Address<0x40033088,0xfffffc00,0,unsigned>;
        ///Capture X0 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cx0de{}; 
        ///Capture X1 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cx1de{}; 
        ///Capture B0 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cb0de{}; 
        ///Capture B1 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cb1de{}; 
        ///Capture A0 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ca0de{}; 
        ///Capture A1 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ca1de{}; 
        ///Capture DMA Enable Source Select
        enum class captdeVal {
            v00=0x00000000,     ///<Read DMA requests disabled.
            v01=0x00000001,     ///<Exceeding a FIFO watermark sets the DMA read request. This requires at least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DMAEN[CX1DE], or DMAEN[CX0DE] to also be set in order to determine to which watermark(s) the DMA request is sensitive.
            v10=0x00000002,     ///<A local sync (VAL1 matches counter) sets the read DMA request.
            v11=0x00000003,     ///<A local reload (STS[RF] being set) sets the read DMA request.
        };
        namespace captdeValC{
            constexpr MPL::Value<captdeVal,captdeVal::v00> v00{};
            constexpr MPL::Value<captdeVal,captdeVal::v01> v01{};
            constexpr MPL::Value<captdeVal,captdeVal::v10> v10{};
            constexpr MPL::Value<captdeVal,captdeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,captdeVal> captde{}; 
        ///FIFO Watermark AND Control
        enum class fandVal {
            v0=0x00000000,     ///<Selected FIFO watermarks are OR'ed together.
            v1=0x00000001,     ///<Selected FIFO watermarks are AND'ed together.
        };
        namespace fandValC{
            constexpr MPL::Value<fandVal,fandVal::v0> v0{};
            constexpr MPL::Value<fandVal,fandVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fandVal> fand{}; 
        ///Value Registers DMA Enable
        enum class valdeVal {
            v0=0x00000000,     ///<DMA write requests disabled
            v1=0x00000001,     ///<DMA write requests for the VALx and FRACVALx registers enabled
        };
        namespace valdeValC{
            constexpr MPL::Value<valdeVal,valdeVal::v0> v0{};
            constexpr MPL::Value<valdeVal,valdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,valdeVal> valde{}; 
    }
    namespace PwmaSm2dmaen{    ///<DMA Enable Register
        using Addr = Register::Address<0x400330e8,0xfffffc00,0,unsigned>;
        ///Capture X0 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cx0de{}; 
        ///Capture X1 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cx1de{}; 
        ///Capture B0 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cb0de{}; 
        ///Capture B1 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cb1de{}; 
        ///Capture A0 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ca0de{}; 
        ///Capture A1 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ca1de{}; 
        ///Capture DMA Enable Source Select
        enum class captdeVal {
            v00=0x00000000,     ///<Read DMA requests disabled.
            v01=0x00000001,     ///<Exceeding a FIFO watermark sets the DMA read request. This requires at least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DMAEN[CX1DE], or DMAEN[CX0DE] to also be set in order to determine to which watermark(s) the DMA request is sensitive.
            v10=0x00000002,     ///<A local sync (VAL1 matches counter) sets the read DMA request.
            v11=0x00000003,     ///<A local reload (STS[RF] being set) sets the read DMA request.
        };
        namespace captdeValC{
            constexpr MPL::Value<captdeVal,captdeVal::v00> v00{};
            constexpr MPL::Value<captdeVal,captdeVal::v01> v01{};
            constexpr MPL::Value<captdeVal,captdeVal::v10> v10{};
            constexpr MPL::Value<captdeVal,captdeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,captdeVal> captde{}; 
        ///FIFO Watermark AND Control
        enum class fandVal {
            v0=0x00000000,     ///<Selected FIFO watermarks are OR'ed together.
            v1=0x00000001,     ///<Selected FIFO watermarks are AND'ed together.
        };
        namespace fandValC{
            constexpr MPL::Value<fandVal,fandVal::v0> v0{};
            constexpr MPL::Value<fandVal,fandVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fandVal> fand{}; 
        ///Value Registers DMA Enable
        enum class valdeVal {
            v0=0x00000000,     ///<DMA write requests disabled
            v1=0x00000001,     ///<DMA write requests for the VALx and FRACVALx registers enabled
        };
        namespace valdeValC{
            constexpr MPL::Value<valdeVal,valdeVal::v0> v0{};
            constexpr MPL::Value<valdeVal,valdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,valdeVal> valde{}; 
    }
    namespace PwmaSm3dmaen{    ///<DMA Enable Register
        using Addr = Register::Address<0x40033148,0xfffffc00,0,unsigned>;
        ///Capture X0 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cx0de{}; 
        ///Capture X1 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cx1de{}; 
        ///Capture B0 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cb0de{}; 
        ///Capture B1 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cb1de{}; 
        ///Capture A0 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ca0de{}; 
        ///Capture A1 FIFO DMA Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ca1de{}; 
        ///Capture DMA Enable Source Select
        enum class captdeVal {
            v00=0x00000000,     ///<Read DMA requests disabled.
            v01=0x00000001,     ///<Exceeding a FIFO watermark sets the DMA read request. This requires at least one of DMAEN[CA1DE], DMAEN[CA0DE], DMAEN[CB1DE], DMAEN[CB0DE], DMAEN[CX1DE], or DMAEN[CX0DE] to also be set in order to determine to which watermark(s) the DMA request is sensitive.
            v10=0x00000002,     ///<A local sync (VAL1 matches counter) sets the read DMA request.
            v11=0x00000003,     ///<A local reload (STS[RF] being set) sets the read DMA request.
        };
        namespace captdeValC{
            constexpr MPL::Value<captdeVal,captdeVal::v00> v00{};
            constexpr MPL::Value<captdeVal,captdeVal::v01> v01{};
            constexpr MPL::Value<captdeVal,captdeVal::v10> v10{};
            constexpr MPL::Value<captdeVal,captdeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,captdeVal> captde{}; 
        ///FIFO Watermark AND Control
        enum class fandVal {
            v0=0x00000000,     ///<Selected FIFO watermarks are OR'ed together.
            v1=0x00000001,     ///<Selected FIFO watermarks are AND'ed together.
        };
        namespace fandValC{
            constexpr MPL::Value<fandVal,fandVal::v0> v0{};
            constexpr MPL::Value<fandVal,fandVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fandVal> fand{}; 
        ///Value Registers DMA Enable
        enum class valdeVal {
            v0=0x00000000,     ///<DMA write requests disabled
            v1=0x00000001,     ///<DMA write requests for the VALx and FRACVALx registers enabled
        };
        namespace valdeValC{
            constexpr MPL::Value<valdeVal,valdeVal::v0> v0{};
            constexpr MPL::Value<valdeVal,valdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,valdeVal> valde{}; 
    }
    namespace PwmaSm0tctrl{    ///<Output Trigger Control Register
        using Addr = Register::Address<0x4003302a,0xffff3fc0,0,unsigned>;
        ///Output Trigger Enables
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> outTrigEn{}; 
        ///Output Trigger 1 Source Select
        enum class pwbot1Val {
            v0=0x00000000,     ///<Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
            v1=0x00000001,     ///<Route the PWMB output to the PWM_OUT_TRIG1 port.
        };
        namespace pwbot1ValC{
            constexpr MPL::Value<pwbot1Val,pwbot1Val::v0> v0{};
            constexpr MPL::Value<pwbot1Val,pwbot1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pwbot1Val> pwbot1{}; 
        ///Output Trigger 0 Source Select
        enum class pwaot0Val {
            v0=0x00000000,     ///<Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
            v1=0x00000001,     ///<Route the PWMA output to the PWM_OUT_TRIG0 port.
        };
        namespace pwaot0ValC{
            constexpr MPL::Value<pwaot0Val,pwaot0Val::v0> v0{};
            constexpr MPL::Value<pwaot0Val,pwaot0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pwaot0Val> pwaot0{}; 
    }
    namespace PwmaSm1tctrl{    ///<Output Trigger Control Register
        using Addr = Register::Address<0x4003308a,0xffff3fc0,0,unsigned>;
        ///Output Trigger Enables
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> outTrigEn{}; 
        ///Output Trigger 1 Source Select
        enum class pwbot1Val {
            v0=0x00000000,     ///<Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
            v1=0x00000001,     ///<Route the PWMB output to the PWM_OUT_TRIG1 port.
        };
        namespace pwbot1ValC{
            constexpr MPL::Value<pwbot1Val,pwbot1Val::v0> v0{};
            constexpr MPL::Value<pwbot1Val,pwbot1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pwbot1Val> pwbot1{}; 
        ///Output Trigger 0 Source Select
        enum class pwaot0Val {
            v0=0x00000000,     ///<Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
            v1=0x00000001,     ///<Route the PWMA output to the PWM_OUT_TRIG0 port.
        };
        namespace pwaot0ValC{
            constexpr MPL::Value<pwaot0Val,pwaot0Val::v0> v0{};
            constexpr MPL::Value<pwaot0Val,pwaot0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pwaot0Val> pwaot0{}; 
    }
    namespace PwmaSm2tctrl{    ///<Output Trigger Control Register
        using Addr = Register::Address<0x400330ea,0xffff3fc0,0,unsigned>;
        ///Output Trigger Enables
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> outTrigEn{}; 
        ///Output Trigger 1 Source Select
        enum class pwbot1Val {
            v0=0x00000000,     ///<Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
            v1=0x00000001,     ///<Route the PWMB output to the PWM_OUT_TRIG1 port.
        };
        namespace pwbot1ValC{
            constexpr MPL::Value<pwbot1Val,pwbot1Val::v0> v0{};
            constexpr MPL::Value<pwbot1Val,pwbot1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pwbot1Val> pwbot1{}; 
        ///Output Trigger 0 Source Select
        enum class pwaot0Val {
            v0=0x00000000,     ///<Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
            v1=0x00000001,     ///<Route the PWMA output to the PWM_OUT_TRIG0 port.
        };
        namespace pwaot0ValC{
            constexpr MPL::Value<pwaot0Val,pwaot0Val::v0> v0{};
            constexpr MPL::Value<pwaot0Val,pwaot0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pwaot0Val> pwaot0{}; 
    }
    namespace PwmaSm3tctrl{    ///<Output Trigger Control Register
        using Addr = Register::Address<0x4003314a,0xffff3fc0,0,unsigned>;
        ///Output Trigger Enables
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> outTrigEn{}; 
        ///Output Trigger 1 Source Select
        enum class pwbot1Val {
            v0=0x00000000,     ///<Route the PWM_OUT_TRIG1 signal to PWM_OUT_TRIG1 port.
            v1=0x00000001,     ///<Route the PWMB output to the PWM_OUT_TRIG1 port.
        };
        namespace pwbot1ValC{
            constexpr MPL::Value<pwbot1Val,pwbot1Val::v0> v0{};
            constexpr MPL::Value<pwbot1Val,pwbot1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,pwbot1Val> pwbot1{}; 
        ///Output Trigger 0 Source Select
        enum class pwaot0Val {
            v0=0x00000000,     ///<Route the PWM_OUT_TRIG0 signal to PWM_OUT_TRIG0 port.
            v1=0x00000001,     ///<Route the PWMA output to the PWM_OUT_TRIG0 port.
        };
        namespace pwaot0ValC{
            constexpr MPL::Value<pwaot0Val,pwaot0Val::v0> v0{};
            constexpr MPL::Value<pwaot0Val,pwaot0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,pwaot0Val> pwaot0{}; 
    }
    namespace PwmaSm0dismap0{    ///<Fault Disable Mapping Register 0
        using Addr = Register::Address<0x4003302c,0xfffff000,0,unsigned>;
        ///PWM_A Fault Disable Mask 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dis0a{}; 
        ///PWM_B Fault Disable Mask 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dis0b{}; 
        ///PWM_X Fault Disable Mask 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> dis0x{}; 
    }
    namespace PwmaSm1dismap0{    ///<Fault Disable Mapping Register 0
        using Addr = Register::Address<0x4003308c,0xfffff000,0,unsigned>;
        ///PWM_A Fault Disable Mask 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dis0a{}; 
        ///PWM_B Fault Disable Mask 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dis0b{}; 
        ///PWM_X Fault Disable Mask 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> dis0x{}; 
    }
    namespace PwmaSm2dismap0{    ///<Fault Disable Mapping Register 0
        using Addr = Register::Address<0x400330ec,0xfffff000,0,unsigned>;
        ///PWM_A Fault Disable Mask 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dis0a{}; 
        ///PWM_B Fault Disable Mask 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dis0b{}; 
        ///PWM_X Fault Disable Mask 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> dis0x{}; 
    }
    namespace PwmaSm3dismap0{    ///<Fault Disable Mapping Register 0
        using Addr = Register::Address<0x4003314c,0xfffff000,0,unsigned>;
        ///PWM_A Fault Disable Mask 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dis0a{}; 
        ///PWM_B Fault Disable Mask 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dis0b{}; 
        ///PWM_X Fault Disable Mask 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> dis0x{}; 
    }
    namespace PwmaSm0dtcnt0{    ///<Deadtime Count Register 0
        using Addr = Register::Address<0x40033030,0xfffff800,0,unsigned>;
        ///Deadtime Count Register 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dtcnt0{}; 
    }
    namespace PwmaSm1dtcnt0{    ///<Deadtime Count Register 0
        using Addr = Register::Address<0x40033090,0xfffff800,0,unsigned>;
        ///Deadtime Count Register 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dtcnt0{}; 
    }
    namespace PwmaSm2dtcnt0{    ///<Deadtime Count Register 0
        using Addr = Register::Address<0x400330f0,0xfffff800,0,unsigned>;
        ///Deadtime Count Register 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dtcnt0{}; 
    }
    namespace PwmaSm3dtcnt0{    ///<Deadtime Count Register 0
        using Addr = Register::Address<0x40033150,0xfffff800,0,unsigned>;
        ///Deadtime Count Register 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dtcnt0{}; 
    }
    namespace PwmaSm0dtcnt1{    ///<Deadtime Count Register 1
        using Addr = Register::Address<0x40033032,0xfffff800,0,unsigned>;
        ///Deadtime Count Register 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dtcnt1{}; 
    }
    namespace PwmaSm1dtcnt1{    ///<Deadtime Count Register 1
        using Addr = Register::Address<0x40033092,0xfffff800,0,unsigned>;
        ///Deadtime Count Register 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dtcnt1{}; 
    }
    namespace PwmaSm2dtcnt1{    ///<Deadtime Count Register 1
        using Addr = Register::Address<0x400330f2,0xfffff800,0,unsigned>;
        ///Deadtime Count Register 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dtcnt1{}; 
    }
    namespace PwmaSm3dtcnt1{    ///<Deadtime Count Register 1
        using Addr = Register::Address<0x40033152,0xfffff800,0,unsigned>;
        ///Deadtime Count Register 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> dtcnt1{}; 
    }
    namespace PwmaSm0captctrla{    ///<Capture Control A Register
        using Addr = Register::Address<0x40033034,0xffff0000,0,unsigned>;
        ///Arm A
        enum class armaVal {
            v0=0x00000000,     ///<Input capture operation is disabled.
            v1=0x00000001,     ///<Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
        };
        namespace armaValC{
            constexpr MPL::Value<armaVal,armaVal::v0> v0{};
            constexpr MPL::Value<armaVal,armaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,armaVal> arma{}; 
        ///One Shot Mode A
        enum class oneshotaVal {
            v0=0x00000000,     ///<Free running mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLA[ARMA] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and capture circuit 0 is re-armed. The process continues indefinitely. If only one of the capture circuits is enabled, then captures continue indefinitely on the enabled capture circuit.
            v1=0x00000001,     ///<One shot mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLA[ARMA] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and CAPTCTRLA[ARMA] is cleared. No further captures will be performed until CAPTCTRLA[ARMA] is set again. If only one of the capture circuits is enabled, then a single capture will occur on the enabled capture circuit and CAPTCTRLA[ARMA] is then cleared.
        };
        namespace oneshotaValC{
            constexpr MPL::Value<oneshotaVal,oneshotaVal::v0> v0{};
            constexpr MPL::Value<oneshotaVal,oneshotaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oneshotaVal> oneshota{}; 
        ///Edge A 0
        enum class edga0Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edga0ValC{
            constexpr MPL::Value<edga0Val,edga0Val::v00> v00{};
            constexpr MPL::Value<edga0Val,edga0Val::v01> v01{};
            constexpr MPL::Value<edga0Val,edga0Val::v10> v10{};
            constexpr MPL::Value<edga0Val,edga0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,edga0Val> edga0{}; 
        ///Edge A 1
        enum class edga1Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edga1ValC{
            constexpr MPL::Value<edga1Val,edga1Val::v00> v00{};
            constexpr MPL::Value<edga1Val,edga1Val::v01> v01{};
            constexpr MPL::Value<edga1Val,edga1Val::v10> v10{};
            constexpr MPL::Value<edga1Val,edga1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,edga1Val> edga1{}; 
        ///Input Select A
        enum class inpSelaVal {
            v0=0x00000000,     ///<Raw PWM_A input signal selected as source.
            v1=0x00000001,     ///<Output of edge counter/compare selected as source. When this bitfield is set to 1, the internal edge counter is enabled and the rising and/or falling edges specified by the CAPTCTRLA[EDGA0] and CAPTCTRLA[EDGA1] fields are ignored. The software must still place a value other than 00 in either or both of the CAPTCTLRA[EDGA0] and/or CAPTCTRLA[EDGA1] fields in order to enable one or both of the capture registers.
        };
        namespace inpSelaValC{
            constexpr MPL::Value<inpSelaVal,inpSelaVal::v0> v0{};
            constexpr MPL::Value<inpSelaVal,inpSelaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,inpSelaVal> inpSela{}; 
        ///Edge Counter A Enable
        enum class edgcntaEnVal {
            v0=0x00000000,     ///<Edge counter disabled and held in reset
            v1=0x00000001,     ///<Edge counter enabled
        };
        namespace edgcntaEnValC{
            constexpr MPL::Value<edgcntaEnVal,edgcntaEnVal::v0> v0{};
            constexpr MPL::Value<edgcntaEnVal,edgcntaEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,edgcntaEnVal> edgcntaEn{}; 
        ///Capture A FIFOs Water Mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cfawm{}; 
        ///Capture A0 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> ca0cnt{}; 
        ///Capture A1 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> ca1cnt{}; 
    }
    namespace PwmaSm1captctrla{    ///<Capture Control A Register
        using Addr = Register::Address<0x40033094,0xffff0000,0,unsigned>;
        ///Arm A
        enum class armaVal {
            v0=0x00000000,     ///<Input capture operation is disabled.
            v1=0x00000001,     ///<Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
        };
        namespace armaValC{
            constexpr MPL::Value<armaVal,armaVal::v0> v0{};
            constexpr MPL::Value<armaVal,armaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,armaVal> arma{}; 
        ///One Shot Mode A
        enum class oneshotaVal {
            v0=0x00000000,     ///<Free running mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLA[ARMA] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and capture circuit 0 is re-armed. The process continues indefinitely. If only one of the capture circuits is enabled, then captures continue indefinitely on the enabled capture circuit.
            v1=0x00000001,     ///<One shot mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLA[ARMA] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and CAPTCTRLA[ARMA] is cleared. No further captures will be performed until CAPTCTRLA[ARMA] is set again. If only one of the capture circuits is enabled, then a single capture will occur on the enabled capture circuit and CAPTCTRLA[ARMA] is then cleared.
        };
        namespace oneshotaValC{
            constexpr MPL::Value<oneshotaVal,oneshotaVal::v0> v0{};
            constexpr MPL::Value<oneshotaVal,oneshotaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oneshotaVal> oneshota{}; 
        ///Edge A 0
        enum class edga0Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edga0ValC{
            constexpr MPL::Value<edga0Val,edga0Val::v00> v00{};
            constexpr MPL::Value<edga0Val,edga0Val::v01> v01{};
            constexpr MPL::Value<edga0Val,edga0Val::v10> v10{};
            constexpr MPL::Value<edga0Val,edga0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,edga0Val> edga0{}; 
        ///Edge A 1
        enum class edga1Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edga1ValC{
            constexpr MPL::Value<edga1Val,edga1Val::v00> v00{};
            constexpr MPL::Value<edga1Val,edga1Val::v01> v01{};
            constexpr MPL::Value<edga1Val,edga1Val::v10> v10{};
            constexpr MPL::Value<edga1Val,edga1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,edga1Val> edga1{}; 
        ///Input Select A
        enum class inpSelaVal {
            v0=0x00000000,     ///<Raw PWM_A input signal selected as source.
            v1=0x00000001,     ///<Output of edge counter/compare selected as source. When this bitfield is set to 1, the internal edge counter is enabled and the rising and/or falling edges specified by the CAPTCTRLA[EDGA0] and CAPTCTRLA[EDGA1] fields are ignored. The software must still place a value other than 00 in either or both of the CAPTCTLRA[EDGA0] and/or CAPTCTRLA[EDGA1] fields in order to enable one or both of the capture registers.
        };
        namespace inpSelaValC{
            constexpr MPL::Value<inpSelaVal,inpSelaVal::v0> v0{};
            constexpr MPL::Value<inpSelaVal,inpSelaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,inpSelaVal> inpSela{}; 
        ///Edge Counter A Enable
        enum class edgcntaEnVal {
            v0=0x00000000,     ///<Edge counter disabled and held in reset
            v1=0x00000001,     ///<Edge counter enabled
        };
        namespace edgcntaEnValC{
            constexpr MPL::Value<edgcntaEnVal,edgcntaEnVal::v0> v0{};
            constexpr MPL::Value<edgcntaEnVal,edgcntaEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,edgcntaEnVal> edgcntaEn{}; 
        ///Capture A FIFOs Water Mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cfawm{}; 
        ///Capture A0 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> ca0cnt{}; 
        ///Capture A1 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> ca1cnt{}; 
    }
    namespace PwmaSm2captctrla{    ///<Capture Control A Register
        using Addr = Register::Address<0x400330f4,0xffff0000,0,unsigned>;
        ///Arm A
        enum class armaVal {
            v0=0x00000000,     ///<Input capture operation is disabled.
            v1=0x00000001,     ///<Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
        };
        namespace armaValC{
            constexpr MPL::Value<armaVal,armaVal::v0> v0{};
            constexpr MPL::Value<armaVal,armaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,armaVal> arma{}; 
        ///One Shot Mode A
        enum class oneshotaVal {
            v0=0x00000000,     ///<Free running mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLA[ARMA] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and capture circuit 0 is re-armed. The process continues indefinitely. If only one of the capture circuits is enabled, then captures continue indefinitely on the enabled capture circuit.
            v1=0x00000001,     ///<One shot mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLA[ARMA] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and CAPTCTRLA[ARMA] is cleared. No further captures will be performed until CAPTCTRLA[ARMA] is set again. If only one of the capture circuits is enabled, then a single capture will occur on the enabled capture circuit and CAPTCTRLA[ARMA] is then cleared.
        };
        namespace oneshotaValC{
            constexpr MPL::Value<oneshotaVal,oneshotaVal::v0> v0{};
            constexpr MPL::Value<oneshotaVal,oneshotaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oneshotaVal> oneshota{}; 
        ///Edge A 0
        enum class edga0Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edga0ValC{
            constexpr MPL::Value<edga0Val,edga0Val::v00> v00{};
            constexpr MPL::Value<edga0Val,edga0Val::v01> v01{};
            constexpr MPL::Value<edga0Val,edga0Val::v10> v10{};
            constexpr MPL::Value<edga0Val,edga0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,edga0Val> edga0{}; 
        ///Edge A 1
        enum class edga1Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edga1ValC{
            constexpr MPL::Value<edga1Val,edga1Val::v00> v00{};
            constexpr MPL::Value<edga1Val,edga1Val::v01> v01{};
            constexpr MPL::Value<edga1Val,edga1Val::v10> v10{};
            constexpr MPL::Value<edga1Val,edga1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,edga1Val> edga1{}; 
        ///Input Select A
        enum class inpSelaVal {
            v0=0x00000000,     ///<Raw PWM_A input signal selected as source.
            v1=0x00000001,     ///<Output of edge counter/compare selected as source. When this bitfield is set to 1, the internal edge counter is enabled and the rising and/or falling edges specified by the CAPTCTRLA[EDGA0] and CAPTCTRLA[EDGA1] fields are ignored. The software must still place a value other than 00 in either or both of the CAPTCTLRA[EDGA0] and/or CAPTCTRLA[EDGA1] fields in order to enable one or both of the capture registers.
        };
        namespace inpSelaValC{
            constexpr MPL::Value<inpSelaVal,inpSelaVal::v0> v0{};
            constexpr MPL::Value<inpSelaVal,inpSelaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,inpSelaVal> inpSela{}; 
        ///Edge Counter A Enable
        enum class edgcntaEnVal {
            v0=0x00000000,     ///<Edge counter disabled and held in reset
            v1=0x00000001,     ///<Edge counter enabled
        };
        namespace edgcntaEnValC{
            constexpr MPL::Value<edgcntaEnVal,edgcntaEnVal::v0> v0{};
            constexpr MPL::Value<edgcntaEnVal,edgcntaEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,edgcntaEnVal> edgcntaEn{}; 
        ///Capture A FIFOs Water Mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cfawm{}; 
        ///Capture A0 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> ca0cnt{}; 
        ///Capture A1 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> ca1cnt{}; 
    }
    namespace PwmaSm3captctrla{    ///<Capture Control A Register
        using Addr = Register::Address<0x40033154,0xffff0000,0,unsigned>;
        ///Arm A
        enum class armaVal {
            v0=0x00000000,     ///<Input capture operation is disabled.
            v1=0x00000001,     ///<Input capture operation as specified by CAPTCTRLA[EDGAx] is enabled.
        };
        namespace armaValC{
            constexpr MPL::Value<armaVal,armaVal::v0> v0{};
            constexpr MPL::Value<armaVal,armaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,armaVal> arma{}; 
        ///One Shot Mode A
        enum class oneshotaVal {
            v0=0x00000000,     ///<Free running mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLA[ARMA] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and capture circuit 0 is re-armed. The process continues indefinitely. If only one of the capture circuits is enabled, then captures continue indefinitely on the enabled capture circuit.
            v1=0x00000001,     ///<One shot mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLA[ARMA] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and CAPTCTRLA[ARMA] is cleared. No further captures will be performed until CAPTCTRLA[ARMA] is set again. If only one of the capture circuits is enabled, then a single capture will occur on the enabled capture circuit and CAPTCTRLA[ARMA] is then cleared.
        };
        namespace oneshotaValC{
            constexpr MPL::Value<oneshotaVal,oneshotaVal::v0> v0{};
            constexpr MPL::Value<oneshotaVal,oneshotaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oneshotaVal> oneshota{}; 
        ///Edge A 0
        enum class edga0Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edga0ValC{
            constexpr MPL::Value<edga0Val,edga0Val::v00> v00{};
            constexpr MPL::Value<edga0Val,edga0Val::v01> v01{};
            constexpr MPL::Value<edga0Val,edga0Val::v10> v10{};
            constexpr MPL::Value<edga0Val,edga0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,edga0Val> edga0{}; 
        ///Edge A 1
        enum class edga1Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edga1ValC{
            constexpr MPL::Value<edga1Val,edga1Val::v00> v00{};
            constexpr MPL::Value<edga1Val,edga1Val::v01> v01{};
            constexpr MPL::Value<edga1Val,edga1Val::v10> v10{};
            constexpr MPL::Value<edga1Val,edga1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,edga1Val> edga1{}; 
        ///Input Select A
        enum class inpSelaVal {
            v0=0x00000000,     ///<Raw PWM_A input signal selected as source.
            v1=0x00000001,     ///<Output of edge counter/compare selected as source. When this bitfield is set to 1, the internal edge counter is enabled and the rising and/or falling edges specified by the CAPTCTRLA[EDGA0] and CAPTCTRLA[EDGA1] fields are ignored. The software must still place a value other than 00 in either or both of the CAPTCTLRA[EDGA0] and/or CAPTCTRLA[EDGA1] fields in order to enable one or both of the capture registers.
        };
        namespace inpSelaValC{
            constexpr MPL::Value<inpSelaVal,inpSelaVal::v0> v0{};
            constexpr MPL::Value<inpSelaVal,inpSelaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,inpSelaVal> inpSela{}; 
        ///Edge Counter A Enable
        enum class edgcntaEnVal {
            v0=0x00000000,     ///<Edge counter disabled and held in reset
            v1=0x00000001,     ///<Edge counter enabled
        };
        namespace edgcntaEnValC{
            constexpr MPL::Value<edgcntaEnVal,edgcntaEnVal::v0> v0{};
            constexpr MPL::Value<edgcntaEnVal,edgcntaEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,edgcntaEnVal> edgcntaEn{}; 
        ///Capture A FIFOs Water Mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cfawm{}; 
        ///Capture A0 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> ca0cnt{}; 
        ///Capture A1 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> ca1cnt{}; 
    }
    namespace PwmaSm0captcompa{    ///<Capture Compare A Register
        using Addr = Register::Address<0x40033036,0xffff0000,0,unsigned>;
        ///Edge Compare A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> edgcmpa{}; 
        ///Edge Counter A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> edgcnta{}; 
    }
    namespace PwmaSm1captcompa{    ///<Capture Compare A Register
        using Addr = Register::Address<0x40033096,0xffff0000,0,unsigned>;
        ///Edge Compare A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> edgcmpa{}; 
        ///Edge Counter A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> edgcnta{}; 
    }
    namespace PwmaSm2captcompa{    ///<Capture Compare A Register
        using Addr = Register::Address<0x400330f6,0xffff0000,0,unsigned>;
        ///Edge Compare A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> edgcmpa{}; 
        ///Edge Counter A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> edgcnta{}; 
    }
    namespace PwmaSm3captcompa{    ///<Capture Compare A Register
        using Addr = Register::Address<0x40033156,0xffff0000,0,unsigned>;
        ///Edge Compare A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> edgcmpa{}; 
        ///Edge Counter A
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> edgcnta{}; 
    }
    namespace PwmaSm0captctrlb{    ///<Capture Control B Register
        using Addr = Register::Address<0x40033038,0xffff0000,0,unsigned>;
        ///Arm B
        enum class armbVal {
            v0=0x00000000,     ///<Input capture operation is disabled.
            v1=0x00000001,     ///<Input capture operation as specified by CAPTCTRLB[EDGBx] is enabled.
        };
        namespace armbValC{
            constexpr MPL::Value<armbVal,armbVal::v0> v0{};
            constexpr MPL::Value<armbVal,armbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,armbVal> armb{}; 
        ///One Shot Mode B
        enum class oneshotbVal {
            v0=0x00000000,     ///<Free running mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLB[ARMB] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and capture circuit 0 is re-armed. The process continues indefinitely. If only one of the capture circuits is enabled, then captures continue indefinitely on the enabled capture circuit.
            v1=0x00000001,     ///<One shot mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLB[ARMB] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and CAPTCTRLB[ARMB] is cleared. No further captures will be performed until CAPTCTRLB[ARMB] is set again. If only one of the capture circuits is enabled, then a single capture will occur on the enabled capture circuit and CAPTCTRLB[ARMB] is then cleared.
        };
        namespace oneshotbValC{
            constexpr MPL::Value<oneshotbVal,oneshotbVal::v0> v0{};
            constexpr MPL::Value<oneshotbVal,oneshotbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oneshotbVal> oneshotb{}; 
        ///Edge B 0
        enum class edgb0Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgb0ValC{
            constexpr MPL::Value<edgb0Val,edgb0Val::v00> v00{};
            constexpr MPL::Value<edgb0Val,edgb0Val::v01> v01{};
            constexpr MPL::Value<edgb0Val,edgb0Val::v10> v10{};
            constexpr MPL::Value<edgb0Val,edgb0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,edgb0Val> edgb0{}; 
        ///Edge B 1
        enum class edgb1Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgb1ValC{
            constexpr MPL::Value<edgb1Val,edgb1Val::v00> v00{};
            constexpr MPL::Value<edgb1Val,edgb1Val::v01> v01{};
            constexpr MPL::Value<edgb1Val,edgb1Val::v10> v10{};
            constexpr MPL::Value<edgb1Val,edgb1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,edgb1Val> edgb1{}; 
        ///Input Select B
        enum class inpSelbVal {
            v0=0x00000000,     ///<Raw PWM_B input signal selected as source.
            v1=0x00000001,     ///<Output of edge counter/compare selected as source. When this bitfield is set to 1, the internal edge counter is enabled and the rising and/or falling edges specified by the CAPTCTRLB[EDGB0] and CAPTCTRLB[EDGB1] fields are ignored. The software must still place a value other than 00 in either or both of the CAPTCTLRB[EDGB0] and/or CAPTCTRLB[EDGB1] fields in order to enable one or both of the capture registers.
        };
        namespace inpSelbValC{
            constexpr MPL::Value<inpSelbVal,inpSelbVal::v0> v0{};
            constexpr MPL::Value<inpSelbVal,inpSelbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,inpSelbVal> inpSelb{}; 
        ///Edge Counter B Enable
        enum class edgcntbEnVal {
            v0=0x00000000,     ///<Edge counter disabled and held in reset
            v1=0x00000001,     ///<Edge counter enabled
        };
        namespace edgcntbEnValC{
            constexpr MPL::Value<edgcntbEnVal,edgcntbEnVal::v0> v0{};
            constexpr MPL::Value<edgcntbEnVal,edgcntbEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,edgcntbEnVal> edgcntbEn{}; 
        ///Capture B FIFOs Water Mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cfbwm{}; 
        ///Capture B0 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> cb0cnt{}; 
        ///Capture B1 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> cb1cnt{}; 
    }
    namespace PwmaSm1captctrlb{    ///<Capture Control B Register
        using Addr = Register::Address<0x40033098,0xffff0000,0,unsigned>;
        ///Arm B
        enum class armbVal {
            v0=0x00000000,     ///<Input capture operation is disabled.
            v1=0x00000001,     ///<Input capture operation as specified by CAPTCTRLB[EDGBx] is enabled.
        };
        namespace armbValC{
            constexpr MPL::Value<armbVal,armbVal::v0> v0{};
            constexpr MPL::Value<armbVal,armbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,armbVal> armb{}; 
        ///One Shot Mode B
        enum class oneshotbVal {
            v0=0x00000000,     ///<Free running mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLB[ARMB] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and capture circuit 0 is re-armed. The process continues indefinitely. If only one of the capture circuits is enabled, then captures continue indefinitely on the enabled capture circuit.
            v1=0x00000001,     ///<One shot mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLB[ARMB] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and CAPTCTRLB[ARMB] is cleared. No further captures will be performed until CAPTCTRLB[ARMB] is set again. If only one of the capture circuits is enabled, then a single capture will occur on the enabled capture circuit and CAPTCTRLB[ARMB] is then cleared.
        };
        namespace oneshotbValC{
            constexpr MPL::Value<oneshotbVal,oneshotbVal::v0> v0{};
            constexpr MPL::Value<oneshotbVal,oneshotbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oneshotbVal> oneshotb{}; 
        ///Edge B 0
        enum class edgb0Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgb0ValC{
            constexpr MPL::Value<edgb0Val,edgb0Val::v00> v00{};
            constexpr MPL::Value<edgb0Val,edgb0Val::v01> v01{};
            constexpr MPL::Value<edgb0Val,edgb0Val::v10> v10{};
            constexpr MPL::Value<edgb0Val,edgb0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,edgb0Val> edgb0{}; 
        ///Edge B 1
        enum class edgb1Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgb1ValC{
            constexpr MPL::Value<edgb1Val,edgb1Val::v00> v00{};
            constexpr MPL::Value<edgb1Val,edgb1Val::v01> v01{};
            constexpr MPL::Value<edgb1Val,edgb1Val::v10> v10{};
            constexpr MPL::Value<edgb1Val,edgb1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,edgb1Val> edgb1{}; 
        ///Input Select B
        enum class inpSelbVal {
            v0=0x00000000,     ///<Raw PWM_B input signal selected as source.
            v1=0x00000001,     ///<Output of edge counter/compare selected as source. When this bitfield is set to 1, the internal edge counter is enabled and the rising and/or falling edges specified by the CAPTCTRLB[EDGB0] and CAPTCTRLB[EDGB1] fields are ignored. The software must still place a value other than 00 in either or both of the CAPTCTLRB[EDGB0] and/or CAPTCTRLB[EDGB1] fields in order to enable one or both of the capture registers.
        };
        namespace inpSelbValC{
            constexpr MPL::Value<inpSelbVal,inpSelbVal::v0> v0{};
            constexpr MPL::Value<inpSelbVal,inpSelbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,inpSelbVal> inpSelb{}; 
        ///Edge Counter B Enable
        enum class edgcntbEnVal {
            v0=0x00000000,     ///<Edge counter disabled and held in reset
            v1=0x00000001,     ///<Edge counter enabled
        };
        namespace edgcntbEnValC{
            constexpr MPL::Value<edgcntbEnVal,edgcntbEnVal::v0> v0{};
            constexpr MPL::Value<edgcntbEnVal,edgcntbEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,edgcntbEnVal> edgcntbEn{}; 
        ///Capture B FIFOs Water Mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cfbwm{}; 
        ///Capture B0 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> cb0cnt{}; 
        ///Capture B1 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> cb1cnt{}; 
    }
    namespace PwmaSm2captctrlb{    ///<Capture Control B Register
        using Addr = Register::Address<0x400330f8,0xffff0000,0,unsigned>;
        ///Arm B
        enum class armbVal {
            v0=0x00000000,     ///<Input capture operation is disabled.
            v1=0x00000001,     ///<Input capture operation as specified by CAPTCTRLB[EDGBx] is enabled.
        };
        namespace armbValC{
            constexpr MPL::Value<armbVal,armbVal::v0> v0{};
            constexpr MPL::Value<armbVal,armbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,armbVal> armb{}; 
        ///One Shot Mode B
        enum class oneshotbVal {
            v0=0x00000000,     ///<Free running mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLB[ARMB] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and capture circuit 0 is re-armed. The process continues indefinitely. If only one of the capture circuits is enabled, then captures continue indefinitely on the enabled capture circuit.
            v1=0x00000001,     ///<One shot mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLB[ARMB] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and CAPTCTRLB[ARMB] is cleared. No further captures will be performed until CAPTCTRLB[ARMB] is set again. If only one of the capture circuits is enabled, then a single capture will occur on the enabled capture circuit and CAPTCTRLB[ARMB] is then cleared.
        };
        namespace oneshotbValC{
            constexpr MPL::Value<oneshotbVal,oneshotbVal::v0> v0{};
            constexpr MPL::Value<oneshotbVal,oneshotbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oneshotbVal> oneshotb{}; 
        ///Edge B 0
        enum class edgb0Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgb0ValC{
            constexpr MPL::Value<edgb0Val,edgb0Val::v00> v00{};
            constexpr MPL::Value<edgb0Val,edgb0Val::v01> v01{};
            constexpr MPL::Value<edgb0Val,edgb0Val::v10> v10{};
            constexpr MPL::Value<edgb0Val,edgb0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,edgb0Val> edgb0{}; 
        ///Edge B 1
        enum class edgb1Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgb1ValC{
            constexpr MPL::Value<edgb1Val,edgb1Val::v00> v00{};
            constexpr MPL::Value<edgb1Val,edgb1Val::v01> v01{};
            constexpr MPL::Value<edgb1Val,edgb1Val::v10> v10{};
            constexpr MPL::Value<edgb1Val,edgb1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,edgb1Val> edgb1{}; 
        ///Input Select B
        enum class inpSelbVal {
            v0=0x00000000,     ///<Raw PWM_B input signal selected as source.
            v1=0x00000001,     ///<Output of edge counter/compare selected as source. When this bitfield is set to 1, the internal edge counter is enabled and the rising and/or falling edges specified by the CAPTCTRLB[EDGB0] and CAPTCTRLB[EDGB1] fields are ignored. The software must still place a value other than 00 in either or both of the CAPTCTLRB[EDGB0] and/or CAPTCTRLB[EDGB1] fields in order to enable one or both of the capture registers.
        };
        namespace inpSelbValC{
            constexpr MPL::Value<inpSelbVal,inpSelbVal::v0> v0{};
            constexpr MPL::Value<inpSelbVal,inpSelbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,inpSelbVal> inpSelb{}; 
        ///Edge Counter B Enable
        enum class edgcntbEnVal {
            v0=0x00000000,     ///<Edge counter disabled and held in reset
            v1=0x00000001,     ///<Edge counter enabled
        };
        namespace edgcntbEnValC{
            constexpr MPL::Value<edgcntbEnVal,edgcntbEnVal::v0> v0{};
            constexpr MPL::Value<edgcntbEnVal,edgcntbEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,edgcntbEnVal> edgcntbEn{}; 
        ///Capture B FIFOs Water Mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cfbwm{}; 
        ///Capture B0 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> cb0cnt{}; 
        ///Capture B1 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> cb1cnt{}; 
    }
    namespace PwmaSm3captctrlb{    ///<Capture Control B Register
        using Addr = Register::Address<0x40033158,0xffff0000,0,unsigned>;
        ///Arm B
        enum class armbVal {
            v0=0x00000000,     ///<Input capture operation is disabled.
            v1=0x00000001,     ///<Input capture operation as specified by CAPTCTRLB[EDGBx] is enabled.
        };
        namespace armbValC{
            constexpr MPL::Value<armbVal,armbVal::v0> v0{};
            constexpr MPL::Value<armbVal,armbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,armbVal> armb{}; 
        ///One Shot Mode B
        enum class oneshotbVal {
            v0=0x00000000,     ///<Free running mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLB[ARMB] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and capture circuit 0 is re-armed. The process continues indefinitely. If only one of the capture circuits is enabled, then captures continue indefinitely on the enabled capture circuit.
            v1=0x00000001,     ///<One shot mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after CAPTCTRLB[ARMB] is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and CAPTCTRLB[ARMB] is cleared. No further captures will be performed until CAPTCTRLB[ARMB] is set again. If only one of the capture circuits is enabled, then a single capture will occur on the enabled capture circuit and CAPTCTRLB[ARMB] is then cleared.
        };
        namespace oneshotbValC{
            constexpr MPL::Value<oneshotbVal,oneshotbVal::v0> v0{};
            constexpr MPL::Value<oneshotbVal,oneshotbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oneshotbVal> oneshotb{}; 
        ///Edge B 0
        enum class edgb0Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgb0ValC{
            constexpr MPL::Value<edgb0Val,edgb0Val::v00> v00{};
            constexpr MPL::Value<edgb0Val,edgb0Val::v01> v01{};
            constexpr MPL::Value<edgb0Val,edgb0Val::v10> v10{};
            constexpr MPL::Value<edgb0Val,edgb0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,edgb0Val> edgb0{}; 
        ///Edge B 1
        enum class edgb1Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgb1ValC{
            constexpr MPL::Value<edgb1Val,edgb1Val::v00> v00{};
            constexpr MPL::Value<edgb1Val,edgb1Val::v01> v01{};
            constexpr MPL::Value<edgb1Val,edgb1Val::v10> v10{};
            constexpr MPL::Value<edgb1Val,edgb1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,edgb1Val> edgb1{}; 
        ///Input Select B
        enum class inpSelbVal {
            v0=0x00000000,     ///<Raw PWM_B input signal selected as source.
            v1=0x00000001,     ///<Output of edge counter/compare selected as source. When this bitfield is set to 1, the internal edge counter is enabled and the rising and/or falling edges specified by the CAPTCTRLB[EDGB0] and CAPTCTRLB[EDGB1] fields are ignored. The software must still place a value other than 00 in either or both of the CAPTCTLRB[EDGB0] and/or CAPTCTRLB[EDGB1] fields in order to enable one or both of the capture registers.
        };
        namespace inpSelbValC{
            constexpr MPL::Value<inpSelbVal,inpSelbVal::v0> v0{};
            constexpr MPL::Value<inpSelbVal,inpSelbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,inpSelbVal> inpSelb{}; 
        ///Edge Counter B Enable
        enum class edgcntbEnVal {
            v0=0x00000000,     ///<Edge counter disabled and held in reset
            v1=0x00000001,     ///<Edge counter enabled
        };
        namespace edgcntbEnValC{
            constexpr MPL::Value<edgcntbEnVal,edgcntbEnVal::v0> v0{};
            constexpr MPL::Value<edgcntbEnVal,edgcntbEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,edgcntbEnVal> edgcntbEn{}; 
        ///Capture B FIFOs Water Mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cfbwm{}; 
        ///Capture B0 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> cb0cnt{}; 
        ///Capture B1 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> cb1cnt{}; 
    }
    namespace PwmaSm0captcompb{    ///<Capture Compare B Register
        using Addr = Register::Address<0x4003303a,0xffff0000,0,unsigned>;
        ///Edge Compare B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> edgcmpb{}; 
        ///Edge Counter B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> edgcntb{}; 
    }
    namespace PwmaSm1captcompb{    ///<Capture Compare B Register
        using Addr = Register::Address<0x4003309a,0xffff0000,0,unsigned>;
        ///Edge Compare B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> edgcmpb{}; 
        ///Edge Counter B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> edgcntb{}; 
    }
    namespace PwmaSm2captcompb{    ///<Capture Compare B Register
        using Addr = Register::Address<0x400330fa,0xffff0000,0,unsigned>;
        ///Edge Compare B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> edgcmpb{}; 
        ///Edge Counter B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> edgcntb{}; 
    }
    namespace PwmaSm3captcompb{    ///<Capture Compare B Register
        using Addr = Register::Address<0x4003315a,0xffff0000,0,unsigned>;
        ///Edge Compare B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> edgcmpb{}; 
        ///Edge Counter B
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> edgcntb{}; 
    }
    namespace PwmaSm0captctrlx{    ///<Capture Control X Register
        using Addr = Register::Address<0x4003303c,0xffff0000,0,unsigned>;
        ///Arm X
        enum class armxVal {
            v0=0x00000000,     ///<Input capture operation is disabled.
            v1=0x00000001,     ///<Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
        };
        namespace armxValC{
            constexpr MPL::Value<armxVal,armxVal::v0> v0{};
            constexpr MPL::Value<armxVal,armxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,armxVal> armx{}; 
        ///One Shot Mode Aux
        enum class oneshotxVal {
            v0=0x00000000,     ///<Free running mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after the ARMX bit is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and capture circuit 0 is re-armed. The process continues indefinitely. If only one of the capture circuits is enabled, then captures continue indefinitely on the enabled capture circuit.
            v1=0x00000001,     ///<One shot mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after the ARMX bit is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and the ARMX bit is cleared. No further captures will be performed until the ARMX bit is set again. If only one of the capture circuits is enabled, then a single capture will occur on the enabled capture circuit and the ARMX bit is then cleared.
        };
        namespace oneshotxValC{
            constexpr MPL::Value<oneshotxVal,oneshotxVal::v0> v0{};
            constexpr MPL::Value<oneshotxVal,oneshotxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oneshotxVal> oneshotx{}; 
        ///Edge X 0
        enum class edgx0Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgx0ValC{
            constexpr MPL::Value<edgx0Val,edgx0Val::v00> v00{};
            constexpr MPL::Value<edgx0Val,edgx0Val::v01> v01{};
            constexpr MPL::Value<edgx0Val,edgx0Val::v10> v10{};
            constexpr MPL::Value<edgx0Val,edgx0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,edgx0Val> edgx0{}; 
        ///Edge X 1
        enum class edgx1Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgx1ValC{
            constexpr MPL::Value<edgx1Val,edgx1Val::v00> v00{};
            constexpr MPL::Value<edgx1Val,edgx1Val::v01> v01{};
            constexpr MPL::Value<edgx1Val,edgx1Val::v10> v10{};
            constexpr MPL::Value<edgx1Val,edgx1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,edgx1Val> edgx1{}; 
        ///Input Select X
        enum class inpSelxVal {
            v0=0x00000000,     ///<Raw PWM_X input signal selected as source.
            v1=0x00000001,     ///<Output of edge counter/compare selected as source. When this bitfield is set to 1, the internal edge counter is enabled and the rising and/or falling edges specified by the CAPTCTRLX[EDGX0] and CAPTCTRLX[EDGX1] fields are ignored. The software must still place a value other than 00 in either or both of the CAPTCTLRX[EDGX0] and/or CAPTCTRLX[EDGX1] fields in order to enable one or both of the capture registers.
        };
        namespace inpSelxValC{
            constexpr MPL::Value<inpSelxVal,inpSelxVal::v0> v0{};
            constexpr MPL::Value<inpSelxVal,inpSelxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,inpSelxVal> inpSelx{}; 
        ///Edge Counter X Enable
        enum class edgcntxEnVal {
            v0=0x00000000,     ///<Edge counter disabled and held in reset
            v1=0x00000001,     ///<Edge counter enabled
        };
        namespace edgcntxEnValC{
            constexpr MPL::Value<edgcntxEnVal,edgcntxEnVal::v0> v0{};
            constexpr MPL::Value<edgcntxEnVal,edgcntxEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,edgcntxEnVal> edgcntxEn{}; 
        ///Capture X FIFOs Water Mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cfxwm{}; 
        ///Capture X0 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> cx0cnt{}; 
        ///Capture X1 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> cx1cnt{}; 
    }
    namespace PwmaSm1captctrlx{    ///<Capture Control X Register
        using Addr = Register::Address<0x4003309c,0xffff0000,0,unsigned>;
        ///Arm X
        enum class armxVal {
            v0=0x00000000,     ///<Input capture operation is disabled.
            v1=0x00000001,     ///<Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
        };
        namespace armxValC{
            constexpr MPL::Value<armxVal,armxVal::v0> v0{};
            constexpr MPL::Value<armxVal,armxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,armxVal> armx{}; 
        ///One Shot Mode Aux
        enum class oneshotxVal {
            v0=0x00000000,     ///<Free running mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after the ARMX bit is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and capture circuit 0 is re-armed. The process continues indefinitely. If only one of the capture circuits is enabled, then captures continue indefinitely on the enabled capture circuit.
            v1=0x00000001,     ///<One shot mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after the ARMX bit is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and the ARMX bit is cleared. No further captures will be performed until the ARMX bit is set again. If only one of the capture circuits is enabled, then a single capture will occur on the enabled capture circuit and the ARMX bit is then cleared.
        };
        namespace oneshotxValC{
            constexpr MPL::Value<oneshotxVal,oneshotxVal::v0> v0{};
            constexpr MPL::Value<oneshotxVal,oneshotxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oneshotxVal> oneshotx{}; 
        ///Edge X 0
        enum class edgx0Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgx0ValC{
            constexpr MPL::Value<edgx0Val,edgx0Val::v00> v00{};
            constexpr MPL::Value<edgx0Val,edgx0Val::v01> v01{};
            constexpr MPL::Value<edgx0Val,edgx0Val::v10> v10{};
            constexpr MPL::Value<edgx0Val,edgx0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,edgx0Val> edgx0{}; 
        ///Edge X 1
        enum class edgx1Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgx1ValC{
            constexpr MPL::Value<edgx1Val,edgx1Val::v00> v00{};
            constexpr MPL::Value<edgx1Val,edgx1Val::v01> v01{};
            constexpr MPL::Value<edgx1Val,edgx1Val::v10> v10{};
            constexpr MPL::Value<edgx1Val,edgx1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,edgx1Val> edgx1{}; 
        ///Input Select X
        enum class inpSelxVal {
            v0=0x00000000,     ///<Raw PWM_X input signal selected as source.
            v1=0x00000001,     ///<Output of edge counter/compare selected as source. When this bitfield is set to 1, the internal edge counter is enabled and the rising and/or falling edges specified by the CAPTCTRLX[EDGX0] and CAPTCTRLX[EDGX1] fields are ignored. The software must still place a value other than 00 in either or both of the CAPTCTLRX[EDGX0] and/or CAPTCTRLX[EDGX1] fields in order to enable one or both of the capture registers.
        };
        namespace inpSelxValC{
            constexpr MPL::Value<inpSelxVal,inpSelxVal::v0> v0{};
            constexpr MPL::Value<inpSelxVal,inpSelxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,inpSelxVal> inpSelx{}; 
        ///Edge Counter X Enable
        enum class edgcntxEnVal {
            v0=0x00000000,     ///<Edge counter disabled and held in reset
            v1=0x00000001,     ///<Edge counter enabled
        };
        namespace edgcntxEnValC{
            constexpr MPL::Value<edgcntxEnVal,edgcntxEnVal::v0> v0{};
            constexpr MPL::Value<edgcntxEnVal,edgcntxEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,edgcntxEnVal> edgcntxEn{}; 
        ///Capture X FIFOs Water Mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cfxwm{}; 
        ///Capture X0 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> cx0cnt{}; 
        ///Capture X1 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> cx1cnt{}; 
    }
    namespace PwmaSm2captctrlx{    ///<Capture Control X Register
        using Addr = Register::Address<0x400330fc,0xffff0000,0,unsigned>;
        ///Arm X
        enum class armxVal {
            v0=0x00000000,     ///<Input capture operation is disabled.
            v1=0x00000001,     ///<Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
        };
        namespace armxValC{
            constexpr MPL::Value<armxVal,armxVal::v0> v0{};
            constexpr MPL::Value<armxVal,armxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,armxVal> armx{}; 
        ///One Shot Mode Aux
        enum class oneshotxVal {
            v0=0x00000000,     ///<Free running mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after the ARMX bit is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and capture circuit 0 is re-armed. The process continues indefinitely. If only one of the capture circuits is enabled, then captures continue indefinitely on the enabled capture circuit.
            v1=0x00000001,     ///<One shot mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after the ARMX bit is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and the ARMX bit is cleared. No further captures will be performed until the ARMX bit is set again. If only one of the capture circuits is enabled, then a single capture will occur on the enabled capture circuit and the ARMX bit is then cleared.
        };
        namespace oneshotxValC{
            constexpr MPL::Value<oneshotxVal,oneshotxVal::v0> v0{};
            constexpr MPL::Value<oneshotxVal,oneshotxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oneshotxVal> oneshotx{}; 
        ///Edge X 0
        enum class edgx0Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgx0ValC{
            constexpr MPL::Value<edgx0Val,edgx0Val::v00> v00{};
            constexpr MPL::Value<edgx0Val,edgx0Val::v01> v01{};
            constexpr MPL::Value<edgx0Val,edgx0Val::v10> v10{};
            constexpr MPL::Value<edgx0Val,edgx0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,edgx0Val> edgx0{}; 
        ///Edge X 1
        enum class edgx1Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgx1ValC{
            constexpr MPL::Value<edgx1Val,edgx1Val::v00> v00{};
            constexpr MPL::Value<edgx1Val,edgx1Val::v01> v01{};
            constexpr MPL::Value<edgx1Val,edgx1Val::v10> v10{};
            constexpr MPL::Value<edgx1Val,edgx1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,edgx1Val> edgx1{}; 
        ///Input Select X
        enum class inpSelxVal {
            v0=0x00000000,     ///<Raw PWM_X input signal selected as source.
            v1=0x00000001,     ///<Output of edge counter/compare selected as source. When this bitfield is set to 1, the internal edge counter is enabled and the rising and/or falling edges specified by the CAPTCTRLX[EDGX0] and CAPTCTRLX[EDGX1] fields are ignored. The software must still place a value other than 00 in either or both of the CAPTCTLRX[EDGX0] and/or CAPTCTRLX[EDGX1] fields in order to enable one or both of the capture registers.
        };
        namespace inpSelxValC{
            constexpr MPL::Value<inpSelxVal,inpSelxVal::v0> v0{};
            constexpr MPL::Value<inpSelxVal,inpSelxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,inpSelxVal> inpSelx{}; 
        ///Edge Counter X Enable
        enum class edgcntxEnVal {
            v0=0x00000000,     ///<Edge counter disabled and held in reset
            v1=0x00000001,     ///<Edge counter enabled
        };
        namespace edgcntxEnValC{
            constexpr MPL::Value<edgcntxEnVal,edgcntxEnVal::v0> v0{};
            constexpr MPL::Value<edgcntxEnVal,edgcntxEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,edgcntxEnVal> edgcntxEn{}; 
        ///Capture X FIFOs Water Mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cfxwm{}; 
        ///Capture X0 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> cx0cnt{}; 
        ///Capture X1 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> cx1cnt{}; 
    }
    namespace PwmaSm3captctrlx{    ///<Capture Control X Register
        using Addr = Register::Address<0x4003315c,0xffff0000,0,unsigned>;
        ///Arm X
        enum class armxVal {
            v0=0x00000000,     ///<Input capture operation is disabled.
            v1=0x00000001,     ///<Input capture operation as specified by CAPTCTRLX[EDGXx] is enabled.
        };
        namespace armxValC{
            constexpr MPL::Value<armxVal,armxVal::v0> v0{};
            constexpr MPL::Value<armxVal,armxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,armxVal> armx{}; 
        ///One Shot Mode Aux
        enum class oneshotxVal {
            v0=0x00000000,     ///<Free running mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after the ARMX bit is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and capture circuit 0 is re-armed. The process continues indefinitely. If only one of the capture circuits is enabled, then captures continue indefinitely on the enabled capture circuit.
            v1=0x00000001,     ///<One shot mode is selected. If both capture circuits are enabled, then capture circuit 0 is armed first after the ARMX bit is set. Once a capture occurs, capture circuit 0 is disarmed and capture circuit 1 is armed. After capture circuit 1 performs a capture, it is disarmed and the ARMX bit is cleared. No further captures will be performed until the ARMX bit is set again. If only one of the capture circuits is enabled, then a single capture will occur on the enabled capture circuit and the ARMX bit is then cleared.
        };
        namespace oneshotxValC{
            constexpr MPL::Value<oneshotxVal,oneshotxVal::v0> v0{};
            constexpr MPL::Value<oneshotxVal,oneshotxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,oneshotxVal> oneshotx{}; 
        ///Edge X 0
        enum class edgx0Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgx0ValC{
            constexpr MPL::Value<edgx0Val,edgx0Val::v00> v00{};
            constexpr MPL::Value<edgx0Val,edgx0Val::v01> v01{};
            constexpr MPL::Value<edgx0Val,edgx0Val::v10> v10{};
            constexpr MPL::Value<edgx0Val,edgx0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,edgx0Val> edgx0{}; 
        ///Edge X 1
        enum class edgx1Val {
            v00=0x00000000,     ///<Disabled
            v01=0x00000001,     ///<Capture falling edges
            v10=0x00000002,     ///<Capture rising edges
            v11=0x00000003,     ///<Capture any edge
        };
        namespace edgx1ValC{
            constexpr MPL::Value<edgx1Val,edgx1Val::v00> v00{};
            constexpr MPL::Value<edgx1Val,edgx1Val::v01> v01{};
            constexpr MPL::Value<edgx1Val,edgx1Val::v10> v10{};
            constexpr MPL::Value<edgx1Val,edgx1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,edgx1Val> edgx1{}; 
        ///Input Select X
        enum class inpSelxVal {
            v0=0x00000000,     ///<Raw PWM_X input signal selected as source.
            v1=0x00000001,     ///<Output of edge counter/compare selected as source. When this bitfield is set to 1, the internal edge counter is enabled and the rising and/or falling edges specified by the CAPTCTRLX[EDGX0] and CAPTCTRLX[EDGX1] fields are ignored. The software must still place a value other than 00 in either or both of the CAPTCTLRX[EDGX0] and/or CAPTCTRLX[EDGX1] fields in order to enable one or both of the capture registers.
        };
        namespace inpSelxValC{
            constexpr MPL::Value<inpSelxVal,inpSelxVal::v0> v0{};
            constexpr MPL::Value<inpSelxVal,inpSelxVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,inpSelxVal> inpSelx{}; 
        ///Edge Counter X Enable
        enum class edgcntxEnVal {
            v0=0x00000000,     ///<Edge counter disabled and held in reset
            v1=0x00000001,     ///<Edge counter enabled
        };
        namespace edgcntxEnValC{
            constexpr MPL::Value<edgcntxEnVal,edgcntxEnVal::v0> v0{};
            constexpr MPL::Value<edgcntxEnVal,edgcntxEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,edgcntxEnVal> edgcntxEn{}; 
        ///Capture X FIFOs Water Mark
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> cfxwm{}; 
        ///Capture X0 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> cx0cnt{}; 
        ///Capture X1 FIFO Word Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> cx1cnt{}; 
    }
    namespace PwmaSm0captcompx{    ///<Capture Compare X Register
        using Addr = Register::Address<0x4003303e,0xffff0000,0,unsigned>;
        ///Edge Compare X
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> edgcmpx{}; 
        ///Edge Counter X
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> edgcntx{}; 
    }
    namespace PwmaSm1captcompx{    ///<Capture Compare X Register
        using Addr = Register::Address<0x4003309e,0xffff0000,0,unsigned>;
        ///Edge Compare X
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> edgcmpx{}; 
        ///Edge Counter X
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> edgcntx{}; 
    }
    namespace PwmaSm2captcompx{    ///<Capture Compare X Register
        using Addr = Register::Address<0x400330fe,0xffff0000,0,unsigned>;
        ///Edge Compare X
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> edgcmpx{}; 
        ///Edge Counter X
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> edgcntx{}; 
    }
    namespace PwmaSm3captcompx{    ///<Capture Compare X Register
        using Addr = Register::Address<0x4003315e,0xffff0000,0,unsigned>;
        ///Edge Compare X
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> edgcmpx{}; 
        ///Edge Counter X
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> edgcntx{}; 
    }
    namespace PwmaSm0cval0{    ///<Capture Value 0 Register
        using Addr = Register::Address<0x40033040,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval0{}; 
    }
    namespace PwmaSm1cval0{    ///<Capture Value 0 Register
        using Addr = Register::Address<0x400330a0,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval0{}; 
    }
    namespace PwmaSm2cval0{    ///<Capture Value 0 Register
        using Addr = Register::Address<0x40033100,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval0{}; 
    }
    namespace PwmaSm3cval0{    ///<Capture Value 0 Register
        using Addr = Register::Address<0x40033160,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval0{}; 
    }
    namespace PwmaSm0cval0cyc{    ///<Capture Value 0 Cycle Register
        using Addr = Register::Address<0x40033042,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval0cyc{}; 
    }
    namespace PwmaSm1cval0cyc{    ///<Capture Value 0 Cycle Register
        using Addr = Register::Address<0x400330a2,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval0cyc{}; 
    }
    namespace PwmaSm2cval0cyc{    ///<Capture Value 0 Cycle Register
        using Addr = Register::Address<0x40033102,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval0cyc{}; 
    }
    namespace PwmaSm3cval0cyc{    ///<Capture Value 0 Cycle Register
        using Addr = Register::Address<0x40033162,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval0cyc{}; 
    }
    namespace PwmaSm0cval1{    ///<Capture Value 1 Register
        using Addr = Register::Address<0x40033044,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval1{}; 
    }
    namespace PwmaSm1cval1{    ///<Capture Value 1 Register
        using Addr = Register::Address<0x400330a4,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval1{}; 
    }
    namespace PwmaSm2cval1{    ///<Capture Value 1 Register
        using Addr = Register::Address<0x40033104,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval1{}; 
    }
    namespace PwmaSm3cval1{    ///<Capture Value 1 Register
        using Addr = Register::Address<0x40033164,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval1{}; 
    }
    namespace PwmaSm0cval1cyc{    ///<Capture Value 1 Cycle Register
        using Addr = Register::Address<0x40033046,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval1cyc{}; 
    }
    namespace PwmaSm1cval1cyc{    ///<Capture Value 1 Cycle Register
        using Addr = Register::Address<0x400330a6,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval1cyc{}; 
    }
    namespace PwmaSm2cval1cyc{    ///<Capture Value 1 Cycle Register
        using Addr = Register::Address<0x40033106,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval1cyc{}; 
    }
    namespace PwmaSm3cval1cyc{    ///<Capture Value 1 Cycle Register
        using Addr = Register::Address<0x40033166,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval1cyc{}; 
    }
    namespace PwmaSm0cval2{    ///<Capture Value 2 Register
        using Addr = Register::Address<0x40033048,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval2{}; 
    }
    namespace PwmaSm1cval2{    ///<Capture Value 2 Register
        using Addr = Register::Address<0x400330a8,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval2{}; 
    }
    namespace PwmaSm2cval2{    ///<Capture Value 2 Register
        using Addr = Register::Address<0x40033108,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval2{}; 
    }
    namespace PwmaSm3cval2{    ///<Capture Value 2 Register
        using Addr = Register::Address<0x40033168,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval2{}; 
    }
    namespace PwmaSm0cval2cyc{    ///<Capture Value 2 Cycle Register
        using Addr = Register::Address<0x4003304a,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval2cyc{}; 
    }
    namespace PwmaSm1cval2cyc{    ///<Capture Value 2 Cycle Register
        using Addr = Register::Address<0x400330aa,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval2cyc{}; 
    }
    namespace PwmaSm2cval2cyc{    ///<Capture Value 2 Cycle Register
        using Addr = Register::Address<0x4003310a,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval2cyc{}; 
    }
    namespace PwmaSm3cval2cyc{    ///<Capture Value 2 Cycle Register
        using Addr = Register::Address<0x4003316a,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval2cyc{}; 
    }
    namespace PwmaSm0cval3{    ///<Capture Value 3 Register
        using Addr = Register::Address<0x4003304c,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval3{}; 
    }
    namespace PwmaSm1cval3{    ///<Capture Value 3 Register
        using Addr = Register::Address<0x400330ac,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval3{}; 
    }
    namespace PwmaSm2cval3{    ///<Capture Value 3 Register
        using Addr = Register::Address<0x4003310c,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval3{}; 
    }
    namespace PwmaSm3cval3{    ///<Capture Value 3 Register
        using Addr = Register::Address<0x4003316c,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval3{}; 
    }
    namespace PwmaSm0cval3cyc{    ///<Capture Value 3 Cycle Register
        using Addr = Register::Address<0x4003304e,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval3cyc{}; 
    }
    namespace PwmaSm1cval3cyc{    ///<Capture Value 3 Cycle Register
        using Addr = Register::Address<0x400330ae,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval3cyc{}; 
    }
    namespace PwmaSm2cval3cyc{    ///<Capture Value 3 Cycle Register
        using Addr = Register::Address<0x4003310e,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval3cyc{}; 
    }
    namespace PwmaSm3cval3cyc{    ///<Capture Value 3 Cycle Register
        using Addr = Register::Address<0x4003316e,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval3cyc{}; 
    }
    namespace PwmaSm0cval4{    ///<Capture Value 4 Register
        using Addr = Register::Address<0x40033050,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval4{}; 
    }
    namespace PwmaSm1cval4{    ///<Capture Value 4 Register
        using Addr = Register::Address<0x400330b0,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval4{}; 
    }
    namespace PwmaSm2cval4{    ///<Capture Value 4 Register
        using Addr = Register::Address<0x40033110,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval4{}; 
    }
    namespace PwmaSm3cval4{    ///<Capture Value 4 Register
        using Addr = Register::Address<0x40033170,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval4{}; 
    }
    namespace PwmaSm0cval4cyc{    ///<Capture Value 4 Cycle Register
        using Addr = Register::Address<0x40033052,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval4cyc{}; 
    }
    namespace PwmaSm1cval4cyc{    ///<Capture Value 4 Cycle Register
        using Addr = Register::Address<0x400330b2,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval4cyc{}; 
    }
    namespace PwmaSm2cval4cyc{    ///<Capture Value 4 Cycle Register
        using Addr = Register::Address<0x40033112,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval4cyc{}; 
    }
    namespace PwmaSm3cval4cyc{    ///<Capture Value 4 Cycle Register
        using Addr = Register::Address<0x40033172,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval4cyc{}; 
    }
    namespace PwmaSm0cval5{    ///<Capture Value 5 Register
        using Addr = Register::Address<0x40033054,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval5{}; 
    }
    namespace PwmaSm1cval5{    ///<Capture Value 5 Register
        using Addr = Register::Address<0x400330b4,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval5{}; 
    }
    namespace PwmaSm2cval5{    ///<Capture Value 5 Register
        using Addr = Register::Address<0x40033114,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval5{}; 
    }
    namespace PwmaSm3cval5{    ///<Capture Value 5 Register
        using Addr = Register::Address<0x40033174,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> captval5{}; 
    }
    namespace PwmaSm0cval5cyc{    ///<Capture Value 5 Cycle Register
        using Addr = Register::Address<0x40033056,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval5cyc{}; 
    }
    namespace PwmaSm1cval5cyc{    ///<Capture Value 5 Cycle Register
        using Addr = Register::Address<0x400330b6,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval5cyc{}; 
    }
    namespace PwmaSm2cval5cyc{    ///<Capture Value 5 Cycle Register
        using Addr = Register::Address<0x40033116,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval5cyc{}; 
    }
    namespace PwmaSm3cval5cyc{    ///<Capture Value 5 Cycle Register
        using Addr = Register::Address<0x40033176,0xfffffff0,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cval5cyc{}; 
    }
    namespace PwmaOuten{    ///<Output Enable Register
        using Addr = Register::Address<0x40033180,0xfffff000,0,unsigned>;
        ///PWM_X Output Enables
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pwmxEn{}; 
        ///PWM_B Output Enables
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> pwmbEn{}; 
        ///PWM_A Output Enables
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> pwmaEn{}; 
    }
    namespace PwmaMask{    ///<Mask Register
        using Addr = Register::Address<0x40033182,0xffff0000,0,unsigned>;
        ///PWM_X Masks
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> maskx{}; 
        ///PWM_B Masks
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> maskb{}; 
        ///PWM_A Masks
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> maska{}; 
        ///Update Mask Bits Immediately
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> updateMask{}; 
    }
    namespace PwmaSwcout{    ///<Software Controlled Output Register
        using Addr = Register::Address<0x40033184,0xffffff00,0,unsigned>;
        ///Submodule 0 Software Controlled Output 45
        enum class sm0out45Val {
            v0=0x00000000,     ///<A logic 0 is supplied to the deadtime generator of submodule 0 instead of PWM45.
            v1=0x00000001,     ///<A logic 1 is supplied to the deadtime generator of submodule 0 instead of PWM45.
        };
        namespace sm0out45ValC{
            constexpr MPL::Value<sm0out45Val,sm0out45Val::v0> v0{};
            constexpr MPL::Value<sm0out45Val,sm0out45Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sm0out45Val> sm0out45{}; 
        ///Submodule 0 Software Controlled Output 23
        enum class sm0out23Val {
            v0=0x00000000,     ///<A logic 0 is supplied to the deadtime generator of submodule 0 instead of PWM23.
            v1=0x00000001,     ///<A logic 1 is supplied to the deadtime generator of submodule 0 instead of PWM23.
        };
        namespace sm0out23ValC{
            constexpr MPL::Value<sm0out23Val,sm0out23Val::v0> v0{};
            constexpr MPL::Value<sm0out23Val,sm0out23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,sm0out23Val> sm0out23{}; 
        ///Submodule 1 Software Controlled Output 45
        enum class sm1out45Val {
            v0=0x00000000,     ///<A logic 0 is supplied to the deadtime generator of submodule 1 instead of PWM45.
            v1=0x00000001,     ///<A logic 1 is supplied to the deadtime generator of submodule 1 instead of PWM45.
        };
        namespace sm1out45ValC{
            constexpr MPL::Value<sm1out45Val,sm1out45Val::v0> v0{};
            constexpr MPL::Value<sm1out45Val,sm1out45Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,sm1out45Val> sm1out45{}; 
        ///Submodule 1 Software Controlled Output 23
        enum class sm1out23Val {
            v0=0x00000000,     ///<A logic 0 is supplied to the deadtime generator of submodule 1 instead of PWM23.
            v1=0x00000001,     ///<A logic 1 is supplied to the deadtime generator of submodule 1 instead of PWM23.
        };
        namespace sm1out23ValC{
            constexpr MPL::Value<sm1out23Val,sm1out23Val::v0> v0{};
            constexpr MPL::Value<sm1out23Val,sm1out23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,sm1out23Val> sm1out23{}; 
        ///Submodule 2 Software Controlled Output 45
        enum class sm2out45Val {
            v0=0x00000000,     ///<A logic 0 is supplied to the deadtime generator of submodule 2 instead of PWM45.
            v1=0x00000001,     ///<A logic 1 is supplied to the deadtime generator of submodule 2 instead of PWM45.
        };
        namespace sm2out45ValC{
            constexpr MPL::Value<sm2out45Val,sm2out45Val::v0> v0{};
            constexpr MPL::Value<sm2out45Val,sm2out45Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,sm2out45Val> sm2out45{}; 
        ///Submodule 2 Software Controlled Output 23
        enum class sm2out23Val {
            v0=0x00000000,     ///<A logic 0 is supplied to the deadtime generator of submodule 2 instead of PWM23.
            v1=0x00000001,     ///<A logic 1 is supplied to the deadtime generator of submodule 2 instead of PWM23.
        };
        namespace sm2out23ValC{
            constexpr MPL::Value<sm2out23Val,sm2out23Val::v0> v0{};
            constexpr MPL::Value<sm2out23Val,sm2out23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sm2out23Val> sm2out23{}; 
        ///Submodule 3 Software Controlled Output 45
        enum class sm3out45Val {
            v0=0x00000000,     ///<A logic 0 is supplied to the deadtime generator of submodule 3 instead of PWM45.
            v1=0x00000001,     ///<A logic 1 is supplied to the deadtime generator of submodule 3 instead of PWM45.
        };
        namespace sm3out45ValC{
            constexpr MPL::Value<sm3out45Val,sm3out45Val::v0> v0{};
            constexpr MPL::Value<sm3out45Val,sm3out45Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sm3out45Val> sm3out45{}; 
        ///Submodule 3 Software Controlled Output 23
        enum class sm3out23Val {
            v0=0x00000000,     ///<A logic 0 is supplied to the deadtime generator of submodule 3 instead of PWM23.
            v1=0x00000001,     ///<A logic 1 is supplied to the deadtime generator of submodule 3 instead of PWM23.
        };
        namespace sm3out23ValC{
            constexpr MPL::Value<sm3out23Val,sm3out23Val::v0> v0{};
            constexpr MPL::Value<sm3out23Val,sm3out23Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,sm3out23Val> sm3out23{}; 
    }
    namespace PwmaDtsrcsel{    ///<PWM Source Select Register
        using Addr = Register::Address<0x40033186,0xffff0000,0,unsigned>;
        ///Submodule 0 PWM45 Control Select
        enum class sm0sel45Val {
            v00=0x00000000,     ///<Generated SM0PWM45 signal is used by the deadtime logic.
            v01=0x00000001,     ///<Inverted generated SM0PWM45 signal is used by the deadtime logic.
            v10=0x00000002,     ///<SWCOUT[SM0OUT45] is used by the deadtime logic.
            v11=0x00000003,     ///<PWM0_EXTB signal is used by the deadtime logic.
        };
        namespace sm0sel45ValC{
            constexpr MPL::Value<sm0sel45Val,sm0sel45Val::v00> v00{};
            constexpr MPL::Value<sm0sel45Val,sm0sel45Val::v01> v01{};
            constexpr MPL::Value<sm0sel45Val,sm0sel45Val::v10> v10{};
            constexpr MPL::Value<sm0sel45Val,sm0sel45Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,sm0sel45Val> sm0sel45{}; 
        ///Submodule 0 PWM23 Control Select
        enum class sm0sel23Val {
            v00=0x00000000,     ///<Generated SM0PWM23 signal is used by the deadtime logic.
            v01=0x00000001,     ///<Inverted generated SM0PWM23 signal is used by the deadtime logic.
            v10=0x00000002,     ///<SWCOUT[SM0OUT23] is used by the deadtime logic.
            v11=0x00000003,     ///<PWM0_EXTA signal is used by the deadtime logic.
        };
        namespace sm0sel23ValC{
            constexpr MPL::Value<sm0sel23Val,sm0sel23Val::v00> v00{};
            constexpr MPL::Value<sm0sel23Val,sm0sel23Val::v01> v01{};
            constexpr MPL::Value<sm0sel23Val,sm0sel23Val::v10> v10{};
            constexpr MPL::Value<sm0sel23Val,sm0sel23Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,sm0sel23Val> sm0sel23{}; 
        ///Submodule 1 PWM45 Control Select
        enum class sm1sel45Val {
            v00=0x00000000,     ///<Generated SM1PWM45 signal is used by the deadtime logic.
            v01=0x00000001,     ///<Inverted generated SM1PWM45 signal is used by the deadtime logic.
            v10=0x00000002,     ///<SWCOUT[SM1OUT45] is used by the deadtime logic.
            v11=0x00000003,     ///<PWM1_EXTB signal is used by the deadtime logic.
        };
        namespace sm1sel45ValC{
            constexpr MPL::Value<sm1sel45Val,sm1sel45Val::v00> v00{};
            constexpr MPL::Value<sm1sel45Val,sm1sel45Val::v01> v01{};
            constexpr MPL::Value<sm1sel45Val,sm1sel45Val::v10> v10{};
            constexpr MPL::Value<sm1sel45Val,sm1sel45Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,sm1sel45Val> sm1sel45{}; 
        ///Submodule 1 PWM23 Control Select
        enum class sm1sel23Val {
            v00=0x00000000,     ///<Generated SM1PWM23 signal is used by the deadtime logic.
            v01=0x00000001,     ///<Inverted generated SM1PWM23 signal is used by the deadtime logic.
            v10=0x00000002,     ///<SWCOUT[SM1OUT23] is used by the deadtime logic.
            v11=0x00000003,     ///<PWM1_EXTA signal is used by the deadtime logic.
        };
        namespace sm1sel23ValC{
            constexpr MPL::Value<sm1sel23Val,sm1sel23Val::v00> v00{};
            constexpr MPL::Value<sm1sel23Val,sm1sel23Val::v01> v01{};
            constexpr MPL::Value<sm1sel23Val,sm1sel23Val::v10> v10{};
            constexpr MPL::Value<sm1sel23Val,sm1sel23Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,sm1sel23Val> sm1sel23{}; 
        ///Submodule 2 PWM45 Control Select
        enum class sm2sel45Val {
            v00=0x00000000,     ///<Generated SM2PWM45 signal is used by the deadtime logic.
            v01=0x00000001,     ///<Inverted generated SM2PWM45 signal is used by the deadtime logic.
            v10=0x00000002,     ///<SWCOUT[SM2OUT45] is used by the deadtime logic.
            v11=0x00000003,     ///<PWM2_EXTB signal is used by the deadtime logic.
        };
        namespace sm2sel45ValC{
            constexpr MPL::Value<sm2sel45Val,sm2sel45Val::v00> v00{};
            constexpr MPL::Value<sm2sel45Val,sm2sel45Val::v01> v01{};
            constexpr MPL::Value<sm2sel45Val,sm2sel45Val::v10> v10{};
            constexpr MPL::Value<sm2sel45Val,sm2sel45Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,sm2sel45Val> sm2sel45{}; 
        ///Submodule 2 PWM23 Control Select
        enum class sm2sel23Val {
            v00=0x00000000,     ///<Generated SM2PWM23 signal is used by the deadtime logic.
            v01=0x00000001,     ///<Inverted generated SM2PWM23 signal is used by the deadtime logic.
            v10=0x00000002,     ///<SWCOUT[SM2OUT23] is used by the deadtime logic.
            v11=0x00000003,     ///<PWM2_EXTA signal is used by the deadtime logic.
        };
        namespace sm2sel23ValC{
            constexpr MPL::Value<sm2sel23Val,sm2sel23Val::v00> v00{};
            constexpr MPL::Value<sm2sel23Val,sm2sel23Val::v01> v01{};
            constexpr MPL::Value<sm2sel23Val,sm2sel23Val::v10> v10{};
            constexpr MPL::Value<sm2sel23Val,sm2sel23Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,sm2sel23Val> sm2sel23{}; 
        ///Submodule 3 PWM45 Control Select
        enum class sm3sel45Val {
            v00=0x00000000,     ///<Generated SM3PWM45 signal is used by the deadtime logic.
            v01=0x00000001,     ///<Inverted generated SM3PWM45 signal is used by the deadtime logic.
            v10=0x00000002,     ///<SWCOUT[SM3OUT45] is used by the deadtime logic.
            v11=0x00000003,     ///<PWM3_EXTB signal is used by the deadtime logic.
        };
        namespace sm3sel45ValC{
            constexpr MPL::Value<sm3sel45Val,sm3sel45Val::v00> v00{};
            constexpr MPL::Value<sm3sel45Val,sm3sel45Val::v01> v01{};
            constexpr MPL::Value<sm3sel45Val,sm3sel45Val::v10> v10{};
            constexpr MPL::Value<sm3sel45Val,sm3sel45Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,sm3sel45Val> sm3sel45{}; 
        ///Submodule 3 PWM23 Control Select
        enum class sm3sel23Val {
            v00=0x00000000,     ///<Generated SM3PWM23 signal is used by the deadtime logic.
            v01=0x00000001,     ///<Inverted generated SM3PWM23 signal is used by the deadtime logic.
            v10=0x00000002,     ///<SWCOUT[SM3OUT23] is used by the deadtime logic.
            v11=0x00000003,     ///<PWM3_EXTA signal is used by the deadtime logic.
        };
        namespace sm3sel23ValC{
            constexpr MPL::Value<sm3sel23Val,sm3sel23Val::v00> v00{};
            constexpr MPL::Value<sm3sel23Val,sm3sel23Val::v01> v01{};
            constexpr MPL::Value<sm3sel23Val,sm3sel23Val::v10> v10{};
            constexpr MPL::Value<sm3sel23Val,sm3sel23Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,sm3sel23Val> sm3sel23{}; 
    }
    namespace PwmaMctrl{    ///<Master Control Register
        using Addr = Register::Address<0x40033188,0xffff0000,0,unsigned>;
        ///Load Okay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ldok{}; 
        ///Clear Load Okay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cldok{}; 
        ///Run
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> run{}; 
        ///Current Polarity
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> ipol{}; 
    }
    namespace PwmaMctrl2{    ///<Master Control 2 Register
        using Addr = Register::Address<0x4003318a,0xfffffffc,0,unsigned>;
        ///Monitor PLL State
        enum class monpllVal {
            v00=0x00000000,     ///<Not locked. Do not monitor PLL operation. Resetting of the fractional delay block in case of PLL losing lock will be controlled by software.
            v01=0x00000001,     ///<Not locked. Monitor PLL operation to automatically disable the fractional delay block when the PLL encounters problems.
            v10=0x00000002,     ///<Locked. Do not monitor PLL operation. Resetting of the fractional delay block in case of PLL losing lock will be controlled by software. These bits are write protected until the next reset.
            v11=0x00000003,     ///<Locked. Monitor PLL operation to automatically disable the fractional delay block when the PLL encounters problems. These bits are write protected until the next reset.
        };
        namespace monpllValC{
            constexpr MPL::Value<monpllVal,monpllVal::v00> v00{};
            constexpr MPL::Value<monpllVal,monpllVal::v01> v01{};
            constexpr MPL::Value<monpllVal,monpllVal::v10> v10{};
            constexpr MPL::Value<monpllVal,monpllVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,monpllVal> monpll{}; 
    }
    namespace PwmaFctrl{    ///<Fault Control Register
        using Addr = Register::Address<0x4003318c,0xffff0000,0,unsigned>;
        ///Fault Interrupt Enables
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fie{}; 
        ///Fault Safety Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> fsafe{}; 
        ///Automatic Fault Clearing
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> fauto{}; 
        ///Fault Level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> flvl{}; 
    }
    namespace PwmaFsts{    ///<Fault Status Register
        using Addr = Register::Address<0x4003318e,0xffff0000,0,unsigned>;
        ///Fault Flags
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> fflag{}; 
        ///Full Cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ffull{}; 
        ///Filtered Fault Pins
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> ffpin{}; 
        ///Half Cycle Fault Recovery
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> fhalf{}; 
    }
    namespace PwmaFfilt{    ///<Fault Filter Register
        using Addr = Register::Address<0x40033190,0xffff7800,0,unsigned>;
        ///Fault Filter Period
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> filtPer{}; 
        ///Fault Filter Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> filtCnt{}; 
        ///Fault Glitch Stretch Enable
        enum class gstrVal {
            v0=0x00000000,     ///<Fault input glitch stretching is disabled.
            v1=0x00000001,     ///<Input fault signals will be stretched to at least 2 IPBus clock cycles.
        };
        namespace gstrValC{
            constexpr MPL::Value<gstrVal,gstrVal::v0> v0{};
            constexpr MPL::Value<gstrVal,gstrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,gstrVal> gstr{}; 
    }
    namespace PwmaFtst{    ///<Fault Test Register
        using Addr = Register::Address<0x40033192,0xfffffffe,0,unsigned>;
        ///Fault Test
        enum class ftestVal {
            v0=0x00000000,     ///<No fault
            v1=0x00000001,     ///<Cause a simulated fault
        };
        namespace ftestValC{
            constexpr MPL::Value<ftestVal,ftestVal::v0> v0{};
            constexpr MPL::Value<ftestVal,ftestVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ftestVal> ftest{}; 
    }
    namespace PwmaFctrl2{    ///<Fault Control 2 Register
        using Addr = Register::Address<0x40033194,0xfffffff0,0,unsigned>;
        ///No Combinational Path From Fault Input To PWM Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> nocomb{}; 
    }
}
