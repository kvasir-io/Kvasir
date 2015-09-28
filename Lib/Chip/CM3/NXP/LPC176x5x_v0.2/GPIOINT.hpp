#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonestatus{
        using Addr = Register::Address<0x40028080,0xfffffffa>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0INT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2INT; 
    }
    namespace Nonestatr0{
        using Addr = Register::Address<0x40028084,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0_0REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P0_1REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P0_2REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P0_3REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P0_4REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P0_5REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P0_6REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P0_7REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P0_8REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P0_9REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P0_10REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P0_11REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P0_12REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P0_13REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P0_14REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P0_15REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> P0_16REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> P0_17REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> P0_18REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> P0_19REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P0_20REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> P0_21REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> P0_22REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> P0_23REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> P0_24REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> P0_25REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> P0_26REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> P0_27REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> P0_28REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> P0_29REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> P0_30REI; 
    }
    namespace Nonestatf0{
        using Addr = Register::Address<0x40028088,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0_0FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P0_1FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P0_2FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P0_3FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P0_4FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P0_5FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P0_6FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P0_7FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P0_8FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P0_9FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P0_10FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P0_11FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P0_12FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P0_13FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P0_14FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P0_15FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> P0_16FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> P0_17FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> P0_18FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> P0_19FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P0_20FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> P0_21FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> P0_22FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> P0_23FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> P0_24FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> P0_25FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> P0_26FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> P0_27FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> P0_28FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> P0_29FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> P0_30FEI; 
    }
    namespace Noneclr0{
        using Addr = Register::Address<0x4002808c,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0_0CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P0_1CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P0_2CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P0_3CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P0_4CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P0_5CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P0_6CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P0_7CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P0_8CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P0_9CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P0_10CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P0_11CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P0_12CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P0_13CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P0_14CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P0_15CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> P0_16CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> P0_17CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> P0_18CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> P0_19CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P0_20CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> P0_21CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> P0_22CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> P0_23CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> P0_24CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> P0_25CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> P0_26CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> P0_27CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> P0_28CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> P0_29CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> P0_30CI; 
    }
    namespace Noneenr0{
        using Addr = Register::Address<0x40028090,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0_0ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P0_1ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P0_2ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P0_3ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P0_4ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P0_5ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P0_6ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P0_7ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P0_8ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P0_9ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P0_10ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P0_11ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P0_12ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P0_13ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P0_14ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P0_15ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> P0_16ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> P0_17ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> P0_18ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> P0_19ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P0_20ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> P0_21ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> P0_22ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> P0_23ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> P0_24ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> P0_25ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> P0_26ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> P0_27ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> P0_28ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> P0_29ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> P0_30ER; 
    }
    namespace Noneenf0{
        using Addr = Register::Address<0x40028094,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P0_0EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P0_1EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P0_2EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P0_3EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P0_4EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P0_5EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P0_6EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P0_7EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P0_8EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P0_9EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P0_10EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P0_11EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P0_12EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P0_13EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P0_14EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P0_15EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> P0_16EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> P0_17EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> P0_18EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> P0_19EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> P0_20EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> P0_21EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> P0_22EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> P0_23EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> P0_24EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> P0_25EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> P0_26EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> P0_27EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> P0_28EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> P0_29EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> P0_30EF; 
    }
    namespace Nonestatr2{
        using Addr = Register::Address<0x400280a4,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P2_0REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P2_1REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2_2REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P2_3REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P2_4REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P2_5REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P2_6REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P2_7REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P2_8REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P2_9REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P2_10REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P2_11REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P2_12REI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P2_13REI; 
    }
    namespace Nonestatf2{
        using Addr = Register::Address<0x400280a8,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P2_0FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P2_1FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2_2FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P2_3FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P2_4FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P2_5FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P2_6FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P2_7FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P2_8FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P2_9FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P2_10FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P2_11FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P2_12FEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P2_13FEI; 
    }
    namespace Noneclr2{
        using Addr = Register::Address<0x400280ac,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P2_0CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P2_1CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2_2CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P2_3CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P2_4CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P2_5CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P2_6CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P2_7CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P2_8CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P2_9CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P2_10CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P2_11CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P2_12CI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P2_13CI; 
    }
    namespace Noneenr2{
        using Addr = Register::Address<0x400280b0,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P2_0ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P2_1ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2_2ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P2_3ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P2_4ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P2_5ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P2_6ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P2_7ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P2_8ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P2_9ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P2_10ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P2_11ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P2_12ER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P2_13ER; 
    }
    namespace Noneenf2{
        using Addr = Register::Address<0x400280b4,0xffffc000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P2_0EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P2_1EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P2_2EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P2_3EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P2_4EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P2_5EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P2_6EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P2_7EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> P2_8EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P2_9EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P2_10EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P2_11EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P2_12EF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P2_13EF; 
    }
}
