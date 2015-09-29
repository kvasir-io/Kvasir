#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Event router Modification date=1/20/2011 Major revision=0 Minor revision=7 
    namespace Nonehilo{    ///<Level configuration register
        using Addr = Register::Address<0x40044000,0xfff60800,0,unsigned>;
        ///Level detect mode for WAKEUP0 event.
        enum class wakeup0LVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 0 in the EDGE register is 0. Detect falling edge if bit 0 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 0 in the EDGE register is 0. Detect rising edge if bit 0 in the EDGE register is 1.
        };
        namespace wakeup0LValC{
            constexpr MPL::Value<wakeup0LVal,wakeup0LVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<wakeup0LVal,wakeup0LVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wakeup0LVal> wakeup0L{}; 
        ///Level detect mode for WAKEUP1 event. The corresponding bit in the EDGE register must be 0.
        enum class wakeup1LVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 1 in the EDGE register is 0.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 1 in the EDGE register is 0. Detect rising edge if bit 1 in the EDGE register is 1.
        };
        namespace wakeup1LValC{
            constexpr MPL::Value<wakeup1LVal,wakeup1LVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<wakeup1LVal,wakeup1LVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wakeup1LVal> wakeup1L{}; 
        ///Level detect mode for WAKEUP2 event.
        enum class wakeup2LVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 2 in the EDGE register is 0. Detect falling edge if bit 2 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 2 in the EDGE register is 0. Detect rising edge if bit 2 in the EDGE register is 1.
        };
        namespace wakeup2LValC{
            constexpr MPL::Value<wakeup2LVal,wakeup2LVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<wakeup2LVal,wakeup2LVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wakeup2LVal> wakeup2L{}; 
        ///Level detect mode for WAKEUP3 event.
        enum class wakeup3LVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 3 in the EDGE register is 0. Detect falling edge if bit 3 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 3 in the EDGE register is 0. Detect rising edge if bit 3 in the EDGE register is 1.
        };
        namespace wakeup3LValC{
            constexpr MPL::Value<wakeup3LVal,wakeup3LVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<wakeup3LVal,wakeup3LVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,wakeup3LVal> wakeup3L{}; 
        ///Level detect mode for alarm timer event.
        enum class atimerLVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 4 in the EDGE register is 0. Detect falling edge if bit 4 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 4 in the EDGE register is 0. Detect rising edge if bit 4 in the EDGE register is 1.
        };
        namespace atimerLValC{
            constexpr MPL::Value<atimerLVal,atimerLVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<atimerLVal,atimerLVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,atimerLVal> atimerL{}; 
        ///Level detect mode for RTC event.
        enum class rtcLVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 5 in the EDGE register is 0. Detect falling edge if bit 5 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 5 in the EDGE register is 0. Detect rising edge if bit 5 in the EDGE register is 1.
        };
        namespace rtcLValC{
            constexpr MPL::Value<rtcLVal,rtcLVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<rtcLVal,rtcLVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rtcLVal> rtcL{}; 
        ///Level detect mode for BOD event.
        enum class bodLVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 6 in the EDGE register is 0. Detect falling edge if bit 6 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 6 in the EDGE register is 0. Detect rising edge if bit 6 in the EDGE register is 1.
        };
        namespace bodLValC{
            constexpr MPL::Value<bodLVal,bodLVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<bodLVal,bodLVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bodLVal> bodL{}; 
        ///Level detect mode for WWDTD event.
        enum class wwdtLVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 7 in the EDGE register is 0. Detect falling edge if bit 7 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 7 in the EDGE register is 0. Detect rising edge if bit 7 in the EDGE register is 1.
        };
        namespace wwdtLValC{
            constexpr MPL::Value<wwdtLVal,wwdtLVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<wwdtLVal,wwdtLVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,wwdtLVal> wwdtL{}; 
        ///Level detect mode for ethernet event.
        enum class ethLVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 8 in the EDGE register is 0. Detect falling edge if bit 8 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 8 in the EDGE register is 0. Detect rising edge if bit 8 in the EDGE register is 1.
        };
        namespace ethLValC{
            constexpr MPL::Value<ethLVal,ethLVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<ethLVal,ethLVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ethLVal> ethL{}; 
        ///Level detect mode for USB0 event.
        enum class usb0LVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 9 in the EDGE register is 0. Detect falling edge if bit 9 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 9 in the EDGE register is 0. Detect rising edge if bit 9 in the EDGE register is 1.
        };
        namespace usb0LValC{
            constexpr MPL::Value<usb0LVal,usb0LVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<usb0LVal,usb0LVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,usb0LVal> usb0L{}; 
        ///Level detect mode for USB1 event.
        enum class usb1LVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 10 in the EDGE register is 0. Detect falling edge if bit 10 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 10 in the EDGE register is 0. Detect rising edge if bit 10 in the EDGE register is 1.
        };
        namespace usb1LValC{
            constexpr MPL::Value<usb1LVal,usb1LVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<usb1LVal,usb1LVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,usb1LVal> usb1L{}; 
        ///Level detect mode for C_CAN event.
        enum class canLVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 12 in the EDGE register is 0. Detect falling edge if bit 12 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 12 in the EDGE register is 0. Detect rising edge if bit 12 in the EDGE register is 1.
        };
        namespace canLValC{
            constexpr MPL::Value<canLVal,canLVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<canLVal,canLVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,canLVal> canL{}; 
        ///Level detect mode for combined timer output 2 event.
        enum class tim2LVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 13 in the EDGE register is 0. Detect falling edge if bit 13 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 13 in the EDGE register is 0. Detect rising edge if bit 13 in the EDGE register is 1.
        };
        namespace tim2LValC{
            constexpr MPL::Value<tim2LVal,tim2LVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<tim2LVal,tim2LVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,tim2LVal> tim2L{}; 
        ///Level detect mode for combined timer output 6 event.
        enum class tim6LVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 14 in the EDGE register is 0. Detect falling edge if bit 14 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 14 in the EDGE register is 0. Detect rising edge if bit 14 in the EDGE register is 1.
        };
        namespace tim6LValC{
            constexpr MPL::Value<tim6LVal,tim6LVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<tim6LVal,tim6LVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,tim6LVal> tim6L{}; 
        ///Level detect mode for QEI event.
        enum class qeiLVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 15 in the EDGE register is 0. Detect falling edge if bit 15 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 15 in the EDGE register is 0. Detect rising edge if bit 15 in the EDGE register is 1.
        };
        namespace qeiLValC{
            constexpr MPL::Value<qeiLVal,qeiLVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<qeiLVal,qeiLVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,qeiLVal> qeiL{}; 
        ///Level detect mode for combined timer output 14 event.
        enum class tim14LVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 16 in the EDGE register is 0. Detect falling edge if bit 16 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 16 in the EDGE register is 0. Detect rising edge if bit 16 in the EDGE register is 1.
        };
        namespace tim14LValC{
            constexpr MPL::Value<tim14LVal,tim14LVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<tim14LVal,tim14LVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tim14LVal> tim14L{}; 
        ///Level detect mode for RESET event.
        enum class resetLVal {
            detectLowLevelIf=0x00000000,     ///<Detect LOW level if bit 17 in the EDGE register is 0. Detect falling edge if bit 17 in the EDGE register is 1.
            detectHighLevelIf=0x00000001,     ///<Detect HIGH level if bit 17 in the EDGE register is 0. Detect rising edge if bit 17 in the EDGE register is 1.
        };
        namespace resetLValC{
            constexpr MPL::Value<resetLVal,resetLVal::detectLowLevelIf> detectLowLevelIf{};
            constexpr MPL::Value<resetLVal,resetLVal::detectHighLevelIf> detectHighLevelIf{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,resetLVal> resetL{}; 
    }
    namespace Noneedge{    ///<Edge configuration
        using Addr = Register::Address<0x40044004,0xfff60800,0,unsigned>;
        ///Edge detect mode for WAKEUP0 event.
        enum class wakeup0EVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 0 in the HILO register is 0. Detect rising edge if bit 0 in the HILO register is 1.
        };
        namespace wakeup0EValC{
            constexpr MPL::Value<wakeup0EVal,wakeup0EVal::levelDetect> levelDetect{};
            constexpr MPL::Value<wakeup0EVal,wakeup0EVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wakeup0EVal> wakeup0E{}; 
        ///Edge/level detect mode for WAKEUP1 event. The corresponding bit in the EDGE register must be 0.
        enum class wakeup1EVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 1 in the HILO register is 0. Detect rising edge if bit 1 in the HILO register is 1.
        };
        namespace wakeup1EValC{
            constexpr MPL::Value<wakeup1EVal,wakeup1EVal::levelDetect> levelDetect{};
            constexpr MPL::Value<wakeup1EVal,wakeup1EVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,wakeup1EVal> wakeup1E{}; 
        ///Edge/level detect mode for WAKEUP2 event. The corresponding bit in the EDGE register must be 0.
        enum class wakeup2EVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 2 in the HILO register is 0. Detect rising edge if bit 2 in the HILO register is 1.
        };
        namespace wakeup2EValC{
            constexpr MPL::Value<wakeup2EVal,wakeup2EVal::levelDetect> levelDetect{};
            constexpr MPL::Value<wakeup2EVal,wakeup2EVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,wakeup2EVal> wakeup2E{}; 
        ///Edge/level detect mode for WAKEUP3 event. The corresponding bit in the EDGE register must be 0.
        enum class wakeup3EVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 30 in the HILO register is 0. Detect rising edge if bit 3 in the HILO register is 1.
        };
        namespace wakeup3EValC{
            constexpr MPL::Value<wakeup3EVal,wakeup3EVal::levelDetect> levelDetect{};
            constexpr MPL::Value<wakeup3EVal,wakeup3EVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,wakeup3EVal> wakeup3E{}; 
        ///Edge/level detect mode for alarm timer event. The corresponding bit in the EDGE register must be 0.
        enum class atimerEVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 4 in the HILO register is 0. Detect rising edge if bit 4 in the HILO register is 1.
        };
        namespace atimerEValC{
            constexpr MPL::Value<atimerEVal,atimerEVal::levelDetect> levelDetect{};
            constexpr MPL::Value<atimerEVal,atimerEVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,atimerEVal> atimerE{}; 
        ///Edge/level detect mode for RTC event. The corresponding bit in the EDGE register must be 0.
        enum class rtcEVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 5 in the HILO register is 0. Detect rising edge if bit 5 in the HILO register is 1.
        };
        namespace rtcEValC{
            constexpr MPL::Value<rtcEVal,rtcEVal::levelDetect> levelDetect{};
            constexpr MPL::Value<rtcEVal,rtcEVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rtcEVal> rtcE{}; 
        ///Edge/level detect mode for BOD event. The corresponding bit in the EDGE register must be 0.
        enum class bodEVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 6 in the HILO register is 0. Detect rising edge if bit 6 in the HILO register is 1.
        };
        namespace bodEValC{
            constexpr MPL::Value<bodEVal,bodEVal::levelDetect> levelDetect{};
            constexpr MPL::Value<bodEVal,bodEVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bodEVal> bodE{}; 
        ///Edge/level detect mode for WWDTD event. The corresponding bit in the EDGE register must be 0.
        enum class wwdtEVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 7 in the HILO register is 0. Detect rising edge if bit 7 in the HILO register is 1.
        };
        namespace wwdtEValC{
            constexpr MPL::Value<wwdtEVal,wwdtEVal::levelDetect> levelDetect{};
            constexpr MPL::Value<wwdtEVal,wwdtEVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,wwdtEVal> wwdtE{}; 
        ///Edge/level detect mode for ethernet event. The corresponding bit in the EDGE register must be 0.
        enum class ethEVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 8 in the HILO register is 0. Detect rising edge if bit 8 in the HILO register is 1.
        };
        namespace ethEValC{
            constexpr MPL::Value<ethEVal,ethEVal::levelDetect> levelDetect{};
            constexpr MPL::Value<ethEVal,ethEVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,ethEVal> ethE{}; 
        ///Edge/level detect mode for USB0 event. The corresponding bit in the EDGE register must be 0.
        enum class usb0EVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 9 in the HILO register is 0. Detect rising edge if bit 9 in the HILO register is 1.
        };
        namespace usb0EValC{
            constexpr MPL::Value<usb0EVal,usb0EVal::levelDetect> levelDetect{};
            constexpr MPL::Value<usb0EVal,usb0EVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,usb0EVal> usb0E{}; 
        ///Edge/level detect mode for USB1 event. The corresponding bit in the EDGE register must be 0.
        enum class usb1EVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 10 in the HILO register is 0. Detect rising edge if bit 10 in the HILO register is 1.
        };
        namespace usb1EValC{
            constexpr MPL::Value<usb1EVal,usb1EVal::levelDetect> levelDetect{};
            constexpr MPL::Value<usb1EVal,usb1EVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,usb1EVal> usb1E{}; 
        ///Edge/level detect mode for C_CAN event. The corresponding bit in the EDGE register must be 0.
        enum class canEVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 12 in the HILO register is 0. Detect rising edge if bit 12 in the HILO register is 1.
        };
        namespace canEValC{
            constexpr MPL::Value<canEVal,canEVal::levelDetect> levelDetect{};
            constexpr MPL::Value<canEVal,canEVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,canEVal> canE{}; 
        ///Edge/level detect mode for combined timer output 2 event. The corresponding bit in the EDGE register must be 0.
        enum class tim2EVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 13 in the HILO register is 0. Detect rising edge if bit 13 in the HILO register is 1.
        };
        namespace tim2EValC{
            constexpr MPL::Value<tim2EVal,tim2EVal::levelDetect> levelDetect{};
            constexpr MPL::Value<tim2EVal,tim2EVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,tim2EVal> tim2E{}; 
        ///Edge/level detect mode for combined timer output 6 event. The corresponding bit in the EDGE register must be 0.
        enum class tim6EVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 14 in the HILO register is 0. Detect rising edge if bit 14 in the HILO register is 1.
        };
        namespace tim6EValC{
            constexpr MPL::Value<tim6EVal,tim6EVal::levelDetect> levelDetect{};
            constexpr MPL::Value<tim6EVal,tim6EVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,tim6EVal> tim6E{}; 
        ///Edge/level detect mode for QEI interrupt signal. The corresponding bit in the EDGE register must be 0.
        enum class qeiEVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 15 in the HILO register is 0. Detect rising edge if bit 15 in the HILO register is 1.
        };
        namespace qeiEValC{
            constexpr MPL::Value<qeiEVal,qeiEVal::levelDetect> levelDetect{};
            constexpr MPL::Value<qeiEVal,qeiEVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,qeiEVal> qeiE{}; 
        ///Edge/level detect mode for combined timer output 14 event. The corresponding bit in the EDGE register must be 0.
        enum class tim14EVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 16 in the HILO register is 0. Detect rising edge if bit 16 in the HILO register is 1.
        };
        namespace tim14EValC{
            constexpr MPL::Value<tim14EVal,tim14EVal::levelDetect> levelDetect{};
            constexpr MPL::Value<tim14EVal,tim14EVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,tim14EVal> tim14E{}; 
        ///Edge/level detect mode for RESET event. The corresponding bit in the EDGE register must be 0.
        enum class resetEVal {
            levelDetect=0x00000000,     ///<Level detect.
            edgeDetectDetect=0x00000001,     ///<Edge detect. Detect falling edge if bit 19 in the HILO register is 0. Detect rising edge if bit 19 in the HILO register is 1.
        };
        namespace resetEValC{
            constexpr MPL::Value<resetEVal,resetEVal::levelDetect> levelDetect{};
            constexpr MPL::Value<resetEVal,resetEVal::edgeDetectDetect> edgeDetectDetect{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,resetEVal> resetE{}; 
    }
    namespace NoneclrEn{    ///<Event clear enable register
        using Addr = Register::Address<0x40044fd8,0xfff60800,0,unsigned>;
        ///Writing a 1 to this bit clears the event enable bit 0 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 1 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 2 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 3 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 4 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerClren{}; 
        ///Writing a 1 to this bit clears the event enable bit 5 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcClren{}; 
        ///Writing a 1 to this bit clears the event enable bit 6 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodClren{}; 
        ///Writing a 1 to this bit clears the event enable bit 7 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtClren{}; 
        ///Writing a 1 to this bit clears the event enable bit 8 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethClren{}; 
        ///Writing a 1 to this bit clears the event enable bit 9 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 10 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 12 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canClren{}; 
        ///Writing a 1 to this bit clears the event enable bit 13 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 14 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 15 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiClren{}; 
        ///Writing a 1 to this bit clears the event enable bit 16 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14Clren{}; 
        ///Writing a 1 to this bit clears the event enable bit 19 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetClren{}; 
    }
    namespace NonesetEn{    ///<Event set enable register
        using Addr = Register::Address<0x40044fdc,0xfff60800,0,unsigned>;
        ///Writing a 1 to this bit sets the event enable bit 0 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 1 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 2 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 3 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 4 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerSeten{}; 
        ///Writing a 1 to this bit sets the event enable bit 5 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcSeten{}; 
        ///Writing a 1 to this bit sets the event enable bit 6 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodSeten{}; 
        ///Writing a 1 to this bit sets the event enable bit 7 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtSeten{}; 
        ///Writing a 1 to this bit sets the event enable bit 8 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethSeten{}; 
        ///Writing a 1 to this bit sets the event enable bit 9 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 10 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 12 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canSeten{}; 
        ///Writing a 1 to this bit sets the event enable bit 13 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 14 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 15 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiSeten{}; 
        ///Writing a 1 to this bit sets the event enable bit 16 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14Seten{}; 
        ///Writing a 1 to this bit sets the event enable bit 19 in the ENABLE register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetSeten{}; 
    }
    namespace Nonestatus{    ///<Status register
        using Addr = Register::Address<0x40044fe0,0xfff60800,0,unsigned>;
        ///A 1 in this bit shows that the WAKEUP0 event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0St{}; 
        ///A 1 in this bit shows that the WAKEUP1 event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1St{}; 
        ///A 1 in this bit shows that the WAKEUP2 event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2St{}; 
        ///A 1 in this bit shows that the WAKEUP3 event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3St{}; 
        ///A 1 in this bit shows that the ATIMER event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerSt{}; 
        ///A 1 in this bit shows that the RTC event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcSt{}; 
        ///A 1 in this bit shows that the BOD event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodSt{}; 
        ///A 1 in this bit shows that the WWDT event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtSt{}; 
        ///A 1 in this bit shows that the ETHERNET event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethSt{}; 
        ///A 1 in this bit shows that the USB0 event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0St{}; 
        ///A 1 in this bit shows that the USB1 event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1St{}; 
        ///A 1 in this bit shows that the C_CAN event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canSt{}; 
        ///A 1 in this bit shows that the combined timer 2 output event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2St{}; 
        ///A 1 in this bit shows that the combined timer 6 output event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6St{}; 
        ///A 1 in this bit shows that the QEI event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiSt{}; 
        ///A 1 in this bit shows that the combined timer 14 output event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14St{}; 
        ///A 1 in this bit shows that the  event has been raised.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetSt{}; 
    }
    namespace Noneenable{    ///<Enable register
        using Addr = Register::Address<0x40044fe4,0xfff60800,0,unsigned>;
        ///A 1 in this bit shows that the WAKEUP0 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0En{}; 
        ///A 1 in this bit shows that the WAKEUP1 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1En{}; 
        ///A 1 in this bit shows that the WAKEUP2 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2En{}; 
        ///A 1 in this bit shows that the WAKEUP3 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3En{}; 
        ///A 1 in this bit shows that the ATIMER event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerEn{}; 
        ///A 1 in this bit shows that the RTC event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcEn{}; 
        ///A 1 in this bit shows that the BOD event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodEn{}; 
        ///A 1 in this bit shows that the WWDT event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtEn{}; 
        ///A 1 in this bit shows that the ETHERNET event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethEn{}; 
        ///A 1 in this bit shows that the USB0 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0En{}; 
        ///A 1 in this bit shows that the USB1 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1En{}; 
        ///A 1 in this bit shows that the CAN event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canEn{}; 
        ///A 1 in this bit shows that the TIM2 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2En{}; 
        ///A 1 in this bit shows that the TIM6 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6En{}; 
        ///A 1 in this bit shows that the QEI event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiEn{}; 
        ///A 1 in this bit shows that the TIM14 event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14En{}; 
        ///A 1 in this bit shows that the RESET event has been enabled. This event wakes up the chip and contributes to the event router interrupt when bit 0 = 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetEn{}; 
    }
    namespace NoneclrStat{    ///<Clear register
        using Addr = Register::Address<0x40044fe8,0xfff60800,0,unsigned>;
        ///Writing a 1 to this bit clears the STATUS event bit 0 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 2 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 3 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 4 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerClrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 5 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcClrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 6 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodClrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 7 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtClrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 8 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethClrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 9 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 10 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 12 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canClrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 13 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 14 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 15 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiClrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 16 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14Clrst{}; 
        ///Writing a 1 to this bit clears the STATUS event bit 19 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetClrst{}; 
    }
    namespace NonesetStat{    ///<Set register
        using Addr = Register::Address<0x40044fec,0xfff60800,0,unsigned>;
        ///Writing a 1 to this bit sets the STATUS event bit 0 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wakeup0Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 1 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wakeup1Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 2 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wakeup2Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 3 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wakeup3Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 4 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> atimerSetst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 5 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rtcSetst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 6 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bodSetst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 7 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wwdtSetst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 8 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ethSetst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 9 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> usb0Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 10 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> usb1Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 12 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> canSetst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 13 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tim2Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 14 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> tim6Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 15 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> qeiSetst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 16 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tim14Setst{}; 
        ///Writing a 1 to this bit sets the STATUS event bit 19 in the STATUS register.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> resetSetst{}; 
    }
}
