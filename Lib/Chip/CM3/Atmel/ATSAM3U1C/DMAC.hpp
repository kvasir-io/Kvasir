#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DMA Controller
    namespace DmacGcfg{    ///<DMAC Global Configuration Register
        using Addr = Register::Address<0x400b0000,0xffffffef,0,unsigned>;
        ///Arbiter Configuration
        enum class arbCfgVal {
            fixed=0x00000000,     ///<Fixed priority arbiter.
            roundRobin=0x00000001,     ///<Modified round robin arbiter.
        };
        namespace arbCfgValC{
            constexpr MPL::Value<arbCfgVal,arbCfgVal::fixed> fixed{};
            constexpr MPL::Value<arbCfgVal,arbCfgVal::roundRobin> roundRobin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,arbCfgVal> arbCfg{}; 
    }
    namespace DmacEn{    ///<DMAC Enable Register
        using Addr = Register::Address<0x400b0004,0xfffffffe,0,unsigned>;
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enable{}; 
    }
    namespace DmacSreq{    ///<DMAC Software Single Request Register
        using Addr = Register::Address<0x400b0008,0xffffff00,0,unsigned>;
        ///Source Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ssreq0{}; 
        ///Destination Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsreq0{}; 
        ///Source Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ssreq1{}; 
        ///Destination Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsreq1{}; 
        ///Source Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ssreq2{}; 
        ///Destination Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dsreq2{}; 
        ///Source Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ssreq3{}; 
        ///Destination Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dsreq3{}; 
    }
    namespace DmacCreq{    ///<DMAC Software Chunk Transfer Request Register
        using Addr = Register::Address<0x400b000c,0xffffff00,0,unsigned>;
        ///Source Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> screq0{}; 
        ///Destination Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dcreq0{}; 
        ///Source Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> screq1{}; 
        ///Destination Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dcreq1{}; 
        ///Source Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> screq2{}; 
        ///Destination Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dcreq2{}; 
        ///Source Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> screq3{}; 
        ///Destination Chunk Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dcreq3{}; 
    }
    namespace DmacLast{    ///<DMAC Software Last Transfer Flag Register
        using Addr = Register::Address<0x400b0010,0xffffff00,0,unsigned>;
        ///Source Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> slast0{}; 
        ///Destination Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dlast0{}; 
        ///Source Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> slast1{}; 
        ///Destination Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dlast1{}; 
        ///Source Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> slast2{}; 
        ///Destination Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dlast2{}; 
        ///Source Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> slast3{}; 
        ///Destination Last
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dlast3{}; 
    }
    namespace DmacEbcier{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Enable register.
        using Addr = Register::Address<0x400b0018,0xfff0f0f0,0,unsigned>;
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
    }
    namespace DmacEbcidr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Disable register.
        using Addr = Register::Address<0x400b001c,0xfff0f0f0,0,unsigned>;
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
    }
    namespace DmacEbcimr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Mask Register.
        using Addr = Register::Address<0x400b0020,0xfff0f0f0,0,unsigned>;
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
    }
    namespace DmacEbcisr{    ///<DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Status Register.
        using Addr = Register::Address<0x400b0024,0xfff0f0f0,0,unsigned>;
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> btc0{}; 
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> btc1{}; 
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> btc2{}; 
        ///Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> btc3{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cbtc0{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cbtc1{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cbtc2{}; 
        ///Chained Buffer Transfer Completed [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cbtc3{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> err0{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> err1{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> err2{}; 
        ///Access Error [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> err3{}; 
    }
    namespace DmacCher{    ///<DMAC Channel Handler Enable Register
        using Addr = Register::Address<0x400b0028,0xf0fff0f0,0,unsigned>;
        ///Enable [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Suspend [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> susp0{}; 
        ///Suspend [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp1{}; 
        ///Suspend [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp2{}; 
        ///Suspend [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp3{}; 
        ///Keep on [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> keep0{}; 
        ///Keep on [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> keep1{}; 
        ///Keep on [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> keep2{}; 
        ///Keep on [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> keep3{}; 
    }
    namespace DmacChdr{    ///<DMAC Channel Handler Disable Register
        using Addr = Register::Address<0x400b002c,0xfffff0f0,0,unsigned>;
        ///Disable [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dis0{}; 
        ///Disable [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dis1{}; 
        ///Disable [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dis2{}; 
        ///Disable [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dis3{}; 
        ///Resume [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> res0{}; 
        ///Resume [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> res1{}; 
        ///Resume [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> res2{}; 
        ///Resume [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> res3{}; 
    }
    namespace DmacChsr{    ///<DMAC Channel Handler Status Register
        using Addr = Register::Address<0x400b0030,0xf0f0f0f0,0,unsigned>;
        ///Enable [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ena0{}; 
        ///Enable [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ena1{}; 
        ///Enable [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ena2{}; 
        ///Enable [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ena3{}; 
        ///Suspend [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> susp0{}; 
        ///Suspend [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> susp1{}; 
        ///Suspend [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> susp2{}; 
        ///Suspend [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> susp3{}; 
        ///Empty [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> empt0{}; 
        ///Empty [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> empt1{}; 
        ///Empty [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> empt2{}; 
        ///Empty [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> empt3{}; 
        ///Stalled [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> stal0{}; 
        ///Stalled [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> stal1{}; 
        ///Stalled [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> stal2{}; 
        ///Stalled [3:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> stal3{}; 
    }
    namespace DmacSaddr0{    ///<DMAC Channel Source Address Register (ch_num = 0)
        using Addr = Register::Address<0x400b003c,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr0{    ///<DMAC Channel Destination Address Register (ch_num = 0)
        using Addr = Register::Address<0x400b0040,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr0{    ///<DMAC Channel Descriptor Address Register (ch_num = 0)
        using Addr = Register::Address<0x400b0044,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla0{    ///<DMAC Channel Control A Register (ch_num = 0)
        using Addr = Register::Address<0x400b0048,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        enum class scsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace scsizeValC{
            constexpr MPL::Value<scsizeVal,scsizeVal::chk1> chk1{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk4> chk4{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk8> chk8{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk16> chk16{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk32> chk32{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk64> chk64{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk128> chk128{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,scsizeVal> scsize{}; 
        ///Destination Chunk Transfer Size
        enum class dcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace dcsizeValC{
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk1> chk1{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk4> chk4{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk8> chk8{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk16> chk16{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk32> chk32{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk64> chk64{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk128> chk128{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,dcsizeVal> dcsize{}; 
        ///Transfer Width for the Source
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///Transfer Width for the Destination
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb0{    ///<DMAC Channel Control B Register (ch_num = 0)
        using Addr = Register::Address<0x400b004c,0x8c0effff,0,unsigned>;
        ///Source Address Descriptor
        enum class srcDscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        namespace srcDscrValC{
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,srcDscrVal> srcDscr{}; 
        ///Destination Address Descriptor
        enum class dstDscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        namespace dstDscrValC{
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dstDscrVal> dstDscr{}; 
        ///Flow Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
    }
    namespace DmacCfg0{    ///<DMAC Channel Configuration Register (ch_num = 0)
        using Addr = Register::Address<0x400b0050,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Software or Hardware Selection for the Source
        enum class srcH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace srcH2selValC{
            constexpr MPL::Value<srcH2selVal,srcH2selVal::sw> sw{};
            constexpr MPL::Value<srcH2selVal,srcH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,srcH2selVal> srcH2sel{}; 
        ///Software or Hardware Selection for the Destination
        enum class dstH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace dstH2selValC{
            constexpr MPL::Value<dstH2selVal,dstH2selVal::sw> sw{};
            constexpr MPL::Value<dstH2selVal,dstH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dstH2selVal> dstH2sel{}; 
        ///Stop On Done
        enum class sodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        namespace sodValC{
            constexpr MPL::Value<sodVal,sodVal::disable> disable{};
            constexpr MPL::Value<sodVal,sodVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sodVal> sod{}; 
        ///Interface Lock
        enum class lockIfVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        namespace lockIfValC{
            constexpr MPL::Value<lockIfVal,lockIfVal::disable> disable{};
            constexpr MPL::Value<lockIfVal,lockIfVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,lockIfVal> lockIf{}; 
        ///Bus Lock
        enum class lockBVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        namespace lockBValC{
            constexpr MPL::Value<lockBVal,lockBVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,lockBVal> lockB{}; 
        ///Master Interface Arbiter Lock
        enum class lockIfLVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        namespace lockIfLValC{
            constexpr MPL::Value<lockIfLVal,lockIfLVal::chunk> chunk{};
            constexpr MPL::Value<lockIfLVal,lockIfLVal::buffer> buffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,lockIfLVal> lockIfL{}; 
        ///AHB Protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace DmacSaddr1{    ///<DMAC Channel Source Address Register (ch_num = 1)
        using Addr = Register::Address<0x400b0064,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr1{    ///<DMAC Channel Destination Address Register (ch_num = 1)
        using Addr = Register::Address<0x400b0068,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr1{    ///<DMAC Channel Descriptor Address Register (ch_num = 1)
        using Addr = Register::Address<0x400b006c,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla1{    ///<DMAC Channel Control A Register (ch_num = 1)
        using Addr = Register::Address<0x400b0070,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        enum class scsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace scsizeValC{
            constexpr MPL::Value<scsizeVal,scsizeVal::chk1> chk1{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk4> chk4{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk8> chk8{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk16> chk16{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk32> chk32{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk64> chk64{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk128> chk128{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,scsizeVal> scsize{}; 
        ///Destination Chunk Transfer Size
        enum class dcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace dcsizeValC{
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk1> chk1{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk4> chk4{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk8> chk8{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk16> chk16{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk32> chk32{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk64> chk64{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk128> chk128{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,dcsizeVal> dcsize{}; 
        ///Transfer Width for the Source
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///Transfer Width for the Destination
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb1{    ///<DMAC Channel Control B Register (ch_num = 1)
        using Addr = Register::Address<0x400b0074,0x8c0effff,0,unsigned>;
        ///Source Address Descriptor
        enum class srcDscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        namespace srcDscrValC{
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,srcDscrVal> srcDscr{}; 
        ///Destination Address Descriptor
        enum class dstDscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        namespace dstDscrValC{
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dstDscrVal> dstDscr{}; 
        ///Flow Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
    }
    namespace DmacCfg1{    ///<DMAC Channel Configuration Register (ch_num = 1)
        using Addr = Register::Address<0x400b0078,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Software or Hardware Selection for the Source
        enum class srcH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace srcH2selValC{
            constexpr MPL::Value<srcH2selVal,srcH2selVal::sw> sw{};
            constexpr MPL::Value<srcH2selVal,srcH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,srcH2selVal> srcH2sel{}; 
        ///Software or Hardware Selection for the Destination
        enum class dstH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace dstH2selValC{
            constexpr MPL::Value<dstH2selVal,dstH2selVal::sw> sw{};
            constexpr MPL::Value<dstH2selVal,dstH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dstH2selVal> dstH2sel{}; 
        ///Stop On Done
        enum class sodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        namespace sodValC{
            constexpr MPL::Value<sodVal,sodVal::disable> disable{};
            constexpr MPL::Value<sodVal,sodVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sodVal> sod{}; 
        ///Interface Lock
        enum class lockIfVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        namespace lockIfValC{
            constexpr MPL::Value<lockIfVal,lockIfVal::disable> disable{};
            constexpr MPL::Value<lockIfVal,lockIfVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,lockIfVal> lockIf{}; 
        ///Bus Lock
        enum class lockBVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        namespace lockBValC{
            constexpr MPL::Value<lockBVal,lockBVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,lockBVal> lockB{}; 
        ///Master Interface Arbiter Lock
        enum class lockIfLVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        namespace lockIfLValC{
            constexpr MPL::Value<lockIfLVal,lockIfLVal::chunk> chunk{};
            constexpr MPL::Value<lockIfLVal,lockIfLVal::buffer> buffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,lockIfLVal> lockIfL{}; 
        ///AHB Protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace DmacSaddr2{    ///<DMAC Channel Source Address Register (ch_num = 2)
        using Addr = Register::Address<0x400b008c,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr2{    ///<DMAC Channel Destination Address Register (ch_num = 2)
        using Addr = Register::Address<0x400b0090,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr2{    ///<DMAC Channel Descriptor Address Register (ch_num = 2)
        using Addr = Register::Address<0x400b0094,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla2{    ///<DMAC Channel Control A Register (ch_num = 2)
        using Addr = Register::Address<0x400b0098,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        enum class scsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace scsizeValC{
            constexpr MPL::Value<scsizeVal,scsizeVal::chk1> chk1{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk4> chk4{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk8> chk8{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk16> chk16{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk32> chk32{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk64> chk64{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk128> chk128{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,scsizeVal> scsize{}; 
        ///Destination Chunk Transfer Size
        enum class dcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace dcsizeValC{
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk1> chk1{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk4> chk4{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk8> chk8{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk16> chk16{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk32> chk32{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk64> chk64{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk128> chk128{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,dcsizeVal> dcsize{}; 
        ///Transfer Width for the Source
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///Transfer Width for the Destination
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb2{    ///<DMAC Channel Control B Register (ch_num = 2)
        using Addr = Register::Address<0x400b009c,0x8c0effff,0,unsigned>;
        ///Source Address Descriptor
        enum class srcDscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        namespace srcDscrValC{
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,srcDscrVal> srcDscr{}; 
        ///Destination Address Descriptor
        enum class dstDscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        namespace dstDscrValC{
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dstDscrVal> dstDscr{}; 
        ///Flow Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
    }
    namespace DmacCfg2{    ///<DMAC Channel Configuration Register (ch_num = 2)
        using Addr = Register::Address<0x400b00a0,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Software or Hardware Selection for the Source
        enum class srcH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace srcH2selValC{
            constexpr MPL::Value<srcH2selVal,srcH2selVal::sw> sw{};
            constexpr MPL::Value<srcH2selVal,srcH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,srcH2selVal> srcH2sel{}; 
        ///Software or Hardware Selection for the Destination
        enum class dstH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace dstH2selValC{
            constexpr MPL::Value<dstH2selVal,dstH2selVal::sw> sw{};
            constexpr MPL::Value<dstH2selVal,dstH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dstH2selVal> dstH2sel{}; 
        ///Stop On Done
        enum class sodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        namespace sodValC{
            constexpr MPL::Value<sodVal,sodVal::disable> disable{};
            constexpr MPL::Value<sodVal,sodVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sodVal> sod{}; 
        ///Interface Lock
        enum class lockIfVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        namespace lockIfValC{
            constexpr MPL::Value<lockIfVal,lockIfVal::disable> disable{};
            constexpr MPL::Value<lockIfVal,lockIfVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,lockIfVal> lockIf{}; 
        ///Bus Lock
        enum class lockBVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        namespace lockBValC{
            constexpr MPL::Value<lockBVal,lockBVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,lockBVal> lockB{}; 
        ///Master Interface Arbiter Lock
        enum class lockIfLVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        namespace lockIfLValC{
            constexpr MPL::Value<lockIfLVal,lockIfLVal::chunk> chunk{};
            constexpr MPL::Value<lockIfLVal,lockIfLVal::buffer> buffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,lockIfLVal> lockIfL{}; 
        ///AHB Protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace DmacSaddr3{    ///<DMAC Channel Source Address Register (ch_num = 3)
        using Addr = Register::Address<0x400b00b4,0x00000000,0,unsigned>;
        ///Channel x Source Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> saddr{}; 
    }
    namespace DmacDaddr3{    ///<DMAC Channel Destination Address Register (ch_num = 3)
        using Addr = Register::Address<0x400b00b8,0x00000000,0,unsigned>;
        ///Channel x Destination Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> daddr{}; 
    }
    namespace DmacDscr3{    ///<DMAC Channel Descriptor Address Register (ch_num = 3)
        using Addr = Register::Address<0x400b00bc,0x00000003,0,unsigned>;
        ///Buffer Transfer Descriptor Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> dscr{}; 
    }
    namespace DmacCtrla3{    ///<DMAC Channel Control A Register (ch_num = 3)
        using Addr = Register::Address<0x400b00c0,0x4c880000,0,unsigned>;
        ///Buffer Transfer Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> btsize{}; 
        ///Source Chunk Transfer Size.
        enum class scsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace scsizeValC{
            constexpr MPL::Value<scsizeVal,scsizeVal::chk1> chk1{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk4> chk4{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk8> chk8{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk16> chk16{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk32> chk32{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk64> chk64{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk128> chk128{};
            constexpr MPL::Value<scsizeVal,scsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,scsizeVal> scsize{}; 
        ///Destination Chunk Transfer Size
        enum class dcsizeVal {
            chk1=0x00000000,     ///<1 data transferred
            chk4=0x00000001,     ///<4 data transferred
            chk8=0x00000002,     ///<8 data transferred
            chk16=0x00000003,     ///<16 data transferred
            chk32=0x00000004,     ///<32 data transferred
            chk64=0x00000005,     ///<64 data transferred
            chk128=0x00000006,     ///<128 data transferred
            chk256=0x00000007,     ///<256 data transferred
        };
        namespace dcsizeValC{
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk1> chk1{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk4> chk4{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk8> chk8{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk16> chk16{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk32> chk32{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk64> chk64{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk128> chk128{};
            constexpr MPL::Value<dcsizeVal,dcsizeVal::chk256> chk256{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,dcsizeVal> dcsize{}; 
        ///Transfer Width for the Source
        enum class srcWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace srcWidthValC{
            constexpr MPL::Value<srcWidthVal,srcWidthVal::byte> byte{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<srcWidthVal,srcWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcWidthVal> srcWidth{}; 
        ///Transfer Width for the Destination
        enum class dstWidthVal {
            byte=0x00000000,     ///<the transfer size is set to 8-bit width
            halfWord=0x00000001,     ///<the transfer size is set to 16-bit width
            word=0x00000002,     ///<the transfer size is set to 32-bit width
        };
        namespace dstWidthValC{
            constexpr MPL::Value<dstWidthVal,dstWidthVal::byte> byte{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::halfWord> halfWord{};
            constexpr MPL::Value<dstWidthVal,dstWidthVal::word> word{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstWidthVal> dstWidth{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> done{}; 
    }
    namespace DmacCtrlb3{    ///<DMAC Channel Control B Register (ch_num = 3)
        using Addr = Register::Address<0x400b00c4,0x8c0effff,0,unsigned>;
        ///Source Address Descriptor
        enum class srcDscrVal {
            fetchFromMem=0x00000000,     ///<Source address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the source.
        };
        namespace srcDscrValC{
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<srcDscrVal,srcDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,srcDscrVal> srcDscr{}; 
        ///Destination Address Descriptor
        enum class dstDscrVal {
            fetchFromMem=0x00000000,     ///<Destination address is updated when the descriptor is fetched from the memory.
            fetchDisable=0x00000001,     ///<Buffer Descriptor Fetch operation is disabled for the destination.
        };
        namespace dstDscrValC{
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchFromMem> fetchFromMem{};
            constexpr MPL::Value<dstDscrVal,dstDscrVal::fetchDisable> fetchDisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,dstDscrVal> dstDscr{}; 
        ///Flow Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,unsigned> fc{}; 
        ///Incrementing, Decrementing or Fixed Address for the Source
        enum class srcIncrVal {
            incrementing=0x00000000,     ///<The source address is incremented
            decrementing=0x00000001,     ///<The source address is decremented
            fixed=0x00000002,     ///<The source address remains unchanged
        };
        namespace srcIncrValC{
            constexpr MPL::Value<srcIncrVal,srcIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<srcIncrVal,srcIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,srcIncrVal> srcIncr{}; 
        ///Incrementing, Decrementing or Fixed Address for the Destination
        enum class dstIncrVal {
            incrementing=0x00000000,     ///<The destination address is incremented
            decrementing=0x00000001,     ///<The destination address is decremented
            fixed=0x00000002,     ///<The destination address remains unchanged
        };
        namespace dstIncrValC{
            constexpr MPL::Value<dstIncrVal,dstIncrVal::incrementing> incrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::decrementing> decrementing{};
            constexpr MPL::Value<dstIncrVal,dstIncrVal::fixed> fixed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,dstIncrVal> dstIncr{}; 
        ///None
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ien{}; 
    }
    namespace DmacCfg3{    ///<DMAC Channel Configuration Register (ch_num = 3)
        using Addr = Register::Address<0x400b00c8,0xc88edd00,0,unsigned>;
        ///Source with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> srcPer{}; 
        ///Destination with Peripheral identifier
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> dstPer{}; 
        ///Software or Hardware Selection for the Source
        enum class srcH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace srcH2selValC{
            constexpr MPL::Value<srcH2selVal,srcH2selVal::sw> sw{};
            constexpr MPL::Value<srcH2selVal,srcH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,srcH2selVal> srcH2sel{}; 
        ///Software or Hardware Selection for the Destination
        enum class dstH2selVal {
            sw=0x00000000,     ///<Software handshaking interface is used to trigger a transfer request.
            hw=0x00000001,     ///<Hardware handshaking interface is used to trigger a transfer request.
        };
        namespace dstH2selValC{
            constexpr MPL::Value<dstH2selVal,dstH2selVal::sw> sw{};
            constexpr MPL::Value<dstH2selVal,dstH2selVal::hw> hw{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,dstH2selVal> dstH2sel{}; 
        ///Stop On Done
        enum class sodVal {
            disable=0x00000000,     ///<STOP ON DONE disabled, the descriptor fetch operation ignores DONE Field of CTRLA register.
            enable=0x00000001,     ///<STOP ON DONE activated, the DMAC module is automatically disabled if DONE FIELD is set to 1.
        };
        namespace sodValC{
            constexpr MPL::Value<sodVal,sodVal::disable> disable{};
            constexpr MPL::Value<sodVal,sodVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sodVal> sod{}; 
        ///Interface Lock
        enum class lockIfVal {
            disable=0x00000000,     ///<Interface Lock capability is disabled
            enable=0x00000001,     ///<Interface Lock capability is enabled
        };
        namespace lockIfValC{
            constexpr MPL::Value<lockIfVal,lockIfVal::disable> disable{};
            constexpr MPL::Value<lockIfVal,lockIfVal::enable> enable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,lockIfVal> lockIf{}; 
        ///Bus Lock
        enum class lockBVal {
            disable=0x00000000,     ///<AHB Bus Locking capability is disabled.
        };
        namespace lockBValC{
            constexpr MPL::Value<lockBVal,lockBVal::disable> disable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,lockBVal> lockB{}; 
        ///Master Interface Arbiter Lock
        enum class lockIfLVal {
            chunk=0x00000000,     ///<The Master Interface Arbiter is locked by the channel x for a chunk transfer.
            buffer=0x00000001,     ///<The Master Interface Arbiter is locked by the channel x for a buffer transfer.
        };
        namespace lockIfLValC{
            constexpr MPL::Value<lockIfLVal,lockIfLVal::chunk> chunk{};
            constexpr MPL::Value<lockIfLVal,lockIfLVal::buffer> buffer{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,lockIfLVal> lockIfL{}; 
        ///AHB Protection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ahbProt{}; 
        ///FIFO Configuration
        enum class fifocfgVal {
            alapCfg=0x00000000,     ///<The largest defined length AHB burst is performed on the destination AHB interface.
            halfCfg=0x00000001,     ///<When half FIFO size is available/filled, a source/destination request is serviced.
            asapCfg=0x00000002,     ///<When there is enough space/data available to perform a single AHB access, then the request is serviced.
        };
        namespace fifocfgValC{
            constexpr MPL::Value<fifocfgVal,fifocfgVal::alapCfg> alapCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::halfCfg> halfCfg{};
            constexpr MPL::Value<fifocfgVal,fifocfgVal::asapCfg> asapCfg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,fifocfgVal> fifocfg{}; 
    }
    namespace DmacWpmr{    ///<DMAC Write Protect Mode Register
        using Addr = Register::Address<0x400b01e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace DmacWpsr{    ///<DMAC Write Protect Status Register
        using Addr = Register::Address<0x400b01e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
