#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr{
        using Addr = Register::Address<0x50060000,0xfff43c03>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ALGODIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> ALGOMODE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DATATYPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> KEYSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FFLUSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CRYPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> GCM_CCMPH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ALGOMODE3; 
    }
    namespace Nonesr{
        using Addr = Register::Address<0x50060004,0xffffffe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OFFU; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OFNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IFNF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IFEM; 
    }
    namespace Nonedin{
        using Addr = Register::Address<0x50060008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATAIN; 
    }
    namespace Nonedout{
        using Addr = Register::Address<0x5006000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DATAOUT; 
    }
    namespace Nonedmacr{
        using Addr = Register::Address<0x50060010,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DOEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIEN; 
    }
    namespace Noneimscr{
        using Addr = Register::Address<0x50060014,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OUTIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INIM; 
    }
    namespace Nonerisr{
        using Addr = Register::Address<0x50060018,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OUTRIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INRIS; 
    }
    namespace Nonemisr{
        using Addr = Register::Address<0x5006001c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OUTMIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INMIS; 
    }
    namespace Nonek0lr{
        using Addr = Register::Address<0x50060020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> b224; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> b225; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> b226; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> b227; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> b228; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> b229; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> b230; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> b231; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> b232; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> b233; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> b234; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> b235; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> b236; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> b237; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> b238; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> b239; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> b240; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> b241; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> b242; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> b243; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> b244; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> b245; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> b246; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> b247; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> b248; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> b249; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> b250; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> b251; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> b252; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> b253; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> b254; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> b255; 
    }
    namespace Nonek0rr{
        using Addr = Register::Address<0x50060024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> b192; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> b193; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> b194; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> b195; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> b196; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> b197; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> b198; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> b199; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> b200; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> b201; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> b202; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> b203; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> b204; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> b205; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> b206; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> b207; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> b208; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> b209; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> b210; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> b211; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> b212; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> b213; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> b214; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> b215; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> b216; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> b217; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> b218; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> b219; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> b220; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> b221; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> b222; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> b223; 
    }
    namespace Nonek1lr{
        using Addr = Register::Address<0x50060028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> b160; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> b161; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> b162; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> b163; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> b164; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> b165; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> b166; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> b167; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> b168; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> b169; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> b170; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> b171; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> b172; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> b173; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> b174; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> b175; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> b176; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> b177; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> b178; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> b179; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> b180; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> b181; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> b182; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> b183; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> b184; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> b185; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> b186; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> b187; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> b188; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> b189; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> b190; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> b191; 
    }
    namespace Nonek1rr{
        using Addr = Register::Address<0x5006002c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> b128; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> b129; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> b130; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> b131; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> b132; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> b133; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> b134; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> b135; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> b136; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> b137; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> b138; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> b139; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> b140; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> b141; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> b142; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> b143; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> b144; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> b145; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> b146; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> b147; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> b148; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> b149; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> b150; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> b151; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> b152; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> b153; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> b154; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> b155; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> b156; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> b157; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> b158; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> b159; 
    }
    namespace Nonek2lr{
        using Addr = Register::Address<0x50060030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> b96; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> b97; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> b98; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> b99; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> b100; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> b101; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> b102; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> b103; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> b104; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> b105; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> b106; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> b107; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> b108; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> b109; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> b110; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> b111; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> b112; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> b113; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> b114; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> b115; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> b116; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> b117; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> b118; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> b119; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> b120; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> b121; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> b122; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> b123; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> b124; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> b125; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> b126; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> b127; 
    }
    namespace Nonek2rr{
        using Addr = Register::Address<0x50060034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> b64; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> b65; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> b66; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> b67; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> b68; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> b69; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> b70; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> b71; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> b72; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> b73; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> b74; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> b75; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> b76; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> b77; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> b78; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> b79; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> b80; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> b81; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> b82; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> b83; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> b84; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> b85; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> b86; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> b87; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> b88; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> b89; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> b90; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> b91; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> b92; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> b93; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> b94; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> b95; 
    }
    namespace Nonek3lr{
        using Addr = Register::Address<0x50060038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> b32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> b33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> b34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> b35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> b36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> b37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> b38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> b39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> b40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> b41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> b42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> b43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> b44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> b45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> b46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> b47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> b48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> b49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> b50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> b51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> b52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> b53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> b54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> b55; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> b56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> b57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> b58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> b59; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> b60; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> b61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> b62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> b63; 
    }
    namespace Nonek3rr{
        using Addr = Register::Address<0x5006003c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> b0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> b1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> b2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> b3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> b4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> b5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> b6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> b7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> b8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> b9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> b10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> b11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> b12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> b13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> b14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> b15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> b16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> b17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> b18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> b19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> b20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> b21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> b22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> b23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> b24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> b25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> b26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> b27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> b28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> b29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> b30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> b31; 
    }
    namespace Noneiv0lr{
        using Addr = Register::Address<0x50060040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IV31; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IV30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IV29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IV28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IV27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IV26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IV25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IV24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IV23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IV22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IV21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IV20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IV19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IV18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IV17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IV16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IV15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IV14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IV13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IV12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IV11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IV10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> IV9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> IV8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> IV7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> IV6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> IV5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> IV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> IV3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> IV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IV1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> IV0; 
    }
    namespace Noneiv0rr{
        using Addr = Register::Address<0x50060044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IV63; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IV62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IV61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IV60; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IV59; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IV58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IV57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IV56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IV55; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IV54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IV53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IV52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IV51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IV50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IV49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IV48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IV47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IV46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IV45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IV44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IV43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IV42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> IV41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> IV40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> IV39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> IV38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> IV37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> IV36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> IV35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> IV34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IV33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> IV32; 
    }
    namespace Noneiv1lr{
        using Addr = Register::Address<0x50060048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IV95; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IV94; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IV93; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IV92; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IV91; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IV90; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IV89; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IV88; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IV87; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IV86; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IV85; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IV84; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IV83; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IV82; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IV81; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IV80; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IV79; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IV78; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IV77; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IV76; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IV75; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IV74; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> IV73; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> IV72; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> IV71; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> IV70; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> IV69; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> IV68; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> IV67; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> IV66; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IV65; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> IV64; 
    }
    namespace Noneiv1rr{
        using Addr = Register::Address<0x5006004c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IV127; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IV126; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IV125; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IV124; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IV123; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IV122; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IV121; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IV120; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IV119; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IV118; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IV117; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IV116; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> IV115; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> IV114; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> IV113; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> IV112; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IV111; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IV110; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IV109; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IV108; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IV107; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IV106; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> IV105; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> IV104; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> IV103; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> IV102; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> IV101; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> IV100; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> IV99; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> IV98; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> IV97; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> IV96; 
    }
    namespace Nonecsgcmccm0r{
        using Addr = Register::Address<0x50060050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCMCCM0R; 
    }
    namespace Nonecsgcmccm1r{
        using Addr = Register::Address<0x50060054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCMCCM1R; 
    }
    namespace Nonecsgcmccm2r{
        using Addr = Register::Address<0x50060058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCMCCM2R; 
    }
    namespace Nonecsgcmccm3r{
        using Addr = Register::Address<0x5006005c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCMCCM3R; 
    }
    namespace Nonecsgcmccm4r{
        using Addr = Register::Address<0x50060060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCMCCM4R; 
    }
    namespace Nonecsgcmccm5r{
        using Addr = Register::Address<0x50060064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCMCCM5R; 
    }
    namespace Nonecsgcmccm6r{
        using Addr = Register::Address<0x50060068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCMCCM6R; 
    }
    namespace Nonecsgcmccm7r{
        using Addr = Register::Address<0x5006006c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCMCCM7R; 
    }
    namespace Nonecsgcm0r{
        using Addr = Register::Address<0x50060070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCM0R; 
    }
    namespace Nonecsgcm1r{
        using Addr = Register::Address<0x50060074,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCM1R; 
    }
    namespace Nonecsgcm2r{
        using Addr = Register::Address<0x50060078,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCM2R; 
    }
    namespace Nonecsgcm3r{
        using Addr = Register::Address<0x5006007c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCM3R; 
    }
    namespace Nonecsgcm4r{
        using Addr = Register::Address<0x50060080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCM4R; 
    }
    namespace Nonecsgcm5r{
        using Addr = Register::Address<0x50060084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCM5R; 
    }
    namespace Nonecsgcm6r{
        using Addr = Register::Address<0x50060088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCM6R; 
    }
    namespace Nonecsgcm7r{
        using Addr = Register::Address<0x5006008c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> CSGCM7R; 
    }
}
