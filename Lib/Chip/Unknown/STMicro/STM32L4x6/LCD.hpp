#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Liquid crystal display controller
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40002400,0xfffffe00,0,unsigned>;
        ///Bias selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> bias{}; 
        namespace BiasValC{
        }
        ///Duty selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> duty{}; 
        namespace DutyValC{
        }
        ///Voltage source selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vsel{}; 
        namespace VselValC{
        }
        ///LCD controller enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lcden{}; 
        namespace LcdenValC{
        }
        ///Mux segment enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> muxSeg{}; 
        namespace MuxsegValC{
        }
        ///Voltage output buffer
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bufen{}; 
        namespace BufenValC{
        }
    }
    namespace Nonefcr{    ///<frame control register
        using Addr = Register::Address<0x40002404,0xfc000004,0,unsigned>;
        ///PS 16-bit prescaler
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> ps{}; 
        namespace PsValC{
        }
        ///DIV clock divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,18),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
        ///Blink mode selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> blink{}; 
        namespace BlinkValC{
        }
        ///Blink frequency selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> blinkf{}; 
        namespace BlinkfValC{
        }
        ///Contrast control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,unsigned> cc{}; 
        namespace CcValC{
        }
        ///Dead time duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,7),Register::ReadWriteAccess,unsigned> dead{}; 
        namespace DeadValC{
        }
        ///Pulse ON duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> pon{}; 
        namespace PonValC{
        }
        ///Update display done interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uddie{}; 
        namespace UddieValC{
        }
        ///Start of frame interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sofie{}; 
        namespace SofieValC{
        }
        ///High drive enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hd{}; 
        namespace HdValC{
        }
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40002408,0xffffffc0,0,unsigned>;
        ///LCD Frame Control Register
              Synchronization flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fcrsf{}; 
        namespace FcrsfValC{
        }
        ///Ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rdy{}; 
        namespace RdyValC{
        }
        ///Update Display Done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> udd{}; 
        namespace UddValC{
        }
        ///Update display request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> udr{}; 
        namespace UdrValC{
        }
        ///Start of frame flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///ENS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ens{}; 
        namespace EnsValC{
        }
    }
    namespace Noneclr{    ///<clear register
        using Addr = Register::Address<0x4000240c,0xfffffff5,0,unsigned>;
        ///Update display done clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uddc{}; 
        namespace UddcValC{
        }
        ///Start of frame flag clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sofc{}; 
        namespace SofcValC{
        }
    }
    namespace NoneramCom0{    ///<display memory
        using Addr = Register::Address<0x40002414,0x80000000,0,unsigned>;
        ///S30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> s30{}; 
        namespace S30ValC{
        }
        ///S29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> s29{}; 
        namespace S29ValC{
        }
        ///S28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> s28{}; 
        namespace S28ValC{
        }
        ///S27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> s27{}; 
        namespace S27ValC{
        }
        ///S26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> s26{}; 
        namespace S26ValC{
        }
        ///S25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> s25{}; 
        namespace S25ValC{
        }
        ///S24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> s24{}; 
        namespace S24ValC{
        }
        ///S23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> s23{}; 
        namespace S23ValC{
        }
        ///S22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> s22{}; 
        namespace S22ValC{
        }
        ///S21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> s21{}; 
        namespace S21ValC{
        }
        ///S20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> s20{}; 
        namespace S20ValC{
        }
        ///S19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> s19{}; 
        namespace S19ValC{
        }
        ///S18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s18{}; 
        namespace S18ValC{
        }
        ///S17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> s17{}; 
        namespace S17ValC{
        }
        ///S16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> s16{}; 
        namespace S16ValC{
        }
        ///S15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> s15{}; 
        namespace S15ValC{
        }
        ///S14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> s14{}; 
        namespace S14ValC{
        }
        ///S13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> s13{}; 
        namespace S13ValC{
        }
        ///S12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> s12{}; 
        namespace S12ValC{
        }
        ///S11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> s11{}; 
        namespace S11ValC{
        }
        ///S10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> s10{}; 
        namespace S10ValC{
        }
        ///S09
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> s09{}; 
        namespace S09ValC{
        }
        ///S08
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s08{}; 
        namespace S08ValC{
        }
        ///S07
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> s07{}; 
        namespace S07ValC{
        }
        ///S06
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> s06{}; 
        namespace S06ValC{
        }
        ///S05
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> s05{}; 
        namespace S05ValC{
        }
        ///S04
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> s04{}; 
        namespace S04ValC{
        }
        ///S03
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> s03{}; 
        namespace S03ValC{
        }
        ///S02
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> s02{}; 
        namespace S02ValC{
        }
        ///S01
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> s01{}; 
        namespace S01ValC{
        }
        ///S00
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> s00{}; 
        namespace S00ValC{
        }
    }
    namespace NoneramCom1{    ///<display memory
        using Addr = Register::Address<0x4000241c,0x00000000,0,unsigned>;
        ///S31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> s31{}; 
        namespace S31ValC{
        }
        ///S30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> s30{}; 
        namespace S30ValC{
        }
        ///S29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> s29{}; 
        namespace S29ValC{
        }
        ///S28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> s28{}; 
        namespace S28ValC{
        }
        ///S27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> s27{}; 
        namespace S27ValC{
        }
        ///S26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> s26{}; 
        namespace S26ValC{
        }
        ///S25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> s25{}; 
        namespace S25ValC{
        }
        ///S24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> s24{}; 
        namespace S24ValC{
        }
        ///S23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> s23{}; 
        namespace S23ValC{
        }
        ///S22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> s22{}; 
        namespace S22ValC{
        }
        ///S21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> s21{}; 
        namespace S21ValC{
        }
        ///S20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> s20{}; 
        namespace S20ValC{
        }
        ///S19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> s19{}; 
        namespace S19ValC{
        }
        ///S18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s18{}; 
        namespace S18ValC{
        }
        ///S17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> s17{}; 
        namespace S17ValC{
        }
        ///S16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> s16{}; 
        namespace S16ValC{
        }
        ///S15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> s15{}; 
        namespace S15ValC{
        }
        ///S14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> s14{}; 
        namespace S14ValC{
        }
        ///S13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> s13{}; 
        namespace S13ValC{
        }
        ///S12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> s12{}; 
        namespace S12ValC{
        }
        ///S11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> s11{}; 
        namespace S11ValC{
        }
        ///S10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> s10{}; 
        namespace S10ValC{
        }
        ///S09
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> s09{}; 
        namespace S09ValC{
        }
        ///S08
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s08{}; 
        namespace S08ValC{
        }
        ///S07
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> s07{}; 
        namespace S07ValC{
        }
        ///S06
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> s06{}; 
        namespace S06ValC{
        }
        ///S05
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> s05{}; 
        namespace S05ValC{
        }
        ///S04
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> s04{}; 
        namespace S04ValC{
        }
        ///S03
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> s03{}; 
        namespace S03ValC{
        }
        ///S02
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> s02{}; 
        namespace S02ValC{
        }
        ///S01
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> s01{}; 
        namespace S01ValC{
        }
        ///S00
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> s00{}; 
        namespace S00ValC{
        }
    }
    namespace NoneramCom2{    ///<display memory
        using Addr = Register::Address<0x40002424,0x00000000,0,unsigned>;
        ///S31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> s31{}; 
        namespace S31ValC{
        }
        ///S30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> s30{}; 
        namespace S30ValC{
        }
        ///S29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> s29{}; 
        namespace S29ValC{
        }
        ///S28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> s28{}; 
        namespace S28ValC{
        }
        ///S27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> s27{}; 
        namespace S27ValC{
        }
        ///S26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> s26{}; 
        namespace S26ValC{
        }
        ///S25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> s25{}; 
        namespace S25ValC{
        }
        ///S24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> s24{}; 
        namespace S24ValC{
        }
        ///S23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> s23{}; 
        namespace S23ValC{
        }
        ///S22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> s22{}; 
        namespace S22ValC{
        }
        ///S21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> s21{}; 
        namespace S21ValC{
        }
        ///S20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> s20{}; 
        namespace S20ValC{
        }
        ///S19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> s19{}; 
        namespace S19ValC{
        }
        ///S18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s18{}; 
        namespace S18ValC{
        }
        ///S17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> s17{}; 
        namespace S17ValC{
        }
        ///S16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> s16{}; 
        namespace S16ValC{
        }
        ///S15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> s15{}; 
        namespace S15ValC{
        }
        ///S14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> s14{}; 
        namespace S14ValC{
        }
        ///S13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> s13{}; 
        namespace S13ValC{
        }
        ///S12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> s12{}; 
        namespace S12ValC{
        }
        ///S11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> s11{}; 
        namespace S11ValC{
        }
        ///S10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> s10{}; 
        namespace S10ValC{
        }
        ///S09
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> s09{}; 
        namespace S09ValC{
        }
        ///S08
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s08{}; 
        namespace S08ValC{
        }
        ///S07
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> s07{}; 
        namespace S07ValC{
        }
        ///S06
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> s06{}; 
        namespace S06ValC{
        }
        ///S05
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> s05{}; 
        namespace S05ValC{
        }
        ///S04
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> s04{}; 
        namespace S04ValC{
        }
        ///S03
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> s03{}; 
        namespace S03ValC{
        }
        ///S02
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> s02{}; 
        namespace S02ValC{
        }
        ///S01
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> s01{}; 
        namespace S01ValC{
        }
        ///S00
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> s00{}; 
        namespace S00ValC{
        }
    }
    namespace NoneramCom3{    ///<display memory
        using Addr = Register::Address<0x4000242c,0x00000000,0,unsigned>;
        ///S31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> s31{}; 
        namespace S31ValC{
        }
        ///S30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> s30{}; 
        namespace S30ValC{
        }
        ///S29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> s29{}; 
        namespace S29ValC{
        }
        ///S28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> s28{}; 
        namespace S28ValC{
        }
        ///S27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> s27{}; 
        namespace S27ValC{
        }
        ///S26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> s26{}; 
        namespace S26ValC{
        }
        ///S25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> s25{}; 
        namespace S25ValC{
        }
        ///S24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> s24{}; 
        namespace S24ValC{
        }
        ///S23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> s23{}; 
        namespace S23ValC{
        }
        ///S22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> s22{}; 
        namespace S22ValC{
        }
        ///S21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> s21{}; 
        namespace S21ValC{
        }
        ///S20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> s20{}; 
        namespace S20ValC{
        }
        ///S19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> s19{}; 
        namespace S19ValC{
        }
        ///S18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s18{}; 
        namespace S18ValC{
        }
        ///S17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> s17{}; 
        namespace S17ValC{
        }
        ///S16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> s16{}; 
        namespace S16ValC{
        }
        ///S15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> s15{}; 
        namespace S15ValC{
        }
        ///S14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> s14{}; 
        namespace S14ValC{
        }
        ///S13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> s13{}; 
        namespace S13ValC{
        }
        ///S12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> s12{}; 
        namespace S12ValC{
        }
        ///S11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> s11{}; 
        namespace S11ValC{
        }
        ///S10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> s10{}; 
        namespace S10ValC{
        }
        ///S09
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> s09{}; 
        namespace S09ValC{
        }
        ///S08
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s08{}; 
        namespace S08ValC{
        }
        ///S07
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> s07{}; 
        namespace S07ValC{
        }
        ///S06
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> s06{}; 
        namespace S06ValC{
        }
        ///S05
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> s05{}; 
        namespace S05ValC{
        }
        ///S04
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> s04{}; 
        namespace S04ValC{
        }
        ///S03
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> s03{}; 
        namespace S03ValC{
        }
        ///S02
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> s02{}; 
        namespace S02ValC{
        }
        ///S01
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> s01{}; 
        namespace S01ValC{
        }
        ///S00
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> s00{}; 
        namespace S00ValC{
        }
    }
    namespace NoneramCom4{    ///<display memory
        using Addr = Register::Address<0x40002434,0x00000000,0,unsigned>;
        ///S31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> s31{}; 
        namespace S31ValC{
        }
        ///S30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> s30{}; 
        namespace S30ValC{
        }
        ///S29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> s29{}; 
        namespace S29ValC{
        }
        ///S28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> s28{}; 
        namespace S28ValC{
        }
        ///S27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> s27{}; 
        namespace S27ValC{
        }
        ///S26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> s26{}; 
        namespace S26ValC{
        }
        ///S25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> s25{}; 
        namespace S25ValC{
        }
        ///S24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> s24{}; 
        namespace S24ValC{
        }
        ///S23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> s23{}; 
        namespace S23ValC{
        }
        ///S22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> s22{}; 
        namespace S22ValC{
        }
        ///S21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> s21{}; 
        namespace S21ValC{
        }
        ///S20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> s20{}; 
        namespace S20ValC{
        }
        ///S19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> s19{}; 
        namespace S19ValC{
        }
        ///S18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s18{}; 
        namespace S18ValC{
        }
        ///S17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> s17{}; 
        namespace S17ValC{
        }
        ///S16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> s16{}; 
        namespace S16ValC{
        }
        ///S15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> s15{}; 
        namespace S15ValC{
        }
        ///S14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> s14{}; 
        namespace S14ValC{
        }
        ///S13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> s13{}; 
        namespace S13ValC{
        }
        ///S12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> s12{}; 
        namespace S12ValC{
        }
        ///S11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> s11{}; 
        namespace S11ValC{
        }
        ///S10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> s10{}; 
        namespace S10ValC{
        }
        ///S09
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> s09{}; 
        namespace S09ValC{
        }
        ///S08
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s08{}; 
        namespace S08ValC{
        }
        ///S07
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> s07{}; 
        namespace S07ValC{
        }
        ///S06
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> s06{}; 
        namespace S06ValC{
        }
        ///S05
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> s05{}; 
        namespace S05ValC{
        }
        ///S04
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> s04{}; 
        namespace S04ValC{
        }
        ///S03
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> s03{}; 
        namespace S03ValC{
        }
        ///S02
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> s02{}; 
        namespace S02ValC{
        }
        ///S01
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> s01{}; 
        namespace S01ValC{
        }
        ///S00
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> s00{}; 
        namespace S00ValC{
        }
    }
    namespace NoneramCom5{    ///<display memory
        using Addr = Register::Address<0x4000243c,0x00000000,0,unsigned>;
        ///S31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> s31{}; 
        namespace S31ValC{
        }
        ///S30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> s30{}; 
        namespace S30ValC{
        }
        ///S29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> s29{}; 
        namespace S29ValC{
        }
        ///S28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> s28{}; 
        namespace S28ValC{
        }
        ///S27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> s27{}; 
        namespace S27ValC{
        }
        ///S26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> s26{}; 
        namespace S26ValC{
        }
        ///S25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> s25{}; 
        namespace S25ValC{
        }
        ///S24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> s24{}; 
        namespace S24ValC{
        }
        ///S23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> s23{}; 
        namespace S23ValC{
        }
        ///S22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> s22{}; 
        namespace S22ValC{
        }
        ///S21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> s21{}; 
        namespace S21ValC{
        }
        ///S20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> s20{}; 
        namespace S20ValC{
        }
        ///S19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> s19{}; 
        namespace S19ValC{
        }
        ///S18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s18{}; 
        namespace S18ValC{
        }
        ///S17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> s17{}; 
        namespace S17ValC{
        }
        ///S16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> s16{}; 
        namespace S16ValC{
        }
        ///S15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> s15{}; 
        namespace S15ValC{
        }
        ///S14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> s14{}; 
        namespace S14ValC{
        }
        ///S13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> s13{}; 
        namespace S13ValC{
        }
        ///S12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> s12{}; 
        namespace S12ValC{
        }
        ///S11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> s11{}; 
        namespace S11ValC{
        }
        ///S10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> s10{}; 
        namespace S10ValC{
        }
        ///S09
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> s09{}; 
        namespace S09ValC{
        }
        ///S08
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s08{}; 
        namespace S08ValC{
        }
        ///S07
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> s07{}; 
        namespace S07ValC{
        }
        ///S06
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> s06{}; 
        namespace S06ValC{
        }
        ///S05
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> s05{}; 
        namespace S05ValC{
        }
        ///S04
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> s04{}; 
        namespace S04ValC{
        }
        ///S03
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> s03{}; 
        namespace S03ValC{
        }
        ///S02
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> s02{}; 
        namespace S02ValC{
        }
        ///S01
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> s01{}; 
        namespace S01ValC{
        }
        ///S00
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> s00{}; 
        namespace S00ValC{
        }
    }
    namespace NoneramCom6{    ///<display memory
        using Addr = Register::Address<0x40002444,0x00000000,0,unsigned>;
        ///S31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> s31{}; 
        namespace S31ValC{
        }
        ///S30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> s30{}; 
        namespace S30ValC{
        }
        ///S29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> s29{}; 
        namespace S29ValC{
        }
        ///S28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> s28{}; 
        namespace S28ValC{
        }
        ///S27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> s27{}; 
        namespace S27ValC{
        }
        ///S26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> s26{}; 
        namespace S26ValC{
        }
        ///S25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> s25{}; 
        namespace S25ValC{
        }
        ///S24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> s24{}; 
        namespace S24ValC{
        }
        ///S23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> s23{}; 
        namespace S23ValC{
        }
        ///S22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> s22{}; 
        namespace S22ValC{
        }
        ///S21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> s21{}; 
        namespace S21ValC{
        }
        ///S20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> s20{}; 
        namespace S20ValC{
        }
        ///S19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> s19{}; 
        namespace S19ValC{
        }
        ///S18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s18{}; 
        namespace S18ValC{
        }
        ///S17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> s17{}; 
        namespace S17ValC{
        }
        ///S16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> s16{}; 
        namespace S16ValC{
        }
        ///S15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> s15{}; 
        namespace S15ValC{
        }
        ///S14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> s14{}; 
        namespace S14ValC{
        }
        ///S13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> s13{}; 
        namespace S13ValC{
        }
        ///S12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> s12{}; 
        namespace S12ValC{
        }
        ///S11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> s11{}; 
        namespace S11ValC{
        }
        ///S10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> s10{}; 
        namespace S10ValC{
        }
        ///S09
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> s09{}; 
        namespace S09ValC{
        }
        ///S08
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s08{}; 
        namespace S08ValC{
        }
        ///S07
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> s07{}; 
        namespace S07ValC{
        }
        ///S06
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> s06{}; 
        namespace S06ValC{
        }
        ///S05
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> s05{}; 
        namespace S05ValC{
        }
        ///S04
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> s04{}; 
        namespace S04ValC{
        }
        ///S03
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> s03{}; 
        namespace S03ValC{
        }
        ///S02
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> s02{}; 
        namespace S02ValC{
        }
        ///S01
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> s01{}; 
        namespace S01ValC{
        }
        ///S00
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> s00{}; 
        namespace S00ValC{
        }
    }
    namespace NoneramCom7{    ///<display memory
        using Addr = Register::Address<0x4000244c,0x00000000,0,unsigned>;
        ///S31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> s31{}; 
        namespace S31ValC{
        }
        ///S30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> s30{}; 
        namespace S30ValC{
        }
        ///S29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> s29{}; 
        namespace S29ValC{
        }
        ///S28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> s28{}; 
        namespace S28ValC{
        }
        ///S27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> s27{}; 
        namespace S27ValC{
        }
        ///S26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> s26{}; 
        namespace S26ValC{
        }
        ///S25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> s25{}; 
        namespace S25ValC{
        }
        ///S24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> s24{}; 
        namespace S24ValC{
        }
        ///S23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> s23{}; 
        namespace S23ValC{
        }
        ///S22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> s22{}; 
        namespace S22ValC{
        }
        ///S21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> s21{}; 
        namespace S21ValC{
        }
        ///S20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> s20{}; 
        namespace S20ValC{
        }
        ///S19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> s19{}; 
        namespace S19ValC{
        }
        ///S18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> s18{}; 
        namespace S18ValC{
        }
        ///S17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> s17{}; 
        namespace S17ValC{
        }
        ///S16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> s16{}; 
        namespace S16ValC{
        }
        ///S15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> s15{}; 
        namespace S15ValC{
        }
        ///S14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> s14{}; 
        namespace S14ValC{
        }
        ///S13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> s13{}; 
        namespace S13ValC{
        }
        ///S12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> s12{}; 
        namespace S12ValC{
        }
        ///S11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> s11{}; 
        namespace S11ValC{
        }
        ///S10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> s10{}; 
        namespace S10ValC{
        }
        ///S09
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> s09{}; 
        namespace S09ValC{
        }
        ///S08
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s08{}; 
        namespace S08ValC{
        }
        ///S07
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> s07{}; 
        namespace S07ValC{
        }
        ///S06
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> s06{}; 
        namespace S06ValC{
        }
        ///S05
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> s05{}; 
        namespace S05ValC{
        }
        ///S04
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> s04{}; 
        namespace S04ValC{
        }
        ///S03
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> s03{}; 
        namespace S03ValC{
        }
        ///S02
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> s02{}; 
        namespace S02ValC{
        }
        ///S01
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> s01{}; 
        namespace S01ValC{
        }
        ///S00
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> s00{}; 
        namespace S00ValC{
        }
    }
}
