#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Event router Modification date=1/20/2011 Major revision=0 Minor revision=7 
    namespace Nonehilo{    ///<Level configuration register
        using Addr = Register::Address<0x40044000,0xfff60800,0,unsigned>;
        ///Level detect mode for WAKEUP0 event.
        enum class Wakeup0lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 0 in the EDGE register is 0. Detect falling edge if bit 0 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 0 in the EDGE register is 0. Detect rising edge if bit 0 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Wakeup0lVal> wakeup0L{}; 
        namespace Wakeup0lValC{
            constexpr Register::FieldValue<decltype(wakeup0L),Wakeup0lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(wakeup0L),Wakeup0lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for WAKEUP1 event. The corresponding bit in the EDGE register must be 0.
        enum class Wakeup1lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 1 in the EDGE register is 0.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 1 in the EDGE register is 0. Detect rising edge if bit 1 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wakeup1lVal> wakeup1L{}; 
        namespace Wakeup1lValC{
            constexpr Register::FieldValue<decltype(wakeup1L),Wakeup1lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(wakeup1L),Wakeup1lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for WAKEUP2 event.
        enum class Wakeup2lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 2 in the EDGE register is 0. Detect falling edge if bit 2 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 2 in the EDGE register is 0. Detect rising edge if bit 2 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Wakeup2lVal> wakeup2L{}; 
        namespace Wakeup2lValC{
            constexpr Register::FieldValue<decltype(wakeup2L),Wakeup2lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(wakeup2L),Wakeup2lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for WAKEUP3 event.
        enum class Wakeup3lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 3 in the EDGE register is 0. Detect falling edge if bit 3 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 3 in the EDGE register is 0. Detect rising edge if bit 3 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Wakeup3lVal> wakeup3L{}; 
        namespace Wakeup3lValC{
            constexpr Register::FieldValue<decltype(wakeup3L),Wakeup3lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(wakeup3L),Wakeup3lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for alarm timer event.
        enum class AtimerlVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 4 in the EDGE register is 0. Detect falling edge if bit 4 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 4 in the EDGE register is 0. Detect rising edge if bit 4 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AtimerlVal> atimerL{}; 
        namespace AtimerlValC{
            constexpr Register::FieldValue<decltype(atimerL),AtimerlVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(atimerL),AtimerlVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for RTC event.
        enum class RtclVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 5 in the EDGE register is 0. Detect falling edge if bit 5 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 5 in the EDGE register is 0. Detect rising edge if bit 5 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RtclVal> rtcL{}; 
        namespace RtclValC{
            constexpr Register::FieldValue<decltype(rtcL),RtclVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(rtcL),RtclVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for BOD event.
        enum class BodlVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 6 in the EDGE register is 0. Detect falling edge if bit 6 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 6 in the EDGE register is 0. Detect rising edge if bit 6 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,BodlVal> bodL{}; 
        namespace BodlValC{
            constexpr Register::FieldValue<decltype(bodL),BodlVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(bodL),BodlVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for WWDTD event.
        enum class WwdtlVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 7 in the EDGE register is 0. Detect falling edge if bit 7 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 7 in the EDGE register is 0. Detect rising edge if bit 7 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,WwdtlVal> wwdtL{}; 
        namespace WwdtlValC{
            constexpr Register::FieldValue<decltype(wwdtL),WwdtlVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(wwdtL),WwdtlVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for ethernet event.
        enum class EthlVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 8 in the EDGE register is 0. Detect falling edge if bit 8 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 8 in the EDGE register is 0. Detect rising edge if bit 8 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EthlVal> ethL{}; 
        namespace EthlValC{
            constexpr Register::FieldValue<decltype(ethL),EthlVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(ethL),EthlVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for USB0 event.
        enum class Usb0lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 9 in the EDGE register is 0. Detect falling edge if bit 9 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 9 in the EDGE register is 0. Detect rising edge if bit 9 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Usb0lVal> usb0L{}; 
        namespace Usb0lValC{
            constexpr Register::FieldValue<decltype(usb0L),Usb0lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(usb0L),Usb0lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for USB1 event.
        enum class Usb1lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 10 in the EDGE register is 0. Detect falling edge if bit 10 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 10 in the EDGE register is 0. Detect rising edge if bit 10 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Usb1lVal> usb1L{}; 
        namespace Usb1lValC{
            constexpr Register::FieldValue<decltype(usb1L),Usb1lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(usb1L),Usb1lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for C_CAN event.
        enum class CanlVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 12 in the EDGE register is 0. Detect falling edge if bit 12 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 12 in the EDGE register is 0. Detect rising edge if bit 12 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CanlVal> canL{}; 
        namespace CanlValC{
            constexpr Register::FieldValue<decltype(canL),CanlVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(canL),CanlVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for combined timer output 2 event.
        enum class Tim2lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 13 in the EDGE register is 0. Detect falling edge if bit 13 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 13 in the EDGE register is 0. Detect rising edge if bit 13 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Tim2lVal> tim2L{}; 
        namespace Tim2lValC{
            constexpr Register::FieldValue<decltype(tim2L),Tim2lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(tim2L),Tim2lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for combined timer output 6 event.
        enum class Tim6lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 14 in the EDGE register is 0. Detect falling edge if bit 14 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 14 in the EDGE register is 0. Detect rising edge if bit 14 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Tim6lVal> tim6L{}; 
        namespace Tim6lValC{
            constexpr Register::FieldValue<decltype(tim6L),Tim6lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(tim6L),Tim6lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for QEI event.
        enum class QeilVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 15 in the EDGE register is 0. Detect falling edge if bit 15 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 15 in the EDGE register is 0. Detect rising edge if bit 15 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,QeilVal> qeiL{}; 
        namespace QeilValC{
            constexpr Register::FieldValue<decltype(qeiL),QeilVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(qeiL),QeilVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for combined timer output 14 event.
        enum class Tim14lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 16 in the EDGE register is 0. Detect falling edge if bit 16 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 16 in the EDGE register is 0. Detect rising edge if bit 16 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tim14lVal> tim14L{}; 
        namespace Tim14lValC{
            constexpr Register::FieldValue<decltype(tim14L),Tim14lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(tim14L),Tim14lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for RESET event.
        enum class ResetlVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 17 in the EDGE register is 0. Detect falling edge if bit 17 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 17 in the EDGE register is 0. Detect rising edge if bit 17 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ResetlVal> resetL{}; 
        namespace ResetlValC{
            constexpr Register::FieldValue<decltype(resetL),ResetlVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(resetL),ResetlVal::detectHighLevelIf> detectHighLevelIf{};
        }
    }
    namespace Noneedge{    ///<Edge configuration
        using Addr = Register::Address<0x40044004,0xfff60800,0,unsigned>;
        ///Edge detect mode for WAKEUP0 event.
        enum class Wakeup0eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 0 in the HILO register is 0. Detect rising edge if bit 0 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Wakeup0eVal> wakeup0E{}; 
        namespace Wakeup0eValC{
            constexpr Register::FieldValue<decltype(wakeup0E),Wakeup0eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(wakeup0E),Wakeup0eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for WAKEUP1 event. The corresponding bit in the EDGE register must be 0.
        enum class Wakeup1eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 1 in the HILO register is 0. Detect rising edge if bit 1 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wakeup1eVal> wakeup1E{}; 
        namespace Wakeup1eValC{
            constexpr Register::FieldValue<decltype(wakeup1E),Wakeup1eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(wakeup1E),Wakeup1eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for WAKEUP2 event. The corresponding bit in the EDGE register must be 0.
        enum class Wakeup2eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 2 in the HILO register is 0. Detect rising edge if bit 2 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Wakeup2eVal> wakeup2E{}; 
        namespace Wakeup2eValC{
            constexpr Register::FieldValue<decltype(wakeup2E),Wakeup2eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(wakeup2E),Wakeup2eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for WAKEUP3 event. The corresponding bit in the EDGE register must be 0.
        enum class Wakeup3eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 30 in the HILO register is 0. Detect rising edge if bit 3 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Wakeup3eVal> wakeup3E{}; 
        namespace Wakeup3eValC{
            constexpr Register::FieldValue<decltype(wakeup3E),Wakeup3eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(wakeup3E),Wakeup3eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for alarm timer event. The corresponding bit in the EDGE register must be 0.
        enum class AtimereVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 4 in the HILO register is 0. Detect rising edge if bit 4 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AtimereVal> atimerE{}; 
        namespace AtimereValC{
            constexpr Register::FieldValue<decltype(atimerE),AtimereVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(atimerE),AtimereVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for RTC event. The corresponding bit in the EDGE register must be 0.
        enum class RtceVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 5 in the HILO register is 0. Detect rising edge if bit 5 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RtceVal> rtcE{}; 
        namespace RtceValC{
            constexpr Register::FieldValue<decltype(rtcE),RtceVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(rtcE),RtceVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for BOD event. The corresponding bit in the EDGE register must be 0.
        enum class BodeVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 6 in the HILO register is 0. Detect rising edge if bit 6 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,BodeVal> bodE{}; 
        namespace BodeValC{
            constexpr Register::FieldValue<decltype(bodE),BodeVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(bodE),BodeVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for WWDTD event. The corresponding bit in the EDGE register must be 0.
        enum class WwdteVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 7 in the HILO register is 0. Detect rising edge if bit 7 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,WwdteVal> wwdtE{}; 
        namespace WwdteValC{
            constexpr Register::FieldValue<decltype(wwdtE),WwdteVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(wwdtE),WwdteVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for ethernet event. The corresponding bit in the EDGE register must be 0.
        enum class EtheVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 8 in the HILO register is 0. Detect rising edge if bit 8 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EtheVal> ethE{}; 
        namespace EtheValC{
            constexpr Register::FieldValue<decltype(ethE),EtheVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(ethE),EtheVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for USB0 event. The corresponding bit in the EDGE register must be 0.
        enum class Usb0eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 9 in the HILO register is 0. Detect rising edge if bit 9 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Usb0eVal> usb0E{}; 
        namespace Usb0eValC{
            constexpr Register::FieldValue<decltype(usb0E),Usb0eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(usb0E),Usb0eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for USB1 event. The corresponding bit in the EDGE register must be 0.
        enum class Usb1eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 10 in the HILO register is 0. Detect rising edge if bit 10 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Usb1eVal> usb1E{}; 
        namespace Usb1eValC{
            constexpr Register::FieldValue<decltype(usb1E),Usb1eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(usb1E),Usb1eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for C_CAN event. The corresponding bit in the EDGE register must be 0.
        enum class CaneVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 12 in the HILO register is 0. Detect rising edge if bit 12 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CaneVal> canE{}; 
        namespace CaneValC{
            constexpr Register::FieldValue<decltype(canE),CaneVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(canE),CaneVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for combined timer output 2 event. The corresponding bit in the EDGE register must be 0.
        enum class Tim2eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 13 in the HILO register is 0. Detect rising edge if bit 13 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Tim2eVal> tim2E{}; 
        namespace Tim2eValC{
            constexpr Register::FieldValue<decltype(tim2E),Tim2eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(tim2E),Tim2eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for combined timer output 6 event. The corresponding bit in the EDGE register must be 0.
        enum class Tim6eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 14 in the HILO register is 0. Detect rising edge if bit 14 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Tim6eVal> tim6E{}; 
        namespace Tim6eValC{
            constexpr Register::FieldValue<decltype(tim6E),Tim6eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(tim6E),Tim6eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for QEI interrupt signal. The corresponding bit in the EDGE register must be 0.
        enum class QeieVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 15 in the HILO register is 0. Detect rising edge if bit 15 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,QeieVal> qeiE{}; 
        namespace QeieValC{
            constexpr Register::FieldValue<decltype(qeiE),QeieVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(qeiE),QeieVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for combined timer output 14 event. The corresponding bit in the EDGE register must be 0.
        enum class Tim14eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 16 in the HILO register is 0. Detect rising edge if bit 16 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tim14eVal> tim14E{}; 
        namespace Tim14eValC{
            constexpr Register::FieldValue<decltype(tim14E),Tim14eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(tim14E),Tim14eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for RESET event. The corresponding bit in the EDGE register must be 0.
        enum class ReseteVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 19 in the HILO register is 0. Detect rising edge if bit 19 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ReseteVal> resetE{}; 
        namespace ReseteValC{
            constexpr Register::FieldValue<decltype(resetE),ReseteVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(resetE),ReseteVal::edgeDetectDetect> edgeDetectDetect{};
        }
    }
    namespace NoneclrEn{    ///<Event clear enable register
        using Addr = Register::Address<0x40044fd8,0xfff60800,0,unsigned>;
        ///Writing a 1 to this bit clears the event enable bit 0 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0Clren{}; 
        namespace Wakeup0clrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 1 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1Clren{}; 
        namespace Wakeup1clrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 2 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2Clren{}; 
        namespace Wakeup2clrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 3 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3Clren{}; 
        namespace Wakeup3clrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 4 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerClren{}; 
        namespace AtimerclrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 5 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcClren{}; 
        namespace RtcclrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 6 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodClren{}; 
        namespace BodclrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 7 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtClren{}; 
        namespace WwdtclrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 8 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethClren{}; 
        namespace EthclrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 9 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0Clren{}; 
        namespace Usb0clrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 10 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1Clren{}; 
        namespace Usb1clrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 12 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canClren{}; 
        namespace CanclrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 13 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2Clren{}; 
        namespace Tim2clrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 14 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6Clren{}; 
        namespace Tim6clrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 15 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiClren{}; 
        namespace QeiclrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 16 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14Clren{}; 
        namespace Tim14clrenValC{
        }
        ///Writing a 1 to this bit clears the event enable bit 19 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetClren{}; 
        namespace ResetclrenValC{
        }
    }
    namespace NonesetEn{    ///<Event set enable register
        using Addr = Register::Address<0x40044fdc,0xfff60800,0,unsigned>;
        ///Writing a 1 to this bit sets the event enable bit 0 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0Seten{}; 
        namespace Wakeup0setenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 1 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1Seten{}; 
        namespace Wakeup1setenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 2 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2Seten{}; 
        namespace Wakeup2setenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 3 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3Seten{}; 
        namespace Wakeup3setenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 4 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerSeten{}; 
        namespace AtimersetenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 5 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcSeten{}; 
        namespace RtcsetenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 6 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodSeten{}; 
        namespace BodsetenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 7 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtSeten{}; 
        namespace WwdtsetenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 8 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethSeten{}; 
        namespace EthsetenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 9 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0Seten{}; 
        namespace Usb0setenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 10 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1Seten{}; 
        namespace Usb1setenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 12 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canSeten{}; 
        namespace CansetenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 13 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2Seten{}; 
        namespace Tim2setenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 14 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6Seten{}; 
        namespace Tim6setenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 15 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiSeten{}; 
        namespace QeisetenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 16 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14Seten{}; 
        namespace Tim14setenValC{
        }
        ///Writing a 1 to this bit sets the event enable bit 19 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetSeten{}; 
        namespace ResetsetenValC{
        }
    }
    namespace Nonestatus{    ///<Status register
        using Addr = Register::Address<0x40044fe0,0xfff60800,0,unsigned>;
        ///A 1 in this bit shows that the WAKEUP0 event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0St{}; 
        namespace Wakeup0stValC{
        }
        ///A 1 in this bit shows that the WAKEUP1 event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1St{}; 
        namespace Wakeup1stValC{
        }
        ///A 1 in this bit shows that the WAKEUP2 event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2St{}; 
        namespace Wakeup2stValC{
        }
        ///A 1 in this bit shows that the WAKEUP3 event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3St{}; 
        namespace Wakeup3stValC{
        }
        ///A 1 in this bit shows that the ATIMER event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerSt{}; 
        namespace AtimerstValC{
        }
        ///A 1 in this bit shows that the RTC event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcSt{}; 
        namespace RtcstValC{
        }
        ///A 1 in this bit shows that the BOD event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodSt{}; 
        namespace BodstValC{
        }
        ///A 1 in this bit shows that the WWDT event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtSt{}; 
        namespace WwdtstValC{
        }
        ///A 1 in this bit shows that the ETHERNET event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethSt{}; 
        namespace EthstValC{
        }
        ///A 1 in this bit shows that the USB0 event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0St{}; 
        namespace Usb0stValC{
        }
        ///A 1 in this bit shows that the USB1 event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1St{}; 
        namespace Usb1stValC{
        }
        ///A 1 in this bit shows that the C_CAN event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canSt{}; 
        namespace CanstValC{
        }
        ///A 1 in this bit shows that the combined timer 2 output event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2St{}; 
        namespace Tim2stValC{
        }
        ///A 1 in this bit shows that the combined timer 6 output event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6St{}; 
        namespace Tim6stValC{
        }
        ///A 1 in this bit shows that the QEI event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiSt{}; 
        namespace QeistValC{
        }
        ///A 1 in this bit shows that the combined timer 14 output event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14St{}; 
        namespace Tim14stValC{
        }
        ///A 1 in this bit shows that the  event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetSt{}; 
        namespace ResetstValC{
        }
    }
    namespace Noneenable{    ///<Enable register
        using Addr = Register::Address<0x40044fe4,0xfff60800,0,unsigned>;
        ///A 1 in this bit shows that the WAKEUP0 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0En{}; 
        namespace Wakeup0enValC{
        }
        ///A 1 in this bit shows that the WAKEUP1 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1En{}; 
        namespace Wakeup1enValC{
        }
        ///A 1 in this bit shows that the WAKEUP2 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2En{}; 
        namespace Wakeup2enValC{
        }
        ///A 1 in this bit shows that the WAKEUP3 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3En{}; 
        namespace Wakeup3enValC{
        }
        ///A 1 in this bit shows that the ATIMER event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerEn{}; 
        namespace AtimerenValC{
        }
        ///A 1 in this bit shows that the RTC event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcEn{}; 
        namespace RtcenValC{
        }
        ///A 1 in this bit shows that the BOD event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodEn{}; 
        namespace BodenValC{
        }
        ///A 1 in this bit shows that the WWDT event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtEn{}; 
        namespace WwdtenValC{
        }
        ///A 1 in this bit shows that the ETHERNET event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethEn{}; 
        namespace EthenValC{
        }
        ///A 1 in this bit shows that the USB0 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0En{}; 
        namespace Usb0enValC{
        }
        ///A 1 in this bit shows that the USB1 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1En{}; 
        namespace Usb1enValC{
        }
        ///A 1 in this bit shows that the CAN event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canEn{}; 
        namespace CanenValC{
        }
        ///A 1 in this bit shows that the TIM2 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2En{}; 
        namespace Tim2enValC{
        }
        ///A 1 in this bit shows that the TIM6 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6En{}; 
        namespace Tim6enValC{
        }
        ///A 1 in this bit shows that the QEI event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiEn{}; 
        namespace QeienValC{
        }
        ///A 1 in this bit shows that the TIM14 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14En{}; 
        namespace Tim14enValC{
        }
        ///A 1 in this bit shows that the RESET event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetEn{}; 
        namespace ResetenValC{
        }
    }
    namespace NoneclrStat{    ///<Clear register
        using Addr = Register::Address<0x40044fe8,0xfff60800,0,unsigned>;
        ///Writing a 1 to this bit clears the STATUS event bit 0 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0Clrst{}; 
        namespace Wakeup0clrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1Clrst{}; 
        namespace Wakeup1clrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 2 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2Clrst{}; 
        namespace Wakeup2clrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 3 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3Clrst{}; 
        namespace Wakeup3clrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 4 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerClrst{}; 
        namespace AtimerclrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 5 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcClrst{}; 
        namespace RtcclrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 6 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodClrst{}; 
        namespace BodclrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 7 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtClrst{}; 
        namespace WwdtclrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 8 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethClrst{}; 
        namespace EthclrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 9 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0Clrst{}; 
        namespace Usb0clrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 10 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1Clrst{}; 
        namespace Usb1clrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 12 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canClrst{}; 
        namespace CanclrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 13 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2Clrst{}; 
        namespace Tim2clrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 14 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6Clrst{}; 
        namespace Tim6clrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 15 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiClrst{}; 
        namespace QeiclrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 16 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14Clrst{}; 
        namespace Tim14clrstValC{
        }
        ///Writing a 1 to this bit clears the STATUS event bit 19 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetClrst{}; 
        namespace ResetclrstValC{
        }
    }
    namespace NonesetStat{    ///<Set register
        using Addr = Register::Address<0x40044fec,0xfff60800,0,unsigned>;
        ///Writing a 1 to this bit sets the STATUS event bit 0 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0Setst{}; 
        namespace Wakeup0setstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1Setst{}; 
        namespace Wakeup1setstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 2 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2Setst{}; 
        namespace Wakeup2setstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 3 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3Setst{}; 
        namespace Wakeup3setstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 4 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerSetst{}; 
        namespace AtimersetstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 5 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcSetst{}; 
        namespace RtcsetstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 6 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodSetst{}; 
        namespace BodsetstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 7 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtSetst{}; 
        namespace WwdtsetstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 8 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethSetst{}; 
        namespace EthsetstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 9 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0Setst{}; 
        namespace Usb0setstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 10 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1Setst{}; 
        namespace Usb1setstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 12 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canSetst{}; 
        namespace CansetstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 13 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2Setst{}; 
        namespace Tim2setstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 14 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6Setst{}; 
        namespace Tim6setstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 15 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiSetst{}; 
        namespace QeisetstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 16 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14Setst{}; 
        namespace Tim14setstValC{
        }
        ///Writing a 1 to this bit sets the STATUS event bit 19 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetSetst{}; 
        namespace ResetsetstValC{
        }
    }
}
