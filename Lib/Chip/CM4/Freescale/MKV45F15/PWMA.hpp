#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace PWMA_sm0cnt{
        using Addr = Register::Address<0x40033000,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace PWMA_sm1cnt{
        using Addr = Register::Address<0x40033060,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace PWMA_sm2cnt{
        using Addr = Register::Address<0x400330c0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace PWMA_sm3cnt{
        using Addr = Register::Address<0x40033120,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CNT; 
    }
    namespace PWMA_sm0init{
        using Addr = Register::Address<0x40033002,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INIT; 
    }
    namespace PWMA_sm1init{
        using Addr = Register::Address<0x40033062,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INIT; 
    }
    namespace PWMA_sm2init{
        using Addr = Register::Address<0x400330c2,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INIT; 
    }
    namespace PWMA_sm3init{
        using Addr = Register::Address<0x40033122,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> INIT; 
    }
    namespace PWMA_sm0ctrl2{
        using Addr = Register::Address<0x40033004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CLK_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RELOAD_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> FORCE_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FORCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> INIT_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PWMX_INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PWM45_INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PWM23_INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> INDEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> WAITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DBGEN; 
    }
    namespace PWMA_sm1ctrl2{
        using Addr = Register::Address<0x40033064,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CLK_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RELOAD_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> FORCE_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FORCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> INIT_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PWMX_INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PWM45_INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PWM23_INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> INDEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> WAITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DBGEN; 
    }
    namespace PWMA_sm2ctrl2{
        using Addr = Register::Address<0x400330c4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CLK_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RELOAD_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> FORCE_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FORCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> INIT_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PWMX_INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PWM45_INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PWM23_INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> INDEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> WAITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DBGEN; 
    }
    namespace PWMA_sm3ctrl2{
        using Addr = Register::Address<0x40033124,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CLK_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RELOAD_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> FORCE_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FORCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FRCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> INIT_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PWMX_INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PWM45_INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PWM23_INIT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> INDEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> WAITEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DBGEN; 
    }
    namespace PWMA_sm0ctrl{
        using Addr = Register::Address<0x40033006,0xffff0088>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBLX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LDMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PRSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> LDFQ; 
    }
    namespace PWMA_sm1ctrl{
        using Addr = Register::Address<0x40033066,0xffff0088>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBLX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LDMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PRSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> LDFQ; 
    }
    namespace PWMA_sm2ctrl{
        using Addr = Register::Address<0x400330c6,0xffff0088>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBLX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LDMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PRSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> LDFQ; 
    }
    namespace PWMA_sm3ctrl{
        using Addr = Register::Address<0x40033126,0xffff0088>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DBLX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> LDMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> PRSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> HALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> LDFQ; 
    }
    namespace PWMA_sm0val0{
        using Addr = Register::Address<0x4003300a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL0; 
    }
    namespace PWMA_sm1val0{
        using Addr = Register::Address<0x4003306a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL0; 
    }
    namespace PWMA_sm2val0{
        using Addr = Register::Address<0x400330ca,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL0; 
    }
    namespace PWMA_sm3val0{
        using Addr = Register::Address<0x4003312a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL0; 
    }
    namespace PWMA_sm0fracval1{
        using Addr = Register::Address<0x4003300c,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL1; 
    }
    namespace PWMA_sm1fracval1{
        using Addr = Register::Address<0x4003306c,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL1; 
    }
    namespace PWMA_sm2fracval1{
        using Addr = Register::Address<0x400330cc,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL1; 
    }
    namespace PWMA_sm3fracval1{
        using Addr = Register::Address<0x4003312c,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL1; 
    }
    namespace PWMA_sm0val1{
        using Addr = Register::Address<0x4003300e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL1; 
    }
    namespace PWMA_sm1val1{
        using Addr = Register::Address<0x4003306e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL1; 
    }
    namespace PWMA_sm2val1{
        using Addr = Register::Address<0x400330ce,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL1; 
    }
    namespace PWMA_sm3val1{
        using Addr = Register::Address<0x4003312e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL1; 
    }
    namespace PWMA_sm0fracval2{
        using Addr = Register::Address<0x40033010,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL2; 
    }
    namespace PWMA_sm1fracval2{
        using Addr = Register::Address<0x40033070,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL2; 
    }
    namespace PWMA_sm2fracval2{
        using Addr = Register::Address<0x400330d0,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL2; 
    }
    namespace PWMA_sm3fracval2{
        using Addr = Register::Address<0x40033130,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL2; 
    }
    namespace PWMA_sm0val2{
        using Addr = Register::Address<0x40033012,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL2; 
    }
    namespace PWMA_sm1val2{
        using Addr = Register::Address<0x40033072,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL2; 
    }
    namespace PWMA_sm2val2{
        using Addr = Register::Address<0x400330d2,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL2; 
    }
    namespace PWMA_sm3val2{
        using Addr = Register::Address<0x40033132,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL2; 
    }
    namespace PWMA_sm0fracval3{
        using Addr = Register::Address<0x40033014,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL3; 
    }
    namespace PWMA_sm1fracval3{
        using Addr = Register::Address<0x40033074,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL3; 
    }
    namespace PWMA_sm2fracval3{
        using Addr = Register::Address<0x400330d4,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL3; 
    }
    namespace PWMA_sm3fracval3{
        using Addr = Register::Address<0x40033134,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL3; 
    }
    namespace PWMA_sm0val3{
        using Addr = Register::Address<0x40033016,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL3; 
    }
    namespace PWMA_sm1val3{
        using Addr = Register::Address<0x40033076,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL3; 
    }
    namespace PWMA_sm2val3{
        using Addr = Register::Address<0x400330d6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL3; 
    }
    namespace PWMA_sm3val3{
        using Addr = Register::Address<0x40033136,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL3; 
    }
    namespace PWMA_sm0fracval4{
        using Addr = Register::Address<0x40033018,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL4; 
    }
    namespace PWMA_sm1fracval4{
        using Addr = Register::Address<0x40033078,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL4; 
    }
    namespace PWMA_sm2fracval4{
        using Addr = Register::Address<0x400330d8,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL4; 
    }
    namespace PWMA_sm3fracval4{
        using Addr = Register::Address<0x40033138,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL4; 
    }
    namespace PWMA_sm0val4{
        using Addr = Register::Address<0x4003301a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL4; 
    }
    namespace PWMA_sm1val4{
        using Addr = Register::Address<0x4003307a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL4; 
    }
    namespace PWMA_sm2val4{
        using Addr = Register::Address<0x400330da,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL4; 
    }
    namespace PWMA_sm3val4{
        using Addr = Register::Address<0x4003313a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL4; 
    }
    namespace PWMA_sm0fracval5{
        using Addr = Register::Address<0x4003301c,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL5; 
    }
    namespace PWMA_sm1fracval5{
        using Addr = Register::Address<0x4003307c,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL5; 
    }
    namespace PWMA_sm2fracval5{
        using Addr = Register::Address<0x400330dc,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL5; 
    }
    namespace PWMA_sm3fracval5{
        using Addr = Register::Address<0x4003313c,0xffff07ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> FRACVAL5; 
    }
    namespace PWMA_sm0val5{
        using Addr = Register::Address<0x4003301e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL5; 
    }
    namespace PWMA_sm1val5{
        using Addr = Register::Address<0x4003307e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL5; 
    }
    namespace PWMA_sm2val5{
        using Addr = Register::Address<0x400330de,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL5; 
    }
    namespace PWMA_sm3val5{
        using Addr = Register::Address<0x4003313e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> VAL5; 
    }
    namespace PWMA_sm0frctrl{
        using Addr = Register::Address<0x40033020,0xffff7ee9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FRAC1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FRAC23_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FRAC45_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FRAC_PU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TEST; 
    }
    namespace PWMA_sm1frctrl{
        using Addr = Register::Address<0x40033080,0xffff7ee9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FRAC1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FRAC23_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FRAC45_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FRAC_PU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TEST; 
    }
    namespace PWMA_sm2frctrl{
        using Addr = Register::Address<0x400330e0,0xffff7ee9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FRAC1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FRAC23_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FRAC45_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FRAC_PU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TEST; 
    }
    namespace PWMA_sm3frctrl{
        using Addr = Register::Address<0x40033140,0xffff7ee9>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FRAC1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FRAC23_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FRAC45_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FRAC_PU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> TEST; 
    }
    namespace PWMA_sm0octrl{
        using Addr = Register::Address<0x40033022,0xffff18c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PWMXFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PWMBFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PWMAFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POLX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> POLB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POLA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PWMX_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PWMB_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PWMA_IN; 
    }
    namespace PWMA_sm1octrl{
        using Addr = Register::Address<0x40033082,0xffff18c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PWMXFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PWMBFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PWMAFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POLX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> POLB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POLA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PWMX_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PWMB_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PWMA_IN; 
    }
    namespace PWMA_sm2octrl{
        using Addr = Register::Address<0x400330e2,0xffff18c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PWMXFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PWMBFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PWMAFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POLX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> POLB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POLA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PWMX_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PWMB_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PWMA_IN; 
    }
    namespace PWMA_sm3octrl{
        using Addr = Register::Address<0x40033142,0xffff18c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PWMXFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> PWMBFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> PWMAFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> POLX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> POLB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> POLA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PWMX_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PWMB_IN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PWMA_IN; 
    }
    namespace PWMA_sm0sts{
        using Addr = Register::Address<0x40033024,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CMPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CFX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CFX1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CFB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CFB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CFA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CFA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RUF; 
    }
    namespace PWMA_sm1sts{
        using Addr = Register::Address<0x40033084,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CMPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CFX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CFX1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CFB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CFB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CFA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CFA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RUF; 
    }
    namespace PWMA_sm2sts{
        using Addr = Register::Address<0x400330e4,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CMPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CFX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CFX1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CFB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CFB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CFA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CFA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RUF; 
    }
    namespace PWMA_sm3sts{
        using Addr = Register::Address<0x40033144,0xffff8000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CMPF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CFX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CFX1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CFB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CFB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CFA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CFA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> RUF; 
    }
    namespace PWMA_sm0inten{
        using Addr = Register::Address<0x40033026,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CMPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CX0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CX1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CB0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CB1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CA0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CA1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REIE; 
    }
    namespace PWMA_sm1inten{
        using Addr = Register::Address<0x40033086,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CMPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CX0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CX1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CB0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CB1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CA0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CA1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REIE; 
    }
    namespace PWMA_sm2inten{
        using Addr = Register::Address<0x400330e6,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CMPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CX0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CX1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CB0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CB1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CA0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CA1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REIE; 
    }
    namespace PWMA_sm3inten{
        using Addr = Register::Address<0x40033146,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> CMPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CX0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CX1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CB0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CB1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CA0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CA1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> RIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> REIE; 
    }
    namespace PWMA_sm0dmaen{
        using Addr = Register::Address<0x40033028,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CX0DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CX1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CB0DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CB1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CA0DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CA1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CAPTDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FAND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> VALDE; 
    }
    namespace PWMA_sm1dmaen{
        using Addr = Register::Address<0x40033088,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CX0DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CX1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CB0DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CB1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CA0DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CA1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CAPTDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FAND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> VALDE; 
    }
    namespace PWMA_sm2dmaen{
        using Addr = Register::Address<0x400330e8,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CX0DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CX1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CB0DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CB1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CA0DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CA1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CAPTDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FAND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> VALDE; 
    }
    namespace PWMA_sm3dmaen{
        using Addr = Register::Address<0x40033148,0xfffffc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CX0DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CX1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CB0DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CB1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CA0DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CA1DE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> CAPTDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> FAND; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> VALDE; 
    }
    namespace PWMA_sm0tctrl{
        using Addr = Register::Address<0x4003302a,0xffff3fc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> OUT_TRIG_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PWBOT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PWAOT0; 
    }
    namespace PWMA_sm1tctrl{
        using Addr = Register::Address<0x4003308a,0xffff3fc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> OUT_TRIG_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PWBOT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PWAOT0; 
    }
    namespace PWMA_sm2tctrl{
        using Addr = Register::Address<0x400330ea,0xffff3fc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> OUT_TRIG_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PWBOT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PWAOT0; 
    }
    namespace PWMA_sm3tctrl{
        using Addr = Register::Address<0x4003314a,0xffff3fc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> OUT_TRIG_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PWBOT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PWAOT0; 
    }
    namespace PWMA_sm0dismap0{
        using Addr = Register::Address<0x4003302c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DIS0A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DIS0B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DIS0X; 
    }
    namespace PWMA_sm1dismap0{
        using Addr = Register::Address<0x4003308c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DIS0A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DIS0B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DIS0X; 
    }
    namespace PWMA_sm2dismap0{
        using Addr = Register::Address<0x400330ec,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DIS0A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DIS0B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DIS0X; 
    }
    namespace PWMA_sm3dismap0{
        using Addr = Register::Address<0x4003314c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> DIS0A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> DIS0B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> DIS0X; 
    }
    namespace PWMA_sm0dtcnt0{
        using Addr = Register::Address<0x40033030,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> DTCNT0; 
    }
    namespace PWMA_sm1dtcnt0{
        using Addr = Register::Address<0x40033090,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> DTCNT0; 
    }
    namespace PWMA_sm2dtcnt0{
        using Addr = Register::Address<0x400330f0,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> DTCNT0; 
    }
    namespace PWMA_sm3dtcnt0{
        using Addr = Register::Address<0x40033150,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> DTCNT0; 
    }
    namespace PWMA_sm0dtcnt1{
        using Addr = Register::Address<0x40033032,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> DTCNT1; 
    }
    namespace PWMA_sm1dtcnt1{
        using Addr = Register::Address<0x40033092,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> DTCNT1; 
    }
    namespace PWMA_sm2dtcnt1{
        using Addr = Register::Address<0x400330f2,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> DTCNT1; 
    }
    namespace PWMA_sm3dtcnt1{
        using Addr = Register::Address<0x40033152,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0)> DTCNT1; 
    }
    namespace PWMA_sm0captctrla{
        using Addr = Register::Address<0x40033034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ARMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ONESHOTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EDGA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INP_SELA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EDGCNTA_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CFAWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CA0CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CA1CNT; 
    }
    namespace PWMA_sm1captctrla{
        using Addr = Register::Address<0x40033094,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ARMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ONESHOTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EDGA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INP_SELA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EDGCNTA_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CFAWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CA0CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CA1CNT; 
    }
    namespace PWMA_sm2captctrla{
        using Addr = Register::Address<0x400330f4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ARMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ONESHOTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EDGA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INP_SELA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EDGCNTA_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CFAWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CA0CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CA1CNT; 
    }
    namespace PWMA_sm3captctrla{
        using Addr = Register::Address<0x40033154,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ARMA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ONESHOTA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EDGA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INP_SELA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EDGCNTA_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CFAWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CA0CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CA1CNT; 
    }
    namespace PWMA_sm0captcompa{
        using Addr = Register::Address<0x40033036,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EDGCMPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EDGCNTA; 
    }
    namespace PWMA_sm1captcompa{
        using Addr = Register::Address<0x40033096,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EDGCMPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EDGCNTA; 
    }
    namespace PWMA_sm2captcompa{
        using Addr = Register::Address<0x400330f6,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EDGCMPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EDGCNTA; 
    }
    namespace PWMA_sm3captcompa{
        using Addr = Register::Address<0x40033156,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EDGCMPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EDGCNTA; 
    }
    namespace PWMA_sm0captctrlb{
        using Addr = Register::Address<0x40033038,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ARMB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ONESHOTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EDGB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INP_SELB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EDGCNTB_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CFBWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CB0CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CB1CNT; 
    }
    namespace PWMA_sm1captctrlb{
        using Addr = Register::Address<0x40033098,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ARMB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ONESHOTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EDGB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INP_SELB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EDGCNTB_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CFBWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CB0CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CB1CNT; 
    }
    namespace PWMA_sm2captctrlb{
        using Addr = Register::Address<0x400330f8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ARMB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ONESHOTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EDGB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INP_SELB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EDGCNTB_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CFBWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CB0CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CB1CNT; 
    }
    namespace PWMA_sm3captctrlb{
        using Addr = Register::Address<0x40033158,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ARMB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ONESHOTB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGB0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EDGB1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INP_SELB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EDGCNTB_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CFBWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CB0CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CB1CNT; 
    }
    namespace PWMA_sm0captcompb{
        using Addr = Register::Address<0x4003303a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EDGCMPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EDGCNTB; 
    }
    namespace PWMA_sm1captcompb{
        using Addr = Register::Address<0x4003309a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EDGCMPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EDGCNTB; 
    }
    namespace PWMA_sm2captcompb{
        using Addr = Register::Address<0x400330fa,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EDGCMPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EDGCNTB; 
    }
    namespace PWMA_sm3captcompb{
        using Addr = Register::Address<0x4003315a,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EDGCMPB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EDGCNTB; 
    }
    namespace PWMA_sm0captctrlx{
        using Addr = Register::Address<0x4003303c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ARMX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ONESHOTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EDGX1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INP_SELX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EDGCNTX_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CFXWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CX0CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CX1CNT; 
    }
    namespace PWMA_sm1captctrlx{
        using Addr = Register::Address<0x4003309c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ARMX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ONESHOTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EDGX1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INP_SELX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EDGCNTX_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CFXWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CX0CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CX1CNT; 
    }
    namespace PWMA_sm2captctrlx{
        using Addr = Register::Address<0x400330fc,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ARMX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ONESHOTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EDGX1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INP_SELX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EDGCNTX_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CFXWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CX0CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CX1CNT; 
    }
    namespace PWMA_sm3captctrlx{
        using Addr = Register::Address<0x4003315c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ARMX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ONESHOTX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> EDGX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> EDGX1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> INP_SELX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EDGCNTX_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CFXWM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10)> CX0CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,13)> CX1CNT; 
    }
    namespace PWMA_sm0captcompx{
        using Addr = Register::Address<0x4003303e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EDGCMPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EDGCNTX; 
    }
    namespace PWMA_sm1captcompx{
        using Addr = Register::Address<0x4003309e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EDGCMPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EDGCNTX; 
    }
    namespace PWMA_sm2captcompx{
        using Addr = Register::Address<0x400330fe,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EDGCMPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EDGCNTX; 
    }
    namespace PWMA_sm3captcompx{
        using Addr = Register::Address<0x4003315e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> EDGCMPX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> EDGCNTX; 
    }
    namespace PWMA_sm0cval0{
        using Addr = Register::Address<0x40033040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL0; 
    }
    namespace PWMA_sm1cval0{
        using Addr = Register::Address<0x400330a0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL0; 
    }
    namespace PWMA_sm2cval0{
        using Addr = Register::Address<0x40033100,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL0; 
    }
    namespace PWMA_sm3cval0{
        using Addr = Register::Address<0x40033160,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL0; 
    }
    namespace PWMA_sm0cval0cyc{
        using Addr = Register::Address<0x40033042,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL0CYC; 
    }
    namespace PWMA_sm1cval0cyc{
        using Addr = Register::Address<0x400330a2,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL0CYC; 
    }
    namespace PWMA_sm2cval0cyc{
        using Addr = Register::Address<0x40033102,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL0CYC; 
    }
    namespace PWMA_sm3cval0cyc{
        using Addr = Register::Address<0x40033162,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL0CYC; 
    }
    namespace PWMA_sm0cval1{
        using Addr = Register::Address<0x40033044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL1; 
    }
    namespace PWMA_sm1cval1{
        using Addr = Register::Address<0x400330a4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL1; 
    }
    namespace PWMA_sm2cval1{
        using Addr = Register::Address<0x40033104,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL1; 
    }
    namespace PWMA_sm3cval1{
        using Addr = Register::Address<0x40033164,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL1; 
    }
    namespace PWMA_sm0cval1cyc{
        using Addr = Register::Address<0x40033046,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL1CYC; 
    }
    namespace PWMA_sm1cval1cyc{
        using Addr = Register::Address<0x400330a6,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL1CYC; 
    }
    namespace PWMA_sm2cval1cyc{
        using Addr = Register::Address<0x40033106,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL1CYC; 
    }
    namespace PWMA_sm3cval1cyc{
        using Addr = Register::Address<0x40033166,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL1CYC; 
    }
    namespace PWMA_sm0cval2{
        using Addr = Register::Address<0x40033048,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL2; 
    }
    namespace PWMA_sm1cval2{
        using Addr = Register::Address<0x400330a8,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL2; 
    }
    namespace PWMA_sm2cval2{
        using Addr = Register::Address<0x40033108,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL2; 
    }
    namespace PWMA_sm3cval2{
        using Addr = Register::Address<0x40033168,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL2; 
    }
    namespace PWMA_sm0cval2cyc{
        using Addr = Register::Address<0x4003304a,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL2CYC; 
    }
    namespace PWMA_sm1cval2cyc{
        using Addr = Register::Address<0x400330aa,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL2CYC; 
    }
    namespace PWMA_sm2cval2cyc{
        using Addr = Register::Address<0x4003310a,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL2CYC; 
    }
    namespace PWMA_sm3cval2cyc{
        using Addr = Register::Address<0x4003316a,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL2CYC; 
    }
    namespace PWMA_sm0cval3{
        using Addr = Register::Address<0x4003304c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL3; 
    }
    namespace PWMA_sm1cval3{
        using Addr = Register::Address<0x400330ac,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL3; 
    }
    namespace PWMA_sm2cval3{
        using Addr = Register::Address<0x4003310c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL3; 
    }
    namespace PWMA_sm3cval3{
        using Addr = Register::Address<0x4003316c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL3; 
    }
    namespace PWMA_sm0cval3cyc{
        using Addr = Register::Address<0x4003304e,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL3CYC; 
    }
    namespace PWMA_sm1cval3cyc{
        using Addr = Register::Address<0x400330ae,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL3CYC; 
    }
    namespace PWMA_sm2cval3cyc{
        using Addr = Register::Address<0x4003310e,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL3CYC; 
    }
    namespace PWMA_sm3cval3cyc{
        using Addr = Register::Address<0x4003316e,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL3CYC; 
    }
    namespace PWMA_sm0cval4{
        using Addr = Register::Address<0x40033050,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL4; 
    }
    namespace PWMA_sm1cval4{
        using Addr = Register::Address<0x400330b0,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL4; 
    }
    namespace PWMA_sm2cval4{
        using Addr = Register::Address<0x40033110,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL4; 
    }
    namespace PWMA_sm3cval4{
        using Addr = Register::Address<0x40033170,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL4; 
    }
    namespace PWMA_sm0cval4cyc{
        using Addr = Register::Address<0x40033052,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL4CYC; 
    }
    namespace PWMA_sm1cval4cyc{
        using Addr = Register::Address<0x400330b2,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL4CYC; 
    }
    namespace PWMA_sm2cval4cyc{
        using Addr = Register::Address<0x40033112,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL4CYC; 
    }
    namespace PWMA_sm3cval4cyc{
        using Addr = Register::Address<0x40033172,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL4CYC; 
    }
    namespace PWMA_sm0cval5{
        using Addr = Register::Address<0x40033054,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL5; 
    }
    namespace PWMA_sm1cval5{
        using Addr = Register::Address<0x400330b4,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL5; 
    }
    namespace PWMA_sm2cval5{
        using Addr = Register::Address<0x40033114,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL5; 
    }
    namespace PWMA_sm3cval5{
        using Addr = Register::Address<0x40033174,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CAPTVAL5; 
    }
    namespace PWMA_sm0cval5cyc{
        using Addr = Register::Address<0x40033056,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL5CYC; 
    }
    namespace PWMA_sm1cval5cyc{
        using Addr = Register::Address<0x400330b6,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL5CYC; 
    }
    namespace PWMA_sm2cval5cyc{
        using Addr = Register::Address<0x40033116,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL5CYC; 
    }
    namespace PWMA_sm3cval5cyc{
        using Addr = Register::Address<0x40033176,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> CVAL5CYC; 
    }
    namespace PWMA_outen{
        using Addr = Register::Address<0x40033180,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> PWMX_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PWMB_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> PWMA_EN; 
    }
    namespace PWMA_mask{
        using Addr = Register::Address<0x40033182,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> MASKX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> MASKB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> MASKA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> UPDATE_MASK; 
    }
    namespace PWMA_swcout{
        using Addr = Register::Address<0x40033184,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SM0OUT45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SM0OUT23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SM1OUT45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SM1OUT23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SM2OUT45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> SM2OUT23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SM3OUT45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SM3OUT23; 
    }
    namespace PWMA_dtsrcsel{
        using Addr = Register::Address<0x40033186,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SM0SEL45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> SM0SEL23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> SM1SEL45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> SM1SEL23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> SM2SEL45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> SM2SEL23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> SM3SEL45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> SM3SEL23; 
    }
    namespace PWMA_mctrl{
        using Addr = Register::Address<0x40033188,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> LDOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> CLDOK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> RUN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> IPOL; 
    }
    namespace PWMA_mctrl2{
        using Addr = Register::Address<0x4003318a,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MONPLL; 
    }
    namespace PWMA_fctrl{
        using Addr = Register::Address<0x4003318c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> FSAFE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> FAUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> FLVL; 
    }
    namespace PWMA_fsts{
        using Addr = Register::Address<0x4003318e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> FFLAG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> FFULL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> FFPIN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> FHALF; 
    }
    namespace PWMA_ffilt{
        using Addr = Register::Address<0x40033190,0xffff7800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> FILT_PER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> FILT_CNT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GSTR; 
    }
    namespace PWMA_ftst{
        using Addr = Register::Address<0x40033192,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FTEST; 
    }
    namespace PWMA_fctrl2{
        using Addr = Register::Address<0x40033194,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> NOCOMB; 
    }
}
