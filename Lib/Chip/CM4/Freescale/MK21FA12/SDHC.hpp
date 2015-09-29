#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Secured Digital Host Controller
    namespace SdhcDsaddr{    ///<DMA System Address register
        using Addr = Register::Address<0x400b1000,0x00000003,0,unsigned>;
        ///DMA System Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dsaddr{}; 
    }
    namespace SdhcBlkattr{    ///<Block Attributes register
        using Addr = Register::Address<0x400b1004,0x0000e000,0,unsigned>;
        ///Transfer Block Size
        enum class blksizeVal {
            v0=0x00000000,     ///<No data transfer.
            v1=0x00000001,     ///<1 Byte
            v10=0x00000002,     ///<2 Bytes
            v11=0x00000003,     ///<3 Bytes
            v100=0x00000004,     ///<4 Bytes
            v111111111=0x000001ff,     ///<511 Bytes
            v1000000000=0x00000200,     ///<512 Bytes
            v100000000000=0x00000800,     ///<2048 Bytes
            v1000000000000=0x00001000,     ///<4096 Bytes
        };
        namespace blksizeValC{
            constexpr MPL::Value<blksizeVal,blksizeVal::v0> v0{};
            constexpr MPL::Value<blksizeVal,blksizeVal::v1> v1{};
            constexpr MPL::Value<blksizeVal,blksizeVal::v10> v10{};
            constexpr MPL::Value<blksizeVal,blksizeVal::v11> v11{};
            constexpr MPL::Value<blksizeVal,blksizeVal::v100> v100{};
            constexpr MPL::Value<blksizeVal,blksizeVal::v111111111> v111111111{};
            constexpr MPL::Value<blksizeVal,blksizeVal::v1000000000> v1000000000{};
            constexpr MPL::Value<blksizeVal,blksizeVal::v100000000000> v100000000000{};
            constexpr MPL::Value<blksizeVal,blksizeVal::v1000000000000> v1000000000000{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,blksizeVal> blksize{}; 
        ///Blocks Count For Current Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
    }
    namespace SdhcCmdarg{    ///<Command Argument register
        using Addr = Register::Address<0x400b1008,0x00000000,0,unsigned>;
        ///Command Argument
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdarg{}; 
    }
    namespace SdhcXfertyp{    ///<Transfer Type register
        using Addr = Register::Address<0x400b100c,0xc004ffc8,0,unsigned>;
        ///DMA Enable
        enum class dmaenVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace dmaenValC{
            constexpr MPL::Value<dmaenVal,dmaenVal::v0> v0{};
            constexpr MPL::Value<dmaenVal,dmaenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,dmaenVal> dmaen{}; 
        ///Block Count Enable
        enum class bcenVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace bcenValC{
            constexpr MPL::Value<bcenVal,bcenVal::v0> v0{};
            constexpr MPL::Value<bcenVal,bcenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,bcenVal> bcen{}; 
        ///Auto CMD12 Enable
        enum class ac12enVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace ac12enValC{
            constexpr MPL::Value<ac12enVal,ac12enVal::v0> v0{};
            constexpr MPL::Value<ac12enVal,ac12enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ac12enVal> ac12en{}; 
        ///Data Transfer Direction Select
        enum class dtdselVal {
            v0=0x00000000,     ///<Write host to card.
            v1=0x00000001,     ///<Read card to host.
        };
        namespace dtdselValC{
            constexpr MPL::Value<dtdselVal,dtdselVal::v0> v0{};
            constexpr MPL::Value<dtdselVal,dtdselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dtdselVal> dtdsel{}; 
        ///Multi/Single Block Select
        enum class msbselVal {
            v0=0x00000000,     ///<Single block.
            v1=0x00000001,     ///<Multiple blocks.
        };
        namespace msbselValC{
            constexpr MPL::Value<msbselVal,msbselVal::v0> v0{};
            constexpr MPL::Value<msbselVal,msbselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,msbselVal> msbsel{}; 
        ///Response Type Select
        enum class rsptypVal {
            v00=0x00000000,     ///<No response.
            v01=0x00000001,     ///<Response length 136.
            v10=0x00000002,     ///<Response length 48.
            v11=0x00000003,     ///<Response length 48, check busy after response.
        };
        namespace rsptypValC{
            constexpr MPL::Value<rsptypVal,rsptypVal::v00> v00{};
            constexpr MPL::Value<rsptypVal,rsptypVal::v01> v01{};
            constexpr MPL::Value<rsptypVal,rsptypVal::v10> v10{};
            constexpr MPL::Value<rsptypVal,rsptypVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,rsptypVal> rsptyp{}; 
        ///Command CRC Check Enable
        enum class cccenVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace cccenValC{
            constexpr MPL::Value<cccenVal,cccenVal::v0> v0{};
            constexpr MPL::Value<cccenVal,cccenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,cccenVal> cccen{}; 
        ///Command Index Check Enable
        enum class cicenVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace cicenValC{
            constexpr MPL::Value<cicenVal,cicenVal::v0> v0{};
            constexpr MPL::Value<cicenVal,cicenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,cicenVal> cicen{}; 
        ///Data Present Select
        enum class dpselVal {
            v0=0x00000000,     ///<No data present.
            v1=0x00000001,     ///<Data present.
        };
        namespace dpselValC{
            constexpr MPL::Value<dpselVal,dpselVal::v0> v0{};
            constexpr MPL::Value<dpselVal,dpselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,dpselVal> dpsel{}; 
        ///Command Type
        enum class cmdtypVal {
            v00=0x00000000,     ///<Normal other commands.
            v01=0x00000001,     ///<Suspend CMD52 for writing bus suspend in CCCR.
            v10=0x00000002,     ///<Resume CMD52 for writing function select in CCCR.
            v11=0x00000003,     ///<Abort CMD12, CMD52 for writing I/O abort in CCCR.
        };
        namespace cmdtypValC{
            constexpr MPL::Value<cmdtypVal,cmdtypVal::v00> v00{};
            constexpr MPL::Value<cmdtypVal,cmdtypVal::v01> v01{};
            constexpr MPL::Value<cmdtypVal,cmdtypVal::v10> v10{};
            constexpr MPL::Value<cmdtypVal,cmdtypVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,cmdtypVal> cmdtyp{}; 
        ///Command Index
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,24),Register::ReadWriteAccess,unsigned> cmdinx{}; 
    }
    namespace SdhcCmdrsp0{    ///<Command Response 0
        using Addr = Register::Address<0x400b1010,0x00000000,0,unsigned>;
        ///Command Response 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdrsp0{}; 
    }
    namespace SdhcCmdrsp1{    ///<Command Response 1
        using Addr = Register::Address<0x400b1014,0x00000000,0,unsigned>;
        ///Command Response 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdrsp1{}; 
    }
    namespace SdhcCmdrsp2{    ///<Command Response 2
        using Addr = Register::Address<0x400b1018,0x00000000,0,unsigned>;
        ///Command Response 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdrsp2{}; 
    }
    namespace SdhcCmdrsp3{    ///<Command Response 3
        using Addr = Register::Address<0x400b101c,0x00000000,0,unsigned>;
        ///Command Response 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmdrsp3{}; 
    }
    namespace SdhcDatport{    ///<Buffer Data Port register
        using Addr = Register::Address<0x400b1020,0x00000000,0,unsigned>;
        ///Data Content
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datcont{}; 
    }
    namespace SdhcPrsstat{    ///<Present State register
        using Addr = Register::Address<0x400b1024,0x007ef000,0,unsigned>;
        ///Command Inhibit (CMD)
        enum class cihbVal {
            v0=0x00000000,     ///<Can issue command using only CMD line.
            v1=0x00000001,     ///<Cannot issue command.
        };
        namespace cihbValC{
            constexpr MPL::Value<cihbVal,cihbVal::v0> v0{};
            constexpr MPL::Value<cihbVal,cihbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cihbVal> cihb{}; 
        ///Command Inhibit (DAT)
        enum class cdihbVal {
            v0=0x00000000,     ///<Can issue command which uses the DAT line.
            v1=0x00000001,     ///<Cannot issue command which uses the DAT line.
        };
        namespace cdihbValC{
            constexpr MPL::Value<cdihbVal,cdihbVal::v0> v0{};
            constexpr MPL::Value<cdihbVal,cdihbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cdihbVal> cdihb{}; 
        ///Data Line Active
        enum class dlaVal {
            v0=0x00000000,     ///<DAT line inactive.
            v1=0x00000001,     ///<DAT line active.
        };
        namespace dlaValC{
            constexpr MPL::Value<dlaVal,dlaVal::v0> v0{};
            constexpr MPL::Value<dlaVal,dlaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,dlaVal> dla{}; 
        ///SD Clock Stable
        enum class sdstbVal {
            v0=0x00000000,     ///<Clock is changing frequency and not stable.
            v1=0x00000001,     ///<Clock is stable.
        };
        namespace sdstbValC{
            constexpr MPL::Value<sdstbVal,sdstbVal::v0> v0{};
            constexpr MPL::Value<sdstbVal,sdstbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,sdstbVal> sdstb{}; 
        ///Bus Clock Gated Off Internally
        enum class ipgoffVal {
            v0=0x00000000,     ///<Bus clock is active.
            v1=0x00000001,     ///<Bus clock is gated off.
        };
        namespace ipgoffValC{
            constexpr MPL::Value<ipgoffVal,ipgoffVal::v0> v0{};
            constexpr MPL::Value<ipgoffVal,ipgoffVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ipgoffVal> ipgoff{}; 
        ///System Clock Gated Off Internally
        enum class hckoffVal {
            v0=0x00000000,     ///<System clock is active.
            v1=0x00000001,     ///<System clock is gated off.
        };
        namespace hckoffValC{
            constexpr MPL::Value<hckoffVal,hckoffVal::v0> v0{};
            constexpr MPL::Value<hckoffVal,hckoffVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,hckoffVal> hckoff{}; 
        ///SDHC clock Gated Off Internally
        enum class peroffVal {
            v0=0x00000000,     ///<SDHC clock is active.
            v1=0x00000001,     ///<SDHC clock is gated off.
        };
        namespace peroffValC{
            constexpr MPL::Value<peroffVal,peroffVal::v0> v0{};
            constexpr MPL::Value<peroffVal,peroffVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,peroffVal> peroff{}; 
        ///SD Clock Gated Off Internally
        enum class sdoffVal {
            v0=0x00000000,     ///<SD clock is active.
            v1=0x00000001,     ///<SD clock is gated off.
        };
        namespace sdoffValC{
            constexpr MPL::Value<sdoffVal,sdoffVal::v0> v0{};
            constexpr MPL::Value<sdoffVal,sdoffVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,sdoffVal> sdoff{}; 
        ///Write Transfer Active
        enum class wtaVal {
            v0=0x00000000,     ///<No valid data.
            v1=0x00000001,     ///<Transferring data.
        };
        namespace wtaValC{
            constexpr MPL::Value<wtaVal,wtaVal::v0> v0{};
            constexpr MPL::Value<wtaVal,wtaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wtaVal> wta{}; 
        ///Read Transfer Active
        enum class rtaVal {
            v0=0x00000000,     ///<No valid data.
            v1=0x00000001,     ///<Transferring data.
        };
        namespace rtaValC{
            constexpr MPL::Value<rtaVal,rtaVal::v0> v0{};
            constexpr MPL::Value<rtaVal,rtaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,rtaVal> rta{}; 
        ///Buffer Write Enable
        enum class bwenVal {
            v0=0x00000000,     ///<Write disable, the buffer can hold valid data less than the write watermark level.
            v1=0x00000001,     ///<Write enable, the buffer can hold valid data greater than the write watermark level.
        };
        namespace bwenValC{
            constexpr MPL::Value<bwenVal,bwenVal::v0> v0{};
            constexpr MPL::Value<bwenVal,bwenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,bwenVal> bwen{}; 
        ///Buffer Read Enable
        enum class brenVal {
            v0=0x00000000,     ///<Read disable, valid data less than the watermark level exist in the buffer.
            v1=0x00000001,     ///<Read enable, valid data greater than the watermark level exist in the buffer.
        };
        namespace brenValC{
            constexpr MPL::Value<brenVal,brenVal::v0> v0{};
            constexpr MPL::Value<brenVal,brenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,brenVal> bren{}; 
        ///Card Inserted
        enum class cinsVal {
            v0=0x00000000,     ///<Power on reset or no card.
            v1=0x00000001,     ///<Card inserted.
        };
        namespace cinsValC{
            constexpr MPL::Value<cinsVal,cinsVal::v0> v0{};
            constexpr MPL::Value<cinsVal,cinsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,cinsVal> cins{}; 
        ///CMD Line Signal Level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> clsl{}; 
        ///DAT Line Signal Level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dlsl{}; 
    }
    namespace SdhcProctl{    ///<Protocol Control register
        using Addr = Register::Address<0x400b1028,0xf8f0fc00,0,unsigned>;
        ///LED Control
        enum class lctlVal {
            v0=0x00000000,     ///<LED off.
            v1=0x00000001,     ///<LED on.
        };
        namespace lctlValC{
            constexpr MPL::Value<lctlVal,lctlVal::v0> v0{};
            constexpr MPL::Value<lctlVal,lctlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,lctlVal> lctl{}; 
        ///Data Transfer Width
        enum class dtwVal {
            v00=0x00000000,     ///<1-bit mode
            v01=0x00000001,     ///<4-bit mode
            v10=0x00000002,     ///<8-bit mode
        };
        namespace dtwValC{
            constexpr MPL::Value<dtwVal,dtwVal::v00> v00{};
            constexpr MPL::Value<dtwVal,dtwVal::v01> v01{};
            constexpr MPL::Value<dtwVal,dtwVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,dtwVal> dtw{}; 
        ///DAT3 As Card Detection Pin
        enum class d3cdVal {
            v0=0x00000000,     ///<DAT3 does not monitor card Insertion.
            v1=0x00000001,     ///<DAT3 as card detection pin.
        };
        namespace d3cdValC{
            constexpr MPL::Value<d3cdVal,d3cdVal::v0> v0{};
            constexpr MPL::Value<d3cdVal,d3cdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,d3cdVal> d3cd{}; 
        ///Endian Mode
        enum class emodeVal {
            v00=0x00000000,     ///<Big endian mode
            v01=0x00000001,     ///<Half word big endian mode
            v10=0x00000002,     ///<Little endian mode
        };
        namespace emodeValC{
            constexpr MPL::Value<emodeVal,emodeVal::v00> v00{};
            constexpr MPL::Value<emodeVal,emodeVal::v01> v01{};
            constexpr MPL::Value<emodeVal,emodeVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,emodeVal> emode{}; 
        ///Card Detect Test Level
        enum class cdtlVal {
            v0=0x00000000,     ///<Card detect test level is 0, no card inserted.
            v1=0x00000001,     ///<Card detect test level is 1, card inserted.
        };
        namespace cdtlValC{
            constexpr MPL::Value<cdtlVal,cdtlVal::v0> v0{};
            constexpr MPL::Value<cdtlVal,cdtlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cdtlVal> cdtl{}; 
        ///Card Detect Signal Selection
        enum class cdssVal {
            v0=0x00000000,     ///<Card detection level is selected for normal purpose.
            v1=0x00000001,     ///<Card detection test level is selected for test purpose.
        };
        namespace cdssValC{
            constexpr MPL::Value<cdssVal,cdssVal::v0> v0{};
            constexpr MPL::Value<cdssVal,cdssVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,cdssVal> cdss{}; 
        ///DMA Select
        enum class dmasVal {
            v00=0x00000000,     ///<No DMA or simple DMA is selected.
            v01=0x00000001,     ///<ADMA1 is selected.
            v10=0x00000002,     ///<ADMA2 is selected.
        };
        namespace dmasValC{
            constexpr MPL::Value<dmasVal,dmasVal::v00> v00{};
            constexpr MPL::Value<dmasVal,dmasVal::v01> v01{};
            constexpr MPL::Value<dmasVal,dmasVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,dmasVal> dmas{}; 
        ///Stop At Block Gap Request
        enum class sabgreqVal {
            v0=0x00000000,     ///<Transfer
            v1=0x00000001,     ///<Stop
        };
        namespace sabgreqValC{
            constexpr MPL::Value<sabgreqVal,sabgreqVal::v0> v0{};
            constexpr MPL::Value<sabgreqVal,sabgreqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sabgreqVal> sabgreq{}; 
        ///Continue Request
        enum class creqVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<Restart
        };
        namespace creqValC{
            constexpr MPL::Value<creqVal,creqVal::v0> v0{};
            constexpr MPL::Value<creqVal,creqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,creqVal> creq{}; 
        ///Read Wait Control
        enum class rwctlVal {
            v0=0x00000000,     ///<Disable read wait control, and stop SD clock at block gap when SABGREQ is set.
            v1=0x00000001,     ///<Enable read wait control, and assert read wait without stopping SD clock at block gap when SABGREQ bit is set.
        };
        namespace rwctlValC{
            constexpr MPL::Value<rwctlVal,rwctlVal::v0> v0{};
            constexpr MPL::Value<rwctlVal,rwctlVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,rwctlVal> rwctl{}; 
        ///Interrupt At Block Gap
        enum class iabgVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace iabgValC{
            constexpr MPL::Value<iabgVal,iabgVal::v0> v0{};
            constexpr MPL::Value<iabgVal,iabgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,iabgVal> iabg{}; 
        ///Wakeup Event Enable On Card Interrupt
        enum class wecintVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace wecintValC{
            constexpr MPL::Value<wecintVal,wecintVal::v0> v0{};
            constexpr MPL::Value<wecintVal,wecintVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,wecintVal> wecint{}; 
        ///Wakeup Event Enable On SD Card Insertion
        enum class wecinsVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace wecinsValC{
            constexpr MPL::Value<wecinsVal,wecinsVal::v0> v0{};
            constexpr MPL::Value<wecinsVal,wecinsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,wecinsVal> wecins{}; 
        ///Wakeup Event Enable On SD Card Removal
        enum class wecrmVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace wecrmValC{
            constexpr MPL::Value<wecrmVal,wecrmVal::v0> v0{};
            constexpr MPL::Value<wecrmVal,wecrmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,wecrmVal> wecrm{}; 
    }
    namespace SdhcSysctl{    ///<System Control register
        using Addr = Register::Address<0x400b102c,0xf0f00000,0,unsigned>;
        ///IPG Clock Enable
        enum class ipgenVal {
            v0=0x00000000,     ///<Bus clock will be internally gated off.
            v1=0x00000001,     ///<Bus clock will not be automatically gated off.
        };
        namespace ipgenValC{
            constexpr MPL::Value<ipgenVal,ipgenVal::v0> v0{};
            constexpr MPL::Value<ipgenVal,ipgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ipgenVal> ipgen{}; 
        ///System Clock Enable
        enum class hckenVal {
            v0=0x00000000,     ///<System clock will be internally gated off.
            v1=0x00000001,     ///<System clock will not be automatically gated off.
        };
        namespace hckenValC{
            constexpr MPL::Value<hckenVal,hckenVal::v0> v0{};
            constexpr MPL::Value<hckenVal,hckenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,hckenVal> hcken{}; 
        ///Peripheral Clock Enable
        enum class perenVal {
            v0=0x00000000,     ///<SDHC clock will be internally gated off.
            v1=0x00000001,     ///<SDHC clock will not be automatically gated off.
        };
        namespace perenValC{
            constexpr MPL::Value<perenVal,perenVal::v0> v0{};
            constexpr MPL::Value<perenVal,perenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,perenVal> peren{}; 
        ///SD Clock Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sdclken{}; 
        ///Divisor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dvs{}; 
        ///SDCLK Frequency Select
        enum class sdclkfsVal {
            v1=0x00000001,     ///<Base clock divided by 2.
            v10=0x00000002,     ///<Base clock divided by 4.
            v100=0x00000004,     ///<Base clock divided by 8.
            v1000=0x00000008,     ///<Base clock divided by 16.
            v10000=0x00000010,     ///<Base clock divided by 32.
            v100000=0x00000020,     ///<Base clock divided by 64.
            v1000000=0x00000040,     ///<Base clock divided by 128.
            v10000000=0x00000080,     ///<Base clock divided by 256.
        };
        namespace sdclkfsValC{
            constexpr MPL::Value<sdclkfsVal,sdclkfsVal::v1> v1{};
            constexpr MPL::Value<sdclkfsVal,sdclkfsVal::v10> v10{};
            constexpr MPL::Value<sdclkfsVal,sdclkfsVal::v100> v100{};
            constexpr MPL::Value<sdclkfsVal,sdclkfsVal::v1000> v1000{};
            constexpr MPL::Value<sdclkfsVal,sdclkfsVal::v10000> v10000{};
            constexpr MPL::Value<sdclkfsVal,sdclkfsVal::v100000> v100000{};
            constexpr MPL::Value<sdclkfsVal,sdclkfsVal::v1000000> v1000000{};
            constexpr MPL::Value<sdclkfsVal,sdclkfsVal::v10000000> v10000000{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,sdclkfsVal> sdclkfs{}; 
        ///Data Timeout Counter Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> dtocv{}; 
        ///Software Reset For ALL
        enum class rstaVal {
            v0=0x00000000,     ///<No reset.
            v1=0x00000001,     ///<Reset.
        };
        namespace rstaValC{
            constexpr MPL::Value<rstaVal,rstaVal::v0> v0{};
            constexpr MPL::Value<rstaVal,rstaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,rstaVal> rsta{}; 
        ///Software Reset For CMD Line
        enum class rstcVal {
            v0=0x00000000,     ///<No reset.
            v1=0x00000001,     ///<Reset.
        };
        namespace rstcValC{
            constexpr MPL::Value<rstcVal,rstcVal::v0> v0{};
            constexpr MPL::Value<rstcVal,rstcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,rstcVal> rstc{}; 
        ///Software Reset For DAT Line
        enum class rstdVal {
            v0=0x00000000,     ///<No reset.
            v1=0x00000001,     ///<Reset.
        };
        namespace rstdValC{
            constexpr MPL::Value<rstdVal,rstdVal::v0> v0{};
            constexpr MPL::Value<rstdVal,rstdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,rstdVal> rstd{}; 
        ///Initialization Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> inita{}; 
    }
    namespace SdhcIrqstat{    ///<Interrupt Status register
        using Addr = Register::Address<0x400b1030,0xee80fe00,0,unsigned>;
        ///Command Complete
        enum class ccVal {
            v0=0x00000000,     ///<Command not complete.
            v1=0x00000001,     ///<Command complete.
        };
        namespace ccValC{
            constexpr MPL::Value<ccVal,ccVal::v0> v0{};
            constexpr MPL::Value<ccVal,ccVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ccVal> cc{}; 
        ///Transfer Complete
        enum class tcVal {
            v0=0x00000000,     ///<Transfer not complete.
            v1=0x00000001,     ///<Transfer complete.
        };
        namespace tcValC{
            constexpr MPL::Value<tcVal,tcVal::v0> v0{};
            constexpr MPL::Value<tcVal,tcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tcVal> tc{}; 
        ///Block Gap Event
        enum class bgeVal {
            v0=0x00000000,     ///<No block gap event.
            v1=0x00000001,     ///<Transaction stopped at block gap.
        };
        namespace bgeValC{
            constexpr MPL::Value<bgeVal,bgeVal::v0> v0{};
            constexpr MPL::Value<bgeVal,bgeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bgeVal> bge{}; 
        ///DMA Interrupt
        enum class dintVal {
            v0=0x00000000,     ///<No DMA Interrupt.
            v1=0x00000001,     ///<DMA Interrupt is generated.
        };
        namespace dintValC{
            constexpr MPL::Value<dintVal,dintVal::v0> v0{};
            constexpr MPL::Value<dintVal,dintVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dintVal> dint{}; 
        ///Buffer Write Ready
        enum class bwrVal {
            v0=0x00000000,     ///<Not ready to write buffer.
            v1=0x00000001,     ///<Ready to write buffer.
        };
        namespace bwrValC{
            constexpr MPL::Value<bwrVal,bwrVal::v0> v0{};
            constexpr MPL::Value<bwrVal,bwrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bwrVal> bwr{}; 
        ///Buffer Read Ready
        enum class brrVal {
            v0=0x00000000,     ///<Not ready to read buffer.
            v1=0x00000001,     ///<Ready to read buffer.
        };
        namespace brrValC{
            constexpr MPL::Value<brrVal,brrVal::v0> v0{};
            constexpr MPL::Value<brrVal,brrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,brrVal> brr{}; 
        ///Card Insertion
        enum class cinsVal {
            v0=0x00000000,     ///<Card state unstable or removed.
            v1=0x00000001,     ///<Card inserted.
        };
        namespace cinsValC{
            constexpr MPL::Value<cinsVal,cinsVal::v0> v0{};
            constexpr MPL::Value<cinsVal,cinsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cinsVal> cins{}; 
        ///Card Removal
        enum class crmVal {
            v0=0x00000000,     ///<Card state unstable or inserted.
            v1=0x00000001,     ///<Card removed.
        };
        namespace crmValC{
            constexpr MPL::Value<crmVal,crmVal::v0> v0{};
            constexpr MPL::Value<crmVal,crmVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,crmVal> crm{}; 
        ///Card Interrupt
        enum class cintVal {
            v0=0x00000000,     ///<No Card Interrupt.
            v1=0x00000001,     ///<Generate Card Interrupt.
        };
        namespace cintValC{
            constexpr MPL::Value<cintVal,cintVal::v0> v0{};
            constexpr MPL::Value<cintVal,cintVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cintVal> cint{}; 
        ///Command Timeout Error
        enum class ctoeVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<Time out.
        };
        namespace ctoeValC{
            constexpr MPL::Value<ctoeVal,ctoeVal::v0> v0{};
            constexpr MPL::Value<ctoeVal,ctoeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ctoeVal> ctoe{}; 
        ///Command CRC Error
        enum class cceVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<CRC Error generated.
        };
        namespace cceValC{
            constexpr MPL::Value<cceVal,cceVal::v0> v0{};
            constexpr MPL::Value<cceVal,cceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,cceVal> cce{}; 
        ///Command End Bit Error
        enum class cebeVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<End Bit Error generated.
        };
        namespace cebeValC{
            constexpr MPL::Value<cebeVal,cebeVal::v0> v0{};
            constexpr MPL::Value<cebeVal,cebeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,cebeVal> cebe{}; 
        ///Command Index Error
        enum class cieVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<Error.
        };
        namespace cieValC{
            constexpr MPL::Value<cieVal,cieVal::v0> v0{};
            constexpr MPL::Value<cieVal,cieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,cieVal> cie{}; 
        ///Data Timeout Error
        enum class dtoeVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<Time out.
        };
        namespace dtoeValC{
            constexpr MPL::Value<dtoeVal,dtoeVal::v0> v0{};
            constexpr MPL::Value<dtoeVal,dtoeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dtoeVal> dtoe{}; 
        ///Data CRC Error
        enum class dceVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<Error.
        };
        namespace dceValC{
            constexpr MPL::Value<dceVal,dceVal::v0> v0{};
            constexpr MPL::Value<dceVal,dceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,dceVal> dce{}; 
        ///Data End Bit Error
        enum class debeVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<Error.
        };
        namespace debeValC{
            constexpr MPL::Value<debeVal,debeVal::v0> v0{};
            constexpr MPL::Value<debeVal,debeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,debeVal> debe{}; 
        ///Auto CMD12 Error
        enum class ac12eVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<Error.
        };
        namespace ac12eValC{
            constexpr MPL::Value<ac12eVal,ac12eVal::v0> v0{};
            constexpr MPL::Value<ac12eVal,ac12eVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ac12eVal> ac12e{}; 
        ///DMA Error
        enum class dmaeVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<Error.
        };
        namespace dmaeValC{
            constexpr MPL::Value<dmaeVal,dmaeVal::v0> v0{};
            constexpr MPL::Value<dmaeVal,dmaeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,dmaeVal> dmae{}; 
    }
    namespace SdhcIrqstaten{    ///<Interrupt Status Enable register
        using Addr = Register::Address<0x400b1034,0xee80fe00,0,unsigned>;
        ///Command Complete Status Enable
        enum class ccsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace ccsenValC{
            constexpr MPL::Value<ccsenVal,ccsenVal::v0> v0{};
            constexpr MPL::Value<ccsenVal,ccsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ccsenVal> ccsen{}; 
        ///Transfer Complete Status Enable
        enum class tcsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace tcsenValC{
            constexpr MPL::Value<tcsenVal,tcsenVal::v0> v0{};
            constexpr MPL::Value<tcsenVal,tcsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tcsenVal> tcsen{}; 
        ///Block Gap Event Status Enable
        enum class bgesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace bgesenValC{
            constexpr MPL::Value<bgesenVal,bgesenVal::v0> v0{};
            constexpr MPL::Value<bgesenVal,bgesenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bgesenVal> bgesen{}; 
        ///DMA Interrupt Status Enable
        enum class dintsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace dintsenValC{
            constexpr MPL::Value<dintsenVal,dintsenVal::v0> v0{};
            constexpr MPL::Value<dintsenVal,dintsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dintsenVal> dintsen{}; 
        ///Buffer Write Ready Status Enable
        enum class bwrsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace bwrsenValC{
            constexpr MPL::Value<bwrsenVal,bwrsenVal::v0> v0{};
            constexpr MPL::Value<bwrsenVal,bwrsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bwrsenVal> bwrsen{}; 
        ///Buffer Read Ready Status Enable
        enum class brrsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace brrsenValC{
            constexpr MPL::Value<brrsenVal,brrsenVal::v0> v0{};
            constexpr MPL::Value<brrsenVal,brrsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,brrsenVal> brrsen{}; 
        ///Card Insertion Status Enable
        enum class cinsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace cinsenValC{
            constexpr MPL::Value<cinsenVal,cinsenVal::v0> v0{};
            constexpr MPL::Value<cinsenVal,cinsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cinsenVal> cinsen{}; 
        ///Card Removal Status Enable
        enum class crmsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace crmsenValC{
            constexpr MPL::Value<crmsenVal,crmsenVal::v0> v0{};
            constexpr MPL::Value<crmsenVal,crmsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,crmsenVal> crmsen{}; 
        ///Card Interrupt Status Enable
        enum class cintsenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace cintsenValC{
            constexpr MPL::Value<cintsenVal,cintsenVal::v0> v0{};
            constexpr MPL::Value<cintsenVal,cintsenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cintsenVal> cintsen{}; 
        ///Command Timeout Error Status Enable
        enum class ctoesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace ctoesenValC{
            constexpr MPL::Value<ctoesenVal,ctoesenVal::v0> v0{};
            constexpr MPL::Value<ctoesenVal,ctoesenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ctoesenVal> ctoesen{}; 
        ///Command CRC Error Status Enable
        enum class ccesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace ccesenValC{
            constexpr MPL::Value<ccesenVal,ccesenVal::v0> v0{};
            constexpr MPL::Value<ccesenVal,ccesenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,ccesenVal> ccesen{}; 
        ///Command End Bit Error Status Enable
        enum class cebesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace cebesenValC{
            constexpr MPL::Value<cebesenVal,cebesenVal::v0> v0{};
            constexpr MPL::Value<cebesenVal,cebesenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,cebesenVal> cebesen{}; 
        ///Command Index Error Status Enable
        enum class ciesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace ciesenValC{
            constexpr MPL::Value<ciesenVal,ciesenVal::v0> v0{};
            constexpr MPL::Value<ciesenVal,ciesenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,ciesenVal> ciesen{}; 
        ///Data Timeout Error Status Enable
        enum class dtoesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace dtoesenValC{
            constexpr MPL::Value<dtoesenVal,dtoesenVal::v0> v0{};
            constexpr MPL::Value<dtoesenVal,dtoesenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dtoesenVal> dtoesen{}; 
        ///Data CRC Error Status Enable
        enum class dcesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace dcesenValC{
            constexpr MPL::Value<dcesenVal,dcesenVal::v0> v0{};
            constexpr MPL::Value<dcesenVal,dcesenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,dcesenVal> dcesen{}; 
        ///Data End Bit Error Status Enable
        enum class debesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace debesenValC{
            constexpr MPL::Value<debesenVal,debesenVal::v0> v0{};
            constexpr MPL::Value<debesenVal,debesenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,debesenVal> debesen{}; 
        ///Auto CMD12 Error Status Enable
        enum class ac12esenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace ac12esenValC{
            constexpr MPL::Value<ac12esenVal,ac12esenVal::v0> v0{};
            constexpr MPL::Value<ac12esenVal,ac12esenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ac12esenVal> ac12esen{}; 
        ///DMA Error Status Enable
        enum class dmaesenVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace dmaesenValC{
            constexpr MPL::Value<dmaesenVal,dmaesenVal::v0> v0{};
            constexpr MPL::Value<dmaesenVal,dmaesenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,dmaesenVal> dmaesen{}; 
    }
    namespace SdhcIrqsigen{    ///<Interrupt Signal Enable register
        using Addr = Register::Address<0x400b1038,0xee80fe00,0,unsigned>;
        ///Command Complete Interrupt Enable
        enum class ccienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace ccienValC{
            constexpr MPL::Value<ccienVal,ccienVal::v0> v0{};
            constexpr MPL::Value<ccienVal,ccienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ccienVal> ccien{}; 
        ///Transfer Complete Interrupt Enable
        enum class tcienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace tcienValC{
            constexpr MPL::Value<tcienVal,tcienVal::v0> v0{};
            constexpr MPL::Value<tcienVal,tcienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tcienVal> tcien{}; 
        ///Block Gap Event Interrupt Enable
        enum class bgeienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace bgeienValC{
            constexpr MPL::Value<bgeienVal,bgeienVal::v0> v0{};
            constexpr MPL::Value<bgeienVal,bgeienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bgeienVal> bgeien{}; 
        ///DMA Interrupt Enable
        enum class dintienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace dintienValC{
            constexpr MPL::Value<dintienVal,dintienVal::v0> v0{};
            constexpr MPL::Value<dintienVal,dintienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dintienVal> dintien{}; 
        ///Buffer Write Ready Interrupt Enable
        enum class bwrienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace bwrienValC{
            constexpr MPL::Value<bwrienVal,bwrienVal::v0> v0{};
            constexpr MPL::Value<bwrienVal,bwrienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bwrienVal> bwrien{}; 
        ///Buffer Read Ready Interrupt Enable
        enum class brrienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace brrienValC{
            constexpr MPL::Value<brrienVal,brrienVal::v0> v0{};
            constexpr MPL::Value<brrienVal,brrienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,brrienVal> brrien{}; 
        ///Card Insertion Interrupt Enable
        enum class cinsienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace cinsienValC{
            constexpr MPL::Value<cinsienVal,cinsienVal::v0> v0{};
            constexpr MPL::Value<cinsienVal,cinsienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,cinsienVal> cinsien{}; 
        ///Card Removal Interrupt Enable
        enum class crmienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace crmienValC{
            constexpr MPL::Value<crmienVal,crmienVal::v0> v0{};
            constexpr MPL::Value<crmienVal,crmienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,crmienVal> crmien{}; 
        ///Card Interrupt Enable
        enum class cintienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace cintienValC{
            constexpr MPL::Value<cintienVal,cintienVal::v0> v0{};
            constexpr MPL::Value<cintienVal,cintienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,cintienVal> cintien{}; 
        ///Command Timeout Error Interrupt Enable
        enum class ctoeienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace ctoeienValC{
            constexpr MPL::Value<ctoeienVal,ctoeienVal::v0> v0{};
            constexpr MPL::Value<ctoeienVal,ctoeienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,ctoeienVal> ctoeien{}; 
        ///Command CRC Error Interrupt Enable
        enum class cceienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace cceienValC{
            constexpr MPL::Value<cceienVal,cceienVal::v0> v0{};
            constexpr MPL::Value<cceienVal,cceienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,cceienVal> cceien{}; 
        ///Command End Bit Error Interrupt Enable
        enum class cebeienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace cebeienValC{
            constexpr MPL::Value<cebeienVal,cebeienVal::v0> v0{};
            constexpr MPL::Value<cebeienVal,cebeienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,cebeienVal> cebeien{}; 
        ///Command Index Error Interrupt Enable
        enum class cieienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace cieienValC{
            constexpr MPL::Value<cieienVal,cieienVal::v0> v0{};
            constexpr MPL::Value<cieienVal,cieienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,cieienVal> cieien{}; 
        ///Data Timeout Error Interrupt Enable
        enum class dtoeienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace dtoeienValC{
            constexpr MPL::Value<dtoeienVal,dtoeienVal::v0> v0{};
            constexpr MPL::Value<dtoeienVal,dtoeienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dtoeienVal> dtoeien{}; 
        ///Data CRC Error Interrupt Enable
        enum class dceienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace dceienValC{
            constexpr MPL::Value<dceienVal,dceienVal::v0> v0{};
            constexpr MPL::Value<dceienVal,dceienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,dceienVal> dceien{}; 
        ///Data End Bit Error Interrupt Enable
        enum class debeienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace debeienValC{
            constexpr MPL::Value<debeienVal,debeienVal::v0> v0{};
            constexpr MPL::Value<debeienVal,debeienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,debeienVal> debeien{}; 
        ///Auto CMD12 Error Interrupt Enable
        enum class ac12eienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace ac12eienValC{
            constexpr MPL::Value<ac12eienVal,ac12eienVal::v0> v0{};
            constexpr MPL::Value<ac12eienVal,ac12eienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ac12eienVal> ac12eien{}; 
        ///DMA Error Interrupt Enable
        enum class dmaeienVal {
            v0=0x00000000,     ///<Masked
            v1=0x00000001,     ///<Enabled
        };
        namespace dmaeienValC{
            constexpr MPL::Value<dmaeienVal,dmaeienVal::v0> v0{};
            constexpr MPL::Value<dmaeienVal,dmaeienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,dmaeienVal> dmaeien{}; 
    }
    namespace SdhcAc12err{    ///<Auto CMD12 Error Status Register
        using Addr = Register::Address<0x400b103c,0xffffff60,0,unsigned>;
        ///Auto CMD12 Not Executed
        enum class ac12neVal {
            v0=0x00000000,     ///<Executed.
            v1=0x00000001,     ///<Not executed.
        };
        namespace ac12neValC{
            constexpr MPL::Value<ac12neVal,ac12neVal::v0> v0{};
            constexpr MPL::Value<ac12neVal,ac12neVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ac12neVal> ac12ne{}; 
        ///Auto CMD12 Timeout Error
        enum class ac12toeVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<Time out.
        };
        namespace ac12toeValC{
            constexpr MPL::Value<ac12toeVal,ac12toeVal::v0> v0{};
            constexpr MPL::Value<ac12toeVal,ac12toeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ac12toeVal> ac12toe{}; 
        ///Auto CMD12 End Bit Error
        enum class ac12ebeVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<End bit error generated.
        };
        namespace ac12ebeValC{
            constexpr MPL::Value<ac12ebeVal,ac12ebeVal::v0> v0{};
            constexpr MPL::Value<ac12ebeVal,ac12ebeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ac12ebeVal> ac12ebe{}; 
        ///Auto CMD12 CRC Error
        enum class ac12ceVal {
            v0=0x00000000,     ///<No CRC error.
            v1=0x00000001,     ///<CRC error met in Auto CMD12 response.
        };
        namespace ac12ceValC{
            constexpr MPL::Value<ac12ceVal,ac12ceVal::v0> v0{};
            constexpr MPL::Value<ac12ceVal,ac12ceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ac12ceVal> ac12ce{}; 
        ///Auto CMD12 Index Error
        enum class ac12ieVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<Error, the CMD index in response is not CMD12.
        };
        namespace ac12ieValC{
            constexpr MPL::Value<ac12ieVal,ac12ieVal::v0> v0{};
            constexpr MPL::Value<ac12ieVal,ac12ieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ac12ieVal> ac12ie{}; 
        ///Command Not Issued By Auto CMD12 Error
        enum class cnibac12eVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<Not issued.
        };
        namespace cnibac12eValC{
            constexpr MPL::Value<cnibac12eVal,cnibac12eVal::v0> v0{};
            constexpr MPL::Value<cnibac12eVal,cnibac12eVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,cnibac12eVal> cnibac12e{}; 
    }
    namespace SdhcHtcapblt{    ///<Host Controller Capabilities
        using Addr = Register::Address<0x400b1040,0xfe08ffff,0,unsigned>;
        ///Max Block Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> mbl{}; 
        ///ADMA Support
        enum class admasVal {
            v0=0x00000000,     ///<Advanced DMA not supported.
            v1=0x00000001,     ///<Advanced DMA supported.
        };
        namespace admasValC{
            constexpr MPL::Value<admasVal,admasVal::v0> v0{};
            constexpr MPL::Value<admasVal,admasVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,admasVal> admas{}; 
        ///High Speed Support
        enum class hssVal {
            v0=0x00000000,     ///<High speed not supported.
            v1=0x00000001,     ///<High speed supported.
        };
        namespace hssValC{
            constexpr MPL::Value<hssVal,hssVal::v0> v0{};
            constexpr MPL::Value<hssVal,hssVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,hssVal> hss{}; 
        ///DMA Support
        enum class dmasVal {
            v0=0x00000000,     ///<DMA not supported.
            v1=0x00000001,     ///<DMA supported.
        };
        namespace dmasValC{
            constexpr MPL::Value<dmasVal,dmasVal::v0> v0{};
            constexpr MPL::Value<dmasVal,dmasVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,dmasVal> dmas{}; 
        ///Suspend/Resume Support
        enum class srsVal {
            v0=0x00000000,     ///<Not supported.
            v1=0x00000001,     ///<Supported.
        };
        namespace srsValC{
            constexpr MPL::Value<srsVal,srsVal::v0> v0{};
            constexpr MPL::Value<srsVal,srsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,srsVal> srs{}; 
        ///Voltage Support 3.3 V
        enum class vs33Val {
            v0=0x00000000,     ///<3.3 V not supported.
            v1=0x00000001,     ///<3.3 V supported.
        };
        namespace vs33ValC{
            constexpr MPL::Value<vs33Val,vs33Val::v0> v0{};
            constexpr MPL::Value<vs33Val,vs33Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,vs33Val> vs33{}; 
    }
    namespace SdhcWml{    ///<Watermark Level Register
        using Addr = Register::Address<0x400b1044,0xff00ff00,0,unsigned>;
        ///Read Watermark Level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdwml{}; 
        ///Write Watermark Level
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wrwml{}; 
    }
    namespace SdhcFevt{    ///<Force Event register
        using Addr = Register::Address<0x400b1050,0x6e80ff60,0,unsigned>;
        ///Force Event Auto Command 12 Not Executed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ac12ne{}; 
        ///Force Event Auto Command 12 Time Out Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ac12toe{}; 
        ///Force Event Auto Command 12 CRC Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ac12ce{}; 
        ///Force Event Auto Command 12 End Bit Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ac12ebe{}; 
        ///Force Event Auto Command 12 Index Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ac12ie{}; 
        ///Force Event Command Not Executed By Auto Command 12 Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cnibac12e{}; 
        ///Force Event Command Time Out Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ctoe{}; 
        ///Force Event Command CRC Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> cce{}; 
        ///Force Event Command End Bit Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> cebe{}; 
        ///Force Event Command Index Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> cie{}; 
        ///Force Event Data Time Out Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> dtoe{}; 
        ///Force Event Data CRC Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dce{}; 
        ///Force Event Data End Bit Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> debe{}; 
        ///Force Event Auto Command 12 Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ac12e{}; 
        ///Force Event DMA Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dmae{}; 
        ///Force Event Card Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> cint{}; 
    }
    namespace SdhcAdmaes{    ///<ADMA Error Status register
        using Addr = Register::Address<0x400b1054,0xfffffff0,0,unsigned>;
        ///ADMA Error State (When ADMA Error Is Occurred.)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> admaes{}; 
        ///ADMA Length Mismatch Error
        enum class admalmeVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<Error.
        };
        namespace admalmeValC{
            constexpr MPL::Value<admalmeVal,admalmeVal::v0> v0{};
            constexpr MPL::Value<admalmeVal,admalmeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,admalmeVal> admalme{}; 
        ///ADMA Descriptor Error
        enum class admadceVal {
            v0=0x00000000,     ///<No error.
            v1=0x00000001,     ///<Error.
        };
        namespace admadceValC{
            constexpr MPL::Value<admadceVal,admadceVal::v0> v0{};
            constexpr MPL::Value<admadceVal,admadceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,admadceVal> admadce{}; 
    }
    namespace SdhcAdsaddr{    ///<ADMA System Addressregister
        using Addr = Register::Address<0x400b1058,0x00000003,0,unsigned>;
        ///ADMA System Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> adsaddr{}; 
    }
    namespace SdhcVendor{    ///<Vendor Specific register
        using Addr = Register::Address<0x400b10c0,0xff00fffc,0,unsigned>;
        ///External DMA Request Enable
        enum class extdmaenVal {
            v0=0x00000000,     ///<In any scenario, SDHC does not send out the external DMA request.
            v1=0x00000001,     ///<When internal DMA is not active, the external DMA request will be sent out.
        };
        namespace extdmaenValC{
            constexpr MPL::Value<extdmaenVal,extdmaenVal::v0> v0{};
            constexpr MPL::Value<extdmaenVal,extdmaenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,extdmaenVal> extdmaen{}; 
        ///Exact Block Number Block Read Enable For SDIO CMD53
        enum class exblknuVal {
            v0=0x00000000,     ///<None exact block read.
            v1=0x00000001,     ///<Exact block read for SDIO CMD53.
        };
        namespace exblknuValC{
            constexpr MPL::Value<exblknuVal,exblknuVal::v0> v0{};
            constexpr MPL::Value<exblknuVal,exblknuVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,exblknuVal> exblknu{}; 
        ///Internal State Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> intstval{}; 
    }
    namespace SdhcMmcboot{    ///<MMC Boot register
        using Addr = Register::Address<0x400b10c4,0x0000ff00,0,unsigned>;
        ///Boot ACK Time Out Counter Value
        enum class dtocvackVal {
            v0000=0x00000000,     ///<SDCLK x 2^8
            v0001=0x00000001,     ///<SDCLK x 2^9
            v0010=0x00000002,     ///<SDCLK x 2^10
            v0011=0x00000003,     ///<SDCLK x 2^11
            v0100=0x00000004,     ///<SDCLK x 2^12
            v0101=0x00000005,     ///<SDCLK x 2^13
            v0110=0x00000006,     ///<SDCLK x 2^14
            v0111=0x00000007,     ///<SDCLK x 2^15
            v1110=0x0000000e,     ///<SDCLK x 2^22
        };
        namespace dtocvackValC{
            constexpr MPL::Value<dtocvackVal,dtocvackVal::v0000> v0000{};
            constexpr MPL::Value<dtocvackVal,dtocvackVal::v0001> v0001{};
            constexpr MPL::Value<dtocvackVal,dtocvackVal::v0010> v0010{};
            constexpr MPL::Value<dtocvackVal,dtocvackVal::v0011> v0011{};
            constexpr MPL::Value<dtocvackVal,dtocvackVal::v0100> v0100{};
            constexpr MPL::Value<dtocvackVal,dtocvackVal::v0101> v0101{};
            constexpr MPL::Value<dtocvackVal,dtocvackVal::v0110> v0110{};
            constexpr MPL::Value<dtocvackVal,dtocvackVal::v0111> v0111{};
            constexpr MPL::Value<dtocvackVal,dtocvackVal::v1110> v1110{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,dtocvackVal> dtocvack{}; 
        ///Boot Ack Mode Select
        enum class bootackVal {
            v0=0x00000000,     ///<No ack.
            v1=0x00000001,     ///<Ack.
        };
        namespace bootackValC{
            constexpr MPL::Value<bootackVal,bootackVal::v0> v0{};
            constexpr MPL::Value<bootackVal,bootackVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,bootackVal> bootack{}; 
        ///Boot Mode Select
        enum class bootmodeVal {
            v0=0x00000000,     ///<Normal boot.
            v1=0x00000001,     ///<Alternative boot.
        };
        namespace bootmodeValC{
            constexpr MPL::Value<bootmodeVal,bootmodeVal::v0> v0{};
            constexpr MPL::Value<bootmodeVal,bootmodeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,bootmodeVal> bootmode{}; 
        ///Boot Mode Enable
        enum class bootenVal {
            v0=0x00000000,     ///<Fast boot disable.
            v1=0x00000001,     ///<Fast boot enable.
        };
        namespace bootenValC{
            constexpr MPL::Value<bootenVal,bootenVal::v0> v0{};
            constexpr MPL::Value<bootenVal,bootenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,bootenVal> booten{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> autosabgen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> bootblkcnt{}; 
    }
    namespace SdhcHostver{    ///<Host Controller Version
        using Addr = Register::Address<0x400b10fc,0xffff0000,0,unsigned>;
        ///Specification Version Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> svn{}; 
        ///Vendor Version Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> vvn{}; 
    }
}
