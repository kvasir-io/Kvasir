#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power control
    namespace Nonecr{    ///<power control register
        using Addr = Register::Address<0x40007000,0xffc01000,0,unsigned>;
        ///Low-power deep sleep
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpds{}; 
        namespace LpdsValC{
        }
        ///Power down deepsleep
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdds{}; 
        namespace PddsValC{
        }
        ///Clear wakeup flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cwuf{}; 
        namespace CwufValC{
        }
        ///Clear standby flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csbf{}; 
        namespace CsbfValC{
        }
        ///Power voltage detector
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pvde{}; 
        namespace PvdeValC{
        }
        ///PVD level selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> pls{}; 
        namespace PlsValC{
        }
        ///Disable backup domain write
              protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbp{}; 
        namespace DbpValC{
        }
        ///Flash power down in Stop
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fpds{}; 
        namespace FpdsValC{
        }
        ///Low-Power Regulator Low Voltage in
              deepsleep
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lplvds{}; 
        namespace LplvdsValC{
        }
        ///Main regulator low voltage in deepsleep
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mrlvds{}; 
        namespace MrlvdsValC{
        }
        ///ADCDC1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> adcdc1{}; 
        namespace Adcdc1ValC{
        }
        ///Regulator voltage scaling output
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> vos{}; 
        namespace VosValC{
        }
        ///Over-drive enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> oden{}; 
        namespace OdenValC{
        }
        ///Over-drive switching
              enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> odswen{}; 
        namespace OdswenValC{
        }
        ///Under-drive enable in stop
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> uden{}; 
        namespace UdenValC{
        }
        ///Flash Memory Stop while System
              Run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> fmssr{}; 
        namespace FmssrValC{
        }
        ///Flash Interface Stop while System
              Run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> fissr{}; 
        namespace FissrValC{
        }
    }
    namespace Nonecsr{    ///<power control/status register
        using Addr = Register::Address<0x40007004,0xfff0bc70,0,unsigned>;
        ///Wakeup flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wuf{}; 
        namespace WufValC{
        }
        ///Standby flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sbf{}; 
        namespace SbfValC{
        }
        ///PVD output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pvdo{}; 
        namespace PvdoValC{
        }
        ///Backup regulator ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brr{}; 
        namespace BrrValC{
        }
        ///Enable WKUP2 pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ewup2{}; 
        namespace Ewup2ValC{
        }
        ///Enable WKUP pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ewup{}; 
        namespace EwupValC{
        }
        ///Backup regulator enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bre{}; 
        namespace BreValC{
        }
        ///Regulator voltage scaling output
              selection ready bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> vosrdy{}; 
        namespace VosrdyValC{
        }
        ///Over-drive mode ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> odrdy{}; 
        namespace OdrdyValC{
        }
        ///Over-drive mode switching
              ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> odswrdy{}; 
        namespace OdswrdyValC{
        }
        ///Under-drive ready flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> udrdy{}; 
        namespace UdrdyValC{
        }
    }
}
