#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10503 Chapter title=LPC43xx Serial
GPIO (SGPIO) Modification date=10/7/2011 Major revision=0 Minor revision=3 
    namespace NoneoutMuxCfg0{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x40101000,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg1{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x40101004,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg2{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x40101008,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg3{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x4010100c,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg4{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x40101010,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg5{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x40101014,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg6{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x40101018,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg7{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x4010101c,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg8{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x40101020,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg9{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x40101024,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg10{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x40101028,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg11{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x4010102c,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg12{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x40101030,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg13{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x40101034,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg14{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x40101038,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NoneoutMuxCfg15{    ///<Pin multiplexer configuration
registers.
        using Addr = Register::Address<0x4010103c,0xffffff80,0,unsigned>;
        ///Output control of output SGPIOn. All other values are reserved.
        enum class PoutcfgVal {
            doutDoutm11BitM=0x00000000,     ///<dout_doutm1 (1-bit mode)
            doutDoutm2a2Bit=0x00000001,     ///<dout_doutm2a (2-bit mode 2a)
            doutDoutm2b2Bit=0x00000002,     ///<dout_doutm2b (2-bit mode 2b)
            doutDoutm2c2Bit=0x00000003,     ///<dout_doutm2c (2-bit mode 2c)
            gpioOutLevelSet=0x00000004,     ///<gpio_out (level set by GPIO_OUTREG)
            doutDoutm4a4Bit=0x00000005,     ///<dout_doutm4a (4-bit mode 4a)
            doutDoutm4b4Bit=0x00000006,     ///<dout_doutm4b (4-bit mode 4b)
            doutDoutm4c4Bit=0x00000007,     ///<dout_doutm4c (4-bit mode 4c)
            clkOut=0x00000008,     ///<clk_out
            doutDoutm8a8Bit=0x00000009,     ///<dout_doutm8a (8-bit mode 8a)
            doutDoutm8b8Bit=0x0000000a,     ///<dout_doutm8b (8-bit mode 8b)
            doutDoutm8c8Bit=0x0000000b,     ///<dout_doutm8c (8-bit mode 8c)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,PoutcfgVal> pOutCfg{}; 
        namespace PoutcfgValC{
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm11BitM> doutDoutm11BitM{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2a2Bit> doutDoutm2a2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2b2Bit> doutDoutm2b2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm2c2Bit> doutDoutm2c2Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::gpioOutLevelSet> gpioOutLevelSet{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4a4Bit> doutDoutm4a4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4b4Bit> doutDoutm4b4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm4c4Bit> doutDoutm4c4Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::clkOut> clkOut{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8a8Bit> doutDoutm8a8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8b8Bit> doutDoutm8b8Bit{};
            constexpr Register::FieldValue<decltype(pOutCfg),PoutcfgVal::doutDoutm8c8Bit> doutDoutm8c8Bit{};
        }
        ///Output enable source. All other values are reserved.
        enum class PoecfgVal {
            gpioOeStateSetB=0x00000000,     ///<gpio_oe (state set by GPIO_OEREG)
            doutOem11BitMod=0x00000004,     ///<dout_oem1 (1-bit mode)
            doutOem22BitMod=0x00000005,     ///<dout_oem2 (2-bit mode)
            doutOem44BitMod=0x00000006,     ///<dout_oem4 (4-bit mode)
            doutOem88BitMod=0x00000007,     ///<dout_oem8 (8-bit mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,PoecfgVal> pOeCfg{}; 
        namespace PoecfgValC{
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::gpioOeStateSetB> gpioOeStateSetB{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem11BitMod> doutOem11BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem22BitMod> doutOem22BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem44BitMod> doutOem44BitMod{};
            constexpr Register::FieldValue<decltype(pOeCfg),PoecfgVal::doutOem88BitMod> doutOem88BitMod{};
        }
    }
    namespace NonesgpioMuxCfg0{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101040,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg1{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101044,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg2{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101048,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg3{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x4010104c,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg4{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101050,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg5{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101054,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg6{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101058,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg7{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x4010105c,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg8{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101060,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg9{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101064,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg10{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101068,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg11{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x4010106c,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg12{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101070,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg13{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101074,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg14{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x40101078,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesgpioMuxCfg15{    ///<SGPIO multiplexer configuration registers.
        using Addr = Register::Address<0x4010107c,0xffffc000,0,unsigned>;
        ///Select clock signal.
        enum class ExtclkenableVal {
            internalClockSigna=0x00000000,     ///<Internal clock signal (slice)
            externalClockSigna=0x00000001,     ///<External clock signal (pin)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtclkenableVal> extClkEnable{}; 
        namespace ExtclkenableValC{
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::internalClockSigna> internalClockSigna{};
            constexpr Register::FieldValue<decltype(extClkEnable),ExtclkenableVal::externalClockSigna> externalClockSigna{};
        }
        ///Select source clock pin.
        enum class ClksourcepinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,ClksourcepinmodeVal> clkSourcePinMode{}; 
        namespace ClksourcepinmodeValC{
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(clkSourcePinMode),ClksourcepinmodeVal::sgpio11> sgpio11{};
        }
        ///Select clock source slice. Note that slices D, H, O and P do not support this mode.
        enum class ClksourceslicemodeVal {
            sliceD=0x00000000,     ///<Slice D
            sliceH=0x00000001,     ///<Slice H
            sliceO=0x00000002,     ///<Slice O
            sliceP=0x00000003,     ///<Slice P
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,ClksourceslicemodeVal> clkSourceSliceMode{}; 
        namespace ClksourceslicemodeValC{
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceD> sliceD{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceO> sliceO{};
            constexpr Register::FieldValue<decltype(clkSourceSliceMode),ClksourceslicemodeVal::sliceP> sliceP{};
        }
        ///Select qualifier mode.
        enum class QualifiermodeVal {
            enable=0x00000000,     ///<Enable
            disable=0x00000001,     ///<Disable
            sliceSeeBitsQual=0x00000002,     ///<Slice (see bits QUALIFIER_SLICE_MODE in this register)
            externalSgpioPin=0x00000003,     ///<External SGPIO pin (8, 9, 10, or 11)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,QualifiermodeVal> qualifierMode{}; 
        namespace QualifiermodeValC{
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::enable> enable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::disable> disable{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::sliceSeeBitsQual> sliceSeeBitsQual{};
            constexpr Register::FieldValue<decltype(qualifierMode),QualifiermodeVal::externalSgpioPin> externalSgpioPin{};
        }
        ///Select qualifier pin.
        enum class QualifierpinmodeVal {
            sgpio8=0x00000000,     ///<SGPIO8
            sgpio9=0x00000001,     ///<SGPIO9
            sgpio10=0x00000002,     ///<SGPIO10
            sgpio11=0x00000003,     ///<SGPIO11
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,7),Register::ReadWriteAccess,QualifierpinmodeVal> qualifierPinMode{}; 
        namespace QualifierpinmodeValC{
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio8> sgpio8{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio9> sgpio9{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio10> sgpio10{};
            constexpr Register::FieldValue<decltype(qualifierPinMode),QualifierpinmodeVal::sgpio11> sgpio11{};
        }
        ///Select qualifier slice.
        enum class QualifierslicemodeVal {
            sliceA=0x00000000,     ///<Slice A, but for slice A slice D is used.
            sliceH=0x00000001,     ///<Slice H, but for slice H slice O is used.
            sliceI=0x00000002,     ///<Slice I, but for slice I slice D is used.
            sliceP=0x00000003,     ///<Slice P, but for slice P slice O is used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,QualifierslicemodeVal> qualifierSliceMode{}; 
        namespace QualifierslicemodeValC{
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceA> sliceA{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceH> sliceH{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceI> sliceI{};
            constexpr Register::FieldValue<decltype(qualifierSliceMode),QualifierslicemodeVal::sliceP> sliceP{};
        }
        ///Enable concatenation.
        enum class ConcatenableVal {
            externalDataPin=0x00000000,     ///<External data pin
            concatenateData=0x00000001,     ///<Concatenate data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,ConcatenableVal> concatEnable{}; 
        namespace ConcatenableValC{
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::externalDataPin> externalDataPin{};
            constexpr Register::FieldValue<decltype(concatEnable),ConcatenableVal::concatenateData> concatenateData{};
        }
        ///Select concatenation order
        enum class ConcatorderVal {
            selfLoop=0x00000000,     ///<Self-loop
            v2Slices=0x00000001,     ///<2 slices
            v4Slices=0x00000002,     ///<4 slices
            v8Slices=0x00000003,     ///<8 slices
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,ConcatorderVal> concatOrder{}; 
        namespace ConcatorderValC{
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::selfLoop> selfLoop{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v2Slices> v2Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v4Slices> v4Slices{};
            constexpr Register::FieldValue<decltype(concatOrder),ConcatorderVal::v8Slices> v8Slices{};
        }
    }
    namespace NonesliceMuxCfg0{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x40101080,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg1{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x40101084,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg2{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x40101088,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg3{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x4010108c,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg4{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x40101090,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg5{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x40101094,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg6{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x40101098,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg7{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x4010109c,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg8{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010a0,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg9{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010a4,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg10{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010a8,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg11{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010ac,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg12{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010b0,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg13{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010b4,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg14{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010b8,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace NonesliceMuxCfg15{    ///<Slice multiplexer configuration registers.
        using Addr = Register::Address<0x401010bc,0xfffffe00,0,unsigned>;
        ///Match mode
        enum class MatchmodeVal {
            doNotMatchData=0x00000000,     ///<Do not match data.
            matchData=0x00000001,     ///<Match data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,MatchmodeVal> matchMode{}; 
        namespace MatchmodeValC{
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::doNotMatchData> doNotMatchData{};
            constexpr Register::FieldValue<decltype(matchMode),MatchmodeVal::matchData> matchData{};
        }
        ///Capture clock mode
        enum class ClkcapturemodeVal {
            useRisingClockEdg=0x00000000,     ///<Use rising clock edge.
            useFallingClockEd=0x00000001,     ///<Use falling clock edge.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ClkcapturemodeVal> clkCaptureMode{}; 
        namespace ClkcapturemodeValC{
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useRisingClockEdg> useRisingClockEdg{};
            constexpr Register::FieldValue<decltype(clkCaptureMode),ClkcapturemodeVal::useFallingClockEd> useFallingClockEd{};
        }
        ///Clock generation mode
        enum class ClkgenmodeVal {
            useClockInternally=0x00000000,     ///<Use clock internally generated by COUNTER.
            useExternalClockF=0x00000001,     ///<Use external clock from a pin or other slice.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ClkgenmodeVal> clkgenMode{}; 
        namespace ClkgenmodeValC{
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useClockInternally> useClockInternally{};
            constexpr Register::FieldValue<decltype(clkgenMode),ClkgenmodeVal::useExternalClockF> useExternalClockF{};
        }
        ///Invert output clock
        enum class InvoutclkVal {
            normalClock=0x00000000,     ///<Normal clock.
            invertedClock=0x00000001,     ///<Inverted clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvoutclkVal> invOutClk{}; 
        namespace InvoutclkValC{
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::normalClock> normalClock{};
            constexpr Register::FieldValue<decltype(invOutClk),InvoutclkVal::invertedClock> invertedClock{};
        }
        ///Condition for input bit match interrupt
        enum class DatacapturemodeVal {
            detectRisingEdge=0x00000000,     ///<Detect rising edge.
            detectFallingEdge=0x00000001,     ///<Detect falling edge.
            detectLowLevel=0x00000002,     ///<Detect LOW level.
            detectHighLevel=0x00000003,     ///<Detect HIGH level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,DatacapturemodeVal> dataCaptureMode{}; 
        namespace DatacapturemodeValC{
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectRisingEdge> detectRisingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectFallingEdge> detectFallingEdge{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectLowLevel> detectLowLevel{};
            constexpr Register::FieldValue<decltype(dataCaptureMode),DatacapturemodeVal::detectHighLevel> detectHighLevel{};
        }
        ///Parallel mode
        enum class ParallelmodeVal {
            shift1BitPerCloc=0x00000000,     ///<Shift 1 bit per clock.
            shift2BitsPerClo=0x00000001,     ///<Shift 2 bits per clock.
            shift4BitsPerClo=0x00000002,     ///<Shift 4 bits per clock.
            shift1BytePerClo=0x00000003,     ///<Shift 1 byte per clock.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,ParallelmodeVal> parallelMode{}; 
        namespace ParallelmodeValC{
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BitPerCloc> shift1BitPerCloc{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift2BitsPerClo> shift2BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift4BitsPerClo> shift4BitsPerClo{};
            constexpr Register::FieldValue<decltype(parallelMode),ParallelmodeVal::shift1BytePerClo> shift1BytePerClo{};
        }
        ///Inversion qualifier
        enum class InvqualifierVal {
            useNormalQualifier=0x00000000,     ///<Use normal qualifier.
            useInvertedQualifi=0x00000001,     ///<Use inverted qualifier.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,InvqualifierVal> invQualifier{}; 
        namespace InvqualifierValC{
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useNormalQualifier> useNormalQualifier{};
            constexpr Register::FieldValue<decltype(invQualifier),InvqualifierVal::useInvertedQualifi> useInvertedQualifi{};
        }
    }
    namespace Nonereg0{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010c0,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg1{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010c4,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg2{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010c8,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg3{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010cc,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg4{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010d0,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg5{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010d4,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg6{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010d8,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg7{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010dc,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg8{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010e0,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg9{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010e4,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg10{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010e8,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg11{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010ec,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg12{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010f0,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg13{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010f4,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg14{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010f8,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace Nonereg15{    ///<Slice data registers. Each
time COUNT0 reaches 0x0 the register shifts loading bit 31 with
data captured from DIN(n). DOUT(n) is set to REG(0)
        using Addr = Register::Address<0x401010fc,0x00000000,0,unsigned>;
        ///At each active shift clock the register shifts right;  loading REG(31) with data captured from DIN(n) and  DOUT(n) is set to REG(0).
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> reg{}; 
        namespace RegValC{
        }
    }
    namespace NoneregSs0{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x40101100,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs1{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x40101104,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs2{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x40101108,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs3{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x4010110c,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs4{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x40101110,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs5{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x40101114,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs6{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x40101118,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs7{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x4010111c,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs8{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x40101120,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs9{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x40101124,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs10{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x40101128,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs11{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x4010112c,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs12{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x40101130,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs13{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x40101134,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs14{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x40101138,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace NoneregSs15{    ///<Slice data shadow registers. Each time POS
reaches 0x0 the contents of REG_SS is exchanged with the content
of REG
        using Addr = Register::Address<0x4010113c,0x00000000,0,unsigned>;
        ///Each time POS reaches 0x0 the contents of REG_SS  is exchanged with the content of REG.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> regSs{}; 
        namespace RegssValC{
        }
    }
    namespace Nonepreset0{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101140,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset1{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101144,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset2{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101148,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset3{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x4010114c,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset4{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101150,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset5{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101154,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset6{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101158,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset7{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x4010115c,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset8{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101160,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset9{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101164,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset10{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101168,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset11{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x4010116c,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset12{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101170,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset13{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101174,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset14{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x40101178,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonepreset15{    ///<Reload value
of COUNT0, loaded when COUNT0 reaches 0x0
        using Addr = Register::Address<0x4010117c,0xfffff000,0,unsigned>;
        ///Counter reload value; loaded when COUNT reaches  0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> preset{}; 
        namespace PresetValC{
        }
    }
    namespace Nonecount0{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x40101180,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount1{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x40101184,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount2{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x40101188,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount3{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x4010118c,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount4{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x40101190,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount5{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x40101194,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount6{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x40101198,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount7{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x4010119c,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount8{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011a0,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount9{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011a4,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount10{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011a8,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount11{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011ac,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount12{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011b0,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount13{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011b4,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount14{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011b8,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonecount15{    ///<Down counter, counts down each clock cycle.
        using Addr = Register::Address<0x401011bc,0xfffff000,0,unsigned>;
        ///Down counter, counts down each shift clock cycle.  Next count after 0x0 is PRESET.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace Nonepos0{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011c0,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos1{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011c4,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos2{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011c8,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos3{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011cc,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos4{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011d0,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos5{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011d4,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos6{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011d8,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos7{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011dc,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos8{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011e0,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos9{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011e4,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos10{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011e8,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos11{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011ec,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos12{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011f0,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos13{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011f4,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos14{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011f8,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace Nonepos15{    ///<Each time COUNT0 reaches 0x0
        using Addr = Register::Address<0x401011fc,0xffff0000,0,unsigned>;
        ///Each time COUNT reaches 0x0 POS counts down.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> pos{}; 
        namespace PosValC{
        }
        ///Reload value for POS after POS reaches 0x0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> posReset{}; 
        namespace PosresetValC{
        }
    }
    namespace NonemaskA{    ///<Mask for pattern match function of slice A
        using Addr = Register::Address<0x40101200,0x00000000,0,unsigned>;
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskA0{}; 
        namespace Maska0ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskA1{}; 
        namespace Maska1ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskA2{}; 
        namespace Maska2ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskA3{}; 
        namespace Maska3ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskA4{}; 
        namespace Maska4ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskA5{}; 
        namespace Maska5ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskA6{}; 
        namespace Maska6ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskA7{}; 
        namespace Maska7ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskA8{}; 
        namespace Maska8ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskA9{}; 
        namespace Maska9ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskA10{}; 
        namespace Maska10ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskA11{}; 
        namespace Maska11ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskA12{}; 
        namespace Maska12ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskA13{}; 
        namespace Maska13ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskA14{}; 
        namespace Maska14ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskA15{}; 
        namespace Maska15ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskA16{}; 
        namespace Maska16ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskA17{}; 
        namespace Maska17ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskA18{}; 
        namespace Maska18ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskA19{}; 
        namespace Maska19ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskA20{}; 
        namespace Maska20ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskA21{}; 
        namespace Maska21ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskA22{}; 
        namespace Maska22ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskA23{}; 
        namespace Maska23ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskA24{}; 
        namespace Maska24ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskA25{}; 
        namespace Maska25ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskA26{}; 
        namespace Maska26ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskA27{}; 
        namespace Maska27ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskA28{}; 
        namespace Maska28ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskA29{}; 
        namespace Maska29ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskA30{}; 
        namespace Maska30ValC{
        }
        ///Mask for pattern match function of slice A  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskA31{}; 
        namespace Maska31ValC{
        }
    }
    namespace NonemaskH{    ///<Mask for pattern match function of slice H
        using Addr = Register::Address<0x40101204,0x00000000,0,unsigned>;
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskH0{}; 
        namespace Maskh0ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskH1{}; 
        namespace Maskh1ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskH2{}; 
        namespace Maskh2ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskH3{}; 
        namespace Maskh3ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskH4{}; 
        namespace Maskh4ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskH5{}; 
        namespace Maskh5ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskH6{}; 
        namespace Maskh6ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskH7{}; 
        namespace Maskh7ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskH8{}; 
        namespace Maskh8ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskH9{}; 
        namespace Maskh9ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskH10{}; 
        namespace Maskh10ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskH11{}; 
        namespace Maskh11ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskH12{}; 
        namespace Maskh12ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskH13{}; 
        namespace Maskh13ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskH14{}; 
        namespace Maskh14ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskH15{}; 
        namespace Maskh15ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskH16{}; 
        namespace Maskh16ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskH17{}; 
        namespace Maskh17ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskH18{}; 
        namespace Maskh18ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskH19{}; 
        namespace Maskh19ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskH20{}; 
        namespace Maskh20ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskH21{}; 
        namespace Maskh21ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskH22{}; 
        namespace Maskh22ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskH23{}; 
        namespace Maskh23ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskH24{}; 
        namespace Maskh24ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskH25{}; 
        namespace Maskh25ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskH26{}; 
        namespace Maskh26ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskH27{}; 
        namespace Maskh27ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskH28{}; 
        namespace Maskh28ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskH29{}; 
        namespace Maskh29ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskH30{}; 
        namespace Maskh30ValC{
        }
        ///Mask for pattern match function of slice H  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskH31{}; 
        namespace Maskh31ValC{
        }
    }
    namespace NonemaskI{    ///<Mask for pattern match function of slice I
        using Addr = Register::Address<0x40101208,0x00000000,0,unsigned>;
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskI0{}; 
        namespace Maski0ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskI1{}; 
        namespace Maski1ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskI2{}; 
        namespace Maski2ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskI3{}; 
        namespace Maski3ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskI4{}; 
        namespace Maski4ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskI5{}; 
        namespace Maski5ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskI6{}; 
        namespace Maski6ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskI7{}; 
        namespace Maski7ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskI8{}; 
        namespace Maski8ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskI9{}; 
        namespace Maski9ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskI10{}; 
        namespace Maski10ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskI11{}; 
        namespace Maski11ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskI12{}; 
        namespace Maski12ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskI13{}; 
        namespace Maski13ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskI14{}; 
        namespace Maski14ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskI15{}; 
        namespace Maski15ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskI16{}; 
        namespace Maski16ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskI17{}; 
        namespace Maski17ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskI18{}; 
        namespace Maski18ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskI19{}; 
        namespace Maski19ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskI20{}; 
        namespace Maski20ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskI21{}; 
        namespace Maski21ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskI22{}; 
        namespace Maski22ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskI23{}; 
        namespace Maski23ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskI24{}; 
        namespace Maski24ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskI25{}; 
        namespace Maski25ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskI26{}; 
        namespace Maski26ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskI27{}; 
        namespace Maski27ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskI28{}; 
        namespace Maski28ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskI29{}; 
        namespace Maski29ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskI30{}; 
        namespace Maski30ValC{
        }
        ///Mask for pattern match function of slice I  0 = No effect . 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskI31{}; 
        namespace Maski31ValC{
        }
    }
    namespace NonemaskP{    ///<Mask for pattern match function of slice P
        using Addr = Register::Address<0x4010120c,0x00000000,0,unsigned>;
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> maskP0{}; 
        namespace Maskp0ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> maskP1{}; 
        namespace Maskp1ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> maskP2{}; 
        namespace Maskp2ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> maskP3{}; 
        namespace Maskp3ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> maskP4{}; 
        namespace Maskp4ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> maskP5{}; 
        namespace Maskp5ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> maskP6{}; 
        namespace Maskp6ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> maskP7{}; 
        namespace Maskp7ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> maskP8{}; 
        namespace Maskp8ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> maskP9{}; 
        namespace Maskp9ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> maskP10{}; 
        namespace Maskp10ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> maskP11{}; 
        namespace Maskp11ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> maskP12{}; 
        namespace Maskp12ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> maskP13{}; 
        namespace Maskp13ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> maskP14{}; 
        namespace Maskp14ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> maskP15{}; 
        namespace Maskp15ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> maskP16{}; 
        namespace Maskp16ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> maskP17{}; 
        namespace Maskp17ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> maskP18{}; 
        namespace Maskp18ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> maskP19{}; 
        namespace Maskp19ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> maskP20{}; 
        namespace Maskp20ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> maskP21{}; 
        namespace Maskp21ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> maskP22{}; 
        namespace Maskp22ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> maskP23{}; 
        namespace Maskp23ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> maskP24{}; 
        namespace Maskp24ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> maskP25{}; 
        namespace Maskp25ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> maskP26{}; 
        namespace Maskp26ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> maskP27{}; 
        namespace Maskp27ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> maskP28{}; 
        namespace Maskp28ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> maskP29{}; 
        namespace Maskp29ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> maskP30{}; 
        namespace Maskp30ValC{
        }
        ///Mask for pattern match function of slice P  0 = No effect. 1 = Mask this bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> maskP31{}; 
        namespace Maskp31ValC{
        }
    }
    namespace NonegpioInreg{    ///<GPIO input status register
        using Addr = Register::Address<0x40101210,0xffff0000,0,unsigned>;
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioIn0{}; 
        namespace Gpioin0ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioIn1{}; 
        namespace Gpioin1ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpioIn2{}; 
        namespace Gpioin2ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpioIn3{}; 
        namespace Gpioin3ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioIn4{}; 
        namespace Gpioin4ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpioIn5{}; 
        namespace Gpioin5ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpioIn6{}; 
        namespace Gpioin6ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpioIn7{}; 
        namespace Gpioin7ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpioIn8{}; 
        namespace Gpioin8ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpioIn9{}; 
        namespace Gpioin9ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gpioIn10{}; 
        namespace Gpioin10ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gpioIn11{}; 
        namespace Gpioin11ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gpioIn12{}; 
        namespace Gpioin12ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> gpioIn13{}; 
        namespace Gpioin13ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gpioIn14{}; 
        namespace Gpioin14ValC{
        }
        ///Bit i reflects the input state of SGPIO pin i . 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> gpioIn15{}; 
        namespace Gpioin15ValC{
        }
    }
    namespace NonegpioOutreg{    ///<GPIO output control register
        using Addr = Register::Address<0x40101214,0xffff0000,0,unsigned>;
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioOut0{}; 
        namespace Gpioout0ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioOut1{}; 
        namespace Gpioout1ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpioOut2{}; 
        namespace Gpioout2ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpioOut3{}; 
        namespace Gpioout3ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioOut4{}; 
        namespace Gpioout4ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpioOut5{}; 
        namespace Gpioout5ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpioOut6{}; 
        namespace Gpioout6ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpioOut7{}; 
        namespace Gpioout7ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpioOut8{}; 
        namespace Gpioout8ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpioOut9{}; 
        namespace Gpioout9ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gpioOut10{}; 
        namespace Gpioout10ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gpioOut11{}; 
        namespace Gpioout11ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gpioOut12{}; 
        namespace Gpioout12ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> gpioOut13{}; 
        namespace Gpioout13ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gpioOut14{}; 
        namespace Gpioout14ValC{
        }
        ///GPIO output register. Bit i sets the output of SGPIO pin i. 0 = LOW 1 = HIGH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> gpioOut15{}; 
        namespace Gpioout15ValC{
        }
    }
    namespace NonegpioOenreg{    ///<GPIO OE control register
        using Addr = Register::Address<0x40101218,0xffff0000,0,unsigned>;
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpioOe0{}; 
        namespace Gpiooe0ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioOe1{}; 
        namespace Gpiooe1ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpioOe2{}; 
        namespace Gpiooe2ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpioOe3{}; 
        namespace Gpiooe3ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpioOe4{}; 
        namespace Gpiooe4ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpioOe5{}; 
        namespace Gpiooe5ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpioOe6{}; 
        namespace Gpiooe6ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpioOe7{}; 
        namespace Gpiooe7ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpioOe8{}; 
        namespace Gpiooe8ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpioOe9{}; 
        namespace Gpiooe9ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gpioOe10{}; 
        namespace Gpiooe10ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gpioOe11{}; 
        namespace Gpiooe11ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gpioOe12{}; 
        namespace Gpiooe12ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> gpioOe13{}; 
        namespace Gpiooe13ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gpioOe14{}; 
        namespace Gpiooe14ValC{
        }
        ///Bit i selects the output enable state of SGPIO pin i. 0 = GPIO output i is tri-state . 1 = GPIO output i is active.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> gpioOe15{}; 
        namespace Gpiooe15ValC{
        }
    }
    namespace NonectrlEnabled{    ///<Enables the slice COUNT counter
        using Addr = Register::Address<0x4010121c,0xffff0000,0,unsigned>;
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrlEnabled0{}; 
        namespace Ctrlenabled0ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrlEnabled1{}; 
        namespace Ctrlenabled1ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrlEnabled2{}; 
        namespace Ctrlenabled2ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrlEnabled3{}; 
        namespace Ctrlenabled3ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrlEnabled4{}; 
        namespace Ctrlenabled4ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrlEnabled5{}; 
        namespace Ctrlenabled5ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrlEnabled6{}; 
        namespace Ctrlenabled6ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrlEnabled7{}; 
        namespace Ctrlenabled7ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrlEnabled8{}; 
        namespace Ctrlenabled8ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrlEnabled9{}; 
        namespace Ctrlenabled9ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrlEnabled10{}; 
        namespace Ctrlenabled10ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrlEnabled11{}; 
        namespace Ctrlenabled11ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrlEnabled12{}; 
        namespace Ctrlenabled12ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrlEnabled13{}; 
        namespace Ctrlenabled13ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrlEnabled14{}; 
        namespace Ctrlenabled14ValC{
        }
        ///Slice count enable. Bit n controls slice n (0 = slice A, ..., 15 = slice P). 0 = . 1 = Enables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrlEnabled15{}; 
        namespace Ctrlenabled15ValC{
        }
    }
    namespace NonectrlDisabled{    ///<Disables the slice COUNT counter
        using Addr = Register::Address<0x40101220,0xffff0000,0,unsigned>;
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrlDisabledn0{}; 
        namespace Ctrldisabledn0ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrlDisabledn1{}; 
        namespace Ctrldisabledn1ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrlDisabledn2{}; 
        namespace Ctrldisabledn2ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrlDisabledn3{}; 
        namespace Ctrldisabledn3ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrlDisabledn4{}; 
        namespace Ctrldisabledn4ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrlDisabledn5{}; 
        namespace Ctrldisabledn5ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrlDisabledn6{}; 
        namespace Ctrldisabledn6ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrlDisabledn7{}; 
        namespace Ctrldisabledn7ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrlDisabledn8{}; 
        namespace Ctrldisabledn8ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrlDisabledn9{}; 
        namespace Ctrldisabledn9ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrlDisabledn10{}; 
        namespace Ctrldisabledn10ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrlDisabledn11{}; 
        namespace Ctrldisabledn11ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrlDisabledn12{}; 
        namespace Ctrldisabledn12ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrlDisabledn13{}; 
        namespace Ctrldisabledn13ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrlDisabledn14{}; 
        namespace Ctrldisabledn14ValC{
        }
        ///Slice count disable. Bit n controls slice n, (0 = slice A, ..., 15 = slice P). 0 =  1 = Disables COUNTn.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrlDisabledn15{}; 
        namespace Ctrldisabledn15ValC{
        }
    }
    namespace NoneclrEn0{    ///<Shift clock interrupt clear mask
        using Addr = Register::Address<0x40101f00,0xffff0000,0,unsigned>;
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrSci0{}; 
        namespace Clrsci0ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrSci1{}; 
        namespace Clrsci1ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrSci2{}; 
        namespace Clrsci2ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrSci3{}; 
        namespace Clrsci3ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrSci4{}; 
        namespace Clrsci4ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrSci5{}; 
        namespace Clrsci5ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrSci6{}; 
        namespace Clrsci6ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrSci7{}; 
        namespace Clrsci7ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrSci8{}; 
        namespace Clrsci8ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrSci9{}; 
        namespace Clrsci9ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrSci10{}; 
        namespace Clrsci10ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrSci11{}; 
        namespace Clrsci11ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrSci12{}; 
        namespace Clrsci12ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrSci13{}; 
        namespace Clrsci13ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrSci14{}; 
        namespace Clrsci14ValC{
        }
        ///1 = Shift clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrSci15{}; 
        namespace Clrsci15ValC{
        }
    }
    namespace NonesetEn0{    ///<Shift clock interrupt set mask
        using Addr = Register::Address<0x40101f04,0xffff0000,0,unsigned>;
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setSci0{}; 
        namespace Setsci0ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setSci1{}; 
        namespace Setsci1ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setSci2{}; 
        namespace Setsci2ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setSci3{}; 
        namespace Setsci3ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setSci4{}; 
        namespace Setsci4ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setSci5{}; 
        namespace Setsci5ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setSci6{}; 
        namespace Setsci6ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setSci7{}; 
        namespace Setsci7ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setSci8{}; 
        namespace Setsci8ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setSci9{}; 
        namespace Setsci9ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setSci10{}; 
        namespace Setsci10ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setSci11{}; 
        namespace Setsci11ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setSci12{}; 
        namespace Setsci12ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setSci13{}; 
        namespace Setsci13ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setSci14{}; 
        namespace Setsci14ValC{
        }
        ///1 = Shift clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setSci15{}; 
        namespace Setsci15ValC{
        }
    }
    namespace Noneenable0{    ///<Shift clock interrupt enable
        using Addr = Register::Address<0x40101f08,0xffff0000,0,unsigned>;
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enableSci0{}; 
        namespace Enablesci0ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enableSci1{}; 
        namespace Enablesci1ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enableSci2{}; 
        namespace Enablesci2ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> enableSci3{}; 
        namespace Enablesci3ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> enableSci4{}; 
        namespace Enablesci4ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enableSci5{}; 
        namespace Enablesci5ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> enableSci6{}; 
        namespace Enablesci6ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> enableSci7{}; 
        namespace Enablesci7ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> enableSci8{}; 
        namespace Enablesci8ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> enableSci9{}; 
        namespace Enablesci9ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> enableSci10{}; 
        namespace Enablesci10ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> enableSci11{}; 
        namespace Enablesci11ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enableSci12{}; 
        namespace Enablesci12ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enableSci13{}; 
        namespace Enablesci13ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enableSci14{}; 
        namespace Enablesci14ValC{
        }
        ///1 = Shift clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enableSci15{}; 
        namespace Enablesci15ValC{
        }
    }
    namespace Nonestatus0{    ///<Shift clock interrupt status
        using Addr = Register::Address<0x40101f0c,0xffff0000,0,unsigned>;
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statusSci0{}; 
        namespace Statussci0ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statusSci1{}; 
        namespace Statussci1ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statusSci2{}; 
        namespace Statussci2ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statusSci3{}; 
        namespace Statussci3ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statusSci4{}; 
        namespace Statussci4ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statusSci5{}; 
        namespace Statussci5ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statusSci6{}; 
        namespace Statussci6ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statusSci7{}; 
        namespace Statussci7ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statusSci8{}; 
        namespace Statussci8ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statusSci9{}; 
        namespace Statussci9ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statusSci10{}; 
        namespace Statussci10ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statusSci11{}; 
        namespace Statussci11ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statusSci12{}; 
        namespace Statussci12ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statusSci13{}; 
        namespace Statussci13ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statusSci14{}; 
        namespace Statussci14ValC{
        }
        ///Shift clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statusSci15{}; 
        namespace Statussci15ValC{
        }
    }
    namespace NonectrStatus0{    ///<Shift clock interrupt clear status
        using Addr = Register::Address<0x40101f10,0xffff0000,0,unsigned>;
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusSci0{}; 
        namespace Ctrstatussci0ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusSci1{}; 
        namespace Ctrstatussci1ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusSci2{}; 
        namespace Ctrstatussci2ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusSci3{}; 
        namespace Ctrstatussci3ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusSci4{}; 
        namespace Ctrstatussci4ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusSci5{}; 
        namespace Ctrstatussci5ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusSci6{}; 
        namespace Ctrstatussci6ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusSci7{}; 
        namespace Ctrstatussci7ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusSci8{}; 
        namespace Ctrstatussci8ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusSci9{}; 
        namespace Ctrstatussci9ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusSci10{}; 
        namespace Ctrstatussci10ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusSci11{}; 
        namespace Ctrstatussci11ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusSci12{}; 
        namespace Ctrstatussci12ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusSci13{}; 
        namespace Ctrstatussci13ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusSci14{}; 
        namespace Ctrstatussci14ValC{
        }
        ///Shift clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusSci15{}; 
        namespace Ctrstatussci15ValC{
        }
    }
    namespace NonesetStatus0{    ///<Shift clock interrupt set status
        using Addr = Register::Address<0x40101f14,0xffff0000,0,unsigned>;
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusSci0{}; 
        namespace Ctrstatussci0ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusSci1{}; 
        namespace Ctrstatussci1ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusSci2{}; 
        namespace Ctrstatussci2ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusSci3{}; 
        namespace Ctrstatussci3ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusSci4{}; 
        namespace Ctrstatussci4ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusSci5{}; 
        namespace Ctrstatussci5ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusSci6{}; 
        namespace Ctrstatussci6ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusSci7{}; 
        namespace Ctrstatussci7ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusSci8{}; 
        namespace Ctrstatussci8ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusSci9{}; 
        namespace Ctrstatussci9ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusSci10{}; 
        namespace Ctrstatussci10ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusSci11{}; 
        namespace Ctrstatussci11ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusSci12{}; 
        namespace Ctrstatussci12ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusSci13{}; 
        namespace Ctrstatussci13ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusSci14{}; 
        namespace Ctrstatussci14ValC{
        }
        ///Shift clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusSci15{}; 
        namespace Ctrstatussci15ValC{
        }
    }
    namespace NoneclrEn1{    ///<Capture clock interrupt clear mask
        using Addr = Register::Address<0x40101f20,0xffff0000,0,unsigned>;
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrEnCci0{}; 
        namespace Clrencci0ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrEnCci1{}; 
        namespace Clrencci1ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrEnCci2{}; 
        namespace Clrencci2ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrEnCci3{}; 
        namespace Clrencci3ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrEnCci4{}; 
        namespace Clrencci4ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrEnCci5{}; 
        namespace Clrencci5ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrEnCci6{}; 
        namespace Clrencci6ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrEnCci7{}; 
        namespace Clrencci7ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrEnCci8{}; 
        namespace Clrencci8ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrEnCci9{}; 
        namespace Clrencci9ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrEnCci10{}; 
        namespace Clrencci10ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrEnCci11{}; 
        namespace Clrencci11ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrEnCci12{}; 
        namespace Clrencci12ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrEnCci13{}; 
        namespace Clrencci13ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrEnCci14{}; 
        namespace Clrencci14ValC{
        }
        ///1 = Capture clock interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrEnCci15{}; 
        namespace Clrencci15ValC{
        }
    }
    namespace NonesetEn1{    ///<Capture clock interrupt set mask
        using Addr = Register::Address<0x40101f24,0xffff0000,0,unsigned>;
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setEnCci0{}; 
        namespace Setencci0ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setEnCci1{}; 
        namespace Setencci1ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setEnCci2{}; 
        namespace Setencci2ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setEnCci3{}; 
        namespace Setencci3ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setEnCci4{}; 
        namespace Setencci4ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setEnCci5{}; 
        namespace Setencci5ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setEnCci6{}; 
        namespace Setencci6ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setEnCci7{}; 
        namespace Setencci7ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setEnCci8{}; 
        namespace Setencci8ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setEnCci9{}; 
        namespace Setencci9ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setEnCci10{}; 
        namespace Setencci10ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setEnCci11{}; 
        namespace Setencci11ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setEnCci12{}; 
        namespace Setencci12ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setEnCci13{}; 
        namespace Setencci13ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setEnCci14{}; 
        namespace Setencci14ValC{
        }
        ///1 = Capture clock interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setEnCci15{}; 
        namespace Setencci15ValC{
        }
    }
    namespace Noneenable1{    ///<Capture clock interrupt enable
        using Addr = Register::Address<0x40101f28,0xffff0000,0,unsigned>;
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enableCci0{}; 
        namespace Enablecci0ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enableCci1{}; 
        namespace Enablecci1ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enableCci2{}; 
        namespace Enablecci2ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> enableCci3{}; 
        namespace Enablecci3ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> enableCci4{}; 
        namespace Enablecci4ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enableCci5{}; 
        namespace Enablecci5ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> enableCci6{}; 
        namespace Enablecci6ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> enableCci7{}; 
        namespace Enablecci7ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> enableCci8{}; 
        namespace Enablecci8ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> enableCci9{}; 
        namespace Enablecci9ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> enableCci10{}; 
        namespace Enablecci10ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> enableCci11{}; 
        namespace Enablecci11ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enableCci12{}; 
        namespace Enablecci12ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enableCci13{}; 
        namespace Enablecci13ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enableCci14{}; 
        namespace Enablecci14ValC{
        }
        ///Capture clock interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enableCci15{}; 
        namespace Enablecci15ValC{
        }
    }
    namespace Nonestatus1{    ///<Capture clock interrupt status
        using Addr = Register::Address<0x40101f2c,0xffff0000,0,unsigned>;
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statusCci0{}; 
        namespace Statuscci0ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statusCci1{}; 
        namespace Statuscci1ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statusCci2{}; 
        namespace Statuscci2ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statusCci3{}; 
        namespace Statuscci3ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statusCci4{}; 
        namespace Statuscci4ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statusCci5{}; 
        namespace Statuscci5ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statusCci6{}; 
        namespace Statuscci6ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statusCci7{}; 
        namespace Statuscci7ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statusCci8{}; 
        namespace Statuscci8ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statusCci9{}; 
        namespace Statuscci9ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statusCci10{}; 
        namespace Statuscci10ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statusCci11{}; 
        namespace Statuscci11ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statusCci12{}; 
        namespace Statuscci12ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statusCci13{}; 
        namespace Statuscci13ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statusCci14{}; 
        namespace Statuscci14ValC{
        }
        ///Capture clock interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statusCci15{}; 
        namespace Statuscci15ValC{
        }
    }
    namespace NonectrStatus1{    ///<Capture clock interrupt clear status
        using Addr = Register::Address<0x40101f30,0xffff0000,0,unsigned>;
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusCci0{}; 
        namespace Ctrstatuscci0ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusCci1{}; 
        namespace Ctrstatuscci1ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusCci2{}; 
        namespace Ctrstatuscci2ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusCci3{}; 
        namespace Ctrstatuscci3ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusCci4{}; 
        namespace Ctrstatuscci4ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusCci5{}; 
        namespace Ctrstatuscci5ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusCci6{}; 
        namespace Ctrstatuscci6ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusCci7{}; 
        namespace Ctrstatuscci7ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusCci8{}; 
        namespace Ctrstatuscci8ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusCci9{}; 
        namespace Ctrstatuscci9ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusCci10{}; 
        namespace Ctrstatuscci10ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusCci11{}; 
        namespace Ctrstatuscci11ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusCci12{}; 
        namespace Ctrstatuscci12ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusCci13{}; 
        namespace Ctrstatuscci13ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusCci14{}; 
        namespace Ctrstatuscci14ValC{
        }
        ///Capture clock interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusCci15{}; 
        namespace Ctrstatuscci15ValC{
        }
    }
    namespace NonesetStatus1{    ///<Capture clock interrupt set status
        using Addr = Register::Address<0x40101f34,0xffff0000,0,unsigned>;
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusCci0{}; 
        namespace Ctrstatuscci0ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusCci1{}; 
        namespace Ctrstatuscci1ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusCci2{}; 
        namespace Ctrstatuscci2ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusCci3{}; 
        namespace Ctrstatuscci3ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusCci4{}; 
        namespace Ctrstatuscci4ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusCci5{}; 
        namespace Ctrstatuscci5ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusCci6{}; 
        namespace Ctrstatuscci6ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusCci7{}; 
        namespace Ctrstatuscci7ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusCci8{}; 
        namespace Ctrstatuscci8ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusCci9{}; 
        namespace Ctrstatuscci9ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusCci10{}; 
        namespace Ctrstatuscci10ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusCci11{}; 
        namespace Ctrstatuscci11ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusCci12{}; 
        namespace Ctrstatuscci12ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusCci13{}; 
        namespace Ctrstatuscci13ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusCci14{}; 
        namespace Ctrstatuscci14ValC{
        }
        ///Capture clock interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusCci15{}; 
        namespace Ctrstatuscci15ValC{
        }
    }
    namespace NoneclrEn2{    ///<Pattern match interrupt clear mask
        using Addr = Register::Address<0x40101f40,0xffff0000,0,unsigned>;
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrEn2Pmi0{}; 
        namespace Clren2pmi0ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrEn2Pmi1{}; 
        namespace Clren2pmi1ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrEn2Pmi2{}; 
        namespace Clren2pmi2ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrEn2Pmi3{}; 
        namespace Clren2pmi3ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrEn2Pmi4{}; 
        namespace Clren2pmi4ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrEn2Pmi5{}; 
        namespace Clren2pmi5ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrEn2Pmi6{}; 
        namespace Clren2pmi6ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrEn2Pmi7{}; 
        namespace Clren2pmi7ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrEn2Pmi8{}; 
        namespace Clren2pmi8ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrEn2Pmi9{}; 
        namespace Clren2pmi9ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrEn2Pmi10{}; 
        namespace Clren2pmi10ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrEn2Pmi11{}; 
        namespace Clren2pmi11ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrEn2Pmi12{}; 
        namespace Clren2pmi12ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrEn2Pmi13{}; 
        namespace Clren2pmi13ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrEn2Pmi14{}; 
        namespace Clren2pmi14ValC{
        }
        ///1 = Match interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrEn2Pmi15{}; 
        namespace Clren2pmi15ValC{
        }
    }
    namespace NonesetEn2{    ///<Pattern match interrupt set mask
        using Addr = Register::Address<0x40101f44,0xffff0000,0,unsigned>;
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setEnPmi0{}; 
        namespace Setenpmi0ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setEnPmi1{}; 
        namespace Setenpmi1ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setEnPmi2{}; 
        namespace Setenpmi2ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setEnPmi3{}; 
        namespace Setenpmi3ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setEnPmi4{}; 
        namespace Setenpmi4ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setEnPmi5{}; 
        namespace Setenpmi5ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setEnPmi6{}; 
        namespace Setenpmi6ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setEnPmi7{}; 
        namespace Setenpmi7ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setEnPmi8{}; 
        namespace Setenpmi8ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setEnPmi9{}; 
        namespace Setenpmi9ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setEnPmi10{}; 
        namespace Setenpmi10ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setEnPmi11{}; 
        namespace Setenpmi11ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setEnPmi12{}; 
        namespace Setenpmi12ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setEnPmi13{}; 
        namespace Setenpmi13ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setEnPmi14{}; 
        namespace Setenpmi14ValC{
        }
        ///1 = Match interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setEnPmi15{}; 
        namespace Setenpmi15ValC{
        }
    }
    namespace Noneenable2{    ///<Pattern match interrupt enable
        using Addr = Register::Address<0x40101f48,0xffff0000,0,unsigned>;
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enablePmi0{}; 
        namespace Enablepmi0ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enablePmi1{}; 
        namespace Enablepmi1ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enablePmi2{}; 
        namespace Enablepmi2ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> enablePmi3{}; 
        namespace Enablepmi3ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> enablePmi4{}; 
        namespace Enablepmi4ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enablePmi5{}; 
        namespace Enablepmi5ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> enablePmi6{}; 
        namespace Enablepmi6ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> enablePmi7{}; 
        namespace Enablepmi7ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> enablePmi8{}; 
        namespace Enablepmi8ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> enablePmi9{}; 
        namespace Enablepmi9ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> enablePmi10{}; 
        namespace Enablepmi10ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> enablePmi11{}; 
        namespace Enablepmi11ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enablePmi12{}; 
        namespace Enablepmi12ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enablePmi13{}; 
        namespace Enablepmi13ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enablePmi14{}; 
        namespace Enablepmi14ValC{
        }
        ///Match interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enablePmi15{}; 
        namespace Enablepmi15ValC{
        }
    }
    namespace Nonestatus2{    ///<Pattern match interrupt status
        using Addr = Register::Address<0x40101f4c,0xffff0000,0,unsigned>;
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statusPmi0{}; 
        namespace Statuspmi0ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statusPmi1{}; 
        namespace Statuspmi1ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statusPmi2{}; 
        namespace Statuspmi2ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statusPmi3{}; 
        namespace Statuspmi3ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statusPmi4{}; 
        namespace Statuspmi4ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statusPmi5{}; 
        namespace Statuspmi5ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statusPmi6{}; 
        namespace Statuspmi6ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statusPmi7{}; 
        namespace Statuspmi7ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statusPmi8{}; 
        namespace Statuspmi8ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statusPmi9{}; 
        namespace Statuspmi9ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statusPmi10{}; 
        namespace Statuspmi10ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statusPmi11{}; 
        namespace Statuspmi11ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statusPmi12{}; 
        namespace Statuspmi12ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statusPmi13{}; 
        namespace Statuspmi13ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statusPmi14{}; 
        namespace Statuspmi14ValC{
        }
        ///Match interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statusPmi15{}; 
        namespace Statuspmi15ValC{
        }
    }
    namespace NonectrStatus2{    ///<Pattern match interrupt clear status
        using Addr = Register::Address<0x40101f50,0xffff0000,0,unsigned>;
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusPmi0{}; 
        namespace Ctrstatuspmi0ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusPmi1{}; 
        namespace Ctrstatuspmi1ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusPmi2{}; 
        namespace Ctrstatuspmi2ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusPmi3{}; 
        namespace Ctrstatuspmi3ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusPmi4{}; 
        namespace Ctrstatuspmi4ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusPmi5{}; 
        namespace Ctrstatuspmi5ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusPmi6{}; 
        namespace Ctrstatuspmi6ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusPmi7{}; 
        namespace Ctrstatuspmi7ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusPmi8{}; 
        namespace Ctrstatuspmi8ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusPmi9{}; 
        namespace Ctrstatuspmi9ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusPmi10{}; 
        namespace Ctrstatuspmi10ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusPmi11{}; 
        namespace Ctrstatuspmi11ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusPmi12{}; 
        namespace Ctrstatuspmi12ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusPmi13{}; 
        namespace Ctrstatuspmi13ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusPmi14{}; 
        namespace Ctrstatuspmi14ValC{
        }
        ///Match interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusPmi15{}; 
        namespace Ctrstatuspmi15ValC{
        }
    }
    namespace NonesetStatus2{    ///<Pattern match interrupt set status
        using Addr = Register::Address<0x40101f54,0xffff0000,0,unsigned>;
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusPmi0{}; 
        namespace Ctrstatuspmi0ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusPmi1{}; 
        namespace Ctrstatuspmi1ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusPmi2{}; 
        namespace Ctrstatuspmi2ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusPmi3{}; 
        namespace Ctrstatuspmi3ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusPmi4{}; 
        namespace Ctrstatuspmi4ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusPmi5{}; 
        namespace Ctrstatuspmi5ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusPmi6{}; 
        namespace Ctrstatuspmi6ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusPmi7{}; 
        namespace Ctrstatuspmi7ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusPmi8{}; 
        namespace Ctrstatuspmi8ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusPmi9{}; 
        namespace Ctrstatuspmi9ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusPmi10{}; 
        namespace Ctrstatuspmi10ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusPmi11{}; 
        namespace Ctrstatuspmi11ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusPmi12{}; 
        namespace Ctrstatuspmi12ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusPmi13{}; 
        namespace Ctrstatuspmi13ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusPmi14{}; 
        namespace Ctrstatuspmi14ValC{
        }
        ///Match interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusPmi15{}; 
        namespace Ctrstatuspmi15ValC{
        }
    }
    namespace NoneclrEn3{    ///<Input interrupt clear mask
        using Addr = Register::Address<0x40101f60,0xffff0000,0,unsigned>;
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrEnInpi0{}; 
        namespace Clreninpi0ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clrEnInpi1{}; 
        namespace Clreninpi1ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clrEnInpi2{}; 
        namespace Clreninpi2ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> clrEnInpi3{}; 
        namespace Clreninpi3ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> clrEnInpi4{}; 
        namespace Clreninpi4ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> clrEnInpi5{}; 
        namespace Clreninpi5ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> clrEnInpi6{}; 
        namespace Clreninpi6ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> clrEnInpi7{}; 
        namespace Clreninpi7ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> clrEnInpi8{}; 
        namespace Clreninpi8ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> clrEnInpi9{}; 
        namespace Clreninpi9ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> clrEnInpi10{}; 
        namespace Clreninpi10ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> clrEnInpi11{}; 
        namespace Clreninpi11ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> clrEnInpi12{}; 
        namespace Clreninpi12ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> clrEnInpi13{}; 
        namespace Clreninpi13ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clrEnInpi14{}; 
        namespace Clreninpi14ValC{
        }
        ///1 = Input interrupt clear mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> clrEnInpi15{}; 
        namespace Clreninpi15ValC{
        }
    }
    namespace NonesetEn3{    ///<Input bit match interrupt set mask
        using Addr = Register::Address<0x40101f64,0xffff0000,0,unsigned>;
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setEnInpi0{}; 
        namespace Seteninpi0ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> setEnInpi1{}; 
        namespace Seteninpi1ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> setEnInpi2{}; 
        namespace Seteninpi2ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> setEnInpi3{}; 
        namespace Seteninpi3ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> setEnInpi4{}; 
        namespace Seteninpi4ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> setEnInpi5{}; 
        namespace Seteninpi5ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> setEnInpi6{}; 
        namespace Seteninpi6ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> setEnInpi7{}; 
        namespace Seteninpi7ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> setEnInpi8{}; 
        namespace Seteninpi8ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> setEnInpi9{}; 
        namespace Seteninpi9ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> setEnInpi10{}; 
        namespace Seteninpi10ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> setEnInpi11{}; 
        namespace Seteninpi11ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> setEnInpi12{}; 
        namespace Seteninpi12ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> setEnInpi13{}; 
        namespace Seteninpi13ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> setEnInpi14{}; 
        namespace Seteninpi14ValC{
        }
        ///1 = Input interrupt set mask of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> setEnInpi15{}; 
        namespace Seteninpi15ValC{
        }
    }
    namespace Noneenable3{    ///<Input bit match interrupt enable
        using Addr = Register::Address<0x40101f68,0xffff0000,0,unsigned>;
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable3Inpi0{}; 
        namespace Enable3inpi0ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> enable3Inpi1{}; 
        namespace Enable3inpi1ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> enable3Inpi2{}; 
        namespace Enable3inpi2ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> enable3Inpi3{}; 
        namespace Enable3inpi3ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> enable3Inpi4{}; 
        namespace Enable3inpi4ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> enable3Inpi5{}; 
        namespace Enable3inpi5ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> enable3Inpi6{}; 
        namespace Enable3inpi6ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> enable3Inpi7{}; 
        namespace Enable3inpi7ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> enable3Inpi8{}; 
        namespace Enable3inpi8ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> enable3Inpi9{}; 
        namespace Enable3inpi9ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> enable3Inpi10{}; 
        namespace Enable3inpi10ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> enable3Inpi11{}; 
        namespace Enable3inpi11ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> enable3Inpi12{}; 
        namespace Enable3inpi12ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enable3Inpi13{}; 
        namespace Enable3inpi13ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> enable3Inpi14{}; 
        namespace Enable3inpi14ValC{
        }
        ///Input interrupt enable of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> enable3Inpi15{}; 
        namespace Enable3inpi15ValC{
        }
    }
    namespace Nonestatus3{    ///<Input bit match interrupt status
        using Addr = Register::Address<0x40101f6c,0xffff0000,0,unsigned>;
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> statusInpi0{}; 
        namespace Statusinpi0ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> statusInpi1{}; 
        namespace Statusinpi1ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> statusInpi2{}; 
        namespace Statusinpi2ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> statusInpi3{}; 
        namespace Statusinpi3ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> statusInpi4{}; 
        namespace Statusinpi4ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> statusInpi5{}; 
        namespace Statusinpi5ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> statusInpi6{}; 
        namespace Statusinpi6ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> statusInpi7{}; 
        namespace Statusinpi7ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> statusInpi8{}; 
        namespace Statusinpi8ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> statusInpi9{}; 
        namespace Statusinpi9ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> statusInpi10{}; 
        namespace Statusinpi10ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> statusInpi11{}; 
        namespace Statusinpi11ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> statusInpi12{}; 
        namespace Statusinpi12ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> statusInpi13{}; 
        namespace Statusinpi13ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> statusInpi14{}; 
        namespace Statusinpi14ValC{
        }
        ///Input interrupt status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> statusInpi15{}; 
        namespace Statusinpi15ValC{
        }
    }
    namespace NonectrStatus3{    ///<Input bit match interrupt clear status
        using Addr = Register::Address<0x40101f70,0xffff0000,0,unsigned>;
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusInpi0{}; 
        namespace Ctrstatusinpi0ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusInpi1{}; 
        namespace Ctrstatusinpi1ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusInpi2{}; 
        namespace Ctrstatusinpi2ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusInpi3{}; 
        namespace Ctrstatusinpi3ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusInpi4{}; 
        namespace Ctrstatusinpi4ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusInpi5{}; 
        namespace Ctrstatusinpi5ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusInpi6{}; 
        namespace Ctrstatusinpi6ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusInpi7{}; 
        namespace Ctrstatusinpi7ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusInpi8{}; 
        namespace Ctrstatusinpi8ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusInpi9{}; 
        namespace Ctrstatusinpi9ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusInpi10{}; 
        namespace Ctrstatusinpi10ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusInpi11{}; 
        namespace Ctrstatusinpi11ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusInpi12{}; 
        namespace Ctrstatusinpi12ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusInpi13{}; 
        namespace Ctrstatusinpi13ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusInpi14{}; 
        namespace Ctrstatusinpi14ValC{
        }
        ///Input interrupt clear status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusInpi15{}; 
        namespace Ctrstatusinpi15ValC{
        }
    }
    namespace NonesetStatus3{    ///<Shift clock interrupt set status
        using Addr = Register::Address<0x40101f74,0xffff0000,0,unsigned>;
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ctrStatusInpi0{}; 
        namespace Ctrstatusinpi0ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctrStatusInpi1{}; 
        namespace Ctrstatusinpi1ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ctrStatusInpi2{}; 
        namespace Ctrstatusinpi2ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ctrStatusInpi3{}; 
        namespace Ctrstatusinpi3ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ctrStatusInpi4{}; 
        namespace Ctrstatusinpi4ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ctrStatusInpi5{}; 
        namespace Ctrstatusinpi5ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ctrStatusInpi6{}; 
        namespace Ctrstatusinpi6ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ctrStatusInpi7{}; 
        namespace Ctrstatusinpi7ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ctrStatusInpi8{}; 
        namespace Ctrstatusinpi8ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ctrStatusInpi9{}; 
        namespace Ctrstatusinpi9ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ctrStatusInpi10{}; 
        namespace Ctrstatusinpi10ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ctrStatusInpi11{}; 
        namespace Ctrstatusinpi11ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ctrStatusInpi12{}; 
        namespace Ctrstatusinpi12ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ctrStatusInpi13{}; 
        namespace Ctrstatusinpi13ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ctrStatusInpi14{}; 
        namespace Ctrstatusinpi14ValC{
        }
        ///Shift interrupt set status of slice n.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctrStatusInpi15{}; 
        namespace Ctrstatusinpi15ValC{
        }
    }
}
