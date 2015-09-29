#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Peripheral Clock Gating Registers
    namespace Nonecken0{    ///<Peripheral Function Clock Control Register 0
        using Addr = Register::Address<0x4003c100,0xeef00000,0,unsigned>;
        ///Software clock control of GPIO/Fast GPIO function
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> giock{}; 
        ///Supplying and gating settings of DMAC operation clock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmack{}; 
        ///Settings for operation clock supplying and gating to A/D converter unit 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> adcck3{}; 
        ///Settings for operation clock supplying and gating to A/D converter unit 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> adcck2{}; 
        ///Settings for operation clock supplying and gating to A/D converter unit 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adcck1{}; 
        ///Settings for operation clock supplying and gating to A/D converter unit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adcck0{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfsck15{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfsck14{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfsck13{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfsck12{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mfsck11{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mfsck10{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mfsck9{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mfsck8{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mfsck7{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mfsck6{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mfsck5{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mfsck4{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsck3{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsck2{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsck1{}; 
        ///Settings for operation clock supply and gating to multi-function serial interface ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsck0{}; 
    }
    namespace Nonemrst0{    ///<Peripheral Function Reset Control Register 0
        using Addr = Register::Address<0x4003c104,0xfef00000,0,unsigned>;
        ///Reset control of DMAC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmarst{}; 
        ///Reset control of A/D converter unit 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> adcrst3{}; 
        ///Reset control of A/D converter unit 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> adcrst2{}; 
        ///Reset control of A/D converter unit 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adcrst1{}; 
        ///Reset control of A/D converter unit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adcrst0{}; 
        ///Control of software reset of multi-function serial interface ch.15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfsrst15{}; 
        ///Control of software reset of multi-function serial interface ch.14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfsrst14{}; 
        ///Control of software reset of multi-function serial interface ch.13
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfsrst13{}; 
        ///Control of software reset of multi-function serial interface ch.12
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfsrst12{}; 
        ///Control of software reset of multi-function serial interface ch.11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mfsrst11{}; 
        ///Control of software reset of multi-function serial interface ch.10
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mfsrst10{}; 
        ///Control of software reset of multi-function serial interface ch.9
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mfsrst9{}; 
        ///Control of software reset of multi-function serial interface ch.8
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mfsrst8{}; 
        ///Control of software reset of multi-function serial interface ch.7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mfsrst7{}; 
        ///Control of software reset of multi-function serial interface ch.6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mfsrst6{}; 
        ///Control of software reset of multi-function serial interface ch.5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mfsrst5{}; 
        ///Control of software reset of multi-function serial interface ch.4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mfsrst4{}; 
        ///Control of software reset of multi-function serial interface ch.3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsrst3{}; 
        ///Control of software reset of multi-function serial interface ch.2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsrst2{}; 
        ///Control of software reset of multi-function serial interface ch.1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsrst1{}; 
        ///Control of software reset of multi-function serial interface ch.0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrst0{}; 
    }
    namespace Nonecken1{    ///<Peripheral Function Clock Control Register 1
        using Addr = Register::Address<0x4003c110,0xfff0f0f0,0,unsigned>;
        ///Settings for operation clock supply and gating of quad counter unit 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> qduck3{}; 
        ///Settings for operation clock supply and gating of quad counter unit 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> qduck2{}; 
        ///Settings for operation clock supply and gating of quad counter unit 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> qduck1{}; 
        ///Settings for operation clock supply and gating of quad counter unit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> qduck0{}; 
        ///Settings for operation clock supply and gating of multi-function timer 3 and PPG 24/26/28/30
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mftck3{}; 
        ///Settings for operation clock supply and gating of multi-function timer 2 and PPG 16/18/20/22
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mftck2{}; 
        ///Settings for operation clock supply and gating of multi-function timer 1 and PPG 8/10/12/14
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mftck1{}; 
        ///Settings for operation clock supply and gating of multi-function timer 0 and PPG 0/2/4/6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mftck0{}; 
        ///Settings operation clock supply and gating to base timer 12/13/14/15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btmck3{}; 
        ///Settings operation clock supply and gating to base timer 8/9/10/11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btmck2{}; 
        ///Settings operation clock supply and gating to base timer 4/5/6/7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btmck1{}; 
        ///Settings operation clock supply and gating to base timer 0/1/2/3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btmck0{}; 
    }
    namespace Nonemrst1{    ///<Peripheral Function Reset Control Register 1
        using Addr = Register::Address<0x4003c114,0xfff0f0f0,0,unsigned>;
        ///Reset control of quad counter unit 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> qdurst3{}; 
        ///Reset control of quad counter unit 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> qdurst2{}; 
        ///Reset control of quad counter unit 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> qdurst1{}; 
        ///Reset control of quad counter unit 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> qdurst0{}; 
        ///Control of multi-function timer 3 and PPG 24/26/28/30 reset control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mftrst3{}; 
        ///Control of multi-function timer 2 and PPG 16/18/20/22 reset control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mftrst2{}; 
        ///Control of multi-function timer 1 and PPG 8/10/12/14 reset control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mftrst1{}; 
        ///Control of multi-function timer 0 and PPG 0/2/4/6 reset control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mftrst0{}; 
        ///Reset control of base timer 12/13/14/15
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btmrst3{}; 
        ///Reset control of base timer 8/9/10/11
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btmrst2{}; 
        ///Reset control of base timer 4/5/6/7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btmrst1{}; 
        ///Reset control of base timer 0/1/2/3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btmrst0{}; 
    }
    namespace Nonecken2{    ///<Peripheral Function Clock Control Register 2
        using Addr = Register::Address<0x4003c120,0xffffffcf,0,unsigned>;
        ///Peripheral Function Clock Control Register 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> canck1{}; 
        ///$
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> canck0{}; 
    }
    namespace Nonemrst2{    ///<Peripheral Function Reset Control Register 2
        using Addr = Register::Address<0x4003c124,0xffffffcf,0,unsigned>;
        ///Peripheral Function Reset Control Register 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> canrst1{}; 
        ///$
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> canrst0{}; 
    }
}
