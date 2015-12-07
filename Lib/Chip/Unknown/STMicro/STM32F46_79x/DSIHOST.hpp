#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DSI Host
    namespace NonedsiVr{    ///<DSI Host Version Register
        using Addr = Register::Address<0x40016c00,0x00000000,0,unsigned>;
        ///Version of the DSI Host
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> version{}; 
        namespace VersionValC{
        }
    }
    namespace NonedsiCr{    ///<DSI Host Control Register
        using Addr = Register::Address<0x40016c04,0xfffffffe,0,unsigned>;
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace NonedsihsotCcr{    ///<DSI HOST Clock Control
          Register
        using Addr = Register::Address<0x40016c08,0xffff0000,0,unsigned>;
        ///TOCKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tockdiv{}; 
        namespace TockdivValC{
        }
        ///TXECKDIV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txeckdiv{}; 
        namespace TxeckdivValC{
        }
    }
    namespace NonedsiLvcidr{    ///<DSI Host LTDC VCID Register
        using Addr = Register::Address<0x40016c0c,0xfffffffc,0,unsigned>;
        ///Virtual Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> vcid{}; 
        namespace VcidValC{
        }
    }
    namespace NonedsiLcolcr{    ///<DSI Host LTDC Color Coding
          Register
        using Addr = Register::Address<0x40016c10,0xfffffef0,0,unsigned>;
        ///Loosely Packet Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lpe{}; 
        namespace LpeValC{
        }
        ///Color Coding
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> colc{}; 
        namespace ColcValC{
        }
    }
    namespace NonedsiLpcr{    ///<DSI Host LTDC Polarity Configuration
          Register
        using Addr = Register::Address<0x40016c14,0xfffffff8,0,unsigned>;
        ///HSYNC Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hsp{}; 
        namespace HspValC{
        }
        ///VSYNC Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vsp{}; 
        namespace VspValC{
        }
        ///Data Enable Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dep{}; 
        namespace DepValC{
        }
    }
    namespace NonedsiLpmcr{    ///<DSI Host Low-Power Mode Configuration
          Register
        using Addr = Register::Address<0x40016c18,0xff00ff00,0,unsigned>;
        ///Largest Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lpsize{}; 
        namespace LpsizeValC{
        }
        ///VACT Largest Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> vlpsize{}; 
        namespace VlpsizeValC{
        }
    }
    namespace NonedsiPcr{    ///<DSI Host Protocol Configuration
          Register
        using Addr = Register::Address<0x40016c2c,0xffffffe0,0,unsigned>;
        ///CRC Reception Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crcrxe{}; 
        namespace CrcrxeValC{
        }
        ///ECC Reception Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eccrxe{}; 
        namespace EccrxeValC{
        }
        ///Bus Turn Around Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btae{}; 
        namespace BtaeValC{
        }
        ///EoTp Reception Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> etrxe{}; 
        namespace EtrxeValC{
        }
        ///EoTp Transmission Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ettxe{}; 
        namespace EttxeValC{
        }
    }
    namespace NonedsiGvcidr{    ///<DSI Host Generic VCID Register
        using Addr = Register::Address<0x40016c30,0xfffffffc,0,unsigned>;
        ///Virtual Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> vcid{}; 
        namespace VcidValC{
        }
    }
    namespace NonedsiMcr{    ///<DSI Host Mode Configuration
          Register
        using Addr = Register::Address<0x40016c34,0xfffffffe,0,unsigned>;
        ///Command mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdm{}; 
        namespace CmdmValC{
        }
    }
    namespace NonedsiVmcr{    ///<DSI Host Video mode Configuration
          Register
        using Addr = Register::Address<0x40016c38,0xfeee00fc,0,unsigned>;
        ///Pattern Generator
              Orientation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pgo{}; 
        namespace PgoValC{
        }
        ///Pattern Generator Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pgm{}; 
        namespace PgmValC{
        }
        ///Pattern Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pge{}; 
        namespace PgeValC{
        }
        ///Low-Power Command Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lpce{}; 
        namespace LpceValC{
        }
        ///Frame Bus-Turn-Around Acknowledge
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fbtaae{}; 
        namespace FbtaaeValC{
        }
        ///Low-Power Horizontal Front-Porch
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lphfe{}; 
        namespace LphfeValC{
        }
        ///Low-Power Horizontal Back-Porch
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lphbpe{}; 
        namespace LphbpeValC{
        }
        ///Low-Power Vertical Active
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lvae{}; 
        namespace LvaeValC{
        }
        ///Low-power Vertical Front-porch
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lpvfpe{}; 
        namespace LpvfpeValC{
        }
        ///Low-power Vertical Back-Porch
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lpvbpe{}; 
        namespace LpvbpeValC{
        }
        ///Low-Power Vertical Sync Active
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lpvsae{}; 
        namespace LpvsaeValC{
        }
        ///Video mode Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> vmt{}; 
        namespace VmtValC{
        }
    }
    namespace NonedsiVpcr{    ///<DSI Host Video Packet Configuration
          Register
        using Addr = Register::Address<0x40016c3c,0xffff8000,0,unsigned>;
        ///Video Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> vpsize{}; 
        namespace VpsizeValC{
        }
    }
    namespace NonedsiVccr{    ///<DSI Host Video Chunks Configuration
          Register
        using Addr = Register::Address<0x40016c40,0xffffc000,0,unsigned>;
        ///Number of Chunks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> numc{}; 
        namespace NumcValC{
        }
    }
    namespace NonedsiVnpcr{    ///<DSI Host Video Null Packet Configuration
          Register
        using Addr = Register::Address<0x40016c44,0xffffc000,0,unsigned>;
        ///Null Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> npsize{}; 
        namespace NpsizeValC{
        }
    }
    namespace NonedsiVhsacr{    ///<DSI Host Video HSA Configuration
          Register
        using Addr = Register::Address<0x40016c48,0xffffe000,0,unsigned>;
        ///Horizontal Synchronism Active
              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> hsa{}; 
        namespace HsaValC{
        }
    }
    namespace NonedsiVhbpcr{    ///<DSI Host Video HBP Configuration
          Register
        using Addr = Register::Address<0x40016c4c,0xffffe000,0,unsigned>;
        ///Horizontal Back-Porch
              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> hbp{}; 
        namespace HbpValC{
        }
    }
    namespace NonedsiVlcr{    ///<DSI Host Video Line Configuration
          Register
        using Addr = Register::Address<0x40016c50,0xffff8000,0,unsigned>;
        ///Horizontal Line duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> hline{}; 
        namespace HlineValC{
        }
    }
    namespace NonedsiVvsacr{    ///<DSI Host Video VSA Configuration
          Register
        using Addr = Register::Address<0x40016c54,0xfffffc00,0,unsigned>;
        ///Vertical Synchronism Active
              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> vsa{}; 
        namespace VsaValC{
        }
    }
    namespace NonedsiVvbpcr{    ///<DSI Host Video VBP Configuration
          Register
        using Addr = Register::Address<0x40016c58,0xfffffc00,0,unsigned>;
        ///Vertical Back-Porch
              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> vbp{}; 
        namespace VbpValC{
        }
    }
    namespace NonedsiVvfpcr{    ///<DSI Host Video VFP Configuration
          Register
        using Addr = Register::Address<0x40016c5c,0xfffffc00,0,unsigned>;
        ///Vertical Front-Porch
              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> vfp{}; 
        namespace VfpValC{
        }
    }
    namespace NonedsiVvacr{    ///<DSI Host Video VA Configuration
          Register
        using Addr = Register::Address<0x40016c60,0xffffc000,0,unsigned>;
        ///Vertical Active duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> va{}; 
        namespace VaValC{
        }
    }
    namespace NonedsiLccr{    ///<DSI Host LTDC Command Configuration
          Register
        using Addr = Register::Address<0x40016c64,0xffff0000,0,unsigned>;
        ///Command Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cmdsize{}; 
        namespace CmdsizeValC{
        }
    }
    namespace NonedsiCmcr{    ///<DSI Host Command mode Configuration
          Register
        using Addr = Register::Address<0x40016c68,0xfef080fc,0,unsigned>;
        ///Maximum Read Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> mrdps{}; 
        namespace MrdpsValC{
        }
        ///DCS Long Write
              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dlwtx{}; 
        namespace DlwtxValC{
        }
        ///DCS Short Read Zero parameter
              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> dsr0tx{}; 
        namespace Dsr0txValC{
        }
        ///DCS Short Read One parameter
              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dsw1tx{}; 
        namespace Dsw1txValC{
        }
        ///DCS Short Write Zero parameter
              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> dsw0tx{}; 
        namespace Dsw0txValC{
        }
        ///Generic Long Write
              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> glwtx{}; 
        namespace GlwtxValC{
        }
        ///Generic Short Read Two parameters
              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> gsr2tx{}; 
        namespace Gsr2txValC{
        }
        ///Generic Short Read One parameters
              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gsr1tx{}; 
        namespace Gsr1txValC{
        }
        ///Generic Short Read Zero parameters
              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gsr0tx{}; 
        namespace Gsr0txValC{
        }
        ///Generic Short Write Two parameters
              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gsw2tx{}; 
        namespace Gsw2txValC{
        }
        ///Generic Short Write One parameters
              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gsw1tx{}; 
        namespace Gsw1txValC{
        }
        ///Generic Short Write Zero parameters
              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gsw0tx{}; 
        namespace Gsw0txValC{
        }
        ///Acknowledge Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> are{}; 
        namespace AreValC{
        }
        ///Tearing Effect Acknowledge Request
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teare{}; 
        namespace TeareValC{
        }
    }
    namespace NonedsiGhcr{    ///<DSI Host Generic Header Configuration
          Register
        using Addr = Register::Address<0x40016c6c,0xff000000,0,unsigned>;
        ///WordCount MSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wcmsb{}; 
        namespace WcmsbValC{
        }
        ///WordCount LSB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wclsb{}; 
        namespace WclsbValC{
        }
        ///Channel
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> vcid{}; 
        namespace VcidValC{
        }
        ///Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> dt{}; 
        namespace DtValC{
        }
    }
    namespace NonedsiGpdr{    ///<DSI Host Generic Payload Data
          Register
        using Addr = Register::Address<0x40016c70,0x00000000,0,unsigned>;
        ///Payload Byte 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
        ///Payload Byte 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
        ///Payload Byte 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
        ///Payload Byte 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
    }
    namespace NonedsiGpsr{    ///<DSI Host Generic Packet Status
          Register
        using Addr = Register::Address<0x40016c74,0xffffff80,0,unsigned>;
        ///RCB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rcb{}; 
        namespace RcbValC{
        }
        ///PRDFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> prdff{}; 
        namespace PrdffValC{
        }
        ///PRDFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> prdfe{}; 
        namespace PrdfeValC{
        }
        ///PWRFF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pwrff{}; 
        namespace PwrffValC{
        }
        ///PWRFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pwrfe{}; 
        namespace PwrfeValC{
        }
        ///Acknowledge Request Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmdff{}; 
        namespace CmdffValC{
        }
        ///Tearing Effect Acknowledge Request
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmdfe{}; 
        namespace CmdfeValC{
        }
    }
    namespace NonedsiTccr1{    ///<DSI Host Timeout Counter Configuration
          Register1
        using Addr = Register::Address<0x40016c78,0x00000000,0,unsigned>;
        ///High-Speed Transmission Timeout
              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> hstxTocnt{}; 
        namespace HstxtocntValC{
        }
        ///Low-power Reception Timeout
              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lprxTocnt{}; 
        namespace LprxtocntValC{
        }
    }
    namespace NonedsiTccr2{    ///<DSI Host Timeout Counter Configuration
          Register2
        using Addr = Register::Address<0x40016c7c,0xffff0000,0,unsigned>;
        ///High-Speed Read Timeout
              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hsrdTocnt{}; 
        namespace HsrdtocntValC{
        }
    }
    namespace NonedsiTccr3{    ///<DSI Host Timeout Counter Configuration
          Register3
        using Addr = Register::Address<0x40016c80,0xffff0000,0,unsigned>;
        ///Low-Power Read Timeout
              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lprdTocnt{}; 
        namespace LprdtocntValC{
        }
    }
    namespace NonedsiTccr4{    ///<DSI Host Timeout Counter Configuration
          Register4
        using Addr = Register::Address<0x40016c84,0xfeff0000,0,unsigned>;
        ///Presp Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> pm{}; 
        namespace PmValC{
        }
        ///High-Speed Write Timeout
              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> hswrTocnt{}; 
        namespace HswrtocntValC{
        }
    }
    namespace NonedsiTccr5{    ///<DSI Host Timeout Counter Configuration
          Register5
        using Addr = Register::Address<0x40016c88,0xffff0000,0,unsigned>;
        ///Low-Power Write Timeout
              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lswrTocnt{}; 
        namespace LswrtocntValC{
        }
    }
    namespace NonedsiTccr6{    ///<DSI Host Timeout Counter Configuration
          Register6
        using Addr = Register::Address<0x40016c8c,0xffff0000,0,unsigned>;
        ///Bus-Turn-Around Timeout
              Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btaTocnt{}; 
        namespace BtatocntValC{
        }
    }
    namespace NonedsiClcr{    ///<DSI Host Clock Lane Configuration
          Register
        using Addr = Register::Address<0x40016c94,0xfffffffc,0,unsigned>;
        ///Automatic Clock lane
              Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> acr{}; 
        namespace AcrValC{
        }
        ///D-PHY Clock Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dpcc{}; 
        namespace DpccValC{
        }
    }
    namespace NonedsiCltcr{    ///<DSI Host Clock Lane Timer Configuration
          Register
        using Addr = Register::Address<0x40016c98,0xfc00fc00,0,unsigned>;
        ///High-Speed to Low-Power
              Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> hs2lpTime{}; 
        namespace Hs2lptimeValC{
        }
        ///Low-Power to High-Speed
              Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> lp2hsTime{}; 
        namespace Lp2hstimeValC{
        }
    }
    namespace NonedsiDltcr{    ///<DSI Host Data Lane Timer Configuration
          Register
        using Addr = Register::Address<0x40016c9c,0x00008000,0,unsigned>;
        ///High-Speed To Low-Power
              Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> hs2lpTime{}; 
        namespace Hs2lptimeValC{
        }
        ///Low-Power To High-Speed
              Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lp2hsTime{}; 
        namespace Lp2hstimeValC{
        }
        ///Maximum Read Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> mrdTime{}; 
        namespace MrdtimeValC{
        }
    }
    namespace NonedsiPctlr{    ///<DSI Host PHY Control Register
        using Addr = Register::Address<0x40016ca0,0xfffffff9,0,unsigned>;
        ///Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cke{}; 
        namespace CkeValC{
        }
        ///Digital Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> den{}; 
        namespace DenValC{
        }
    }
    namespace NonedsiPcconfr{    ///<DSI Host PHY Configuration
          Register
        using Addr = Register::Address<0x40016ca4,0xffff00fc,0,unsigned>;
        ///SW_TIME
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> swTime{}; 
        namespace SwtimeValC{
        }
        ///NL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> nl{}; 
        namespace NlValC{
        }
    }
    namespace NonedsiPucr{    ///<DSI Host PHY ULPS Control
          Register
        using Addr = Register::Address<0x40016ca8,0xfffffff0,0,unsigned>;
        ///ULPS Exit on Data Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uedl{}; 
        namespace UedlValC{
        }
        ///ULPS Request on Data Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> urdl{}; 
        namespace UrdlValC{
        }
        ///ULPS Exit on Clock Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> uecl{}; 
        namespace UeclValC{
        }
        ///ULPS Request on Clock Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> urcl{}; 
        namespace UrclValC{
        }
    }
    namespace NonedsiPttcr{    ///<DSI Host PHY TX Triggers Configuration
          Register
        using Addr = Register::Address<0x40016cac,0xfffffff0,0,unsigned>;
        ///Transmission Trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> txTrig{}; 
        namespace TxtrigValC{
        }
    }
    namespace NonedsiPsr{    ///<DSI Host PHY Status Register
        using Addr = Register::Address<0x40016cb0,0xfffffe01,0,unsigned>;
        ///ULPS Active Not lane 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> uan1{}; 
        namespace Uan1ValC{
        }
        ///PHY Stop State lane 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pss1{}; 
        namespace Pss1ValC{
        }
        ///RX ULPS Escape lane 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rue0{}; 
        namespace Rue0ValC{
        }
        ///ULPS Active Not lane 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> uan0{}; 
        namespace Uan0ValC{
        }
        ///PHY Stop State lane 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pss0{}; 
        namespace Pss0ValC{
        }
        ///ULPS Active Not Clock lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> uanc{}; 
        namespace UancValC{
        }
        ///PHY Stop State Clock lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pssc{}; 
        namespace PsscValC{
        }
        ///PHY Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pd{}; 
        namespace PdValC{
        }
    }
    namespace NonedsiIsr0{    ///<DSI Host Interrupt & Status Register
          0
        using Addr = Register::Address<0x40016cbc,0xffe00000,0,unsigned>;
        ///PHY Error 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pe4{}; 
        namespace Pe4ValC{
        }
        ///PHY Error 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pe3{}; 
        namespace Pe3ValC{
        }
        ///PHY Error 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pe2{}; 
        namespace Pe2ValC{
        }
        ///PHY Error 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pe1{}; 
        namespace Pe1ValC{
        }
        ///PHY Error 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pe0{}; 
        namespace Pe0ValC{
        }
        ///Acknowledge Error 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ae15{}; 
        namespace Ae15ValC{
        }
        ///Acknowledge Error 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ae14{}; 
        namespace Ae14ValC{
        }
        ///Acknowledge Error 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ae13{}; 
        namespace Ae13ValC{
        }
        ///Acknowledge Error 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ae12{}; 
        namespace Ae12ValC{
        }
        ///Acknowledge Error 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ae11{}; 
        namespace Ae11ValC{
        }
        ///Acknowledge Error 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ae10{}; 
        namespace Ae10ValC{
        }
        ///Acknowledge Error 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ae9{}; 
        namespace Ae9ValC{
        }
        ///Acknowledge Error 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ae8{}; 
        namespace Ae8ValC{
        }
        ///Acknowledge Error 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ae7{}; 
        namespace Ae7ValC{
        }
        ///Acknowledge Error 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ae6{}; 
        namespace Ae6ValC{
        }
        ///Acknowledge Error 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ae5{}; 
        namespace Ae5ValC{
        }
        ///Acknowledge Error 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ae4{}; 
        namespace Ae4ValC{
        }
        ///Acknowledge Error 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ae3{}; 
        namespace Ae3ValC{
        }
        ///Acknowledge Error 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ae2{}; 
        namespace Ae2ValC{
        }
        ///Acknowledge Error 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ae1{}; 
        namespace Ae1ValC{
        }
        ///Acknowledge Error 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ae0{}; 
        namespace Ae0ValC{
        }
    }
    namespace NonedsiIsr1{    ///<DSI Host Interrupt & Status Register
          1
        using Addr = Register::Address<0x40016cc0,0xffffe000,0,unsigned>;
        ///Generic Payload Receive
              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gprxe{}; 
        namespace GprxeValC{
        }
        ///Generic Payload Read Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gprde{}; 
        namespace GprdeValC{
        }
        ///Generic Payload Transmit
              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gptxe{}; 
        namespace GptxeValC{
        }
        ///Generic Payload Write
              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpwre{}; 
        namespace GpwreValC{
        }
        ///Generic Command Write
              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gcwre{}; 
        namespace GcwreValC{
        }
        ///LTDC Payload Write Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lpwre{}; 
        namespace LpwreValC{
        }
        ///EoTp Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eotpe{}; 
        namespace EotpeValC{
        }
        ///Packet Size Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pse{}; 
        namespace PseValC{
        }
        ///CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crce{}; 
        namespace CrceValC{
        }
        ///ECC Multi-bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eccme{}; 
        namespace EccmeValC{
        }
        ///ECC Single-bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eccse{}; 
        namespace EccseValC{
        }
        ///Timeout Low-Power
              Reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tolprx{}; 
        namespace TolprxValC{
        }
        ///Timeout High-Speed
              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tohstx{}; 
        namespace TohstxValC{
        }
    }
    namespace NonedsiIer0{    ///<DSI Host Interrupt Enable Register
          0
        using Addr = Register::Address<0x40016cc4,0xffe00000,0,unsigned>;
        ///PHY Error 4 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pe4ie{}; 
        namespace Pe4ieValC{
        }
        ///PHY Error 3 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pe3ie{}; 
        namespace Pe3ieValC{
        }
        ///PHY Error 2 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pe2ie{}; 
        namespace Pe2ieValC{
        }
        ///PHY Error 1 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> pe1ie{}; 
        namespace Pe1ieValC{
        }
        ///PHY Error 0 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pe0ie{}; 
        namespace Pe0ieValC{
        }
        ///Acknowledge Error 15 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ae15ie{}; 
        namespace Ae15ieValC{
        }
        ///Acknowledge Error 14 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ae14ie{}; 
        namespace Ae14ieValC{
        }
        ///Acknowledge Error 13 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ae13ie{}; 
        namespace Ae13ieValC{
        }
        ///Acknowledge Error 12 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ae12ie{}; 
        namespace Ae12ieValC{
        }
        ///Acknowledge Error 11 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ae11ie{}; 
        namespace Ae11ieValC{
        }
        ///Acknowledge Error 10 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ae10ie{}; 
        namespace Ae10ieValC{
        }
        ///Acknowledge Error 9 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> ae9ie{}; 
        namespace Ae9ieValC{
        }
        ///Acknowledge Error 8 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ae8ie{}; 
        namespace Ae8ieValC{
        }
        ///Acknowledge Error 7 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> ae7ie{}; 
        namespace Ae7ieValC{
        }
        ///Acknowledge Error 6 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ae6ie{}; 
        namespace Ae6ieValC{
        }
        ///Acknowledge Error 5 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ae5ie{}; 
        namespace Ae5ieValC{
        }
        ///Acknowledge Error 4 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ae4ie{}; 
        namespace Ae4ieValC{
        }
        ///Acknowledge Error 3 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ae3ie{}; 
        namespace Ae3ieValC{
        }
        ///Acknowledge Error 2 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ae2ie{}; 
        namespace Ae2ieValC{
        }
        ///Acknowledge Error 1 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ae1ie{}; 
        namespace Ae1ieValC{
        }
        ///Acknowledge Error 0 Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ae0ie{}; 
        namespace Ae0ieValC{
        }
    }
    namespace NonedsiIer1{    ///<DSI Host Interrupt Enable Register
          1
        using Addr = Register::Address<0x40016cc8,0xffffe000,0,unsigned>;
        ///Generic Payload Receive Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gprxeie{}; 
        namespace GprxeieValC{
        }
        ///Generic Payload Read Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gprdeie{}; 
        namespace GprdeieValC{
        }
        ///Generic Payload Transmit Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gptxeie{}; 
        namespace GptxeieValC{
        }
        ///Generic Payload Write Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpwreie{}; 
        namespace GpwreieValC{
        }
        ///Generic Command Write Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gcwreie{}; 
        namespace GcwreieValC{
        }
        ///LTDC Payload Write Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lpwreie{}; 
        namespace LpwreieValC{
        }
        ///EoTp Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eotpeie{}; 
        namespace EotpeieValC{
        }
        ///Packet Size Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pseie{}; 
        namespace PseieValC{
        }
        ///CRC Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crceie{}; 
        namespace CrceieValC{
        }
        ///ECC Multi-bit Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eccmeie{}; 
        namespace EccmeieValC{
        }
        ///ECC Single-bit Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eccseie{}; 
        namespace EccseieValC{
        }
        ///Timeout Low-Power Reception Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tolprxie{}; 
        namespace TolprxieValC{
        }
        ///Timeout High-Speed Transmission
              Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tohstxie{}; 
        namespace TohstxieValC{
        }
    }
    namespace NonedsiFir0{    ///<DSI Host Force Interrupt Register
          0
        using Addr = Register::Address<0x40016cd8,0xffe00000,0,unsigned>;
        ///Force PHY Error 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> fpe4{}; 
        namespace Fpe4ValC{
        }
        ///Force PHY Error 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> fpe3{}; 
        namespace Fpe3ValC{
        }
        ///Force PHY Error 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fpe2{}; 
        namespace Fpe2ValC{
        }
        ///Force PHY Error 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> fpe1{}; 
        namespace Fpe1ValC{
        }
        ///Force PHY Error 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> fpe0{}; 
        namespace Fpe0ValC{
        }
        ///Force Acknowledge Error 15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fae15{}; 
        namespace Fae15ValC{
        }
        ///Force Acknowledge Error 14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fae14{}; 
        namespace Fae14ValC{
        }
        ///Force Acknowledge Error 13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fae13{}; 
        namespace Fae13ValC{
        }
        ///Force Acknowledge Error 12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fae12{}; 
        namespace Fae12ValC{
        }
        ///Force Acknowledge Error 11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fae11{}; 
        namespace Fae11ValC{
        }
        ///Force Acknowledge Error 10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fae10{}; 
        namespace Fae10ValC{
        }
        ///Force Acknowledge Error 9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fae9{}; 
        namespace Fae9ValC{
        }
        ///Force Acknowledge Error 8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fae8{}; 
        namespace Fae8ValC{
        }
        ///Force Acknowledge Error 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fae7{}; 
        namespace Fae7ValC{
        }
        ///Force Acknowledge Error 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fae6{}; 
        namespace Fae6ValC{
        }
        ///Force Acknowledge Error 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fae5{}; 
        namespace Fae5ValC{
        }
        ///Force Acknowledge Error 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fae4{}; 
        namespace Fae4ValC{
        }
        ///Force Acknowledge Error 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fae3{}; 
        namespace Fae3ValC{
        }
        ///Force Acknowledge Error 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fae2{}; 
        namespace Fae2ValC{
        }
        ///Force Acknowledge Error 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fae1{}; 
        namespace Fae1ValC{
        }
        ///Force Acknowledge Error 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fae0{}; 
        namespace Fae0ValC{
        }
    }
    namespace NonedsiFir1{    ///<DSI Host Force Interrupt Register
          1
        using Addr = Register::Address<0x40016cdc,0xffffe000,0,unsigned>;
        ///Force Generic Payload Receive
              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> fgprxe{}; 
        namespace FgprxeValC{
        }
        ///Force Generic Payload Read
              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> fgprde{}; 
        namespace FgprdeValC{
        }
        ///Force Generic Payload Transmit
              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fgptxe{}; 
        namespace FgptxeValC{
        }
        ///Force Generic Payload Write
              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fgpwre{}; 
        namespace FgpwreValC{
        }
        ///Force Generic Command Write
              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fgcwre{}; 
        namespace FgcwreValC{
        }
        ///Force LTDC Payload Write
              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flpwre{}; 
        namespace FlpwreValC{
        }
        ///Force EoTp Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> feotpe{}; 
        namespace FeotpeValC{
        }
        ///Force Packet Size Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fpse{}; 
        namespace FpseValC{
        }
        ///Force CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fcrce{}; 
        namespace FcrceValC{
        }
        ///Force ECC Multi-bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> feccme{}; 
        namespace FeccmeValC{
        }
        ///Force ECC Single-bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> feccse{}; 
        namespace FeccseValC{
        }
        ///Force Timeout Low-Power
              Reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftolprx{}; 
        namespace FtolprxValC{
        }
        ///Force Timeout High-Speed
              Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ftohstx{}; 
        namespace FtohstxValC{
        }
    }
    namespace NonedsiVscr{    ///<DSI Host Video Shadow Control
          Register
        using Addr = Register::Address<0x40016d00,0xfffffefe,0,unsigned>;
        ///Update Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ur{}; 
        namespace UrValC{
        }
        ///Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace NonedsiLcvcidr{    ///<DSI Host LTDC Current VCID
          Register
        using Addr = Register::Address<0x40016d0c,0xfffffffc,0,unsigned>;
        ///Virtual Channel ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> vcid{}; 
        namespace VcidValC{
        }
    }
    namespace NonedsiLcccr{    ///<DSI Host LTDC Current Color Coding
          Register
        using Addr = Register::Address<0x40016d10,0xfffffef0,0,unsigned>;
        ///Loosely Packed Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lpe{}; 
        namespace LpeValC{
        }
        ///Color Coding
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> colc{}; 
        namespace ColcValC{
        }
    }
    namespace NonedsiLpmccr{    ///<DSI Host Low-power Mode Current
          Configuration Register
        using Addr = Register::Address<0x40016d18,0xff00ff00,0,unsigned>;
        ///Largest Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> lpsize{}; 
        namespace LpsizeValC{
        }
        ///VACT Largest Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> vlpsize{}; 
        namespace VlpsizeValC{
        }
    }
    namespace NonedsiVmccr{    ///<DSI Host Video mode Current Configuration
          Register
        using Addr = Register::Address<0x40016d38,0xffff00fc,0,unsigned>;
        ///Low-Power Command Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lpce{}; 
        namespace LpceValC{
        }
        ///Frame BTA Acknowledge
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fbtaae{}; 
        namespace FbtaaeValC{
        }
        ///Low-Power Horizontal Front-Porch
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lphfe{}; 
        namespace LphfeValC{
        }
        ///Low-power Horizontal Back-Porch
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> lphbpe{}; 
        namespace LphbpeValC{
        }
        ///Low-Power Vertical Active
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lvae{}; 
        namespace LvaeValC{
        }
        ///Low-power Vertical Front-Porch
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> lpvfpe{}; 
        namespace LpvfpeValC{
        }
        ///Low-power Vertical Back-Porch
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> lpvbpe{}; 
        namespace LpvbpeValC{
        }
        ///Low-Power Vertical Sync time
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> lpvsae{}; 
        namespace LpvsaeValC{
        }
        ///Video mode Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> vmt{}; 
        namespace VmtValC{
        }
    }
    namespace NonedsiVpccr{    ///<DSI Host Video Packet Current Configuration
          Register
        using Addr = Register::Address<0x40016d3c,0xffff8000,0,unsigned>;
        ///Video Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> vpsize{}; 
        namespace VpsizeValC{
        }
    }
    namespace NonedsiVcccr{    ///<DSI Host Video Chunks Current Configuration
          Register
        using Addr = Register::Address<0x40016d40,0xffffc000,0,unsigned>;
        ///Number of Chunks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> numc{}; 
        namespace NumcValC{
        }
    }
    namespace NonedsiVnpccr{    ///<DSI Host Video Null Packet Current
          Configuration Register
        using Addr = Register::Address<0x40016d44,0xffffc000,0,unsigned>;
        ///Null Packet Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> npsize{}; 
        namespace NpsizeValC{
        }
    }
    namespace NonedsiVhsaccr{    ///<DSI Host Video HSA Current Configuration
          Register
        using Addr = Register::Address<0x40016d48,0xffffe000,0,unsigned>;
        ///Horizontal Synchronism Active
              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> hsa{}; 
        namespace HsaValC{
        }
    }
    namespace NonedsiVhbpccr{    ///<DSI Host Video HBP Current Configuration
          Register
        using Addr = Register::Address<0x40016d4c,0xffffe000,0,unsigned>;
        ///Horizontal Back-Porch
              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> hbp{}; 
        namespace HbpValC{
        }
    }
    namespace NonedsiVlccr{    ///<DSI Host Video Line Current Configuration
          Register
        using Addr = Register::Address<0x40016d50,0xffff8000,0,unsigned>;
        ///Horizontal Line duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,0),Register::ReadWriteAccess,unsigned> hline{}; 
        namespace HlineValC{
        }
    }
    namespace NonedsiVvsaccr{    ///<DSI Host Video VSA Current Configuration
          Register
        using Addr = Register::Address<0x40016d54,0xfffffc00,0,unsigned>;
        ///Vertical Synchronism Active
              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> vsa{}; 
        namespace VsaValC{
        }
    }
    namespace NonedsiVvbpccr{    ///<DSI Host Video VBP Current Configuration
          Register
        using Addr = Register::Address<0x40016d58,0xfffffc00,0,unsigned>;
        ///Vertical Back-Porch
              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> vbp{}; 
        namespace VbpValC{
        }
    }
    namespace NonedsiVvfpccr{    ///<DSI Host Video VFP Current Configuration
          Register
        using Addr = Register::Address<0x40016d5c,0xfffffc00,0,unsigned>;
        ///Vertical Front-Porch
              duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> vfp{}; 
        namespace VfpValC{
        }
    }
    namespace NonedsiVvaccr{    ///<DSI Host Video VA Current Configuration
          Register
        using Addr = Register::Address<0x40016d60,0xffffc000,0,unsigned>;
        ///Vertical Active duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> va{}; 
        namespace VaValC{
        }
    }
    namespace NonedsiWcfgr{    ///<DSI Wrapper Configuration
          Register
        using Addr = Register::Address<0x40017000,0xffffff00,0,unsigned>;
        ///VSync Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> vspol{}; 
        namespace VspolValC{
        }
        ///Automatic Refresh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ar{}; 
        namespace ArValC{
        }
        ///TE Polarity
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tepol{}; 
        namespace TepolValC{
        }
        ///TE Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tesrc{}; 
        namespace TesrcValC{
        }
        ///Color Multiplexing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> colmux{}; 
        namespace ColmuxValC{
        }
        ///DSI Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dsim{}; 
        namespace DsimValC{
        }
    }
    namespace NonedsiWcr{    ///<DSI Wrapper Control Register
        using Addr = Register::Address<0x40017004,0xfffffff0,0,unsigned>;
        ///DSI Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsien{}; 
        namespace DsienValC{
        }
        ///LTDC Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ltdcen{}; 
        namespace LtdcenValC{
        }
        ///Shutdown
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> shtdn{}; 
        namespace ShtdnValC{
        }
        ///Color Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> colm{}; 
        namespace ColmValC{
        }
    }
    namespace NonedsiWier{    ///<DSI Wrapper Interrupt Enable
          Register
        using Addr = Register::Address<0x40017008,0xffffd9fc,0,unsigned>;
        ///Regulator Ready Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rrie{}; 
        namespace RrieValC{
        }
        ///PLL Unlock Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> plluie{}; 
        namespace PlluieValC{
        }
        ///PLL Lock Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> plllie{}; 
        namespace PlllieValC{
        }
        ///End of Refresh Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erie{}; 
        namespace ErieValC{
        }
        ///Tearing Effect Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teie{}; 
        namespace TeieValC{
        }
    }
    namespace NonedsiWisr{    ///<DSI Wrapper Interrupt & Status
          Register
        using Addr = Register::Address<0x4001700c,0xffffc8f8,0,unsigned>;
        ///Regulator Ready Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> rrif{}; 
        namespace RrifValC{
        }
        ///Regulator Ready Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> rrs{}; 
        namespace RrsValC{
        }
        ///PLL Unlock Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> plluif{}; 
        namespace PlluifValC{
        }
        ///PLL Lock Interrupt Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> plllif{}; 
        namespace PlllifValC{
        }
        ///PLL Lock Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pllls{}; 
        namespace PlllsValC{
        }
        ///Busy Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///End of Refresh Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erif{}; 
        namespace ErifValC{
        }
        ///Tearing Effect Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> teif{}; 
        namespace TeifValC{
        }
    }
    namespace NonedsiWifcr{    ///<DSI Wrapper Interrupt Flag Clear
          Register
        using Addr = Register::Address<0x40017010,0xffffd9fc,0,unsigned>;
        ///Clear Regulator Ready Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> crrif{}; 
        namespace CrrifValC{
        }
        ///Clear PLL Unlock Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cplluif{}; 
        namespace CplluifValC{
        }
        ///Clear PLL Lock Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cplllif{}; 
        namespace CplllifValC{
        }
        ///Clear End of Refresh Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cerif{}; 
        namespace CerifValC{
        }
        ///Clear Tearing Effect Interrupt
              Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cteif{}; 
        namespace CteifValC{
        }
    }
    namespace NonedsiWpcr1{    ///<DSI Wrapper PHY Configuration Register
          1
        using Addr = Register::Address<0x40017018,0xf0028000,0,unsigned>;
        ///custom time for tCLK-POST
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> tclkposten{}; 
        namespace TclkpostenValC{
        }
        ///custom time for tLPX for Clock lane
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> tlpxcen{}; 
        namespace TlpxcenValC{
        }
        ///custom time for tHS-EXIT
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> thsexiten{}; 
        namespace ThsexitenValC{
        }
        ///custom time for tLPX for Data lanes
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tlpxden{}; 
        namespace TlpxdenValC{
        }
        ///custom time for tHS-ZERO
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> thszeroen{}; 
        namespace ThszeroenValC{
        }
        ///custom time for tHS-TRAIL
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> thstrailen{}; 
        namespace ThstrailenValC{
        }
        ///custom time for tHS-PREPARE
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> thsprepen{}; 
        namespace ThsprepenValC{
        }
        ///custom time for tCLK-ZERO
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> tclkzeroen{}; 
        namespace TclkzeroenValC{
        }
        ///custom time for tCLK-PREPARE
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> tclkprepen{}; 
        namespace TclkprepenValC{
        }
        ///Pull-Down Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> pden{}; 
        namespace PdenValC{
        }
        ///Turn Disable Data Lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tddl{}; 
        namespace TddlValC{
        }
        ///Contention Detection OFF on Data
              Lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cdoffdl{}; 
        namespace CdoffdlValC{
        }
        ///Force in TX Stop Mode the Data
              Lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ftxsmdl{}; 
        namespace FtxsmdlValC{
        }
        ///Force in TX Stop Mode the Clock
              Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ftxsmcl{}; 
        namespace FtxsmclValC{
        }
        ///Invert the High-Speed data signal on
              Data Lane 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hsidl1{}; 
        namespace Hsidl1ValC{
        }
        ///Invert the Hight-Speed data signal on
              Data Lane 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hsidl0{}; 
        namespace Hsidl0ValC{
        }
        ///Invert Hight-Speed data signal on Clock
              Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hsicl{}; 
        namespace HsiclValC{
        }
        ///Swap Data Lane 1 pins
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swdl1{}; 
        namespace Swdl1ValC{
        }
        ///Swap Data Lane 0 pins
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swdl0{}; 
        namespace Swdl0ValC{
        }
        ///Swap Clock Lane pins
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> swcl{}; 
        namespace SwclValC{
        }
        ///Unit Interval multiplied by
              4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> uix4{}; 
        namespace Uix4ValC{
        }
    }
    namespace NonedsiWpcr2{    ///<DSI Wrapper PHY Configuration Register
          2
        using Addr = Register::Address<0x4001701c,0xf9b0ec30,0,unsigned>;
        ///Low-Power RX low-pass Filtering
              Tuning
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,unsigned> lprxft{}; 
        namespace LprxftValC{
        }
        ///Forces LP Receiver in Low-Power
              Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> flprxlpm{}; 
        namespace FlprxlpmValC{
        }
        ///High-Speed Transmission Slew Rate
              Control on Data Lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> hstxsrcdl{}; 
        namespace HstxsrcdlValC{
        }
        ///High-Speed Transmission Slew Rate
              Control on Clock Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> hstxsrccl{}; 
        namespace HstxsrcclValC{
        }
        ///SDD Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> sdcc{}; 
        namespace SdccValC{
        }
        ///Low-Power transmission Slew Rate
              Compensation on Data Lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> lpsrdl{}; 
        namespace LpsrdlValC{
        }
        ///Low-Power transmission Slew Rate
              Compensation on Clock Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> lpsrcl{}; 
        namespace LpsrclValC{
        }
        ///High-Speed Transmission Delay on Data
              Lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> hstxdll{}; 
        namespace HstxdllValC{
        }
        ///High-Speed Transmission Delay on Clock
              Lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> hstxdcl{}; 
        namespace HstxdclValC{
        }
    }
    namespace NonedsiWpcr3{    ///<DSI Wrapper PHY Configuration Register
          3
        using Addr = Register::Address<0x40017020,0x00000000,0,unsigned>;
        ///tHSTRAIL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> thstrail{}; 
        namespace ThstrailValC{
        }
        ///tHS-PREPARE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> thsprep{}; 
        namespace ThsprepValC{
        }
        ///tCLK-ZERO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tclkzeo{}; 
        namespace TclkzeoValC{
        }
        ///tCLK-PREPARE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tclkprep{}; 
        namespace TclkprepValC{
        }
    }
    namespace NonedsiWpcr4{    ///<DSI_WPCR4
        using Addr = Register::Address<0x40017024,0x00000000,0,unsigned>;
        ///tLPXC for Clock lane
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> tlpxc{}; 
        namespace TlpxcValC{
        }
        ///tHSEXIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> thsexit{}; 
        namespace ThsexitValC{
        }
        ///tLPX for Data lanes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> tlpxd{}; 
        namespace TlpxdValC{
        }
        ///tHS-ZERO
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> thszero{}; 
        namespace ThszeroValC{
        }
    }
    namespace NonedsiWpcr5{    ///<DSI Wrapper PHY Configuration Register
          5
        using Addr = Register::Address<0x40017028,0xffffff00,0,unsigned>;
        ///tCLK-POST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> thszero{}; 
        namespace ThszeroValC{
        }
    }
    namespace NonedsiWrpcr{    ///<DSI Wrapper Regulator and PLL Control
          Register
        using Addr = Register::Address<0x40017030,0xfefc8602,0,unsigned>;
        ///Regulator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> regen{}; 
        namespace RegenValC{
        }
        ///PLL Output Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> odf{}; 
        namespace OdfValC{
        }
        ///PLL Input Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> idf{}; 
        namespace IdfValC{
        }
        ///PLL Loop Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,2),Register::ReadWriteAccess,unsigned> ndiv{}; 
        namespace NdivValC{
        }
        ///PLL Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pllen{}; 
        namespace PllenValC{
        }
    }
}
