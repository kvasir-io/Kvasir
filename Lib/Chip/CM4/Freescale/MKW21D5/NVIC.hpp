#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonenviciser0{
        using Addr = Register::Address<0xe000e100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETENA; 
    }
    namespace Nonenviciser1{
        using Addr = Register::Address<0xe000e104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETENA; 
    }
    namespace Nonenviciser2{
        using Addr = Register::Address<0xe000e108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETENA; 
    }
    namespace Nonenviciser3{
        using Addr = Register::Address<0xe000e10c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETENA; 
    }
    namespace Nonenvicicer0{
        using Addr = Register::Address<0xe000e180,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRENA; 
    }
    namespace Nonenvicicer1{
        using Addr = Register::Address<0xe000e184,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRENA; 
    }
    namespace Nonenvicicer2{
        using Addr = Register::Address<0xe000e188,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRENA; 
    }
    namespace Nonenvicicer3{
        using Addr = Register::Address<0xe000e18c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRENA; 
    }
    namespace Nonenvicispr0{
        using Addr = Register::Address<0xe000e200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETPEND; 
    }
    namespace Nonenvicispr1{
        using Addr = Register::Address<0xe000e204,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETPEND; 
    }
    namespace Nonenvicispr2{
        using Addr = Register::Address<0xe000e208,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETPEND; 
    }
    namespace Nonenvicispr3{
        using Addr = Register::Address<0xe000e20c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SETPEND; 
    }
    namespace Nonenvicicpr0{
        using Addr = Register::Address<0xe000e280,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRPEND; 
    }
    namespace Nonenvicicpr1{
        using Addr = Register::Address<0xe000e284,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRPEND; 
    }
    namespace Nonenvicicpr2{
        using Addr = Register::Address<0xe000e288,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRPEND; 
    }
    namespace Nonenvicicpr3{
        using Addr = Register::Address<0xe000e28c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CLRPEND; 
    }
    namespace Nonenviciabr0{
        using Addr = Register::Address<0xe000e300,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ACTIVE; 
    }
    namespace Nonenviciabr1{
        using Addr = Register::Address<0xe000e304,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ACTIVE; 
    }
    namespace Nonenviciabr2{
        using Addr = Register::Address<0xe000e308,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ACTIVE; 
    }
    namespace Nonenviciabr3{
        using Addr = Register::Address<0xe000e30c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ACTIVE; 
    }
    namespace Nonenvicip0{
        using Addr = Register::Address<0xe000e400,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI0; 
    }
    namespace Nonenvicip1{
        using Addr = Register::Address<0xe000e401,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI1; 
    }
    namespace Nonenvicip2{
        using Addr = Register::Address<0xe000e402,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI2; 
    }
    namespace Nonenvicip3{
        using Addr = Register::Address<0xe000e403,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI3; 
    }
    namespace Nonenvicip4{
        using Addr = Register::Address<0xe000e404,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI4; 
    }
    namespace Nonenvicip5{
        using Addr = Register::Address<0xe000e405,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI5; 
    }
    namespace Nonenvicip6{
        using Addr = Register::Address<0xe000e406,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI6; 
    }
    namespace Nonenvicip7{
        using Addr = Register::Address<0xe000e407,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI7; 
    }
    namespace Nonenvicip8{
        using Addr = Register::Address<0xe000e408,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI8; 
    }
    namespace Nonenvicip9{
        using Addr = Register::Address<0xe000e409,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI9; 
    }
    namespace Nonenvicip10{
        using Addr = Register::Address<0xe000e40a,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI10; 
    }
    namespace Nonenvicip11{
        using Addr = Register::Address<0xe000e40b,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI11; 
    }
    namespace Nonenvicip12{
        using Addr = Register::Address<0xe000e40c,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI12; 
    }
    namespace Nonenvicip13{
        using Addr = Register::Address<0xe000e40d,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI13; 
    }
    namespace Nonenvicip14{
        using Addr = Register::Address<0xe000e40e,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI14; 
    }
    namespace Nonenvicip15{
        using Addr = Register::Address<0xe000e40f,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI15; 
    }
    namespace Nonenvicip16{
        using Addr = Register::Address<0xe000e410,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI16; 
    }
    namespace Nonenvicip17{
        using Addr = Register::Address<0xe000e411,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI17; 
    }
    namespace Nonenvicip18{
        using Addr = Register::Address<0xe000e412,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI18; 
    }
    namespace Nonenvicip19{
        using Addr = Register::Address<0xe000e413,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI19; 
    }
    namespace Nonenvicip20{
        using Addr = Register::Address<0xe000e414,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI20; 
    }
    namespace Nonenvicip21{
        using Addr = Register::Address<0xe000e415,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI21; 
    }
    namespace Nonenvicip22{
        using Addr = Register::Address<0xe000e416,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI22; 
    }
    namespace Nonenvicip23{
        using Addr = Register::Address<0xe000e417,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI23; 
    }
    namespace Nonenvicip24{
        using Addr = Register::Address<0xe000e418,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI24; 
    }
    namespace Nonenvicip25{
        using Addr = Register::Address<0xe000e419,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI25; 
    }
    namespace Nonenvicip26{
        using Addr = Register::Address<0xe000e41a,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI26; 
    }
    namespace Nonenvicip27{
        using Addr = Register::Address<0xe000e41b,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI27; 
    }
    namespace Nonenvicip28{
        using Addr = Register::Address<0xe000e41c,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI28; 
    }
    namespace Nonenvicip29{
        using Addr = Register::Address<0xe000e41d,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI29; 
    }
    namespace Nonenvicip30{
        using Addr = Register::Address<0xe000e41e,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI30; 
    }
    namespace Nonenvicip31{
        using Addr = Register::Address<0xe000e41f,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI31; 
    }
    namespace Nonenvicip32{
        using Addr = Register::Address<0xe000e420,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI32; 
    }
    namespace Nonenvicip33{
        using Addr = Register::Address<0xe000e421,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI33; 
    }
    namespace Nonenvicip34{
        using Addr = Register::Address<0xe000e422,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI34; 
    }
    namespace Nonenvicip35{
        using Addr = Register::Address<0xe000e423,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI35; 
    }
    namespace Nonenvicip36{
        using Addr = Register::Address<0xe000e424,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI36; 
    }
    namespace Nonenvicip37{
        using Addr = Register::Address<0xe000e425,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI37; 
    }
    namespace Nonenvicip38{
        using Addr = Register::Address<0xe000e426,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI38; 
    }
    namespace Nonenvicip39{
        using Addr = Register::Address<0xe000e427,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI39; 
    }
    namespace Nonenvicip40{
        using Addr = Register::Address<0xe000e428,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI40; 
    }
    namespace Nonenvicip41{
        using Addr = Register::Address<0xe000e429,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI41; 
    }
    namespace Nonenvicip42{
        using Addr = Register::Address<0xe000e42a,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI42; 
    }
    namespace Nonenvicip43{
        using Addr = Register::Address<0xe000e42b,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI43; 
    }
    namespace Nonenvicip44{
        using Addr = Register::Address<0xe000e42c,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI44; 
    }
    namespace Nonenvicip45{
        using Addr = Register::Address<0xe000e42d,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI45; 
    }
    namespace Nonenvicip46{
        using Addr = Register::Address<0xe000e42e,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI46; 
    }
    namespace Nonenvicip47{
        using Addr = Register::Address<0xe000e42f,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI47; 
    }
    namespace Nonenvicip48{
        using Addr = Register::Address<0xe000e430,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI48; 
    }
    namespace Nonenvicip49{
        using Addr = Register::Address<0xe000e431,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI49; 
    }
    namespace Nonenvicip50{
        using Addr = Register::Address<0xe000e432,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI50; 
    }
    namespace Nonenvicip51{
        using Addr = Register::Address<0xe000e433,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI51; 
    }
    namespace Nonenvicip52{
        using Addr = Register::Address<0xe000e434,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI52; 
    }
    namespace Nonenvicip53{
        using Addr = Register::Address<0xe000e435,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI53; 
    }
    namespace Nonenvicip54{
        using Addr = Register::Address<0xe000e436,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI54; 
    }
    namespace Nonenvicip55{
        using Addr = Register::Address<0xe000e437,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI55; 
    }
    namespace Nonenvicip56{
        using Addr = Register::Address<0xe000e438,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI56; 
    }
    namespace Nonenvicip57{
        using Addr = Register::Address<0xe000e439,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI57; 
    }
    namespace Nonenvicip58{
        using Addr = Register::Address<0xe000e43a,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI58; 
    }
    namespace Nonenvicip59{
        using Addr = Register::Address<0xe000e43b,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI59; 
    }
    namespace Nonenvicip60{
        using Addr = Register::Address<0xe000e43c,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI60; 
    }
    namespace Nonenvicip61{
        using Addr = Register::Address<0xe000e43d,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI61; 
    }
    namespace Nonenvicip62{
        using Addr = Register::Address<0xe000e43e,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI62; 
    }
    namespace Nonenvicip63{
        using Addr = Register::Address<0xe000e43f,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI63; 
    }
    namespace Nonenvicip64{
        using Addr = Register::Address<0xe000e440,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI64; 
    }
    namespace Nonenvicip65{
        using Addr = Register::Address<0xe000e441,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI65; 
    }
    namespace Nonenvicip66{
        using Addr = Register::Address<0xe000e442,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI66; 
    }
    namespace Nonenvicip67{
        using Addr = Register::Address<0xe000e443,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI67; 
    }
    namespace Nonenvicip68{
        using Addr = Register::Address<0xe000e444,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI68; 
    }
    namespace Nonenvicip69{
        using Addr = Register::Address<0xe000e445,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI69; 
    }
    namespace Nonenvicip70{
        using Addr = Register::Address<0xe000e446,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI70; 
    }
    namespace Nonenvicip71{
        using Addr = Register::Address<0xe000e447,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI71; 
    }
    namespace Nonenvicip72{
        using Addr = Register::Address<0xe000e448,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI72; 
    }
    namespace Nonenvicip73{
        using Addr = Register::Address<0xe000e449,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI73; 
    }
    namespace Nonenvicip74{
        using Addr = Register::Address<0xe000e44a,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI74; 
    }
    namespace Nonenvicip75{
        using Addr = Register::Address<0xe000e44b,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI75; 
    }
    namespace Nonenvicip76{
        using Addr = Register::Address<0xe000e44c,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI76; 
    }
    namespace Nonenvicip77{
        using Addr = Register::Address<0xe000e44d,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI77; 
    }
    namespace Nonenvicip78{
        using Addr = Register::Address<0xe000e44e,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI78; 
    }
    namespace Nonenvicip79{
        using Addr = Register::Address<0xe000e44f,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI79; 
    }
    namespace Nonenvicip80{
        using Addr = Register::Address<0xe000e450,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI80; 
    }
    namespace Nonenvicip81{
        using Addr = Register::Address<0xe000e451,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI81; 
    }
    namespace Nonenvicip82{
        using Addr = Register::Address<0xe000e452,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI82; 
    }
    namespace Nonenvicip83{
        using Addr = Register::Address<0xe000e453,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI83; 
    }
    namespace Nonenvicip84{
        using Addr = Register::Address<0xe000e454,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI84; 
    }
    namespace Nonenvicip85{
        using Addr = Register::Address<0xe000e455,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI85; 
    }
    namespace Nonenvicip86{
        using Addr = Register::Address<0xe000e456,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI86; 
    }
    namespace Nonenvicip87{
        using Addr = Register::Address<0xe000e457,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI87; 
    }
    namespace Nonenvicip88{
        using Addr = Register::Address<0xe000e458,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI88; 
    }
    namespace Nonenvicip89{
        using Addr = Register::Address<0xe000e459,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI89; 
    }
    namespace Nonenvicip90{
        using Addr = Register::Address<0xe000e45a,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI90; 
    }
    namespace Nonenvicip91{
        using Addr = Register::Address<0xe000e45b,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI91; 
    }
    namespace Nonenvicip92{
        using Addr = Register::Address<0xe000e45c,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI92; 
    }
    namespace Nonenvicip93{
        using Addr = Register::Address<0xe000e45d,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI93; 
    }
    namespace Nonenvicip94{
        using Addr = Register::Address<0xe000e45e,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI94; 
    }
    namespace Nonenvicip95{
        using Addr = Register::Address<0xe000e45f,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI95; 
    }
    namespace Nonenvicip96{
        using Addr = Register::Address<0xe000e460,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI96; 
    }
    namespace Nonenvicip97{
        using Addr = Register::Address<0xe000e461,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI97; 
    }
    namespace Nonenvicip98{
        using Addr = Register::Address<0xe000e462,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI98; 
    }
    namespace Nonenvicip99{
        using Addr = Register::Address<0xe000e463,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI99; 
    }
    namespace Nonenvicip100{
        using Addr = Register::Address<0xe000e464,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI100; 
    }
    namespace Nonenvicip101{
        using Addr = Register::Address<0xe000e465,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI101; 
    }
    namespace Nonenvicip102{
        using Addr = Register::Address<0xe000e466,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI102; 
    }
    namespace Nonenvicip103{
        using Addr = Register::Address<0xe000e467,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI103; 
    }
    namespace Nonenvicip104{
        using Addr = Register::Address<0xe000e468,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI104; 
    }
    namespace Nonenvicip105{
        using Addr = Register::Address<0xe000e469,0xffffff0f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> PRI105; 
    }
    namespace Nonenvicstir{
        using Addr = Register::Address<0xe000ef00,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> INTID; 
    }
}
