#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Peripheral Clock Gating
    namespace Nonecken0{    ///<Peripheral Function Clock Control Register 0
        using Addr = Register::Address<0x4003c100,0xeaf00000,0,unsigned>;
        ///Settings for operation clock supplying and gating to GPIO function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> giock{}; 
        namespace GiockValC{
        }
        ///Settings for operation clock supplying and gating of external bus interface function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> exbck{}; 
        namespace ExbckValC{
        }
        ///Supplying and gating settings of DMAC operation clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmack{}; 
        namespace DmackValC{
        }
        ///Settings for operation clock supplying and gating to A/D converter unit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> adcck3{}; 
        namespace Adcck3ValC{
        }
        ///Settings for operation clock supplying and gating to A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> adcck2{}; 
        namespace Adcck2ValC{
        }
        ///Settings for operation clock supplying and gating to A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adcck1{}; 
        namespace Adcck1ValC{
        }
        ///Settings for operation clock supplying and gating to A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adcck0{}; 
        namespace Adcck0ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfsck15{}; 
        namespace Mfsck15ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfsck14{}; 
        namespace Mfsck14ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfsck13{}; 
        namespace Mfsck13ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfsck12{}; 
        namespace Mfsck12ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mfsck11{}; 
        namespace Mfsck11ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mfsck10{}; 
        namespace Mfsck10ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mfsck9{}; 
        namespace Mfsck9ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mfsck8{}; 
        namespace Mfsck8ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mfsck7{}; 
        namespace Mfsck7ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mfsck6{}; 
        namespace Mfsck6ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mfsck5{}; 
        namespace Mfsck5ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mfsck4{}; 
        namespace Mfsck4ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsck3{}; 
        namespace Mfsck3ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsck2{}; 
        namespace Mfsck2ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsck1{}; 
        namespace Mfsck1ValC{
        }
        ///Settings for operation clock supply and gating to multi-function serial interface ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsck0{}; 
        namespace Mfsck0ValC{
        }
    }
    namespace Nonemrst0{    ///<Peripheral Function Reset Control Register 0
        using Addr = Register::Address<0x4003c104,0xfaf00000,0,unsigned>;
        ///Reset control for external bus interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> exbrst{}; 
        namespace ExbrstValC{
        }
        ///Reset control of DMAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> dmarst{}; 
        namespace DmarstValC{
        }
        ///Reset control of A/D converter unit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> adcrst3{}; 
        namespace Adcrst3ValC{
        }
        ///Reset control of A/D converter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> adcrst2{}; 
        namespace Adcrst2ValC{
        }
        ///Reset control of A/D converter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> adcrst1{}; 
        namespace Adcrst1ValC{
        }
        ///Reset control of A/D converter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> adcrst0{}; 
        namespace Adcrst0ValC{
        }
        ///Control of software reset of multi-function serial interface ch.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mfsrst15{}; 
        namespace Mfsrst15ValC{
        }
        ///Control of software reset of multi-function serial interface ch.14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mfsrst14{}; 
        namespace Mfsrst14ValC{
        }
        ///Control of software reset of multi-function serial interface ch.13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mfsrst13{}; 
        namespace Mfsrst13ValC{
        }
        ///Control of software reset of multi-function serial interface ch.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mfsrst12{}; 
        namespace Mfsrst12ValC{
        }
        ///Control of software reset of multi-function serial interface ch.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mfsrst11{}; 
        namespace Mfsrst11ValC{
        }
        ///Control of software reset of multi-function serial interface ch.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mfsrst10{}; 
        namespace Mfsrst10ValC{
        }
        ///Control of software reset of multi-function serial interface ch.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mfsrst9{}; 
        namespace Mfsrst9ValC{
        }
        ///Control of software reset of multi-function serial interface ch.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mfsrst8{}; 
        namespace Mfsrst8ValC{
        }
        ///Control of software reset of multi-function serial interface ch.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mfsrst7{}; 
        namespace Mfsrst7ValC{
        }
        ///Control of software reset of multi-function serial interface ch.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mfsrst6{}; 
        namespace Mfsrst6ValC{
        }
        ///Control of software reset of multi-function serial interface ch.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> mfsrst5{}; 
        namespace Mfsrst5ValC{
        }
        ///Control of software reset of multi-function serial interface ch.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> mfsrst4{}; 
        namespace Mfsrst4ValC{
        }
        ///Control of software reset of multi-function serial interface ch.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> mfsrst3{}; 
        namespace Mfsrst3ValC{
        }
        ///Control of software reset of multi-function serial interface ch.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mfsrst2{}; 
        namespace Mfsrst2ValC{
        }
        ///Control of software reset of multi-function serial interface ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mfsrst1{}; 
        namespace Mfsrst1ValC{
        }
        ///Control of software reset of multi-function serial interface ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mfsrst0{}; 
        namespace Mfsrst0ValC{
        }
    }
    namespace Nonecken1{    ///<Peripheral Function Clock Control Register 1
        using Addr = Register::Address<0x4003c110,0xfff0f0f0,0,unsigned>;
        ///Reset control of quad counter unit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> qduck3{}; 
        namespace Qduck3ValC{
        }
        ///Reset control of quad counter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> qduck2{}; 
        namespace Qduck2ValC{
        }
        ///Reset control of quad counter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> qduck1{}; 
        namespace Qduck1ValC{
        }
        ///Reset control of quad counter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> qduck0{}; 
        namespace Qduck0ValC{
        }
        ///Settings for operation clock supply and gating of multi-function timer 3 and PPG 24/26/28/30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mftck3{}; 
        namespace Mftck3ValC{
        }
        ///Settings for operation clock supply and gating of multi-function timer 2 and PPG 16/18/20/22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mftck2{}; 
        namespace Mftck2ValC{
        }
        ///Settings for operation clock supply and gating of multi-function timer 1 and PPG 8/10/12/14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mftck1{}; 
        namespace Mftck1ValC{
        }
        ///Settings for operation clock supply and gating of multi-function timer 0 and PPG 0/2/4/6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mftck0{}; 
        namespace Mftck0ValC{
        }
        ///Settings operation clock supply and gating to base timer 12/13/14/15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btmck3{}; 
        namespace Btmck3ValC{
        }
        ///Settings operation clock supply and gating to base timer 8/9/10/11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btmck2{}; 
        namespace Btmck2ValC{
        }
        ///Settings operation clock supply and gating to base timer 4/5/6/7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btmck1{}; 
        namespace Btmck1ValC{
        }
        ///Settings operation clock supply and gating to base timer 0/1/2/3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btmck0{}; 
        namespace Btmck0ValC{
        }
    }
    namespace Nonemrst1{    ///<Peripheral Function Reset Control Register 1
        using Addr = Register::Address<0x4003c114,0xfff0f0f0,0,unsigned>;
        ///Reset control of quad counter unit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> qdurst3{}; 
        namespace Qdurst3ValC{
        }
        ///Reset control of quad counter unit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> qdurst2{}; 
        namespace Qdurst2ValC{
        }
        ///Reset control of quad counter unit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> qdurst1{}; 
        namespace Qdurst1ValC{
        }
        ///Reset control of quad counter unit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> qdurst0{}; 
        namespace Qdurst0ValC{
        }
        ///Control of multi-function timer 3 and PPG 24/26/28/30 reset control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mftrst3{}; 
        namespace Mftrst3ValC{
        }
        ///Control of multi-function timer 2 and PPG 16/18/20/22 reset control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mftrst2{}; 
        namespace Mftrst2ValC{
        }
        ///Control of multi-function timer 1 and PPG 8/10/12/14 reset control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mftrst1{}; 
        namespace Mftrst1ValC{
        }
        ///Control of multi-function timer 0 and PPG 0/2/4/6 reset control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mftrst0{}; 
        namespace Mftrst0ValC{
        }
        ///Reset control of base timer 12/13/14/15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btmrst3{}; 
        namespace Btmrst3ValC{
        }
        ///Reset control of base timer 8/9/10/11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btmrst2{}; 
        namespace Btmrst2ValC{
        }
        ///Reset control of base timer 4/5/6/7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btmrst1{}; 
        namespace Btmrst1ValC{
        }
        ///Reset control of base timer 0/1/2/3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btmrst0{}; 
        namespace Btmrst0ValC{
        }
    }
    namespace Nonecken2{    ///<Peripheral Function Clock Control Register 2
        using Addr = Register::Address<0x4003c120,0xececfe8c,0,unsigned>;
        ///28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> qspick{}; 
        namespace QspickValC{
        }
        ///25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cecck1{}; 
        namespace Cecck1ValC{
        }
        ///24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cecck0{}; 
        namespace Cecck0ValC{
        }
        ///20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pcrcck{}; 
        namespace PcrcckValC{
        }
        ///17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> i2sck1{}; 
        namespace I2sck1ValC{
        }
        ///16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> i2sck0{}; 
        namespace I2sck0ValC{
        }
        ///Settings for operation clock supply and gating to SD card interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdcck{}; 
        namespace SdcckValC{
        }
        ///Settings for operation clock supply and gating to SD card interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> canck2{}; 
        namespace Canck2ValC{
        }
        ///Settings for clock supply and gating to CAN controller ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> canck1{}; 
        namespace Canck1ValC{
        }
        ///Settings for clock supply and gating to CAN controller ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> canck0{}; 
        namespace Canck0ValC{
        }
        ///Settings for operation clock supply and gating of USB(function/host) ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbck1{}; 
        namespace Usbck1ValC{
        }
        ///Settings for operation clock supply and gating of USB(function/host) ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbck0{}; 
        namespace Usbck0ValC{
        }
    }
    namespace Nonemrst2{    ///<Peripheral Function Reset Control Register 2
        using Addr = Register::Address<0x4003c124,0xececfe8c,0,unsigned>;
        ///28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> qspirst{}; 
        namespace QspirstValC{
        }
        ///25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cecrst1{}; 
        namespace Cecrst1ValC{
        }
        ///24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cecrst0{}; 
        namespace Cecrst0ValC{
        }
        ///20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pcrcrst{}; 
        namespace PcrcrstValC{
        }
        ///17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> i2srst1{}; 
        namespace I2srst1ValC{
        }
        ///16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> i2srst0{}; 
        namespace I2srst0ValC{
        }
        ///Reset control of SD card interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sdcrst{}; 
        namespace SdcrstValC{
        }
        ///Reset control of SD card interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> canrst2{}; 
        namespace Canrst2ValC{
        }
        ///Reset control of CAN controller ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> canrst1{}; 
        namespace Canrst1ValC{
        }
        ///Reset control of CAN controller ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> canrst0{}; 
        namespace Canrst0ValC{
        }
        ///Reset control of USB (function/host) ch.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usbrst1{}; 
        namespace Usbrst1ValC{
        }
        ///Reset control of USB (function/host) ch.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbrst0{}; 
        namespace Usbrst0ValC{
        }
    }
}
