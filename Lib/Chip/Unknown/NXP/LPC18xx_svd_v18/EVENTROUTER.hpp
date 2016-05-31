#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Event router Modification date=1/20/2011 Major revision=0 Minor revision=7 
    namespace EventrouterHilo{    ///<Level configuration register
        using Addr = Register::Address<0x40044000,0x00000000,0x00000000,unsigned>;
        ///Level detect mode for WAKEUP0 event.
        enum class Wakeup0lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 0 in the EDGE register is 0. Detect falling edge if bit 0 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 0 in the EDGE register is 0. Detect rising edge if bit 0 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Wakeup0lVal> wakeup0L{}; 
        namespace Wakeup0lValC{
            constexpr Register::FieldValue<decltype(wakeup0L)::Type,Wakeup0lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(wakeup0L)::Type,Wakeup0lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for WAKEUP1 event. The corresponding bit in the EDGE register must be 0.
        enum class Wakeup1lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 1 in the EDGE register is 0.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 1 in the EDGE register is 0. Detect rising edge if bit 1 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wakeup1lVal> wakeup1L{}; 
        namespace Wakeup1lValC{
            constexpr Register::FieldValue<decltype(wakeup1L)::Type,Wakeup1lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(wakeup1L)::Type,Wakeup1lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for WAKEUP2 event.
        enum class Wakeup2lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 2 in the EDGE register is 0. Detect falling edge if bit 2 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 2 in the EDGE register is 0. Detect rising edge if bit 2 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Wakeup2lVal> wakeup2L{}; 
        namespace Wakeup2lValC{
            constexpr Register::FieldValue<decltype(wakeup2L)::Type,Wakeup2lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(wakeup2L)::Type,Wakeup2lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for WAKEUP3 event.
        enum class Wakeup3lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 3 in the EDGE register is 0. Detect falling edge if bit 3 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 3 in the EDGE register is 0. Detect rising edge if bit 3 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Wakeup3lVal> wakeup3L{}; 
        namespace Wakeup3lValC{
            constexpr Register::FieldValue<decltype(wakeup3L)::Type,Wakeup3lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(wakeup3L)::Type,Wakeup3lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for alarm timer event.
        enum class AtimerlVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 4 in the EDGE register is 0. Detect falling edge if bit 4 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 4 in the EDGE register is 0. Detect rising edge if bit 4 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AtimerlVal> atimerL{}; 
        namespace AtimerlValC{
            constexpr Register::FieldValue<decltype(atimerL)::Type,AtimerlVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(atimerL)::Type,AtimerlVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for RTC event.
        enum class RtclVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 5 in the EDGE register is 0. Detect falling edge if bit 5 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 5 in the EDGE register is 0. Detect rising edge if bit 5 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RtclVal> rtcL{}; 
        namespace RtclValC{
            constexpr Register::FieldValue<decltype(rtcL)::Type,RtclVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(rtcL)::Type,RtclVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for BOD event.
        enum class BodlVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 6 in the EDGE register is 0. Detect falling edge if bit 6 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 6 in the EDGE register is 0. Detect rising edge if bit 6 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,BodlVal> bodL{}; 
        namespace BodlValC{
            constexpr Register::FieldValue<decltype(bodL)::Type,BodlVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(bodL)::Type,BodlVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for WWDTD event.
        enum class WwdtlVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 7 in the EDGE register is 0. Detect falling edge if bit 7 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 7 in the EDGE register is 0. Detect rising edge if bit 7 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,WwdtlVal> wwdtL{}; 
        namespace WwdtlValC{
            constexpr Register::FieldValue<decltype(wwdtL)::Type,WwdtlVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(wwdtL)::Type,WwdtlVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for ethernet event.
        enum class EthlVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 8 in the EDGE register is 0. Detect falling edge if bit 8 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 8 in the EDGE register is 0. Detect rising edge if bit 8 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EthlVal> ethL{}; 
        namespace EthlValC{
            constexpr Register::FieldValue<decltype(ethL)::Type,EthlVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(ethL)::Type,EthlVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for USB0 event.
        enum class Usb0lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 9 in the EDGE register is 0. Detect falling edge if bit 9 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 9 in the EDGE register is 0. Detect rising edge if bit 9 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Usb0lVal> usb0L{}; 
        namespace Usb0lValC{
            constexpr Register::FieldValue<decltype(usb0L)::Type,Usb0lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(usb0L)::Type,Usb0lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for USB1 event.
        enum class Usb1lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 10 in the EDGE register is 0. Detect falling edge if bit 10 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 10 in the EDGE register is 0. Detect rising edge if bit 10 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Usb1lVal> usb1L{}; 
        namespace Usb1lValC{
            constexpr Register::FieldValue<decltype(usb1L)::Type,Usb1lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(usb1L)::Type,Usb1lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Level detect mode for C_CAN event.
        enum class CanlVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 12 in the EDGE register is 0. Detect falling edge if bit 12 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 12 in the EDGE register is 0. Detect rising edge if bit 12 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CanlVal> canL{}; 
        namespace CanlValC{
            constexpr Register::FieldValue<decltype(canL)::Type,CanlVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(canL)::Type,CanlVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for combined timer output 2 event.
        enum class Tim2lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 13 in the EDGE register is 0. Detect falling edge if bit 13 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 13 in the EDGE register is 0. Detect rising edge if bit 13 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Tim2lVal> tim2L{}; 
        namespace Tim2lValC{
            constexpr Register::FieldValue<decltype(tim2L)::Type,Tim2lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(tim2L)::Type,Tim2lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for combined timer output 6 event.
        enum class Tim6lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 14 in the EDGE register is 0. Detect falling edge if bit 14 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 14 in the EDGE register is 0. Detect rising edge if bit 14 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Tim6lVal> tim6L{}; 
        namespace Tim6lValC{
            constexpr Register::FieldValue<decltype(tim6L)::Type,Tim6lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(tim6L)::Type,Tim6lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for QEI event.
        enum class QeilVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 15 in the EDGE register is 0. Detect falling edge if bit 15 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 15 in the EDGE register is 0. Detect rising edge if bit 15 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,QeilVal> qeiL{}; 
        namespace QeilValC{
            constexpr Register::FieldValue<decltype(qeiL)::Type,QeilVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(qeiL)::Type,QeilVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Level detect mode for combined timer output 14 event.
        enum class Tim14lVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 16 in the EDGE register is 0. Detect falling edge if bit 16 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 16 in the EDGE register is 0. Detect rising edge if bit 16 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tim14lVal> tim14L{}; 
        namespace Tim14lValC{
            constexpr Register::FieldValue<decltype(tim14L)::Type,Tim14lVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(tim14L)::Type,Tim14lVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Level detect mode for RESET event.
        enum class ResetlVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 17 in the EDGE register is 0. Detect falling edge if bit 17 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 17 in the EDGE register is 0. Detect rising edge if bit 17 in the EDGE register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ResetlVal> resetL{}; 
        namespace ResetlValC{
            constexpr Register::FieldValue<decltype(resetL)::Type,ResetlVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr Register::FieldValue<decltype(resetL)::Type,ResetlVal::detectHighLevelIf> detectHighLevelIf{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EventrouterEdge{    ///<Edge configuration
        using Addr = Register::Address<0x40044004,0x00000000,0x00000000,unsigned>;
        ///Edge detect mode for WAKEUP0 event.
        enum class Wakeup0eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 0 in the HILO register is 0. Detect rising edge if bit 0 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Wakeup0eVal> wakeup0E{}; 
        namespace Wakeup0eValC{
            constexpr Register::FieldValue<decltype(wakeup0E)::Type,Wakeup0eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(wakeup0E)::Type,Wakeup0eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for WAKEUP1 event. The corresponding bit in the EDGE register must be 0.
        enum class Wakeup1eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 1 in the HILO register is 0. Detect rising edge if bit 1 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Wakeup1eVal> wakeup1E{}; 
        namespace Wakeup1eValC{
            constexpr Register::FieldValue<decltype(wakeup1E)::Type,Wakeup1eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(wakeup1E)::Type,Wakeup1eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for WAKEUP2 event. The corresponding bit in the EDGE register must be 0.
        enum class Wakeup2eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 2 in the HILO register is 0. Detect rising edge if bit 2 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Wakeup2eVal> wakeup2E{}; 
        namespace Wakeup2eValC{
            constexpr Register::FieldValue<decltype(wakeup2E)::Type,Wakeup2eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(wakeup2E)::Type,Wakeup2eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for WAKEUP3 event. The corresponding bit in the EDGE register must be 0.
        enum class Wakeup3eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 30 in the HILO register is 0. Detect rising edge if bit 3 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Wakeup3eVal> wakeup3E{}; 
        namespace Wakeup3eValC{
            constexpr Register::FieldValue<decltype(wakeup3E)::Type,Wakeup3eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(wakeup3E)::Type,Wakeup3eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for alarm timer event. The corresponding bit in the EDGE register must be 0.
        enum class AtimereVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 4 in the HILO register is 0. Detect rising edge if bit 4 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AtimereVal> atimerE{}; 
        namespace AtimereValC{
            constexpr Register::FieldValue<decltype(atimerE)::Type,AtimereVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(atimerE)::Type,AtimereVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for RTC event. The corresponding bit in the EDGE register must be 0.
        enum class RtceVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 5 in the HILO register is 0. Detect rising edge if bit 5 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RtceVal> rtcE{}; 
        namespace RtceValC{
            constexpr Register::FieldValue<decltype(rtcE)::Type,RtceVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(rtcE)::Type,RtceVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for BOD event. The corresponding bit in the EDGE register must be 0.
        enum class BodeVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 6 in the HILO register is 0. Detect rising edge if bit 6 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,BodeVal> bodE{}; 
        namespace BodeValC{
            constexpr Register::FieldValue<decltype(bodE)::Type,BodeVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(bodE)::Type,BodeVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for WWDTD event. The corresponding bit in the EDGE register must be 0.
        enum class WwdteVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 7 in the HILO register is 0. Detect rising edge if bit 7 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,WwdteVal> wwdtE{}; 
        namespace WwdteValC{
            constexpr Register::FieldValue<decltype(wwdtE)::Type,WwdteVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(wwdtE)::Type,WwdteVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for ethernet event. The corresponding bit in the EDGE register must be 0.
        enum class EtheVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 8 in the HILO register is 0. Detect rising edge if bit 8 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,EtheVal> ethE{}; 
        namespace EtheValC{
            constexpr Register::FieldValue<decltype(ethE)::Type,EtheVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(ethE)::Type,EtheVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for USB0 event. The corresponding bit in the EDGE register must be 0.
        enum class Usb0eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 9 in the HILO register is 0. Detect rising edge if bit 9 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Usb0eVal> usb0E{}; 
        namespace Usb0eValC{
            constexpr Register::FieldValue<decltype(usb0E)::Type,Usb0eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(usb0E)::Type,Usb0eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for USB1 event. The corresponding bit in the EDGE register must be 0.
        enum class Usb1eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 10 in the HILO register is 0. Detect rising edge if bit 10 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Usb1eVal> usb1E{}; 
        namespace Usb1eValC{
            constexpr Register::FieldValue<decltype(usb1E)::Type,Usb1eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(usb1E)::Type,Usb1eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Edge/level detect mode for C_CAN event. The corresponding bit in the EDGE register must be 0.
        enum class CaneVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 12 in the HILO register is 0. Detect rising edge if bit 12 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CaneVal> canE{}; 
        namespace CaneValC{
            constexpr Register::FieldValue<decltype(canE)::Type,CaneVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(canE)::Type,CaneVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for combined timer output 2 event. The corresponding bit in the EDGE register must be 0.
        enum class Tim2eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 13 in the HILO register is 0. Detect rising edge if bit 13 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Tim2eVal> tim2E{}; 
        namespace Tim2eValC{
            constexpr Register::FieldValue<decltype(tim2E)::Type,Tim2eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(tim2E)::Type,Tim2eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for combined timer output 6 event. The corresponding bit in the EDGE register must be 0.
        enum class Tim6eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 14 in the HILO register is 0. Detect rising edge if bit 14 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Tim6eVal> tim6E{}; 
        namespace Tim6eValC{
            constexpr Register::FieldValue<decltype(tim6E)::Type,Tim6eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(tim6E)::Type,Tim6eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for QEI interrupt signal. The corresponding bit in the EDGE register must be 0.
        enum class QeieVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 15 in the HILO register is 0. Detect rising edge if bit 15 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,QeieVal> qeiE{}; 
        namespace QeieValC{
            constexpr Register::FieldValue<decltype(qeiE)::Type,QeieVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(qeiE)::Type,QeieVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Edge/level detect mode for combined timer output 14 event. The corresponding bit in the EDGE register must be 0.
        enum class Tim14eVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 16 in the HILO register is 0. Detect rising edge if bit 16 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Tim14eVal> tim14E{}; 
        namespace Tim14eValC{
            constexpr Register::FieldValue<decltype(tim14E)::Type,Tim14eVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(tim14E)::Type,Tim14eVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Edge/level detect mode for RESET event. The corresponding bit in the EDGE register must be 0.
        enum class ReseteVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 19 in the HILO register is 0. Detect rising edge if bit 19 in the HILO register is 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ReseteVal> resetE{}; 
        namespace ReseteValC{
            constexpr Register::FieldValue<decltype(resetE)::Type,ReseteVal::levelDetect> levelDetect{};
            constexpr Register::FieldValue<decltype(resetE)::Type,ReseteVal::edgeDetectDetect> edgeDetectDetect{};
        }
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EventrouterClrEn{    ///<Event clear enable register
        using Addr = Register::Address<0x40044fd8,0x00000000,0x00000000,unsigned>;
        ///Writing a 1 to this bit clears the event enable bit 0 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 1 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 2 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 3 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 4 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerClren{}; 
        ///Writing a 1 to this bit clears the event enable bit 5 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcClren{}; 
        ///Writing a 1 to this bit clears the event enable bit 6 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodClren{}; 
        ///Writing a 1 to this bit clears the event enable bit 7 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtClren{}; 
        ///Writing a 1 to this bit clears the event enable bit 8 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethClren{}; 
        ///Writing a 1 to this bit clears the event enable bit 9 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 10 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1Clren{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing a 1 to this bit clears the event enable bit 12 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canClren{}; 
        ///Writing a 1 to this bit clears the event enable bit 13 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 14 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 15 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiClren{}; 
        ///Writing a 1 to this bit clears the event enable bit 16 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14Clren{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing a 1 to this bit clears the event enable bit 19 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetClren{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EventrouterSetEn{    ///<Event set enable register
        using Addr = Register::Address<0x40044fdc,0x00000000,0x00000000,unsigned>;
        ///Writing a 1 to this bit sets the event enable bit 0 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 1 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 2 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 3 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 4 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerSeten{}; 
        ///Writing a 1 to this bit sets the event enable bit 5 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcSeten{}; 
        ///Writing a 1 to this bit sets the event enable bit 6 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodSeten{}; 
        ///Writing a 1 to this bit sets the event enable bit 7 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtSeten{}; 
        ///Writing a 1 to this bit sets the event enable bit 8 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethSeten{}; 
        ///Writing a 1 to this bit sets the event enable bit 9 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 10 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1Seten{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing a 1 to this bit sets the event enable bit 12 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canSeten{}; 
        ///Writing a 1 to this bit sets the event enable bit 13 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 14 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 15 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiSeten{}; 
        ///Writing a 1 to this bit sets the event enable bit 16 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14Seten{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing a 1 to this bit sets the event enable bit 19 in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetSeten{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EventrouterStatus{    ///<Status register
        using Addr = Register::Address<0x40044fe0,0x00000000,0x00000000,unsigned>;
        ///A 1 in this bit shows that the WAKEUP0 event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0St{}; 
        ///A 1 in this bit shows that the WAKEUP1 event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1St{}; 
        ///A 1 in this bit shows that the WAKEUP2 event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2St{}; 
        ///A 1 in this bit shows that the WAKEUP3 event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3St{}; 
        ///A 1 in this bit shows that the ATIMER event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerSt{}; 
        ///A 1 in this bit shows that the RTC event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcSt{}; 
        ///A 1 in this bit shows that the BOD event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodSt{}; 
        ///A 1 in this bit shows that the WWDT event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtSt{}; 
        ///A 1 in this bit shows that the ETHERNET event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethSt{}; 
        ///A 1 in this bit shows that the USB0 event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0St{}; 
        ///A 1 in this bit shows that the USB1 event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1St{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///A 1 in this bit shows that the C_CAN event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canSt{}; 
        ///A 1 in this bit shows that the combined timer 2 output event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2St{}; 
        ///A 1 in this bit shows that the combined timer 6 output event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6St{}; 
        ///A 1 in this bit shows that the QEI event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiSt{}; 
        ///A 1 in this bit shows that the combined timer 14 output event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14St{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///A 1 in this bit shows that the  event has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetSt{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EventrouterEnable{    ///<Enable register
        using Addr = Register::Address<0x40044fe4,0x00000000,0x00000000,unsigned>;
        ///A 1 in this bit shows that the WAKEUP0 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0En{}; 
        ///A 1 in this bit shows that the WAKEUP1 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1En{}; 
        ///A 1 in this bit shows that the WAKEUP2 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2En{}; 
        ///A 1 in this bit shows that the WAKEUP3 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3En{}; 
        ///A 1 in this bit shows that the ATIMER event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerEn{}; 
        ///A 1 in this bit shows that the RTC event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcEn{}; 
        ///A 1 in this bit shows that the BOD event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodEn{}; 
        ///A 1 in this bit shows that the WWDT event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtEn{}; 
        ///A 1 in this bit shows that the ETHERNET event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethEn{}; 
        ///A 1 in this bit shows that the USB0 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0En{}; 
        ///A 1 in this bit shows that the USB1 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1En{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///A 1 in this bit shows that the CAN event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canEn{}; 
        ///A 1 in this bit shows that the TIM2 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2En{}; 
        ///A 1 in this bit shows that the TIM6 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6En{}; 
        ///A 1 in this bit shows that the QEI event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiEn{}; 
        ///A 1 in this bit shows that the TIM14 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14En{}; 
        ///tbd.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///A 1 in this bit shows that the RESET event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetEn{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EventrouterClrStat{    ///<Clear register
        using Addr = Register::Address<0x40044fe8,0x00000000,0x00000000,unsigned>;
        ///Writing a 1 to this bit clears the STATUS event bit 0 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 2 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 3 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 4 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerClrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 5 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcClrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 6 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodClrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 7 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtClrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 8 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethClrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 9 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 10 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1Clrst{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 12 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canClrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 13 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 14 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 15 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiClrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 16 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14Clrst{}; 
        ///tbd.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 19 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetClrst{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace EventrouterSetStat{    ///<Set register
        using Addr = Register::Address<0x40044fec,0x00000000,0x00000000,unsigned>;
        ///Writing a 1 to this bit sets the STATUS event bit 0 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 2 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 3 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 4 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerSetst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 5 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcSetst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 6 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodSetst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 7 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtSetst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 8 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethSetst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 9 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 10 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1Setst{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 12 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canSetst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 13 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 14 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 15 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiSetst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 16 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14Setst{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 19 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetSetst{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
