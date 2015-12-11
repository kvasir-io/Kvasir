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
            constexpr Register::FieldValue<decltype(arbCfg)::Type,ArbcfgVal::fixed> fixed{};
            constexpr Register::FieldValue<decltype(arbCfg)::Type,ArbcfgVal::roundRobin> roundRobin{};
        }
        }
    }
    namespace DmacEn{    ///<DMAC Enable Register
        using Addr = Register::Address<0x400c4004,0xfffffffe,0,unsigned>;
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace DmacSreq{    ///<DMAC Software Single Request Register
        using Addr = Register::Address<0x400c4008,0xfffff000,0,unsigned>;
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ssreq0{}; 
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsreq0{}; 
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssreq1{}; 
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsreq1{}; 
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssreq2{}; 
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dsreq2{}; 
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ssreq3{}; 
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsreq3{}; 
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ssreq4{}; 
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dsreq4{}; 
        ///Source Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ssreq5{}; 
        ///Destination Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dsreq5{}; 
    }
    namespace DmacCreq{    ///<DMAC Software Chunk Transfer Request Register
        using Addr = Register::Address<0x400c400c,0xfffff000,0,unsigned>;
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> screq0{}; 
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcreq0{}; 
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> screq1{}; 
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dcreq1{}; 
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> screq2{}; 
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dcreq2{}; 
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> screq3{}; 
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcreq3{}; 
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> screq4{}; 
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dcreq4{}; 
        ///Source Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> screq5{}; 
        ///Destination Chunk Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dcreq5{}; 
    }
    namespace DmacLast{    ///<DMAC Software Last Transfer Flag Register
        using Addr = Register::Address<0x400c4010,0xfffff000,0,unsigned>;
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> slast0{}; 
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dlast0{}; 
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> slast1{}; 
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dlast1{}; 
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> slast2{}; 
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dlast2{}; 
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> slast3{}; 
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dlast3{}; 
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> slast4{}; 
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> dlast4{}; 
        ///Source Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> slast5{}; 
        ///Destination Last
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dlast5{}; 
    }
    namespace DmacEbcier{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Enable register.
        using Addr = Register::Address<0x400c4018,0xffc0c0c0,0,unsigned>;
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
    }
    namespace DmacEbcidr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Disable register.
        using Addr = Register::Address<0x400c401c,0xffc0c0c0,0,unsigned>;
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
    }
    namespace DmacEbcimr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Mask Register.
        using Addr = Register::Address<0x400c4020,0xffc0c0c0,0,unsigned>;
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
    }
    namespace DmacEbcisr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Status Register.
        using Addr = Register::Address<0x400c4024,0xffc0c0c0,0,unsigned>;
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btc4{}; 
        ///Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> btc5{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cbtc4{}; 
        ///Chained Buffer Transfer Completed [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> cbtc5{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> err4{}; 
        ///Access Error [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> err5{}; 
    }
    namespace DmacCher{    ///<DMAC Channel Handler Enable Register
        using Addr = Register::Address<0x400c4028,0xc0ffc0c0,0,unsigned>;
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> susp0{}; 
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp1{}; 
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp2{}; 
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp3{}; 
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> susp4{}; 
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> susp5{}; 
        ///Keep on [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> keep0{}; 
        ///Keep on [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> keep1{}; 
        ///Keep on [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> keep2{}; 
        ///Keep on [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> keep3{}; 
        ///Keep on [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> keep4{}; 
        ///Keep on [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> keep5{}; 
    }
    namespace DmacChdr{    ///<DMAC Channel Handler Disable Register
        using Addr = Register::Address<0x400c402c,0xffffc0c0,0,unsigned>;
        ///Disable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dis0{}; 
        ///Disable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis1{}; 
        ///Disable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dis2{}; 
        ///Disable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dis3{}; 
        ///Disable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dis4{}; 
        ///Disable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dis5{}; 
        ///Resume [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> res0{}; 
        ///Resume [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> res1{}; 
        ///Resume [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> res2{}; 
        ///Resume [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> res3{}; 
        ///Resume [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> res4{}; 
        ///Resume [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> res5{}; 
    }
    namespace DmacChsr{    ///<DMAC Channel Handler Status Register
        using Addr = Register::Address<0x400c4030,0xc0c0c0c0,0,unsigned>;
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ena4{}; 
        ///Enable [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ena5{}; 
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> susp0{}; 
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp1{}; 
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp2{}; 
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp3{}; 
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> susp4{}; 
        ///Suspend [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> susp5{}; 
        ///Empty [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> empt0{}; 
        ///Empty [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> empt1{}; 
        ///Empty [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> empt2{}; 
        ///Empty [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> empt3{}; 
        ///Empty [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> empt4{}; 
        ///Empty [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> empt5{}; 
        ///Stalled [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> stal0{}; 
        ///Stalled [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> stal1{}; 
        ///Stalled [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> stal2{}; 
        ///Stalled [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> stal3{}; 
        ///Stalled [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> stal4{}; 
        ///Stalled [5:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> stal5{}; 
    }
    namespace DmacSaddr0{    ///<DMAC Channel Source Address Register (ch_num = 0)
        using Addr = Register::Address<0x400c403c,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr0{    ///<DMAC Channel Destination Address Register (ch_num = 0)
        using Addr = Register::Address<0x400c4040,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr0{    ///<DMAC Channel Descriptor Address Register (ch_num = 0)
        using Addr = Register::Address<0x400c4044,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla0{    ///<DMAC Channel Control A Register (ch_num = 0)
        using Addr = Register::Address<0x400c4048,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
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
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk256> chk256{};
        }
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
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk256> chk256{};
        }
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
        }
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
        }
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
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
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchDisable> fetchDisable{};
        }
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchDisable> fetchDisable{};
        }
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
    }
    namespace DmacCfg0{    ///<DMAC Channel Configuration Register (ch_num = 0)
        using Addr = Register::Address<0x400c4050,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::hw> hw{};
        }
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::hw> hw{};
        }
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::enable> enable{};
        }
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::enable> enable{};
        }
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB)::Type,LockbVal::disable> disable{};
        }
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::buffer> buffer{};
        }
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
        }
    }
    namespace DmacSaddr1{    ///<DMAC Channel Source Address Register (ch_num = 1)
        using Addr = Register::Address<0x400c4064,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr1{    ///<DMAC Channel Destination Address Register (ch_num = 1)
        using Addr = Register::Address<0x400c4068,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr1{    ///<DMAC Channel Descriptor Address Register (ch_num = 1)
        using Addr = Register::Address<0x400c406c,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla1{    ///<DMAC Channel Control A Register (ch_num = 1)
        using Addr = Register::Address<0x400c4070,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
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
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk256> chk256{};
        }
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
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk256> chk256{};
        }
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
        }
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
        }
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
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
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchDisable> fetchDisable{};
        }
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchDisable> fetchDisable{};
        }
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
    }
    namespace DmacCfg1{    ///<DMAC Channel Configuration Register (ch_num = 1)
        using Addr = Register::Address<0x400c4078,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::hw> hw{};
        }
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::hw> hw{};
        }
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::enable> enable{};
        }
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::enable> enable{};
        }
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB)::Type,LockbVal::disable> disable{};
        }
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::buffer> buffer{};
        }
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
        }
    }
    namespace DmacSaddr2{    ///<DMAC Channel Source Address Register (ch_num = 2)
        using Addr = Register::Address<0x400c408c,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr2{    ///<DMAC Channel Destination Address Register (ch_num = 2)
        using Addr = Register::Address<0x400c4090,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr2{    ///<DMAC Channel Descriptor Address Register (ch_num = 2)
        using Addr = Register::Address<0x400c4094,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla2{    ///<DMAC Channel Control A Register (ch_num = 2)
        using Addr = Register::Address<0x400c4098,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
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
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk256> chk256{};
        }
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
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk256> chk256{};
        }
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
        }
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
        }
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
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
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchDisable> fetchDisable{};
        }
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchDisable> fetchDisable{};
        }
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
    }
    namespace DmacCfg2{    ///<DMAC Channel Configuration Register (ch_num = 2)
        using Addr = Register::Address<0x400c40a0,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::hw> hw{};
        }
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::hw> hw{};
        }
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::enable> enable{};
        }
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::enable> enable{};
        }
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB)::Type,LockbVal::disable> disable{};
        }
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::buffer> buffer{};
        }
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
        }
    }
    namespace DmacSaddr3{    ///<DMAC Channel Source Address Register (ch_num = 3)
        using Addr = Register::Address<0x400c40b4,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr3{    ///<DMAC Channel Destination Address Register (ch_num = 3)
        using Addr = Register::Address<0x400c40b8,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr3{    ///<DMAC Channel Descriptor Address Register (ch_num = 3)
        using Addr = Register::Address<0x400c40bc,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla3{    ///<DMAC Channel Control A Register (ch_num = 3)
        using Addr = Register::Address<0x400c40c0,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
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
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk256> chk256{};
        }
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
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk256> chk256{};
        }
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
        }
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
        }
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
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
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchDisable> fetchDisable{};
        }
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchDisable> fetchDisable{};
        }
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
    }
    namespace DmacCfg3{    ///<DMAC Channel Configuration Register (ch_num = 3)
        using Addr = Register::Address<0x400c40c8,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::hw> hw{};
        }
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::hw> hw{};
        }
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::enable> enable{};
        }
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::enable> enable{};
        }
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB)::Type,LockbVal::disable> disable{};
        }
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::buffer> buffer{};
        }
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
        }
    }
    namespace DmacSaddr4{    ///<DMAC Channel Source Address Register (ch_num = 4)
        using Addr = Register::Address<0x400c40dc,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr4{    ///<DMAC Channel Destination Address Register (ch_num = 4)
        using Addr = Register::Address<0x400c40e0,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr4{    ///<DMAC Channel Descriptor Address Register (ch_num = 4)
        using Addr = Register::Address<0x400c40e4,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla4{    ///<DMAC Channel Control A Register (ch_num = 4)
        using Addr = Register::Address<0x400c40e8,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
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
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk256> chk256{};
        }
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
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk256> chk256{};
        }
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
        }
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
        }
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
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
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchDisable> fetchDisable{};
        }
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchDisable> fetchDisable{};
        }
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
    }
    namespace DmacCfg4{    ///<DMAC Channel Configuration Register (ch_num = 4)
        using Addr = Register::Address<0x400c40f0,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::hw> hw{};
        }
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::hw> hw{};
        }
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::enable> enable{};
        }
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::enable> enable{};
        }
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB)::Type,LockbVal::disable> disable{};
        }
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::buffer> buffer{};
        }
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
        }
    }
    namespace DmacSaddr5{    ///<DMAC Channel Source Address Register (ch_num = 5)
        using Addr = Register::Address<0x400c4104,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr5{    ///<DMAC Channel Destination Address Register (ch_num = 5)
        using Addr = Register::Address<0x400c4108,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr5{    ///<DMAC Channel Descriptor Address Register (ch_num = 5)
        using Addr = Register::Address<0x400c410c,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla5{    ///<DMAC Channel Control A Register (ch_num = 5)
        using Addr = Register::Address<0x400c4110,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
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
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(scsize)::Type,ScsizeVal::chk256> chk256{};
        }
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
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk1> chk1{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk4> chk4{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk8> chk8{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk16> chk16{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk32> chk32{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk64> chk64{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk128> chk128{};
            constexpr Register::FieldValue<decltype(dcsize)::Type,DcsizeVal::chk256> chk256{};
        }
        }
        ///Transfer Width for the Source
        enum class SrcwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcwidthVal> srcWidth{}; 
        namespace SrcwidthValC{
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(srcWidth)::Type,SrcwidthVal::word> word{};
        }
        }
        ///Transfer Width for the Destination
        enum class DstwidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstwidthVal> dstWidth{}; 
        namespace DstwidthValC{
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::byte> byte{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::halfWord> halfWord{};
            constexpr Register::FieldValue<decltype(dstWidth)::Type,DstwidthVal::word> word{};
        }
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
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
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(srcDscr)::Type,SrcdscrVal::fetchDisable> fetchDisable{};
        }
        }
        ///Destination Address Descriptor
        enum class DstdscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,DstdscrVal> dstDscr{}; 
        namespace DstdscrValC{
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchFromMem> fetchFromMem{};
            constexpr Register::FieldValue<decltype(dstDscr)::Type,DstdscrVal::fetchDisable> fetchDisable{};
        }
        }
        ///Flow Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class SrcincrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,SrcincrVal> srcIncr{}; 
        namespace SrcincrValC{
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(srcIncr)::Type,SrcincrVal::fixed> fixed{};
        }
        }
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class DstincrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,DstincrVal> dstIncr{}; 
        namespace DstincrValC{
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::incrementing> incrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::decrementing> decrementing{};
            constexpr Register::FieldValue<decltype(dstIncr)::Type,DstincrVal::fixed> fixed{};
        }
        }
        ///None
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
    }
    namespace DmacCfg5{    ///<DMAC Channel Configuration Register (ch_num = 5)
        using Addr = Register::Address<0x400c4118,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Software or Hardware Selection for the Source
        enum class Srch2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Srch2selVal> srcH2sel{}; 
        namespace Srch2selValC{
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(srcH2sel)::Type,Srch2selVal::hw> hw{};
        }
        }
        ///Software or Hardware Selection for the Destination
        enum class Dsth2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Dsth2selVal> dstH2sel{}; 
        namespace Dsth2selValC{
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::sw> sw{};
            constexpr Register::FieldValue<decltype(dstH2sel)::Type,Dsth2selVal::hw> hw{};
        }
        }
        ///Stop On Done
        enum class SodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,SodVal> sod{}; 
        namespace SodValC{
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::disable> disable{};
            constexpr Register::FieldValue<decltype(sod)::Type,SodVal::enable> enable{};
        }
        }
        ///Interface Lock
        enum class LockifVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,LockifVal> lockIf{}; 
        namespace LockifValC{
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::disable> disable{};
            constexpr Register::FieldValue<decltype(lockIf)::Type,LockifVal::enable> enable{};
        }
        }
        ///Bus Lock
        enum class LockbVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,LockbVal> lockB{}; 
        namespace LockbValC{
            constexpr Register::FieldValue<decltype(lockB)::Type,LockbVal::disable> disable{};
        }
        }
        ///Master Interface Arbiter Lock
        enum class LockiflVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,LockiflVal> lockIfL{}; 
        namespace LockiflValC{
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::chunk> chunk{};
            constexpr Register::FieldValue<decltype(lockIfL)::Type,LockiflVal::buffer> buffer{};
        }
        }
        ///AHB Protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class FifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,FifocfgVal> fifocfg{}; 
        namespace FifocfgValC{
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::alapCfg> alapCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::halfCfg> halfCfg{};
            constexpr Register::FieldValue<decltype(fifocfg)::Type,FifocfgVal::asapCfg> asapCfg{};
        }
        }
    }
    namespace DmacWpmr{    ///<DMAC Write Protect Mode Register
        using Addr = Register::Address<0x400c41e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace DmacWpsr{    ///<DMAC Write Protect Status Register
        using Addr = Register::Address<0x400c41e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
