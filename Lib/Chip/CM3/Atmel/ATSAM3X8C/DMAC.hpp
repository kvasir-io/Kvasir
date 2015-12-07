#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA Controller
    namespace DmacGcfg{    ///<DMAC Global Configuration Register
        using Addr = Register::Address<0x400c4000,0xffffffef,0,unsigned>;
        ///Arbiter Configuration
        enum class ArbcfgVal {
            fixed=0x00000000,     ///<Fixed priority arbiter.
            roundRobin=0x00000001,     ///<Modified round robin arbiter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ArbcfgVal> arbCfg{}; 
        namespace ArbcfgValC{
            constexpr Register::FieldValue<decltype(arbCfg),ArbcfgVal::fixed> fixed{};
            constexpr Register::FieldValue<decltype(arbCfg),ArbcfgVal::roundRobin> roundRobin{};
        }
    }
    namespace DmacEn{    ///<DMAC Enable Register
        using Addr = Register::Address<0x400c4004,0xfffffffe,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
        namespace EnableValC{
        }
    }
    namespace DmacSreq{    ///<DMAC Software Single Request Register
        using Addr = Register::Address<0x400c4008,0xfffff000,0,unsigned>;
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ssreq0{}; 
        namespace Ssreq0ValC{
        }
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsreq0{}; 
        namespace Dsreq0ValC{
        }
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssreq1{}; 
        namespace Ssreq1ValC{
        }
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsreq1{}; 
        namespace Dsreq1ValC{
        }
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssreq2{}; 
        namespace Ssreq2ValC{
        }
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dsreq2{}; 
        namespace Dsreq2ValC{
        }
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ssreq3{}; 
        namespace Ssreq3ValC{
        }
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsreq3{}; 
        namespace Dsreq3ValC{
        }
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ssreq4{}; 
        namespace Ssreq4ValC{
        }
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dsreq4{}; 
        namespace Dsreq4ValC{
        }
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ssreq5{}; 
        namespace Ssreq5ValC{
        }
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dsreq5{}; 
        namespace Dsreq5ValC{
        }
    }
    namespace DmacCreq{    ///<DMAC Software Chunk Transfer Request Register
        using Addr = Register::Address<0x400c400c,0xfffff000,0,unsigned>;
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> screq0{}; 
        namespace Screq0ValC{
        }
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcreq0{}; 
        namespace Dcreq0ValC{
        }
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> screq1{}; 
        namespace Screq1ValC{
        }
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dcreq1{}; 
        namespace Dcreq1ValC{
        }
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> screq2{}; 
        namespace Screq2ValC{
        }
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dcreq2{}; 
        namespace Dcreq2ValC{
        }
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> screq3{}; 
        namespace Screq3ValC{
        }
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcreq3{}; 
        namespace Dcreq3ValC{
        }
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> screq4{}; 
        namespace Screq4ValC{
        }
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dcreq4{}; 
        namespace Dcreq4ValC{
        }
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> screq5{}; 
        namespace Screq5ValC{
        }
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dcreq5{}; 
        namespace Dcreq5ValC{
        }
    }
    namespace DmacLast{    ///<DMAC Software Last Transfer Flag Register
        using Addr = Register::Address<0x400c4010,0xfffff000,0,unsigned>;
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> slast0{}; 
        namespace Slast0ValC{
        }
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dlast0{}; 
        namespace Dlast0ValC{
        }
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> slast1{}; 
        namespace Slast1ValC{
        }
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dlast1{}; 
        namespace Dlast1ValC{
        }
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> slast2{}; 
        namespace Slast2ValC{
        }
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dlast2{}; 
        namespace Dlast2ValC{
        }
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> slast3{}; 
        namespace Slast3ValC{
        }
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dlast3{}; 
        namespace Dlast3ValC{
        }
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slast4{}; 
        namespace Slast4ValC{
        }
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dlast4{}; 
        namespace Dlast4ValC{
        }
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slast5{}; 
        namespace Slast5ValC{
        }
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dlast5{}; 
        namespace Dlast5ValC{
        }
    }
    namespace DmacEbcier{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Enable register.
        using Addr = Register::Address<0x400c4018,0xffc0c0c0,0,unsigned>;
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        namespace Btc0ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        namespace Btc1ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        namespace Btc2ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        namespace Btc3ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        namespace Btc4ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        namespace Btc5ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        namespace Cbtc0ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        namespace Cbtc1ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        namespace Cbtc2ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        namespace Cbtc3ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        namespace Cbtc4ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        namespace Cbtc5ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        namespace Err0ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        namespace Err1ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        namespace Err2ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        namespace Err3ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        namespace Err4ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        namespace Err5ValC{
        }
    }
    namespace DmacEbcidr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Disable register.
        using Addr = Register::Address<0x400c401c,0xffc0c0c0,0,unsigned>;
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        namespace Btc0ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        namespace Btc1ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        namespace Btc2ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        namespace Btc3ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        namespace Btc4ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        namespace Btc5ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        namespace Cbtc0ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        namespace Cbtc1ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        namespace Cbtc2ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        namespace Cbtc3ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        namespace Cbtc4ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        namespace Cbtc5ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        namespace Err0ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        namespace Err1ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        namespace Err2ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        namespace Err3ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        namespace Err4ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        namespace Err5ValC{
        }
    }
    namespace DmacEbcimr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Mask Register.
        using Addr = Register::Address<0x400c4020,0xffc0c0c0,0,unsigned>;
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        namespace Btc0ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        namespace Btc1ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        namespace Btc2ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        namespace Btc3ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        namespace Btc4ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        namespace Btc5ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        namespace Cbtc0ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        namespace Cbtc1ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        namespace Cbtc2ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        namespace Cbtc3ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        namespace Cbtc4ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        namespace Cbtc5ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        namespace Err0ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        namespace Err1ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        namespace Err2ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        namespace Err3ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        namespace Err4ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        namespace Err5ValC{
        }
    }
    namespace DmacEbcisr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Status Register.
        using Addr = Register::Address<0x400c4024,0xffc0c0c0,0,unsigned>;
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        namespace Btc0ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        namespace Btc1ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        namespace Btc2ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        namespace Btc3ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        namespace Btc4ValC{
        }
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        namespace Btc5ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        namespace Cbtc0ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        namespace Cbtc1ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        namespace Cbtc2ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        namespace Cbtc3ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        namespace Cbtc4ValC{
        }
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        namespace Cbtc5ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        namespace Err0ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        namespace Err1ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        namespace Err2ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        namespace Err3ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        namespace Err4ValC{
        }
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
        namespace Err5ValC{
        }
    }
    namespace DmacCher{    ///<DMAC Channel Handler Enable Register
        using Addr = Register::Address<0x400c4028,0xc0ffc0c0,0,unsigned>;
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        namespace Ena0ValC{
        }
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        namespace Ena1ValC{
        }
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        namespace Ena2ValC{
        }
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        namespace Ena3ValC{
        }
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        namespace Ena4ValC{
        }
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        namespace Ena5ValC{
        }
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> susp0{}; 
        namespace Susp0ValC{
        }
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp1{}; 
        namespace Susp1ValC{
        }
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp2{}; 
        namespace Susp2ValC{
        }
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp3{}; 
        namespace Susp3ValC{
        }
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> susp4{}; 
        namespace Susp4ValC{
        }
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> susp5{}; 
        namespace Susp5ValC{
        }
        ///Keep on [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> keep0{}; 
        namespace Keep0ValC{
        }
        ///Keep on [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> keep1{}; 
        namespace Keep1ValC{
        }
        ///Keep on [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> keep2{}; 
        namespace Keep2ValC{
        }
        ///Keep on [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> keep3{}; 
        namespace Keep3ValC{
        }
        ///Keep on [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> keep4{}; 
        namespace Keep4ValC{
        }
        ///Keep on [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> keep5{}; 
        namespace Keep5ValC{
        }
    }
    namespace DmacChdr{    ///<DMAC Channel Handler Disable Register
        using Addr = Register::Address<0x400c402c,0xffffc0c0,0,unsigned>;
        ///Disable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dis0{}; 
        namespace Dis0ValC{
        }
        ///Disable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis1{}; 
        namespace Dis1ValC{
        }
        ///Disable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dis2{}; 
        namespace Dis2ValC{
        }
        ///Disable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dis3{}; 
        namespace Dis3ValC{
        }
        ///Disable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dis4{}; 
        namespace Dis4ValC{
        }
        ///Disable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dis5{}; 
        namespace Dis5ValC{
        }
        ///Resume [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> res0{}; 
        namespace Res0ValC{
        }
        ///Resume [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> res1{}; 
        namespace Res1ValC{
        }
        ///Resume [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> res2{}; 
        namespace Res2ValC{
        }
        ///Resume [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> res3{}; 
        namespace Res3ValC{
        }
        ///Resume [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> res4{}; 
        namespace Res4ValC{
        }
        ///Resume [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> res5{}; 
        namespace Res5ValC{
        }
    }
    namespace DmacChsr{    ///<DMAC Channel Handler Status Register
        using Addr = Register::Address<0x400c4030,0xc0c0c0c0,0,unsigned>;
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        namespace Ena0ValC{
        }
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        namespace Ena1ValC{
        }
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        namespace Ena2ValC{
        }
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        namespace Ena3ValC{
        }
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        namespace Ena4ValC{
        }
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        namespace Ena5ValC{
        }
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> susp0{}; 
        namespace Susp0ValC{
        }
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp1{}; 
        namespace Susp1ValC{
        }
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp2{}; 
        namespace Susp2ValC{
        }
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp3{}; 
        namespace Susp3ValC{
        }
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> susp4{}; 
        namespace Susp4ValC{
        }
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> susp5{}; 
        namespace Susp5ValC{
        }
        ///Empty [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> empt0{}; 
        namespace Empt0ValC{
        }
        ///Empty [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> empt1{}; 
        namespace Empt1ValC{
        }
        ///Empty [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> empt2{}; 
        namespace Empt2ValC{
        }
        ///Empty [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> empt3{}; 
        namespace Empt3ValC{
        }
        ///Empty [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> empt4{}; 
        namespace Empt4ValC{
        }
        ///Empty [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> empt5{}; 
        namespace Empt5ValC{
        }
        ///Stalled [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> stal0{}; 
        namespace Stal0ValC{
        }
        ///Stalled [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> stal1{}; 
        namespace Stal1ValC{
        }
        ///Stalled [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> stal2{}; 
        namespace Stal2ValC{
        }
        ///Stalled [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> stal3{}; 
        namespace Stal3ValC{
        }
        ///Stalled [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> stal4{}; 
        namespace Stal4ValC{
        }
        ///Stalled [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> stal5{}; 
        namespace Stal5ValC{
        }
    }
    namespace DmacSaddr0{    ///<DMAC Channel Source Address Register (ch_num = 0)
        using Addr = Register::Address<0x400c403c,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace DmacDaddr0{    ///<DMAC Channel Destination Address Register (ch_num = 0)
        using Addr = Register::Address<0x400c4040,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace DmacDscr0{    ///<DMAC Channel Descriptor Address Register (ch_num = 0)
        using Addr = Register::Address<0x400c4044,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace DmacCtrla0{    ///<DMAC Channel Control A Register (ch_num = 0)
        using Addr = Register::Address<0x400c4048,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///Source Chunk Transfer Size.
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk256> chk256{};
        }
        ///Destination Chunk Transfer Size
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk256> chk256{};
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace DmacCtrlb0{    ///<DMAC Channel Control B Register (ch_num = 0)
        using Addr = Register::Address<0x400c404c,0x8c0effff,0,unsigned>;
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        namespace FcValC{
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
    }
    namespace DmacCfg0{    ///<DMAC Channel Configuration Register (ch_num = 0)
        using Addr = Register::Address<0x400c4050,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::hw> hw{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::hw> hw{};
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod),SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod),SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB),LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr1{    ///<DMAC Channel Source Address Register (ch_num = 1)
        using Addr = Register::Address<0x400c4064,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace DmacDaddr1{    ///<DMAC Channel Destination Address Register (ch_num = 1)
        using Addr = Register::Address<0x400c4068,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace DmacDscr1{    ///<DMAC Channel Descriptor Address Register (ch_num = 1)
        using Addr = Register::Address<0x400c406c,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace DmacCtrla1{    ///<DMAC Channel Control A Register (ch_num = 1)
        using Addr = Register::Address<0x400c4070,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///Source Chunk Transfer Size.
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk256> chk256{};
        }
        ///Destination Chunk Transfer Size
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk256> chk256{};
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace DmacCtrlb1{    ///<DMAC Channel Control B Register (ch_num = 1)
        using Addr = Register::Address<0x400c4074,0x8c0effff,0,unsigned>;
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        namespace FcValC{
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
    }
    namespace DmacCfg1{    ///<DMAC Channel Configuration Register (ch_num = 1)
        using Addr = Register::Address<0x400c4078,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::hw> hw{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::hw> hw{};
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod),SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod),SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB),LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr2{    ///<DMAC Channel Source Address Register (ch_num = 2)
        using Addr = Register::Address<0x400c408c,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace DmacDaddr2{    ///<DMAC Channel Destination Address Register (ch_num = 2)
        using Addr = Register::Address<0x400c4090,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace DmacDscr2{    ///<DMAC Channel Descriptor Address Register (ch_num = 2)
        using Addr = Register::Address<0x400c4094,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace DmacCtrla2{    ///<DMAC Channel Control A Register (ch_num = 2)
        using Addr = Register::Address<0x400c4098,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///Source Chunk Transfer Size.
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk256> chk256{};
        }
        ///Destination Chunk Transfer Size
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk256> chk256{};
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace DmacCtrlb2{    ///<DMAC Channel Control B Register (ch_num = 2)
        using Addr = Register::Address<0x400c409c,0x8c0effff,0,unsigned>;
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        namespace FcValC{
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
    }
    namespace DmacCfg2{    ///<DMAC Channel Configuration Register (ch_num = 2)
        using Addr = Register::Address<0x400c40a0,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::hw> hw{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::hw> hw{};
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod),SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod),SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB),LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr3{    ///<DMAC Channel Source Address Register (ch_num = 3)
        using Addr = Register::Address<0x400c40b4,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace DmacDaddr3{    ///<DMAC Channel Destination Address Register (ch_num = 3)
        using Addr = Register::Address<0x400c40b8,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace DmacDscr3{    ///<DMAC Channel Descriptor Address Register (ch_num = 3)
        using Addr = Register::Address<0x400c40bc,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace DmacCtrla3{    ///<DMAC Channel Control A Register (ch_num = 3)
        using Addr = Register::Address<0x400c40c0,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///Source Chunk Transfer Size.
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk256> chk256{};
        }
        ///Destination Chunk Transfer Size
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk256> chk256{};
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace DmacCtrlb3{    ///<DMAC Channel Control B Register (ch_num = 3)
        using Addr = Register::Address<0x400c40c4,0x8c0effff,0,unsigned>;
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        namespace FcValC{
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
    }
    namespace DmacCfg3{    ///<DMAC Channel Configuration Register (ch_num = 3)
        using Addr = Register::Address<0x400c40c8,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::hw> hw{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::hw> hw{};
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod),SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod),SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB),LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr4{    ///<DMAC Channel Source Address Register (ch_num = 4)
        using Addr = Register::Address<0x400c40dc,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace DmacDaddr4{    ///<DMAC Channel Destination Address Register (ch_num = 4)
        using Addr = Register::Address<0x400c40e0,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace DmacDscr4{    ///<DMAC Channel Descriptor Address Register (ch_num = 4)
        using Addr = Register::Address<0x400c40e4,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace DmacCtrla4{    ///<DMAC Channel Control A Register (ch_num = 4)
        using Addr = Register::Address<0x400c40e8,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///Source Chunk Transfer Size.
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk256> chk256{};
        }
        ///Destination Chunk Transfer Size
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk256> chk256{};
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace DmacCtrlb4{    ///<DMAC Channel Control B Register (ch_num = 4)
        using Addr = Register::Address<0x400c40ec,0x8c0effff,0,unsigned>;
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        namespace FcValC{
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
    }
    namespace DmacCfg4{    ///<DMAC Channel Configuration Register (ch_num = 4)
        using Addr = Register::Address<0x400c40f0,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::hw> hw{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::hw> hw{};
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod),SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod),SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB),LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacSaddr5{    ///<DMAC Channel Source Address Register (ch_num = 5)
        using Addr = Register::Address<0x400c4104,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
        namespace SaddrValC{
        }
    }
    namespace DmacDaddr5{    ///<DMAC Channel Destination Address Register (ch_num = 5)
        using Addr = Register::Address<0x400c4108,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
        namespace DaddrValC{
        }
    }
    namespace DmacDscr5{    ///<DMAC Channel Descriptor Address Register (ch_num = 5)
        using Addr = Register::Address<0x400c410c,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
        namespace DscrValC{
        }
    }
    namespace DmacCtrla5{    ///<DMAC Channel Control A Register (ch_num = 5)
        using Addr = Register::Address<0x400c4110,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        namespace BtsizeValC{
        }
        ///Source Chunk Transfer Size.
        enum class ScsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,ScsizeVal> scsize{}; 
        namespace ScsizeValC{
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize),ScsizeVal::chk256> chk256{};
        }
        ///Destination Chunk Transfer Size
        enum class DcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,DcsizeVal> dcsize{}; 
        namespace DcsizeValC{
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize),DcsizeVal::chk256> chk256{};
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth),SrcwidthVal::word> word{};
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth),DstwidthVal::word> word{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
        namespace DoneValC{
        }
    }
    namespace DmacCtrlb5{    ///<DMAC Channel Control B Register (ch_num = 5)
        using Addr = Register::Address<0x400c4114,0x8c0effff,0,unsigned>;
        ///Source Address Descriptor
        enum class SrcdscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SrcdscrVal> srcDscr{}; 
        namespace SrcdscrValC{
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr),SrcdscrVal::fetchDisable> fetchDisable{};
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr),DstdscrVal::fetchDisable> fetchDisable{};
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        namespace FcValC{
        }
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr),SrcincrVal::fixed> fixed{};
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr),DstincrVal::fixed> fixed{};
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
        namespace IenValC{
        }
    }
    namespace DmacCfg5{    ///<DMAC Channel Configuration Register (ch_num = 5)
        using Addr = Register::Address<0x400c4118,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        namespace SrcperValC{
        }
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        namespace DstperValC{
        }
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel),Srch2selVal::hw> hw{};
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel),Dsth2selVal::hw> hw{};
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod),SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod),SodVal::enable> enable{};
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf),LockifVal::enable> enable{};
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB),LockbVal::disable> disable{};
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL),LockiflVal::buffer> buffer{};
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        namespace AhbprotValC{
        }
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg),FifocfgVal::asapCfg> asapCfg{};
        }
    }
    namespace DmacWpmr{    ///<DMAC Write Protect Mode Register
        using Addr = Register::Address<0x400c41e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        namespace WpenValC{
        }
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
    namespace DmacWpsr{    ///<DMAC Write Protect Status Register
        using Addr = Register::Address<0x400c41e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        namespace WpvsValC{
        }
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
        namespace WpvsrcValC{
        }
    }
}
