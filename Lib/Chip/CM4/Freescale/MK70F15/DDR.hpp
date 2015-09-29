#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DRAM Controller
    namespace DdrCr00{    ///<DDR Control Register 0
        using Addr = Register::Address<0x400ae000,0x0000f0fe,0,unsigned>;
        ///Start
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        ///DRAM Class
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> ddrcls{}; 
        ///Version
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> version{}; 
    }
    namespace DdrCr01{    ///<DDR Control Register 1
        using Addr = Register::Address<0x400ae004,0xfffcf0e0,0,unsigned>;
        ///Maxmum Row
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> maxrow{}; 
        ///Maximum Column
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> maxcol{}; 
        ///Chip Select Maximum
        enum class csmaxVal {
            v00=0x00000000,     ///<Zero
            v01=0x00000001,     ///<One
            v10=0x00000002,     ///<Two
        };
        namespace csmaxValC{
            constexpr MPL::Value<csmaxVal,csmaxVal::v00> v00{};
            constexpr MPL::Value<csmaxVal,csmaxVal::v01> v01{};
            constexpr MPL::Value<csmaxVal,csmaxVal::v10> v10{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,csmaxVal> csmax{}; 
    }
    namespace DdrCr02{    ///<DDR Control Register 2
        using Addr = Register::Address<0x400ae008,0xf0000000,0,unsigned>;
        ///Time Initialization
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> tinit{}; 
        ///Initialization Auto-Refresh
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> initaref{}; 
    }
    namespace DdrCr03{    ///<DDR Control Register 3
        using Addr = Register::Address<0x400ae00c,0xe0f0f0f0,0,unsigned>;
        ///Latency Linear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> latlin{}; 
        ///Latency Gate
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> latgate{}; 
        ///Write Latency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> wrlat{}; 
        ///Time CAS-to-CAS Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> tccd{}; 
    }
    namespace DdrCr04{    ///<DDR Control Register 4
        using Addr = Register::Address<0x400ae010,0x00c0f8f8,0,unsigned>;
        ///Time Burst Interrupt Interval
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tbint{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> trrd{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> trc{}; 
        ///Time RAS Minimum
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> trasmin{}; 
    }
    namespace DdrCr05{    ///<DDR Control Register 5
        using Addr = Register::Address<0x400ae014,0xe0f8f0f0,0,unsigned>;
        ///Time Write-To-Read
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> twtr{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> trp{}; 
        ///Time Read-To-Precharge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> trtp{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> tmrd{}; 
    }
    namespace DdrCr06{    ///<DDR Control Register 6
        using Addr = Register::Address<0x400ae018,0xfe000000,0,unsigned>;
        ///Time Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tmod{}; 
        ///Time Row Access Maximum
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> trasmax{}; 
        ///Interrupt Write Burst
        enum class intwbrVal {
            v0=0x00000000,     ///<Read commands cannot interrupt write commands
            v1=0x00000001,     ///<Read commands can interrupt write commands
        };
        namespace intwbrValC{
            constexpr MPL::Value<intwbrVal,intwbrVal::v0> v0{};
            constexpr MPL::Value<intwbrVal,intwbrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,intwbrVal> intwbr{}; 
    }
    namespace DdrCr07{    ///<DDR Control Register 7
        using Addr = Register::Address<0x400ae01c,0xfefee0f8,0,unsigned>;
        ///Clock Pulse Width
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> clkpw{}; 
        ///Time Clock low Self Refresh
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> tckesr{}; 
        ///Auto Precharge
        enum class apVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace apValC{
            constexpr MPL::Value<apVal,apVal::v0> v0{};
            constexpr MPL::Value<apVal,apVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,apVal> ap{}; 
        ///Concurrent Auto-Precharge Enable
        enum class ccapenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace ccapenValC{
            constexpr MPL::Value<ccapenVal,ccapenVal::v0> v0{};
            constexpr MPL::Value<ccapenVal,ccapenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ccapenVal> ccapen{}; 
    }
    namespace DdrCr08{    ///<DDR Control Register 8
        using Addr = Register::Address<0x400ae020,0xe0e000fe,0,unsigned>;
        ///Time RAS lockout
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tras{}; 
        ///Time RAS-to-CAS Delay Interval
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> trasdi{}; 
        ///Time Write Recovery
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> twr{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> tdal{}; 
    }
    namespace DdrCr09{    ///<DDR Control Register 9
        using Addr = Register::Address<0x400ae024,0xf8fe0000,0,unsigned>;
        ///Time DLL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tdll{}; 
        ///No Command
        enum class nocmdVal {
            v0=0x00000000,     ///<Issue only REF and PRE commands during DLL initialization of the DRAM devices. If PRE commands are issued before DLL initialization is complete, the command is executed immediately and the DLL initialization continues.
            v1=0x00000001,     ///<Do not issue any type of command during DLL initialization of the DRAM devices. If any other commands are issued, they are held until DLL initialization completes.
        };
        namespace nocmdValC{
            constexpr MPL::Value<nocmdVal,nocmdVal::v0> v0{};
            constexpr MPL::Value<nocmdVal,nocmdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,nocmdVal> nocmd{}; 
        ///Burst Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> bstlen{}; 
    }
    namespace DdrCr10{    ///<DDR Control Register 10
        using Addr = Register::Address<0x400ae028,0xf00000c0,0,unsigned>;
        ///Time FAW
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> tfaw{}; 
        ///Time Clock Enable to Precharge Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> tcpd{}; 
        ///TRP All Bank
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> trpab{}; 
    }
    namespace DdrCr11{    ///<DDR Control Register 11
        using Addr = Register::Address<0x400ae02c,0xfefefefe,0,unsigned>;
        ///Registered DIMM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> regdimm{}; 
        ///Auto Refresh
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> aref{}; 
        ///Auto Refresh Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> arefmode{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> trefen{}; 
    }
    namespace DdrCr12{    ///<DDR Control Register 12
        using Addr = Register::Address<0x400ae030,0xc000fc00,0,unsigned>;
        ///Time Refresh Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> trfc{}; 
        ///Time Refresh
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> tref{}; 
    }
    namespace DdrCr13{    ///<DDR Control Register 13
        using Addr = Register::Address<0x400ae034,0xfffec000,0,unsigned>;
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> trefint{}; 
        ///Power Down
        enum class pdVal {
            v0=0x00000000,     ///<Enable full power state
            v1=0x00000001,     ///<The memory controller completes processing of the current burst for the current transaction (if any), issues a precharge all command, and disables the clock enable signal to the DRAM devices. Any subsequent commands in the command queue are suspended until this bit is cleared.
        };
        namespace pdValC{
            constexpr MPL::Value<pdVal,pdVal::v0> v0{};
            constexpr MPL::Value<pdVal,pdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,pdVal> pd{}; 
    }
    namespace DdrCr14{    ///<DDR Control Register 14
        using Addr = Register::Address<0x400ae038,0x00000000,0,unsigned>;
        ///Time Power Down Exit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tpdex{}; 
        ///Time Exit Self Refresh
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> txsr{}; 
    }
    namespace DdrCr15{    ///<DDR Control Register 15
        using Addr = Register::Address<0x400ae03c,0xfefe0000,0,unsigned>;
        ///TXSNR parameter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txsnr{}; 
        ///Self Refresh
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> sref{}; 
        ///Power Up Refresh
        enum class purefVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace purefValC{
            constexpr MPL::Value<purefVal,purefVal::v0> v0{};
            constexpr MPL::Value<purefVal,purefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,purefVal> puref{}; 
    }
    namespace DdrCr16{    ///<DDR Control Register 16
        using Addr = Register::Address<0x400ae040,0xffe0f8fe,0,unsigned>;
        ///Quick Refresh
        enum class qkrefVal {
            v0=0x00000000,     ///<Continue memory initialization
            v1=0x00000001,     ///<Interrupt memory initialization and enter self-refresh mode
        };
        namespace qkrefValC{
            constexpr MPL::Value<qkrefVal,qkrefVal::v0> v0{};
            constexpr MPL::Value<qkrefVal,qkrefVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,qkrefVal> qkref{}; 
        ///Clock Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> clkdly{}; 
        ///Low Power Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> lpctrl{}; 
    }
    namespace DdrCr17{    ///<DDR Control Register 17
        using Addr = Register::Address<0x400ae044,0x00000000,0,unsigned>;
        ///Low Power Power Down Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lppdcnt{}; 
        ///Low Power Refresh Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lprfcnt{}; 
    }
    namespace DdrCr18{    ///<DDR Control Register 18
        using Addr = Register::Address<0x400ae048,0xffe00000,0,unsigned>;
        ///Low Power External Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lpextcnt{}; 
        ///Low Power Auto
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> lpauto{}; 
    }
    namespace DdrCr19{    ///<DDR Control Register 19
        using Addr = Register::Address<0x400ae04c,0x00000000,0,unsigned>;
        ///Low Power Interval Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> lpintcnt{}; 
        ///Low Power Refresh Hold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> lprfhold{}; 
    }
    namespace DdrCr20{    ///<DDR Control Register 20
        using Addr = Register::Address<0x400ae050,0xfef0f0fc,0,unsigned>;
        ///Low Power Refresh enable
        enum class lpreVal {
            v00=0x00000000,     ///<Refreshes occur
            v01=0x00000001,     ///<Refreshes do not occur
        };
        namespace lpreValC{
            constexpr MPL::Value<lpreVal,lpreVal::v00> v00{};
            constexpr MPL::Value<lpreVal,lpreVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,lpreVal> lpre{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cksre{}; 
        ///Clock Self Refresh Exit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> cksrx{}; 
        ///Write Mode Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> wrmd{}; 
    }
    namespace DdrCr21{    ///<DDR Control Register 21
        using Addr = Register::Address<0x400ae054,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mr0dat0{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> mr1dat0{}; 
    }
    namespace DdrCr22{    ///<DDR Control Register 22
        using Addr = Register::Address<0x400ae058,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> mr2data0{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> mr3dat0{}; 
    }
    namespace DdrCr23{    ///<DDR Control Register 23
        using Addr = Register::Address<0x400ae05c,0x00000000,0,unsigned>;
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> notUsed{}; 
    }
    namespace DdrCr24{    ///<DDR Control Register 24
        using Addr = Register::Address<0x400ae060,0xffffffff,0,unsigned>;
    }
    namespace DdrCr25{    ///<DDR Control Register 25
        using Addr = Register::Address<0x400ae064,0xf0f8f8fe,0,unsigned>;
        ///Eight Bank Mode
        enum class bnk8Val {
            v0=0x00000000,     ///<4 banks
            v1=0x00000001,     ///<8 banks
        };
        namespace bnk8ValC{
            constexpr MPL::Value<bnk8Val,bnk8Val::v0> v0{};
            constexpr MPL::Value<bnk8Val,bnk8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,bnk8Val> bnk8{}; 
        ///Address Pins
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> addpins{}; 
        ///Column Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> colsiz{}; 
        ///Auto Precharge Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> aprebit{}; 
    }
    namespace DdrCr26{    ///<DDR Control Register 26
        using Addr = Register::Address<0x400ae068,0xfefe0000,0,unsigned>;
        ///Age Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> agecnt{}; 
        ///Command Age count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> cmdage{}; 
        ///Address Collision enable
        enum class addcolVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace addcolValC{
            constexpr MPL::Value<addcolVal,addcolVal::v0> v0{};
            constexpr MPL::Value<addcolVal,addcolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,addcolVal> addcol{}; 
        ///Bank Split enable
        enum class bnksptVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace bnksptValC{
            constexpr MPL::Value<bnksptVal,bnksptVal::v0> v0{};
            constexpr MPL::Value<bnksptVal,bnksptVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,bnksptVal> bnkspt{}; 
    }
    namespace DdrCr27{    ///<DDR Control Register 27
        using Addr = Register::Address<0x400ae06c,0xfefefefe,0,unsigned>;
        ///Placement Enable
        enum class plenVal {
            v0=0x00000000,     ///<Disabled. The command queue is a straight FIFO.
            v1=0x00000001,     ///<Enabled. The command queue is filled according to the placement logic factors.
        };
        namespace plenValC{
            constexpr MPL::Value<plenVal,plenVal::v0> v0{};
            constexpr MPL::Value<plenVal,plenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,plenVal> plen{}; 
        ///Priority Enable
        enum class prienVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace prienValC{
            constexpr MPL::Value<prienVal,prienVal::v0> v0{};
            constexpr MPL::Value<prienVal,prienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,prienVal> prien{}; 
        ///Read Write same Enable
        enum class rwenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace rwenValC{
            constexpr MPL::Value<rwenVal,rwenVal::v0> v0{};
            constexpr MPL::Value<rwenVal,rwenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,rwenVal> rwen{}; 
        ///Swap Enable
        enum class swpenVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace swpenValC{
            constexpr MPL::Value<swpenVal,swpenVal::v0> v0{};
            constexpr MPL::Value<swpenVal,swpenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,swpenVal> swpen{}; 
    }
    namespace DdrCr28{    ///<DDR Control Register 28
        using Addr = Register::Address<0x400ae070,0xfefefefe,0,unsigned>;
        ///Chip Select Map
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csmap{}; 
        ///no description available
        enum class reducVal {
            v0=0x00000000,     ///<16-bit - standard operation using full memory bus
            v1=0x00000001,     ///<8-bit - Memory datapath width is half of the maximum size. The upper half of the memory busses (DQ, DQS, and DM) are unused and relevant data only exists in the lower half of the busses.
        };
        namespace reducValC{
            constexpr MPL::Value<reducVal,reducVal::v0> v0{};
            constexpr MPL::Value<reducVal,reducVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,reducVal> reduc{}; 
        ///Big Endian Enable
        enum class bigendVal {
            v0=0x00000000,     ///<Little endian
            v1=0x00000001,     ///<Big endian
        };
        namespace bigendValC{
            constexpr MPL::Value<bigendVal,bigendVal::v0> v0{};
            constexpr MPL::Value<bigendVal,bigendVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,bigendVal> bigend{}; 
        ///Command Latency Reduction Enable
        enum class cmdlatrVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace cmdlatrValC{
            constexpr MPL::Value<cmdlatrVal,cmdlatrVal::v0> v0{};
            constexpr MPL::Value<cmdlatrVal,cmdlatrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,cmdlatrVal> cmdlatr{}; 
    }
    namespace DdrCr29{    ///<DDR Control Register 29
        using Addr = Register::Address<0x400ae074,0xfefcfefe,0,unsigned>;
        ///Write Latency Reduction enable
        enum class wrlatrVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace wrlatrValC{
            constexpr MPL::Value<wrlatrVal,wrlatrVal::v0> v0{};
            constexpr MPL::Value<wrlatrVal,wrlatrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wrlatrVal> wrlatr{}; 
        ///Fast Write
        enum class fstwrVal {
            v0=0x00000000,     ///<The memory controller issues a write command to the DRAM devices when it has received enough data for one DRAM burst. Write data can be sent in any cycle relative to the write command. This mode also allows for multi-word write command data to arrive in non-sequential cycles.
            v1=0x00000001,     ///<The memory controller issues a write command to the DRAM devices after the first word of the write data is received by the memory controller. The first word can be sent at any time relative to the write command. In this mode, multi-word write command data must be available to the memory controller in sequential cycles.
        };
        namespace fstwrValC{
            constexpr MPL::Value<fstwrVal,fstwrVal::v0> v0{};
            constexpr MPL::Value<fstwrVal,fstwrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,fstwrVal> fstwr{}; 
        ///Queue Fullness
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> qfull{}; 
        ///Resyncronize
        enum class resyncVal {
            v0=0x00000000,     ///<No effect
            v1=0x00000001,     ///<Initiate
        };
        namespace resyncValC{
            constexpr MPL::Value<resyncVal,resyncVal::v0> v0{};
            constexpr MPL::Value<resyncVal,resyncVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,resyncVal> resync{}; 
    }
    namespace DdrCr30{    ///<DDR Control Register 30
        using Addr = Register::Address<0x400ae078,0x00fe00fe,0,unsigned>;
        ///Resynchroize after Refresh
        enum class rsyncrfVal {
            v0=0x00000000,     ///<No effect
            v1=0x00000001,     ///<Enable
        };
        namespace rsyncrfValC{
            constexpr MPL::Value<rsyncrfVal,rsyncrfVal::v0> v0{};
            constexpr MPL::Value<rsyncrfVal,rsyncrfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rsyncrfVal> rsyncrf{}; 
        ///Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,8),Register::ReadWriteAccess,unsigned> intstat{}; 
        ///Interupt Acknowlege
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> intack{}; 
    }
    namespace DdrCr31{    ///<DDR Control Register 31
        using Addr = Register::Address<0x400ae07c,0xfffffe00,0,unsigned>;
        ///Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> intmask{}; 
    }
    namespace DdrCr32{    ///<DDR Control Register 32
        using Addr = Register::Address<0x400ae080,0x00000000,0,unsigned>;
        ///Out Of Range Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> oorad{}; 
    }
    namespace DdrCr33{    ///<DDR Control Register 33
        using Addr = Register::Address<0x400ae084,0xfcc0fc00,0,unsigned>;
        ///Out Of Range Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> oorlen{}; 
        ///Out Of Range Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> oortyp{}; 
        ///Out Of Range source ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> oorid{}; 
    }
    namespace DdrCr34{    ///<DDR Control Register 34
        using Addr = Register::Address<0x400ae088,0xfffffefe,0,unsigned>;
        ///ODT Read map CS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> odtrdc{}; 
        ///ODT Write map CS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> odtwrcs{}; 
    }
    namespace DdrCr35{    ///<DDR Control Register 35
        using Addr = Register::Address<0x400ae08c,0xfffff0f0,0,unsigned>;
        ///Read To Write Same Chip Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> r2wsmcs{}; 
        ///Write To Read Same Chip Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> w2rsmcs{}; 
    }
    namespace DdrCr36{    ///<DDR Control Register 36
        using Addr = Register::Address<0x400ae090,0x00000000,0,unsigned>;
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> notUsed{}; 
    }
    namespace DdrCr37{    ///<DDR Control Register 37
        using Addr = Register::Address<0x400ae094,0xf8f8f8f8,0,unsigned>;
        ///R2R Same chip select delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> r2rsame{}; 
        ///R2W Same chip select delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> r2wsame{}; 
        ///W2R Same chip select delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> w2rsame{}; 
        ///W2W Same chip select delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> w2wsame{}; 
    }
    namespace DdrCr38{    ///<DDR Control Register 38
        using Addr = Register::Address<0x400ae098,0xf800e0e0,0,unsigned>;
        ///OCD Pull Down adjustment Chip Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> pdncs{}; 
        ///OCD Pull Up adjustment Chip Select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> pupcs{}; 
        ///Port 0 Write Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,16),Register::ReadWriteAccess,unsigned> pwrcnt{}; 
    }
    namespace DdrCr39{    ///<DDR Control Register 39
        using Addr = Register::Address<0x400ae09c,0xfcfcf800,0,unsigned>;
        ///Port 0 Read command Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> p0rdcnt{}; 
        ///Port 0 Read command Priority
        enum class rp0Val {
            v00=0x00000000,     ///<Highest
            v01=0x00000001,     ///<-----
            v10=0x00000002,     ///<-----
            v11=0x00000003,     ///<Lowest
        };
        namespace rp0ValC{
            constexpr MPL::Value<rp0Val,rp0Val::v00> v00{};
            constexpr MPL::Value<rp0Val,rp0Val::v01> v01{};
            constexpr MPL::Value<rp0Val,rp0Val::v10> v10{};
            constexpr MPL::Value<rp0Val,rp0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,rp0Val> rp0{}; 
        ///Port 0 Write command Priority
        enum class wp0Val {
            v00=0x00000000,     ///<Highest
            v01=0x00000001,     ///<-----
            v10=0x00000002,     ///<-----
            v11=0x00000003,     ///<Lowest
        };
        namespace wp0ValC{
            constexpr MPL::Value<wp0Val,wp0Val::v00> v00{};
            constexpr MPL::Value<wp0Val,wp0Val::v01> v01{};
            constexpr MPL::Value<wp0Val,wp0Val::v10> v10{};
            constexpr MPL::Value<wp0Val,wp0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,wp0Val> wp0{}; 
    }
    namespace DdrCr40{    ///<DDR Control Register 40
        using Addr = Register::Address<0x400ae0a0,0xfff800fc,0,unsigned>;
        ///Port 0 Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> p0typ{}; 
        ///Port 1 Write command Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,8),Register::ReadWriteAccess,unsigned> p1wrcnt{}; 
    }
    namespace DdrCr41{    ///<DDR Control Register 41
        using Addr = Register::Address<0x400ae0a4,0xfcfcf800,0,unsigned>;
        ///Port 1 Read command Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> p1rdcnt{}; 
        ///Read command priority Port 1
        enum class rp1Val {
            v00=0x00000000,     ///<Highest
            v01=0x00000001,     ///<-----
            v10=0x00000002,     ///<-----
            v11=0x00000003,     ///<Lowest
        };
        namespace rp1ValC{
            constexpr MPL::Value<rp1Val,rp1Val::v00> v00{};
            constexpr MPL::Value<rp1Val,rp1Val::v01> v01{};
            constexpr MPL::Value<rp1Val,rp1Val::v10> v10{};
            constexpr MPL::Value<rp1Val,rp1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,rp1Val> rp1{}; 
        ///Write command priority Port 1
        enum class wp1Val {
            v00=0x00000000,     ///<Highest
            v01=0x00000001,     ///<-----
            v10=0x00000002,     ///<-----
            v11=0x00000003,     ///<Lowest
        };
        namespace wp1ValC{
            constexpr MPL::Value<wp1Val,wp1Val::v00> v00{};
            constexpr MPL::Value<wp1Val,wp1Val::v01> v01{};
            constexpr MPL::Value<wp1Val,wp1Val::v10> v10{};
            constexpr MPL::Value<wp1Val,wp1Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,wp1Val> wp1{}; 
    }
    namespace DdrCr42{    ///<DDR Control Register 42
        using Addr = Register::Address<0x400ae0a8,0xfff800fc,0,unsigned>;
        ///Port 1 Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> p1typ{}; 
        ///Port 2 Write command Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,8),Register::ReadWriteAccess,unsigned> p2wrcnt{}; 
    }
    namespace DdrCr43{    ///<DDR Control Register 43
        using Addr = Register::Address<0x400ae0ac,0xfcfcf800,0,unsigned>;
        ///Port 2 Read command Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> p2rdcnt{}; 
        ///Read command priority Port 2
        enum class rp2Val {
            v00=0x00000000,     ///<Highest
            v01=0x00000001,     ///<-----
            v10=0x00000002,     ///<-----
            v11=0x00000003,     ///<Lowest
        };
        namespace rp2ValC{
            constexpr MPL::Value<rp2Val,rp2Val::v00> v00{};
            constexpr MPL::Value<rp2Val,rp2Val::v01> v01{};
            constexpr MPL::Value<rp2Val,rp2Val::v10> v10{};
            constexpr MPL::Value<rp2Val,rp2Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,rp2Val> rp2{}; 
        ///Write command priority Port 2
        enum class wp2Val {
            v00=0x00000000,     ///<Highest
            v01=0x00000001,     ///<-----
            v10=0x00000002,     ///<-----
            v11=0x00000003,     ///<Lowest
        };
        namespace wp2ValC{
            constexpr MPL::Value<wp2Val,wp2Val::v00> v00{};
            constexpr MPL::Value<wp2Val,wp2Val::v01> v01{};
            constexpr MPL::Value<wp2Val,wp2Val::v10> v10{};
            constexpr MPL::Value<wp2Val,wp2Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,wp2Val> wp2{}; 
    }
    namespace DdrCr44{    ///<DDR Control Register 44
        using Addr = Register::Address<0x400ae0b0,0xf0fefefc,0,unsigned>;
        ///Port 2 Type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> p2typ{}; 
        ///WRR Latency
        enum class wrrlatVal {
            v0=0x00000000,     ///<Free-running
            v1=0x00000001,     ///<Limited
        };
        namespace wrrlatValC{
            constexpr MPL::Value<wrrlatVal,wrrlatVal::v0> v0{};
            constexpr MPL::Value<wrrlatVal,wrrlatVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wrrlatVal> wrrlat{}; 
        ///WRR Shared arbitration
        enum class wrrshareVal {
            v0=0x00000000,     ///<Port 0 and port 1 are treated independently for arbitration
            v1=0x00000001,     ///<Port 0 and port 1 are grouped together for arbitration
        };
        namespace wrrshareValC{
            constexpr MPL::Value<wrrshareVal,wrrshareVal::v0> v0{};
            constexpr MPL::Value<wrrshareVal,wrrshareVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,wrrshareVal> wrrshare{}; 
        ///WRR parameters Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> wrrerr{}; 
    }
    namespace DdrCr45{    ///<DDR Control Register 45
        using Addr = Register::Address<0x400ae0b4,0xf0f0f0f0,0,unsigned>;
        ///Port 0 Priority 0 commands
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> p0pri0{}; 
        ///Port 0 Priority 1 commands
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> p0pri1{}; 
        ///Port 0 Priority 2 commands
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> p0pri2{}; 
        ///Port 0 Priority 3 commands
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> p0pri3{}; 
    }
    namespace DdrCr46{    ///<DDR Control Register 46
        using Addr = Register::Address<0x400ae0b8,0xf0fc00fc,0,unsigned>;
        ///Port 0 Order
        enum class p0ordVal {
            v00=0x00000000,     ///<Highest listing in the scan order
            v01=0x00000001,     ///<------
            v10=0x00000002,     ///<------
            v11=0x00000003,     ///<Lowest listing in the scan order
        };
        namespace p0ordValC{
            constexpr MPL::Value<p0ordVal,p0ordVal::v00> v00{};
            constexpr MPL::Value<p0ordVal,p0ordVal::v01> v01{};
            constexpr MPL::Value<p0ordVal,p0ordVal::v10> v10{};
            constexpr MPL::Value<p0ordVal,p0ordVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,p0ordVal> p0ord{}; 
        ///Port 0 Priority Relax
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,8),Register::ReadWriteAccess,unsigned> p0prirlx{}; 
        ///Port 1 Priority 0 commands
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> p1pri0{}; 
    }
    namespace DdrCr47{    ///<DDR Control Register 47
        using Addr = Register::Address<0x400ae0bc,0xfcf0f0f0,0,unsigned>;
        ///Port 1 Priority 1 commands
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> p1pri1{}; 
        ///Port 1 Priority 2 commands
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> p1pri2{}; 
        ///Port 1 Priority 3 commands
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> p1pri3{}; 
        ///Port 1 Order
        enum class p1ordVal {
            v00=0x00000000,     ///<Highest listing in the scan order
            v11=0x00000003,     ///<Lowest listing in the scan order
        };
        namespace p1ordValC{
            constexpr MPL::Value<p1ordVal,p1ordVal::v00> v00{};
            constexpr MPL::Value<p1ordVal,p1ordVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,p1ordVal> p1ord{}; 
    }
    namespace DdrCr48{    ///<DDR Control Register 48
        using Addr = Register::Address<0x400ae0c0,0xf0f0fc00,0,unsigned>;
        ///Port 1 Priority Relax
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> p1prirlx{}; 
        ///Port 2 Priority 0 commands
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> p2pri0{}; 
        ///Port 2 Priority 1 commands
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> p2pri1{}; 
    }
    namespace DdrCr49{    ///<DDR Control Register 49
        using Addr = Register::Address<0x400ae0c4,0xfffcf0f0,0,unsigned>;
        ///Port 2 Priority 2 commands
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> p2pri2{}; 
        ///Port 2 Priority 3 commands
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> p2pri3{}; 
        ///Port 2 Order
        enum class p2ordVal {
            v00=0x00000000,     ///<Highest listing in the scan order
            v01=0x00000001,     ///<-----
            v10=0x00000002,     ///<-----
            v11=0x00000003,     ///<Lowest listing in the scan order
        };
        namespace p2ordValC{
            constexpr MPL::Value<p2ordVal,p2ordVal::v00> v00{};
            constexpr MPL::Value<p2ordVal,p2ordVal::v01> v01{};
            constexpr MPL::Value<p2ordVal,p2ordVal::v10> v10{};
            constexpr MPL::Value<p2ordVal,p2ordVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,p2ordVal> p2ord{}; 
    }
    namespace DdrCr50{    ///<DDR Control Register 50
        using Addr = Register::Address<0x400ae0c8,0xfffefc00,0,unsigned>;
        ///Port 2 Priority Relax
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> p2prirlx{}; 
        ///Clock Status
        enum class clkstatusVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace clkstatusValC{
            constexpr MPL::Value<clkstatusVal,clkstatusVal::v0> v0{};
            constexpr MPL::Value<clkstatusVal,clkstatusVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,clkstatusVal> clkstatus{}; 
    }
    namespace DdrCr51{    ///<DDR Control Register 51
        using Addr = Register::Address<0x400ae0cc,0xf0000000,0,unsigned>;
        ///DLL Reset Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dllrstdly{}; 
        ///DLL Reset Adjust Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> dllradly{}; 
        ///PHY Write Latency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> phywrlat{}; 
    }
    namespace DdrCr52{    ///<DDR Control Register 52
        using Addr = Register::Address<0x400ae0d0,0xf0f0f0f0,0,unsigned>;
        ///PHY Write Latency Base
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> pywrltbs{}; 
        ///PHY Read Latency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> phyrdlat{}; 
        ///Read Data Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> rddataen{}; 
        ///Read Data Enable Base
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> rddtenbas{}; 
    }
    namespace DdrCr53{    ///<DDR Control Register 53
        using Addr = Register::Address<0x400ae0d4,0xc000f0fe,0,unsigned>;
        ///DRAM Clock Disable for chip select
        enum class clkdiscsVal {
            v0=0x00000000,     ///<Memory clock active
            v1=0x00000001,     ///<Memory clock disabled
        };
        namespace clkdiscsValC{
            constexpr MPL::Value<clkdiscsVal,clkdiscsVal::v0> v0{};
            constexpr MPL::Value<clkdiscsVal,clkdiscsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,clkdiscsVal> clkdiscs{}; 
        ///DFI CRTLUPD Minimum
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> crtlupdmn{}; 
        ///DFI CRTLUPD Minimum
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> ctrlupdmx{}; 
    }
    namespace DdrCr54{    ///<DDR Control Register 54
        using Addr = Register::Address<0x400ae0d8,0xc000c000,0,unsigned>;
        ///DFI PHYUPD Type 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> phyupdty0{}; 
        ///DFI PHYUPD Type 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> phyupdty1{}; 
    }
    namespace DdrCr55{    ///<DDR Control Register 55
        using Addr = Register::Address<0x400ae0dc,0xc000c000,0,unsigned>;
        ///DFI PHYUPD TYPE2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> phyupdty2{}; 
        ///DFI PHYUPD TYPE3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> phyupdty3{}; 
    }
    namespace DdrCr56{    ///<DDR Control Register 56
        using Addr = Register::Address<0x400ae0e0,0xf0f0c000,0,unsigned>;
        ///TDFI PHYUPDRESP parameter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> phyupdresp{}; 
        ///Read Latency Adjust
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> rdlatadj{}; 
        ///Write Latency Adjust
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> wrlatadj{}; 
    }
    namespace DdrCr57{    ///<DDR Control Register 57
        using Addr = Register::Address<0x400ae0e4,0xfef0f8f0,0,unsigned>;
        ///Command Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cmddly{}; 
        ///DFI Clock Disable Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> clkdisdly{}; 
        ///DFI Clock Enable Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> clkendly{}; 
        ///ODT Alternate Enable
        enum class odtaltenVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace odtaltenValC{
            constexpr MPL::Value<odtaltenVal,odtaltenVal::v0> v0{};
            constexpr MPL::Value<odtaltenVal,odtaltenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,odtaltenVal> odtalten{}; 
    }
    namespace DdrCr58{    ///<DDR Control Register 58
        using Addr = Register::Address<0x400ae0e8,0x00000000,0,unsigned>;
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> notUsed{}; 
    }
    namespace DdrCr59{    ///<DDR Control Register 59
        using Addr = Register::Address<0x400ae0ec,0x00000000,0,unsigned>;
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> notUsed{}; 
    }
    namespace DdrCr60{    ///<DDR Control Register 60
        using Addr = Register::Address<0x400ae0f0,0x00000000,0,unsigned>;
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> notUsed{}; 
    }
    namespace DdrCr61{    ///<DDR Control Register 61
        using Addr = Register::Address<0x400ae0f4,0x00000000,0,unsigned>;
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> notUsed{}; 
    }
    namespace DdrCr62{    ///<DDR Control Register 62
        using Addr = Register::Address<0x400ae0f8,0x00000000,0,unsigned>;
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> notUsed{}; 
    }
    namespace DdrCr63{    ///<DDR Control Register 63
        using Addr = Register::Address<0x400ae0fc,0x00000000,0,unsigned>;
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> notUsed{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> notUsed{}; 
    }
    namespace DdrRcr{    ///<RCR Control Register
        using Addr = Register::Address<0x400ae180,0xbfffffff,0,unsigned>;
        ///Reset
        enum class rstVal {
            v0=0x00000000,     ///<No software reset
            v1=0x00000001,     ///<Force software reset
        };
        namespace rstValC{
            constexpr MPL::Value<rstVal,rstVal::v0> v0{};
            constexpr MPL::Value<rstVal,rstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,rstVal> rst{}; 
    }
    namespace DdrPadCtrl{    ///<I/O Pad Control Register
        using Addr = Register::Address<0x400ae1ac,0xfcfffff0,0,unsigned>;
        ///These SPARE_DLY_CTRL[3:0]bits set the delay chains in the spare logic.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> spareDlyCtrl{}; 
        ///Required to enable ODT and configure ODT resistor value in the pad.
        enum class padOdtCs0Val {
            v00=0x00000000,     ///<ODT Disabled
            v01=0x00000001,     ///<75 Ohms
            v10=0x00000002,     ///<150 Ohms
            v11=0x00000003,     ///<50 Ohms
        };
        namespace padOdtCs0ValC{
            constexpr MPL::Value<padOdtCs0Val,padOdtCs0Val::v00> v00{};
            constexpr MPL::Value<padOdtCs0Val,padOdtCs0Val::v01> v01{};
            constexpr MPL::Value<padOdtCs0Val,padOdtCs0Val::v10> v10{};
            constexpr MPL::Value<padOdtCs0Val,padOdtCs0Val::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,padOdtCs0Val> padOdtCs0{}; 
    }
}
