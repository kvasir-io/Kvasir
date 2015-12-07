#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Secured Digital Host Controller
    namespace SdhcDsaddr{    ///<DMA System Address Register
        using Addr = Register::Address<0x400b1000,0x00000003,0,unsigned>;
        ///DMA System Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dsaddr{}; 
        namespace DsaddrValC{
        }
    }
    namespace SdhcBlkattr{    ///<Block Attributes Register
        using Addr = Register::Address<0x400b1004,0x0000e000,0,unsigned>;
        ///Transfer Block Size
        enum class BlksizeVal {
            v0=0x00000000,     ///<No data transfer
            v1=0x00000001,     ///<1 Byte
            v10=0x00000002,     ///<2 Bytes
            v11=0x00000003,     ///<3 Bytes
            v100=0x00000004,     ///<4 Bytes
            v111111111=0x000001ff,     ///<511 Bytes
            v1000000000=0x00000200,     ///<512 Bytes
            v100000000000=0x00000800,     ///<2048 Bytes
            v1000000000000=0x00001000,     ///<4096 Bytes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,BlksizeVal> blksize{}; 
        namespace BlksizeValC{
            constexpr Register::FieldValue<decltype(blksize),BlksizeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(blksize),BlksizeVal::v1> v1{};
            constexpr Register::FieldValue<decltype(blksize),BlksizeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(blksize),BlksizeVal::v11> v11{};
            constexpr Register::FieldValue<decltype(blksize),BlksizeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(blksize),BlksizeVal::v111111111> v111111111{};
            constexpr Register::FieldValue<decltype(blksize),BlksizeVal::v1000000000> v1000000000{};
            constexpr Register::FieldValue<decltype(blksize),BlksizeVal::v100000000000> v100000000000{};
            constexpr Register::FieldValue<decltype(blksize),BlksizeVal::v1000000000000> v1000000000000{};
        }
        ///Blocks Count For Current Transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
        namespace BlkcntValC{
        }
    }
    namespace SdhcCmdarg{    ///<Command Argument Register
        using Addr = Register::Address<0x400b1008,0x00000000,0,unsigned>;
        ///Command Argument
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdarg{}; 
        namespace CmdargValC{
        }
    }
    namespace SdhcXfertyp{    ///<Transfer Type Register
        using Addr = Register::Address<0x400b100c,0xc004ffc8,0,unsigned>;
        ///DMA Enable
        enum class DmaenVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen),DmaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaen),DmaenVal::v1> v1{};
        }
        ///Block Count Enable
        enum class BcenVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,BcenVal> bcen{}; 
        namespace BcenValC{
            constexpr Register::FieldValue<decltype(bcen),BcenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bcen),BcenVal::v1> v1{};
        }
        ///Auto CMD12 Enable
        enum class Ac12enVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ac12enVal> ac12en{}; 
        namespace Ac12enValC{
            constexpr Register::FieldValue<decltype(ac12en),Ac12enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ac12en),Ac12enVal::v1> v1{};
        }
        ///Data Transfer Direction Select
        enum class DtdselVal {
            v0=0x00000000,     ///<Write (host to card)
            v1=0x00000001,     ///<Read (card to host)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DtdselVal> dtdsel{}; 
        namespace DtdselValC{
            constexpr Register::FieldValue<decltype(dtdsel),DtdselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dtdsel),DtdselVal::v1> v1{};
        }
        ///Multi/Single Block Select
        enum class MsbselVal {
            v0=0x00000000,     ///<Single block
            v1=0x00000001,     ///<Multiple blocks
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,MsbselVal> msbsel{}; 
        namespace MsbselValC{
            constexpr Register::FieldValue<decltype(msbsel),MsbselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(msbsel),MsbselVal::v1> v1{};
        }
        ///Response Type Select
        enum class RsptypVal {
            v00=0x00000000,     ///<No response
            v01=0x00000001,     ///<Response length 136
            v10=0x00000002,     ///<Response length 48
            v11=0x00000003,     ///<Response length 48, check busy after response
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,RsptypVal> rsptyp{}; 
        namespace RsptypValC{
            constexpr Register::FieldValue<decltype(rsptyp),RsptypVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rsptyp),RsptypVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rsptyp),RsptypVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rsptyp),RsptypVal::v11> v11{};
        }
        ///Command CRC Check Enable
        enum class CccenVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,CccenVal> cccen{}; 
        namespace CccenValC{
            constexpr Register::FieldValue<decltype(cccen),CccenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cccen),CccenVal::v1> v1{};
        }
        ///Command Index Check Enable
        enum class CicenVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,CicenVal> cicen{}; 
        namespace CicenValC{
            constexpr Register::FieldValue<decltype(cicen),CicenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cicen),CicenVal::v1> v1{};
        }
        ///Data Present Select
        enum class DpselVal {
            v0=0x00000000,     ///<No data present
            v1=0x00000001,     ///<Data present
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,DpselVal> dpsel{}; 
        namespace DpselValC{
            constexpr Register::FieldValue<decltype(dpsel),DpselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpsel),DpselVal::v1> v1{};
        }
        ///Command Type
        enum class CmdtypVal {
            v00=0x00000000,     ///<Normal other commands
            v01=0x00000001,     ///<Suspend CMD52 for writing bus suspend in CCCR
            v10=0x00000002,     ///<Resume CMD52 for writing function select in CCCR
            v11=0x00000003,     ///<Abort CMD12, CMD52 for writing I/O abort in CCCR
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,CmdtypVal> cmdtyp{}; 
        namespace CmdtypValC{
            constexpr Register::FieldValue<decltype(cmdtyp),CmdtypVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cmdtyp),CmdtypVal::v01> v01{};
            constexpr Register::FieldValue<decltype(cmdtyp),CmdtypVal::v10> v10{};
            constexpr Register::FieldValue<decltype(cmdtyp),CmdtypVal::v11> v11{};
        }
        ///Command Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> cmdinx{}; 
        namespace CmdinxValC{
        }
    }
    namespace SdhcCmdrsp0{    ///<Command Response 0
        using Addr = Register::Address<0x400b1010,0x00000000,0,unsigned>;
        ///Command Response 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdrsp0{}; 
        namespace Cmdrsp0ValC{
        }
    }
    namespace SdhcCmdrsp1{    ///<Command Response 1
        using Addr = Register::Address<0x400b1014,0x00000000,0,unsigned>;
        ///Command Response 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdrsp1{}; 
        namespace Cmdrsp1ValC{
        }
    }
    namespace SdhcCmdrsp2{    ///<Command Response 2
        using Addr = Register::Address<0x400b1018,0x00000000,0,unsigned>;
        ///Command Response 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdrsp2{}; 
        namespace Cmdrsp2ValC{
        }
    }
    namespace SdhcCmdrsp3{    ///<Command Response 3
        using Addr = Register::Address<0x400b101c,0x00000000,0,unsigned>;
        ///Command Response 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdrsp3{}; 
        namespace Cmdrsp3ValC{
        }
    }
    namespace SdhcDatport{    ///<Buffer Data Port Register
        using Addr = Register::Address<0x400b1020,0x00000000,0,unsigned>;
        ///Data Content
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datcont{}; 
        namespace DatcontValC{
        }
    }
    namespace SdhcPrsstat{    ///<Present State Register
        using Addr = Register::Address<0x400b1024,0x007ef000,0,unsigned>;
        ///Command Inhibit (CMD)
        enum class CihbVal {
            v0=0x00000000,     ///<Can issue command using only CMD line
            v1=0x00000001,     ///<Cannot issue command
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CihbVal> cihb{}; 
        namespace CihbValC{
            constexpr Register::FieldValue<decltype(cihb),CihbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cihb),CihbVal::v1> v1{};
        }
        ///Command Inhibit (DAT)
        enum class CdihbVal {
            v0=0x00000000,     ///<Can issue command which uses the DAT line
            v1=0x00000001,     ///<Cannot issue command which uses the DAT line
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CdihbVal> cdihb{}; 
        namespace CdihbValC{
            constexpr Register::FieldValue<decltype(cdihb),CdihbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cdihb),CdihbVal::v1> v1{};
        }
        ///Data Line Active
        enum class DlaVal {
            v0=0x00000000,     ///<DAT line inactive
            v1=0x00000001,     ///<DAT line active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DlaVal> dla{}; 
        namespace DlaValC{
            constexpr Register::FieldValue<decltype(dla),DlaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dla),DlaVal::v1> v1{};
        }
        ///SD Clock Stable
        enum class SdstbVal {
            v0=0x00000000,     ///<Clock is changing frequency and not stable
            v1=0x00000001,     ///<Clock is stable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SdstbVal> sdstb{}; 
        namespace SdstbValC{
            constexpr Register::FieldValue<decltype(sdstb),SdstbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sdstb),SdstbVal::v1> v1{};
        }
        ///Bus Clock Gated Off Internally
        enum class IpgoffVal {
            v0=0x00000000,     ///<Bus clock is active
            v1=0x00000001,     ///<Bus clock is gated off
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IpgoffVal> ipgoff{}; 
        namespace IpgoffValC{
            constexpr Register::FieldValue<decltype(ipgoff),IpgoffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ipgoff),IpgoffVal::v1> v1{};
        }
        ///System Clock Gated Off Internally
        enum class HckoffVal {
            v0=0x00000000,     ///<System clock is active
            v1=0x00000001,     ///<System clock is gated off
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,HckoffVal> hckoff{}; 
        namespace HckoffValC{
            constexpr Register::FieldValue<decltype(hckoff),HckoffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hckoff),HckoffVal::v1> v1{};
        }
        ///SDHC clock Gated Off Internally
        enum class PeroffVal {
            v0=0x00000000,     ///<SDHC clock is active
            v1=0x00000001,     ///<SDHC clock is gated off
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PeroffVal> peroff{}; 
        namespace PeroffValC{
            constexpr Register::FieldValue<decltype(peroff),PeroffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(peroff),PeroffVal::v1> v1{};
        }
        ///SD Clock Gated Off Internally
        enum class SdoffVal {
            v0=0x00000000,     ///<SD clock is active
            v1=0x00000001,     ///<SD clock is gated off
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SdoffVal> sdoff{}; 
        namespace SdoffValC{
            constexpr Register::FieldValue<decltype(sdoff),SdoffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sdoff),SdoffVal::v1> v1{};
        }
        ///Write Transfer Active
        enum class WtaVal {
            v0=0x00000000,     ///<No valid data
            v1=0x00000001,     ///<Transferring data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WtaVal> wta{}; 
        namespace WtaValC{
            constexpr Register::FieldValue<decltype(wta),WtaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wta),WtaVal::v1> v1{};
        }
        ///Read Transfer Active
        enum class RtaVal {
            v0=0x00000000,     ///<No valid data
            v1=0x00000001,     ///<Transferring data
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,RtaVal> rta{}; 
        namespace RtaValC{
            constexpr Register::FieldValue<decltype(rta),RtaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rta),RtaVal::v1> v1{};
        }
        ///Buffer Write Enable
        enum class BwenVal {
            v0=0x00000000,     ///<Write disable, the buffer can hold valid data less than the write watermark level.
            v1=0x00000001,     ///<Write enable, the buffer can hold valid data greater than the write watermark level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,BwenVal> bwen{}; 
        namespace BwenValC{
            constexpr Register::FieldValue<decltype(bwen),BwenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bwen),BwenVal::v1> v1{};
        }
        ///Buffer Read Enable
        enum class BrenVal {
            v0=0x00000000,     ///<Read disable, valid data less than the watermark level exist in the buffer.
            v1=0x00000001,     ///<Read enable, valid data greater than the watermark level exist in the buffer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,BrenVal> bren{}; 
        namespace BrenValC{
            constexpr Register::FieldValue<decltype(bren),BrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bren),BrenVal::v1> v1{};
        }
        ///Card Inserted
        enum class CinsVal {
            v0=0x00000000,     ///<Power on reset or no card
            v1=0x00000001,     ///<Card inserted
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,CinsVal> cins{}; 
        namespace CinsValC{
            constexpr Register::FieldValue<decltype(cins),CinsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cins),CinsVal::v1> v1{};
        }
        ///CMD Line Signal Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clsl{}; 
        namespace ClslValC{
        }
        ///DAT Line Signal Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dlsl{}; 
        namespace DlslValC{
        }
    }
    namespace SdhcProctl{    ///<Protocol Control Register
        using Addr = Register::Address<0x400b1028,0xf8f0fc00,0,unsigned>;
        ///LED Control
        enum class LctlVal {
            v0=0x00000000,     ///<LED off
            v1=0x00000001,     ///<LED on
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LctlVal> lctl{}; 
        namespace LctlValC{
            constexpr Register::FieldValue<decltype(lctl),LctlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(lctl),LctlVal::v1> v1{};
        }
        ///Data Transfer Width
        enum class DtwVal {
            v00=0x00000000,     ///<1-bit mode
            v01=0x00000001,     ///<4-bit mode
            v10=0x00000002,     ///<8-bit mode
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,DtwVal> dtw{}; 
        namespace DtwValC{
            constexpr Register::FieldValue<decltype(dtw),DtwVal::v00> v00{};
            constexpr Register::FieldValue<decltype(dtw),DtwVal::v01> v01{};
            constexpr Register::FieldValue<decltype(dtw),DtwVal::v10> v10{};
            constexpr Register::FieldValue<decltype(dtw),DtwVal::v11> v11{};
        }
        ///DAT3 as Card Detection Pin
        enum class D3cdVal {
            v0=0x00000000,     ///<DAT3 does not monitor card Insertion
            v1=0x00000001,     ///<DAT3 as card detection pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,D3cdVal> d3cd{}; 
        namespace D3cdValC{
            constexpr Register::FieldValue<decltype(d3cd),D3cdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(d3cd),D3cdVal::v1> v1{};
        }
        ///Endian Mode
        enum class EmodeVal {
            v00=0x00000000,     ///<Big endian mode
            v01=0x00000001,     ///<Half word big endian mode
            v10=0x00000002,     ///<Little endian mode
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,EmodeVal> emode{}; 
        namespace EmodeValC{
            constexpr Register::FieldValue<decltype(emode),EmodeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(emode),EmodeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(emode),EmodeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(emode),EmodeVal::v11> v11{};
        }
        ///Card Detect Test Level
        enum class CdtlVal {
            v0=0x00000000,     ///<Card detect test level is 0, no card inserted
            v1=0x00000001,     ///<Card detect test level is 1, card inserted
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CdtlVal> cdtl{}; 
        namespace CdtlValC{
            constexpr Register::FieldValue<decltype(cdtl),CdtlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cdtl),CdtlVal::v1> v1{};
        }
        ///Card Detect Signal Selection
        enum class CdssVal {
            v0=0x00000000,     ///<Card detection level is selected (for normal purpose)
            v1=0x00000001,     ///<Card detection test level is selected (for test purpose)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CdssVal> cdss{}; 
        namespace CdssValC{
            constexpr Register::FieldValue<decltype(cdss),CdssVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cdss),CdssVal::v1> v1{};
        }
        ///DMA Select
        enum class DmasVal {
            v00=0x00000000,     ///<No DMA or simple DMA is selected
            v01=0x00000001,     ///<ADMA1 is selected
            v10=0x00000002,     ///<ADMA2 is selected
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DmasVal> dmas{}; 
        namespace DmasValC{
            constexpr Register::FieldValue<decltype(dmas),DmasVal::v00> v00{};
            constexpr Register::FieldValue<decltype(dmas),DmasVal::v01> v01{};
            constexpr Register::FieldValue<decltype(dmas),DmasVal::v10> v10{};
            constexpr Register::FieldValue<decltype(dmas),DmasVal::v11> v11{};
        }
        ///Stop At Block Gap Request
        enum class SabgreqVal {
            v0=0x00000000,     ///<Transfer
            v1=0x00000001,     ///<Stop
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SabgreqVal> sabgreq{}; 
        namespace SabgreqValC{
            constexpr Register::FieldValue<decltype(sabgreq),SabgreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sabgreq),SabgreqVal::v1> v1{};
        }
        ///Continue Request
        enum class CreqVal {
            v0=0x00000000,     ///<No effect
            v1=0x00000001,     ///<Restart
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CreqVal> creq{}; 
        namespace CreqValC{
            constexpr Register::FieldValue<decltype(creq),CreqVal::v0> v0{};
            constexpr Register::FieldValue<decltype(creq),CreqVal::v1> v1{};
        }
        ///Read Wait Control
        enum class RwctlVal {
            v0=0x00000000,     ///<Disable read wait control, and stop SD clock at block gap when SABGREQ bit is set.
            v1=0x00000001,     ///<Enable read wait control, and assert read wait without stopping SD clock at block gap when SABGREQ bit is set.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,RwctlVal> rwctl{}; 
        namespace RwctlValC{
            constexpr Register::FieldValue<decltype(rwctl),RwctlVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rwctl),RwctlVal::v1> v1{};
        }
        ///Interrupt At Block Gap
        enum class IabgVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,IabgVal> iabg{}; 
        namespace IabgValC{
            constexpr Register::FieldValue<decltype(iabg),IabgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iabg),IabgVal::v1> v1{};
        }
        ///Wakeup Event Enable On Card Interrupt
        enum class WecintVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,WecintVal> wecint{}; 
        namespace WecintValC{
            constexpr Register::FieldValue<decltype(wecint),WecintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wecint),WecintVal::v1> v1{};
        }
        ///Wakeup Event Enable On SD Card Insertion
        enum class WecinsVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,WecinsVal> wecins{}; 
        namespace WecinsValC{
            constexpr Register::FieldValue<decltype(wecins),WecinsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wecins),WecinsVal::v1> v1{};
        }
        ///Wakeup Event Enable On SD Card Removal
        enum class WecrmVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,WecrmVal> wecrm{}; 
        namespace WecrmValC{
            constexpr Register::FieldValue<decltype(wecrm),WecrmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wecrm),WecrmVal::v1> v1{};
        }
    }
    namespace SdhcSysctl{    ///<System Control Register
        using Addr = Register::Address<0x400b102c,0xf0f00000,0,unsigned>;
        ///IPG Clock Enable
        enum class IpgenVal {
            v0=0x00000000,     ///<Bus clock will be internally gated off
            v1=0x00000001,     ///<Bus clock will not be automatically gated off
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,IpgenVal> ipgen{}; 
        namespace IpgenValC{
            constexpr Register::FieldValue<decltype(ipgen),IpgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ipgen),IpgenVal::v1> v1{};
        }
        ///System Clock Enable
        enum class HckenVal {
            v0=0x00000000,     ///<System clock will be internally gated off
            v1=0x00000001,     ///<System clock will not be automatically gated off
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HckenVal> hcken{}; 
        namespace HckenValC{
            constexpr Register::FieldValue<decltype(hcken),HckenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hcken),HckenVal::v1> v1{};
        }
        ///Peripheral Clock Enable
        enum class PerenVal {
            v0=0x00000000,     ///<SDHC clock will be internally gated off
            v1=0x00000001,     ///<SDHC clock will not be automatically gated off
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PerenVal> peren{}; 
        namespace PerenValC{
            constexpr Register::FieldValue<decltype(peren),PerenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(peren),PerenVal::v1> v1{};
        }
        ///SD Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sdclken{}; 
        namespace SdclkenValC{
        }
        ///Divisor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dvs{}; 
        namespace DvsValC{
        }
        ///SDCLK Frequency Select
        enum class SdclkfsVal {
            v1=0x00000001,     ///<Base clock divided by 2
            v10=0x00000002,     ///<Base clock divided by 4
            v100=0x00000004,     ///<Base clock divided by 8
            v1000=0x00000008,     ///<Base clock divided by 16
            v10000=0x00000010,     ///<Base clock divided by 32
            v100000=0x00000020,     ///<Base clock divided by 64
            v1000000=0x00000040,     ///<Base clock divided by 128
            v10000000=0x00000080,     ///<Base clock divided by 256
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,SdclkfsVal> sdclkfs{}; 
        namespace SdclkfsValC{
            constexpr Register::FieldValue<decltype(sdclkfs),SdclkfsVal::v1> v1{};
            constexpr Register::FieldValue<decltype(sdclkfs),SdclkfsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(sdclkfs),SdclkfsVal::v100> v100{};
            constexpr Register::FieldValue<decltype(sdclkfs),SdclkfsVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(sdclkfs),SdclkfsVal::v10000> v10000{};
            constexpr Register::FieldValue<decltype(sdclkfs),SdclkfsVal::v100000> v100000{};
            constexpr Register::FieldValue<decltype(sdclkfs),SdclkfsVal::v1000000> v1000000{};
            constexpr Register::FieldValue<decltype(sdclkfs),SdclkfsVal::v10000000> v10000000{};
        }
        ///Data Timeout Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dtocv{}; 
        namespace DtocvValC{
        }
        ///Software Reset For ALL
        enum class RstaVal {
            v0=0x00000000,     ///<No reset
            v1=0x00000001,     ///<Reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,RstaVal> rsta{}; 
        namespace RstaValC{
            constexpr Register::FieldValue<decltype(rsta),RstaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rsta),RstaVal::v1> v1{};
        }
        ///Software Reset For CMD Line
        enum class RstcVal {
            v0=0x00000000,     ///<No reset
            v1=0x00000001,     ///<Reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,RstcVal> rstc{}; 
        namespace RstcValC{
            constexpr Register::FieldValue<decltype(rstc),RstcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rstc),RstcVal::v1> v1{};
        }
        ///Software Reset For DAT Line
        enum class RstdVal {
            v0=0x00000000,     ///<No reset
            v1=0x00000001,     ///<Reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,RstdVal> rstd{}; 
        namespace RstdValC{
            constexpr Register::FieldValue<decltype(rstd),RstdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rstd),RstdVal::v1> v1{};
        }
        ///Initialization Active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> inita{}; 
        namespace InitaValC{
        }
    }
    namespace SdhcIrqstat{    ///<Interrupt Status Register
        using Addr = Register::Address<0x400b1030,0xee80fe00,0,unsigned>;
        ///Command Complete
        enum class CcVal {
            v0=0x00000000,     ///<Command not complete
            v1=0x00000001,     ///<Command complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CcVal> cc{}; 
        namespace CcValC{
            constexpr Register::FieldValue<decltype(cc),CcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cc),CcVal::v1> v1{};
        }
        ///Transfer Complete
        enum class TcVal {
            v0=0x00000000,     ///<Transfer not complete
            v1=0x00000001,     ///<Transfer complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TcVal> tc{}; 
        namespace TcValC{
            constexpr Register::FieldValue<decltype(tc),TcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tc),TcVal::v1> v1{};
        }
        ///Block Gap Event
        enum class BgeVal {
            v0=0x00000000,     ///<No block gap event
            v1=0x00000001,     ///<Transaction stopped at block gap
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BgeVal> bge{}; 
        namespace BgeValC{
            constexpr Register::FieldValue<decltype(bge),BgeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bge),BgeVal::v1> v1{};
        }
        ///DMA Interrupt
        enum class DintVal {
            v0=0x00000000,     ///<No DMA Interrupt
            v1=0x00000001,     ///<DMA Interrupt is generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DintVal> dint{}; 
        namespace DintValC{
            constexpr Register::FieldValue<decltype(dint),DintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dint),DintVal::v1> v1{};
        }
        ///Buffer Write Ready
        enum class BwrVal {
            v0=0x00000000,     ///<Not ready to write buffer
            v1=0x00000001,     ///<Ready to write buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BwrVal> bwr{}; 
        namespace BwrValC{
            constexpr Register::FieldValue<decltype(bwr),BwrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bwr),BwrVal::v1> v1{};
        }
        ///Buffer Read Ready
        enum class BrrVal {
            v0=0x00000000,     ///<Not ready to read buffer
            v1=0x00000001,     ///<Ready to read buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BrrVal> brr{}; 
        namespace BrrValC{
            constexpr Register::FieldValue<decltype(brr),BrrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(brr),BrrVal::v1> v1{};
        }
        ///Card Insertion
        enum class CinsVal {
            v0=0x00000000,     ///<Card state unstable or removed
            v1=0x00000001,     ///<Card inserted
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CinsVal> cins{}; 
        namespace CinsValC{
            constexpr Register::FieldValue<decltype(cins),CinsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cins),CinsVal::v1> v1{};
        }
        ///Card Removal
        enum class CrmVal {
            v0=0x00000000,     ///<Card state unstable or inserted
            v1=0x00000001,     ///<Card removed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CrmVal> crm{}; 
        namespace CrmValC{
            constexpr Register::FieldValue<decltype(crm),CrmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crm),CrmVal::v1> v1{};
        }
        ///Card Interrupt
        enum class CintVal {
            v0=0x00000000,     ///<No Card Interrupt
            v1=0x00000001,     ///<Generate Card Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CintVal> cint{}; 
        namespace CintValC{
            constexpr Register::FieldValue<decltype(cint),CintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cint),CintVal::v1> v1{};
        }
        ///Command Timeout Error
        enum class CtoeVal {
            v0=0x00000000,     ///<No Error
            v1=0x00000001,     ///<Time out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,CtoeVal> ctoe{}; 
        namespace CtoeValC{
            constexpr Register::FieldValue<decltype(ctoe),CtoeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ctoe),CtoeVal::v1> v1{};
        }
        ///Command CRC Error
        enum class CceVal {
            v0=0x00000000,     ///<No Error
            v1=0x00000001,     ///<CRC Error Generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CceVal> cce{}; 
        namespace CceValC{
            constexpr Register::FieldValue<decltype(cce),CceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cce),CceVal::v1> v1{};
        }
        ///Command End Bit Error
        enum class CebeVal {
            v0=0x00000000,     ///<No Error
            v1=0x00000001,     ///<End Bit Error Generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,CebeVal> cebe{}; 
        namespace CebeValC{
            constexpr Register::FieldValue<decltype(cebe),CebeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cebe),CebeVal::v1> v1{};
        }
        ///Command Index Error
        enum class CieVal {
            v0=0x00000000,     ///<No Error
            v1=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,CieVal> cie{}; 
        namespace CieValC{
            constexpr Register::FieldValue<decltype(cie),CieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cie),CieVal::v1> v1{};
        }
        ///Data Timeout Error
        enum class DtoeVal {
            v0=0x00000000,     ///<No Error
            v1=0x00000001,     ///<Time out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DtoeVal> dtoe{}; 
        namespace DtoeValC{
            constexpr Register::FieldValue<decltype(dtoe),DtoeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dtoe),DtoeVal::v1> v1{};
        }
        ///Data CRC Error
        enum class DceVal {
            v0=0x00000000,     ///<No Error
            v1=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,DceVal> dce{}; 
        namespace DceValC{
            constexpr Register::FieldValue<decltype(dce),DceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dce),DceVal::v1> v1{};
        }
        ///Data End Bit Error
        enum class DebeVal {
            v0=0x00000000,     ///<No Error
            v1=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,DebeVal> debe{}; 
        namespace DebeValC{
            constexpr Register::FieldValue<decltype(debe),DebeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(debe),DebeVal::v1> v1{};
        }
        ///Auto CMD12 Error
        enum class Ac12eVal {
            v0=0x00000000,     ///<No Error
            v1=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ac12eVal> ac12e{}; 
        namespace Ac12eValC{
            constexpr Register::FieldValue<decltype(ac12e),Ac12eVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ac12e),Ac12eVal::v1> v1{};
        }
        ///DMA Error
        enum class DmaeVal {
            v0=0x00000000,     ///<No Error
            v1=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,DmaeVal> dmae{}; 
        namespace DmaeValC{
            constexpr Register::FieldValue<decltype(dmae),DmaeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmae),DmaeVal::v1> v1{};
        }
    }
    namespace SdhcIrqstaten{    ///<Interrupt Status Enable Register
        using Addr = Register::Address<0x400b1034,0xee80fe00,0,unsigned>;
        ///Command Complete Status Enable
        enum class CcsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CcsenVal> ccsen{}; 
        namespace CcsenValC{
            constexpr Register::FieldValue<decltype(ccsen),CcsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ccsen),CcsenVal::v1> v1{};
        }
        ///Transfer Complete Status Enable
        enum class TcsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TcsenVal> tcsen{}; 
        namespace TcsenValC{
            constexpr Register::FieldValue<decltype(tcsen),TcsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcsen),TcsenVal::v1> v1{};
        }
        ///Block Gap Event Status Enable
        enum class BgesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BgesenVal> bgesen{}; 
        namespace BgesenValC{
            constexpr Register::FieldValue<decltype(bgesen),BgesenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bgesen),BgesenVal::v1> v1{};
        }
        ///DMA Interrupt Status Enable
        enum class DintsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DintsenVal> dintsen{}; 
        namespace DintsenValC{
            constexpr Register::FieldValue<decltype(dintsen),DintsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dintsen),DintsenVal::v1> v1{};
        }
        ///Buffer Write Ready Status Enable
        enum class BwrsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BwrsenVal> bwrsen{}; 
        namespace BwrsenValC{
            constexpr Register::FieldValue<decltype(bwrsen),BwrsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bwrsen),BwrsenVal::v1> v1{};
        }
        ///Buffer Read Ready Status Enable
        enum class BrrsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BrrsenVal> brrsen{}; 
        namespace BrrsenValC{
            constexpr Register::FieldValue<decltype(brrsen),BrrsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(brrsen),BrrsenVal::v1> v1{};
        }
        ///Card Insertion Status Enable
        enum class CinsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CinsenVal> cinsen{}; 
        namespace CinsenValC{
            constexpr Register::FieldValue<decltype(cinsen),CinsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cinsen),CinsenVal::v1> v1{};
        }
        ///Card Removal Status Enable
        enum class CrmsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CrmsenVal> crmsen{}; 
        namespace CrmsenValC{
            constexpr Register::FieldValue<decltype(crmsen),CrmsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crmsen),CrmsenVal::v1> v1{};
        }
        ///Card Interrupt Status Enable
        enum class CintsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CintsenVal> cintsen{}; 
        namespace CintsenValC{
            constexpr Register::FieldValue<decltype(cintsen),CintsenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cintsen),CintsenVal::v1> v1{};
        }
        ///Command Timeout Error Status Enable
        enum class CtoesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,CtoesenVal> ctoesen{}; 
        namespace CtoesenValC{
            constexpr Register::FieldValue<decltype(ctoesen),CtoesenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ctoesen),CtoesenVal::v1> v1{};
        }
        ///Command CRC Error Status Enable
        enum class CcesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CcesenVal> ccesen{}; 
        namespace CcesenValC{
            constexpr Register::FieldValue<decltype(ccesen),CcesenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ccesen),CcesenVal::v1> v1{};
        }
        ///Command End Bit Error Status Enable
        enum class CebesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,CebesenVal> cebesen{}; 
        namespace CebesenValC{
            constexpr Register::FieldValue<decltype(cebesen),CebesenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cebesen),CebesenVal::v1> v1{};
        }
        ///Command Index Error Status Enable
        enum class CiesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,CiesenVal> ciesen{}; 
        namespace CiesenValC{
            constexpr Register::FieldValue<decltype(ciesen),CiesenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ciesen),CiesenVal::v1> v1{};
        }
        ///Data Timeout Error Status Enable
        enum class DtoesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DtoesenVal> dtoesen{}; 
        namespace DtoesenValC{
            constexpr Register::FieldValue<decltype(dtoesen),DtoesenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dtoesen),DtoesenVal::v1> v1{};
        }
        ///Data CRC Error Status Enable
        enum class DcesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,DcesenVal> dcesen{}; 
        namespace DcesenValC{
            constexpr Register::FieldValue<decltype(dcesen),DcesenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dcesen),DcesenVal::v1> v1{};
        }
        ///Data End Bit Error Status Enable
        enum class DebesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,DebesenVal> debesen{}; 
        namespace DebesenValC{
            constexpr Register::FieldValue<decltype(debesen),DebesenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(debesen),DebesenVal::v1> v1{};
        }
        ///Auto CMD12 Error Status Enable
        enum class Ac12esenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ac12esenVal> ac12esen{}; 
        namespace Ac12esenValC{
            constexpr Register::FieldValue<decltype(ac12esen),Ac12esenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ac12esen),Ac12esenVal::v1> v1{};
        }
        ///DMA Error Status Enable
        enum class DmaesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,DmaesenVal> dmaesen{}; 
        namespace DmaesenValC{
            constexpr Register::FieldValue<decltype(dmaesen),DmaesenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaesen),DmaesenVal::v1> v1{};
        }
    }
    namespace SdhcIrqsigen{    ///<Interrupt Signal Enable Register
        using Addr = Register::Address<0x400b1038,0xee80fe00,0,unsigned>;
        ///Command Complete Interrupt Enable
        enum class CcienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CcienVal> ccien{}; 
        namespace CcienValC{
            constexpr Register::FieldValue<decltype(ccien),CcienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ccien),CcienVal::v1> v1{};
        }
        ///Transfer Complete Interrupt Enable
        enum class TcienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,TcienVal> tcien{}; 
        namespace TcienValC{
            constexpr Register::FieldValue<decltype(tcien),TcienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tcien),TcienVal::v1> v1{};
        }
        ///Block Gap Event Interrupt Enable
        enum class BgeienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BgeienVal> bgeien{}; 
        namespace BgeienValC{
            constexpr Register::FieldValue<decltype(bgeien),BgeienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bgeien),BgeienVal::v1> v1{};
        }
        ///DMA Interrupt Enable
        enum class DintienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DintienVal> dintien{}; 
        namespace DintienValC{
            constexpr Register::FieldValue<decltype(dintien),DintienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dintien),DintienVal::v1> v1{};
        }
        ///Buffer Write Ready Interrupt Enable
        enum class BwrienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BwrienVal> bwrien{}; 
        namespace BwrienValC{
            constexpr Register::FieldValue<decltype(bwrien),BwrienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bwrien),BwrienVal::v1> v1{};
        }
        ///Buffer Read Ready Interrupt Enable
        enum class BrrienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BrrienVal> brrien{}; 
        namespace BrrienValC{
            constexpr Register::FieldValue<decltype(brrien),BrrienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(brrien),BrrienVal::v1> v1{};
        }
        ///Card Insertion Interrupt Enable
        enum class CinsienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CinsienVal> cinsien{}; 
        namespace CinsienValC{
            constexpr Register::FieldValue<decltype(cinsien),CinsienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cinsien),CinsienVal::v1> v1{};
        }
        ///Card Removal Interrupt Enable
        enum class CrmienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,CrmienVal> crmien{}; 
        namespace CrmienValC{
            constexpr Register::FieldValue<decltype(crmien),CrmienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crmien),CrmienVal::v1> v1{};
        }
        ///Card Interrupt Enable
        enum class CintienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,CintienVal> cintien{}; 
        namespace CintienValC{
            constexpr Register::FieldValue<decltype(cintien),CintienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cintien),CintienVal::v1> v1{};
        }
        ///Command Timeout Error Interrupt Enable
        enum class CtoeienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,CtoeienVal> ctoeien{}; 
        namespace CtoeienValC{
            constexpr Register::FieldValue<decltype(ctoeien),CtoeienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ctoeien),CtoeienVal::v1> v1{};
        }
        ///Command CRC Error Interrupt Enable
        enum class CceienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,CceienVal> cceien{}; 
        namespace CceienValC{
            constexpr Register::FieldValue<decltype(cceien),CceienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cceien),CceienVal::v1> v1{};
        }
        ///Command End Bit Error Interrupt Enable
        enum class CebeienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,CebeienVal> cebeien{}; 
        namespace CebeienValC{
            constexpr Register::FieldValue<decltype(cebeien),CebeienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cebeien),CebeienVal::v1> v1{};
        }
        ///Command Index Error Interrupt Enable
        enum class CieienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,CieienVal> cieien{}; 
        namespace CieienValC{
            constexpr Register::FieldValue<decltype(cieien),CieienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cieien),CieienVal::v1> v1{};
        }
        ///Data Timeout Error Interrupt Enable
        enum class DtoeienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DtoeienVal> dtoeien{}; 
        namespace DtoeienValC{
            constexpr Register::FieldValue<decltype(dtoeien),DtoeienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dtoeien),DtoeienVal::v1> v1{};
        }
        ///Data CRC Error Interrupt Enable
        enum class DceienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,DceienVal> dceien{}; 
        namespace DceienValC{
            constexpr Register::FieldValue<decltype(dceien),DceienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dceien),DceienVal::v1> v1{};
        }
        ///Data End Bit Error Interrupt Enable
        enum class DebeienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,DebeienVal> debeien{}; 
        namespace DebeienValC{
            constexpr Register::FieldValue<decltype(debeien),DebeienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(debeien),DebeienVal::v1> v1{};
        }
        ///Auto CMD12 Error Interrupt Enable
        enum class Ac12eienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ac12eienVal> ac12eien{}; 
        namespace Ac12eienValC{
            constexpr Register::FieldValue<decltype(ac12eien),Ac12eienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ac12eien),Ac12eienVal::v1> v1{};
        }
        ///DMA Error Interrupt Enable
        enum class DmaeienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,DmaeienVal> dmaeien{}; 
        namespace DmaeienValC{
            constexpr Register::FieldValue<decltype(dmaeien),DmaeienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaeien),DmaeienVal::v1> v1{};
        }
    }
    namespace SdhcAc12err{    ///<Auto CMD12 Error Status Register
        using Addr = Register::Address<0x400b103c,0xffffff60,0,unsigned>;
        ///Auto CMD12 Not Executed
        enum class Ac12neVal {
            v0=0x00000000,     ///<Executed
            v1=0x00000001,     ///<Not executed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ac12neVal> ac12ne{}; 
        namespace Ac12neValC{
            constexpr Register::FieldValue<decltype(ac12ne),Ac12neVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ac12ne),Ac12neVal::v1> v1{};
        }
        ///Auto CMD12 Timeout Error
        enum class Ac12toeVal {
            v0=0x00000000,     ///<No error
            v1=0x00000001,     ///<Time out
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ac12toeVal> ac12toe{}; 
        namespace Ac12toeValC{
            constexpr Register::FieldValue<decltype(ac12toe),Ac12toeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ac12toe),Ac12toeVal::v1> v1{};
        }
        ///Auto CMD12 End Bit Error
        enum class Ac12ebeVal {
            v0=0x00000000,     ///<No error
            v1=0x00000001,     ///<End bit error generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ac12ebeVal> ac12ebe{}; 
        namespace Ac12ebeValC{
            constexpr Register::FieldValue<decltype(ac12ebe),Ac12ebeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ac12ebe),Ac12ebeVal::v1> v1{};
        }
        ///Auto CMD12 CRC Error
        enum class Ac12ceVal {
            v0=0x00000000,     ///<No CRC error
            v1=0x00000001,     ///<CRC Error met in auto CMD12 Response
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ac12ceVal> ac12ce{}; 
        namespace Ac12ceValC{
            constexpr Register::FieldValue<decltype(ac12ce),Ac12ceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ac12ce),Ac12ceVal::v1> v1{};
        }
        ///Auto CMD12 Index Error
        enum class Ac12ieVal {
            v0=0x00000000,     ///<No error
            v1=0x00000001,     ///<Error, the CMD index in response is not CMD12
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ac12ieVal> ac12ie{}; 
        namespace Ac12ieValC{
            constexpr Register::FieldValue<decltype(ac12ie),Ac12ieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ac12ie),Ac12ieVal::v1> v1{};
        }
        ///Command Not Issued By Auto CMD12 Error
        enum class Cnibac12eVal {
            v0=0x00000000,     ///<No error
            v1=0x00000001,     ///<Not issued
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Cnibac12eVal> cnibac12e{}; 
        namespace Cnibac12eValC{
            constexpr Register::FieldValue<decltype(cnibac12e),Cnibac12eVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cnibac12e),Cnibac12eVal::v1> v1{};
        }
    }
    namespace SdhcHtcapblt{    ///<Host Controller Capabilities
        using Addr = Register::Address<0x400b1040,0xf808ffff,0,unsigned>;
        ///Max Block Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> mbl{}; 
        namespace MblValC{
        }
        ///ADMA Support
        enum class AdmasVal {
            v0=0x00000000,     ///<Advanced DMA not supported
            v1=0x00000001,     ///<Advanced DMA supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,AdmasVal> admas{}; 
        namespace AdmasValC{
            constexpr Register::FieldValue<decltype(admas),AdmasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(admas),AdmasVal::v1> v1{};
        }
        ///High Speed Support
        enum class HssVal {
            v0=0x00000000,     ///<High speed not supported
            v1=0x00000001,     ///<High speed supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,HssVal> hss{}; 
        namespace HssValC{
            constexpr Register::FieldValue<decltype(hss),HssVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hss),HssVal::v1> v1{};
        }
        ///DMA Support
        enum class DmasVal {
            v0=0x00000000,     ///<DMA not supported
            v1=0x00000001,     ///<DMA supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,DmasVal> dmas{}; 
        namespace DmasValC{
            constexpr Register::FieldValue<decltype(dmas),DmasVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmas),DmasVal::v1> v1{};
        }
        ///Suspend/Resume Support
        enum class SrsVal {
            v0=0x00000000,     ///<Not supported
            v1=0x00000001,     ///<Supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SrsVal> srs{}; 
        namespace SrsValC{
            constexpr Register::FieldValue<decltype(srs),SrsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(srs),SrsVal::v1> v1{};
        }
        ///Voltage Support 3.3 V
        enum class Vs33Val {
            v0=0x00000000,     ///<3.3 V not supported
            v1=0x00000001,     ///<3.3 V supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Vs33Val> vs33{}; 
        namespace Vs33ValC{
            constexpr Register::FieldValue<decltype(vs33),Vs33Val::v0> v0{};
            constexpr Register::FieldValue<decltype(vs33),Vs33Val::v1> v1{};
        }
        ///Voltage Support 3.0 V
        enum class Vs30Val {
            v0=0x00000000,     ///<3.0 V not supported
            v1=0x00000001,     ///<3.0 V supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Vs30Val> vs30{}; 
        namespace Vs30ValC{
            constexpr Register::FieldValue<decltype(vs30),Vs30Val::v0> v0{};
            constexpr Register::FieldValue<decltype(vs30),Vs30Val::v1> v1{};
        }
        ///Voltage Support 1.8 V
        enum class Vs18Val {
            v0=0x00000000,     ///<1.8 V not supported
            v1=0x00000001,     ///<1.8 V supported
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Vs18Val> vs18{}; 
        namespace Vs18ValC{
            constexpr Register::FieldValue<decltype(vs18),Vs18Val::v0> v0{};
            constexpr Register::FieldValue<decltype(vs18),Vs18Val::v1> v1{};
        }
    }
    namespace SdhcWml{    ///<Watermark Level Register
        using Addr = Register::Address<0x400b1044,0xe000ff00,0,unsigned>;
        ///Read Watermark Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdwml{}; 
        namespace RdwmlValC{
        }
        ///Write Watermark Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wrwml{}; 
        namespace WrwmlValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> wrbrstlen{}; 
        namespace WrbrstlenValC{
        }
    }
    namespace SdhcFevt{    ///<Force Event Register
        using Addr = Register::Address<0x400b1050,0x6e80ff60,0,unsigned>;
        ///Force Event Auto Command 12 Not Executed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ac12ne{}; 
        namespace Ac12neValC{
        }
        ///Force Event Auto Command 12 Time Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ac12toe{}; 
        namespace Ac12toeValC{
        }
        ///Force Event Auto Command 12 CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ac12ce{}; 
        namespace Ac12ceValC{
        }
        ///Force Event Auto Command 12 End Bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ac12ebe{}; 
        namespace Ac12ebeValC{
        }
        ///Force Event Auto Command 12 Index Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ac12ie{}; 
        namespace Ac12ieValC{
        }
        ///Force Event Command Not Executed By Auto Command 12 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cnibac12e{}; 
        namespace Cnibac12eValC{
        }
        ///Force Event Command Time Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ctoe{}; 
        namespace CtoeValC{
        }
        ///Force Event Command CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cce{}; 
        namespace CceValC{
        }
        ///Force Event Command End Bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cebe{}; 
        namespace CebeValC{
        }
        ///Force Event Command Index Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cie{}; 
        namespace CieValC{
        }
        ///Force Event Data Time Out Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dtoe{}; 
        namespace DtoeValC{
        }
        ///Force Event Data CRC Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dce{}; 
        namespace DceValC{
        }
        ///Force Event Data End Bit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> debe{}; 
        namespace DebeValC{
        }
        ///Force Event Auto Command 12 Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ac12e{}; 
        namespace Ac12eValC{
        }
        ///Force Event DMA Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dmae{}; 
        namespace DmaeValC{
        }
        ///Force Event Card Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cint{}; 
        namespace CintValC{
        }
    }
    namespace SdhcAdmaes{    ///<ADMA Error Status Register
        using Addr = Register::Address<0x400b1054,0xfffffff0,0,unsigned>;
        ///ADMA Error State (when ADMA Error is occurred.)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> admaes{}; 
        namespace AdmaesValC{
        }
        ///ADMA Length Mismatch Error
        enum class AdmalmeVal {
            v0=0x00000000,     ///<No error
            v1=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AdmalmeVal> admalme{}; 
        namespace AdmalmeValC{
            constexpr Register::FieldValue<decltype(admalme),AdmalmeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(admalme),AdmalmeVal::v1> v1{};
        }
        ///ADMA Descritor Error
        enum class AdmadceVal {
            v0=0x00000000,     ///<No error
            v1=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AdmadceVal> admadce{}; 
        namespace AdmadceValC{
            constexpr Register::FieldValue<decltype(admadce),AdmadceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(admadce),AdmadceVal::v1> v1{};
        }
    }
    namespace SdhcAdsaddr{    ///<ADMA System Address Register
        using Addr = Register::Address<0x400b1058,0x00000003,0,unsigned>;
        ///ADMA System Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> adsaddr{}; 
        namespace AdsaddrValC{
        }
    }
    namespace SdhcVendor{    ///<Vendor Specific Register
        using Addr = Register::Address<0x400b10c0,0xff00fffc,0,unsigned>;
        ///External DMA Request Enable
        enum class ExtdmaenVal {
            v0=0x00000000,     ///<In any scenario, SDHC does not send out external DMA request.
            v1=0x00000001,     ///<When internal DMA is not active, the external DMA request will be sent out.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ExtdmaenVal> extdmaen{}; 
        namespace ExtdmaenValC{
            constexpr Register::FieldValue<decltype(extdmaen),ExtdmaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(extdmaen),ExtdmaenVal::v1> v1{};
        }
        ///Exact block number block read enable for SDIO CMD53
        enum class ExblknuVal {
            v0=0x00000000,     ///<none exact block read.
            v1=0x00000001,     ///<Exact block read for SDIO CMD53.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ExblknuVal> exblknu{}; 
        namespace ExblknuValC{
            constexpr Register::FieldValue<decltype(exblknu),ExblknuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(exblknu),ExblknuVal::v1> v1{};
        }
        ///Internal State Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> intstval{}; 
        namespace IntstvalValC{
        }
    }
    namespace SdhcMmcboot{    ///<MMC Boot Register
        using Addr = Register::Address<0x400b10c4,0x0000ff00,0,unsigned>;
        ///Boot ACK time out counter value.
        enum class DtocvackVal {
            v0000=0x00000000,     ///<SDCLK x 2^8
            v0001=0x00000001,     ///<SDCLK x 2^9
            v0010=0x00000002,     ///<SDCLK x 2^10
            v0011=0x00000003,     ///<SDCLK x 2^11
            v0100=0x00000004,     ///<SDCLK x 2^12
            v0101=0x00000005,     ///<SDCLK x 2^13
            v0110=0x00000006,     ///<SDCLK x 2^14
            v0111=0x00000007,     ///<SDCLK x 2^15
            v1110=0x0000000e,     ///<SDCLK x 2^22
            v1111=0x0000000f,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,DtocvackVal> dtocvack{}; 
        namespace DtocvackValC{
            constexpr Register::FieldValue<decltype(dtocvack),DtocvackVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(dtocvack),DtocvackVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(dtocvack),DtocvackVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(dtocvack),DtocvackVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(dtocvack),DtocvackVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(dtocvack),DtocvackVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(dtocvack),DtocvackVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(dtocvack),DtocvackVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(dtocvack),DtocvackVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(dtocvack),DtocvackVal::v1111> v1111{};
        }
        ///Boot ack mode select
        enum class BootackVal {
            v0=0x00000000,     ///<No ack
            v1=0x00000001,     ///<Ack
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BootackVal> bootack{}; 
        namespace BootackValC{
            constexpr Register::FieldValue<decltype(bootack),BootackVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bootack),BootackVal::v1> v1{};
        }
        ///Boot mode select
        enum class BootmodeVal {
            v0=0x00000000,     ///<Normal boot
            v1=0x00000001,     ///<Alternative boot
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,BootmodeVal> bootmode{}; 
        namespace BootmodeValC{
            constexpr Register::FieldValue<decltype(bootmode),BootmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bootmode),BootmodeVal::v1> v1{};
        }
        ///Boot mode enable
        enum class BootenVal {
            v0=0x00000000,     ///<Fast boot disable
            v1=0x00000001,     ///<Fast boot enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,BootenVal> booten{}; 
        namespace BootenValC{
            constexpr Register::FieldValue<decltype(booten),BootenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(booten),BootenVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> autosabgen{}; 
        namespace AutosabgenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bootblkcnt{}; 
        namespace BootblkcntValC{
        }
    }
    namespace SdhcHostver{    ///<Host Controller Version
        using Addr = Register::Address<0x400b10fc,0xffff0000,0,unsigned>;
        ///Specification Version Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> svn{}; 
        namespace SvnValC{
        }
        ///Vendor Version Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> vvn{}; 
        namespace VvnValC{
        }
    }
}
