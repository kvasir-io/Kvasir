#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Cryptographic processor
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x50060000,0xfff43c03,0,unsigned>;
        ///Algorithm direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> algodir{}; 
        namespace AlgodirValC{
        }
        ///Algorithm mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> algomode0{}; 
        namespace Algomode0ValC{
        }
        ///Data type selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> datatype{}; 
        namespace DatatypeValC{
        }
        ///Key size selection (AES mode
              only)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> keysize{}; 
        namespace KeysizeValC{
        }
        ///FIFO flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> fflush{}; 
        namespace FflushValC{
        }
        ///Cryptographic processor
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> crypen{}; 
        namespace CrypenValC{
        }
        ///GCM_CCMPH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> gcmCcmph{}; 
        namespace GcmccmphValC{
        }
        ///ALGOMODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> algomode3{}; 
        namespace Algomode3ValC{
        }
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x50060004,0xffffffe0,0,unsigned>;
        ///Busy bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///Output FIFO full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> offu{}; 
        namespace OffuValC{
        }
        ///Output FIFO not empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ofne{}; 
        namespace OfneValC{
        }
        ///Input FIFO not full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ifnf{}; 
        namespace IfnfValC{
        }
        ///Input FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ifem{}; 
        namespace IfemValC{
        }
    }
    namespace Nonedin{    ///<data input register
        using Addr = Register::Address<0x50060008,0x00000000,0,unsigned>;
        ///Data input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> datain{}; 
        namespace DatainValC{
        }
    }
    namespace Nonedout{    ///<data output register
        using Addr = Register::Address<0x5006000c,0x00000000,0,unsigned>;
        ///Data output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dataout{}; 
        namespace DataoutValC{
        }
    }
    namespace Nonedmacr{    ///<DMA control register
        using Addr = Register::Address<0x50060010,0xfffffffc,0,unsigned>;
        ///DMA output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> doen{}; 
        namespace DoenValC{
        }
        ///DMA input enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dien{}; 
        namespace DienValC{
        }
    }
    namespace Noneimscr{    ///<interrupt mask set/clear
          register
        using Addr = Register::Address<0x50060014,0xfffffffc,0,unsigned>;
        ///Output FIFO service interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> outim{}; 
        namespace OutimValC{
        }
        ///Input FIFO service interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inim{}; 
        namespace InimValC{
        }
    }
    namespace Nonerisr{    ///<raw interrupt status register
        using Addr = Register::Address<0x50060018,0xfffffffc,0,unsigned>;
        ///Output FIFO service raw interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> outris{}; 
        namespace OutrisValC{
        }
        ///Input FIFO service raw interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inris{}; 
        namespace InrisValC{
        }
    }
    namespace Nonemisr{    ///<masked interrupt status
          register
        using Addr = Register::Address<0x5006001c,0xfffffffc,0,unsigned>;
        ///Output FIFO service masked interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> outmis{}; 
        namespace OutmisValC{
        }
        ///Input FIFO service masked interrupt
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inmis{}; 
        namespace InmisValC{
        }
    }
    namespace Nonek0lr{    ///<key registers
        using Addr = Register::Address<0x50060020,0x00000000,0,unsigned>;
        ///b224
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> b224{}; 
        namespace B224ValC{
        }
        ///b225
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> b225{}; 
        namespace B225ValC{
        }
        ///b226
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> b226{}; 
        namespace B226ValC{
        }
        ///b227
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> b227{}; 
        namespace B227ValC{
        }
        ///b228
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> b228{}; 
        namespace B228ValC{
        }
        ///b229
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> b229{}; 
        namespace B229ValC{
        }
        ///b230
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b230{}; 
        namespace B230ValC{
        }
        ///b231
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> b231{}; 
        namespace B231ValC{
        }
        ///b232
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> b232{}; 
        namespace B232ValC{
        }
        ///b233
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> b233{}; 
        namespace B233ValC{
        }
        ///b234
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> b234{}; 
        namespace B234ValC{
        }
        ///b235
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b235{}; 
        namespace B235ValC{
        }
        ///b236
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> b236{}; 
        namespace B236ValC{
        }
        ///b237
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> b237{}; 
        namespace B237ValC{
        }
        ///b238
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> b238{}; 
        namespace B238ValC{
        }
        ///b239
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> b239{}; 
        namespace B239ValC{
        }
        ///b240
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> b240{}; 
        namespace B240ValC{
        }
        ///b241
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> b241{}; 
        namespace B241ValC{
        }
        ///b242
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> b242{}; 
        namespace B242ValC{
        }
        ///b243
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> b243{}; 
        namespace B243ValC{
        }
        ///b244
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> b244{}; 
        namespace B244ValC{
        }
        ///b245
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> b245{}; 
        namespace B245ValC{
        }
        ///b246
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> b246{}; 
        namespace B246ValC{
        }
        ///b247
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> b247{}; 
        namespace B247ValC{
        }
        ///b248
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> b248{}; 
        namespace B248ValC{
        }
        ///b249
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> b249{}; 
        namespace B249ValC{
        }
        ///b250
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> b250{}; 
        namespace B250ValC{
        }
        ///b251
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> b251{}; 
        namespace B251ValC{
        }
        ///b252
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> b252{}; 
        namespace B252ValC{
        }
        ///b253
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> b253{}; 
        namespace B253ValC{
        }
        ///b254
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> b254{}; 
        namespace B254ValC{
        }
        ///b255
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> b255{}; 
        namespace B255ValC{
        }
    }
    namespace Nonek0rr{    ///<key registers
        using Addr = Register::Address<0x50060024,0x00000000,0,unsigned>;
        ///b192
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> b192{}; 
        namespace B192ValC{
        }
        ///b193
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> b193{}; 
        namespace B193ValC{
        }
        ///b194
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> b194{}; 
        namespace B194ValC{
        }
        ///b195
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> b195{}; 
        namespace B195ValC{
        }
        ///b196
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> b196{}; 
        namespace B196ValC{
        }
        ///b197
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> b197{}; 
        namespace B197ValC{
        }
        ///b198
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b198{}; 
        namespace B198ValC{
        }
        ///b199
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> b199{}; 
        namespace B199ValC{
        }
        ///b200
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> b200{}; 
        namespace B200ValC{
        }
        ///b201
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> b201{}; 
        namespace B201ValC{
        }
        ///b202
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> b202{}; 
        namespace B202ValC{
        }
        ///b203
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b203{}; 
        namespace B203ValC{
        }
        ///b204
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> b204{}; 
        namespace B204ValC{
        }
        ///b205
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> b205{}; 
        namespace B205ValC{
        }
        ///b206
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> b206{}; 
        namespace B206ValC{
        }
        ///b207
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> b207{}; 
        namespace B207ValC{
        }
        ///b208
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> b208{}; 
        namespace B208ValC{
        }
        ///b209
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> b209{}; 
        namespace B209ValC{
        }
        ///b210
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> b210{}; 
        namespace B210ValC{
        }
        ///b211
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> b211{}; 
        namespace B211ValC{
        }
        ///b212
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> b212{}; 
        namespace B212ValC{
        }
        ///b213
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> b213{}; 
        namespace B213ValC{
        }
        ///b214
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> b214{}; 
        namespace B214ValC{
        }
        ///b215
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> b215{}; 
        namespace B215ValC{
        }
        ///b216
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> b216{}; 
        namespace B216ValC{
        }
        ///b217
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> b217{}; 
        namespace B217ValC{
        }
        ///b218
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> b218{}; 
        namespace B218ValC{
        }
        ///b219
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> b219{}; 
        namespace B219ValC{
        }
        ///b220
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> b220{}; 
        namespace B220ValC{
        }
        ///b221
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> b221{}; 
        namespace B221ValC{
        }
        ///b222
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> b222{}; 
        namespace B222ValC{
        }
        ///b223
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> b223{}; 
        namespace B223ValC{
        }
    }
    namespace Nonek1lr{    ///<key registers
        using Addr = Register::Address<0x50060028,0x00000000,0,unsigned>;
        ///b160
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> b160{}; 
        namespace B160ValC{
        }
        ///b161
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> b161{}; 
        namespace B161ValC{
        }
        ///b162
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> b162{}; 
        namespace B162ValC{
        }
        ///b163
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> b163{}; 
        namespace B163ValC{
        }
        ///b164
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> b164{}; 
        namespace B164ValC{
        }
        ///b165
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> b165{}; 
        namespace B165ValC{
        }
        ///b166
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b166{}; 
        namespace B166ValC{
        }
        ///b167
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> b167{}; 
        namespace B167ValC{
        }
        ///b168
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> b168{}; 
        namespace B168ValC{
        }
        ///b169
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> b169{}; 
        namespace B169ValC{
        }
        ///b170
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> b170{}; 
        namespace B170ValC{
        }
        ///b171
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b171{}; 
        namespace B171ValC{
        }
        ///b172
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> b172{}; 
        namespace B172ValC{
        }
        ///b173
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> b173{}; 
        namespace B173ValC{
        }
        ///b174
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> b174{}; 
        namespace B174ValC{
        }
        ///b175
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> b175{}; 
        namespace B175ValC{
        }
        ///b176
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> b176{}; 
        namespace B176ValC{
        }
        ///b177
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> b177{}; 
        namespace B177ValC{
        }
        ///b178
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> b178{}; 
        namespace B178ValC{
        }
        ///b179
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> b179{}; 
        namespace B179ValC{
        }
        ///b180
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> b180{}; 
        namespace B180ValC{
        }
        ///b181
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> b181{}; 
        namespace B181ValC{
        }
        ///b182
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> b182{}; 
        namespace B182ValC{
        }
        ///b183
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> b183{}; 
        namespace B183ValC{
        }
        ///b184
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> b184{}; 
        namespace B184ValC{
        }
        ///b185
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> b185{}; 
        namespace B185ValC{
        }
        ///b186
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> b186{}; 
        namespace B186ValC{
        }
        ///b187
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> b187{}; 
        namespace B187ValC{
        }
        ///b188
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> b188{}; 
        namespace B188ValC{
        }
        ///b189
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> b189{}; 
        namespace B189ValC{
        }
        ///b190
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> b190{}; 
        namespace B190ValC{
        }
        ///b191
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> b191{}; 
        namespace B191ValC{
        }
    }
    namespace Nonek1rr{    ///<key registers
        using Addr = Register::Address<0x5006002c,0x00000000,0,unsigned>;
        ///b128
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> b128{}; 
        namespace B128ValC{
        }
        ///b129
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> b129{}; 
        namespace B129ValC{
        }
        ///b130
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> b130{}; 
        namespace B130ValC{
        }
        ///b131
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> b131{}; 
        namespace B131ValC{
        }
        ///b132
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> b132{}; 
        namespace B132ValC{
        }
        ///b133
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> b133{}; 
        namespace B133ValC{
        }
        ///b134
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b134{}; 
        namespace B134ValC{
        }
        ///b135
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> b135{}; 
        namespace B135ValC{
        }
        ///b136
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> b136{}; 
        namespace B136ValC{
        }
        ///b137
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> b137{}; 
        namespace B137ValC{
        }
        ///b138
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> b138{}; 
        namespace B138ValC{
        }
        ///b139
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b139{}; 
        namespace B139ValC{
        }
        ///b140
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> b140{}; 
        namespace B140ValC{
        }
        ///b141
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> b141{}; 
        namespace B141ValC{
        }
        ///b142
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> b142{}; 
        namespace B142ValC{
        }
        ///b143
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> b143{}; 
        namespace B143ValC{
        }
        ///b144
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> b144{}; 
        namespace B144ValC{
        }
        ///b145
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> b145{}; 
        namespace B145ValC{
        }
        ///b146
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> b146{}; 
        namespace B146ValC{
        }
        ///b147
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> b147{}; 
        namespace B147ValC{
        }
        ///b148
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> b148{}; 
        namespace B148ValC{
        }
        ///b149
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> b149{}; 
        namespace B149ValC{
        }
        ///b150
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> b150{}; 
        namespace B150ValC{
        }
        ///b151
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> b151{}; 
        namespace B151ValC{
        }
        ///b152
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> b152{}; 
        namespace B152ValC{
        }
        ///b153
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> b153{}; 
        namespace B153ValC{
        }
        ///b154
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> b154{}; 
        namespace B154ValC{
        }
        ///b155
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> b155{}; 
        namespace B155ValC{
        }
        ///b156
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> b156{}; 
        namespace B156ValC{
        }
        ///b157
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> b157{}; 
        namespace B157ValC{
        }
        ///b158
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> b158{}; 
        namespace B158ValC{
        }
        ///b159
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> b159{}; 
        namespace B159ValC{
        }
    }
    namespace Nonek2lr{    ///<key registers
        using Addr = Register::Address<0x50060030,0x00000000,0,unsigned>;
        ///b96
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> b96{}; 
        namespace B96ValC{
        }
        ///b97
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> b97{}; 
        namespace B97ValC{
        }
        ///b98
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> b98{}; 
        namespace B98ValC{
        }
        ///b99
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> b99{}; 
        namespace B99ValC{
        }
        ///b100
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> b100{}; 
        namespace B100ValC{
        }
        ///b101
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> b101{}; 
        namespace B101ValC{
        }
        ///b102
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b102{}; 
        namespace B102ValC{
        }
        ///b103
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> b103{}; 
        namespace B103ValC{
        }
        ///b104
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> b104{}; 
        namespace B104ValC{
        }
        ///b105
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> b105{}; 
        namespace B105ValC{
        }
        ///b106
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> b106{}; 
        namespace B106ValC{
        }
        ///b107
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b107{}; 
        namespace B107ValC{
        }
        ///b108
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> b108{}; 
        namespace B108ValC{
        }
        ///b109
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> b109{}; 
        namespace B109ValC{
        }
        ///b110
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> b110{}; 
        namespace B110ValC{
        }
        ///b111
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> b111{}; 
        namespace B111ValC{
        }
        ///b112
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> b112{}; 
        namespace B112ValC{
        }
        ///b113
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> b113{}; 
        namespace B113ValC{
        }
        ///b114
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> b114{}; 
        namespace B114ValC{
        }
        ///b115
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> b115{}; 
        namespace B115ValC{
        }
        ///b116
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> b116{}; 
        namespace B116ValC{
        }
        ///b117
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> b117{}; 
        namespace B117ValC{
        }
        ///b118
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> b118{}; 
        namespace B118ValC{
        }
        ///b119
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> b119{}; 
        namespace B119ValC{
        }
        ///b120
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> b120{}; 
        namespace B120ValC{
        }
        ///b121
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> b121{}; 
        namespace B121ValC{
        }
        ///b122
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> b122{}; 
        namespace B122ValC{
        }
        ///b123
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> b123{}; 
        namespace B123ValC{
        }
        ///b124
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> b124{}; 
        namespace B124ValC{
        }
        ///b125
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> b125{}; 
        namespace B125ValC{
        }
        ///b126
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> b126{}; 
        namespace B126ValC{
        }
        ///b127
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> b127{}; 
        namespace B127ValC{
        }
    }
    namespace Nonek2rr{    ///<key registers
        using Addr = Register::Address<0x50060034,0x00000000,0,unsigned>;
        ///b64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> b64{}; 
        namespace B64ValC{
        }
        ///b65
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> b65{}; 
        namespace B65ValC{
        }
        ///b66
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> b66{}; 
        namespace B66ValC{
        }
        ///b67
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> b67{}; 
        namespace B67ValC{
        }
        ///b68
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> b68{}; 
        namespace B68ValC{
        }
        ///b69
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> b69{}; 
        namespace B69ValC{
        }
        ///b70
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b70{}; 
        namespace B70ValC{
        }
        ///b71
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> b71{}; 
        namespace B71ValC{
        }
        ///b72
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> b72{}; 
        namespace B72ValC{
        }
        ///b73
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> b73{}; 
        namespace B73ValC{
        }
        ///b74
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> b74{}; 
        namespace B74ValC{
        }
        ///b75
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b75{}; 
        namespace B75ValC{
        }
        ///b76
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> b76{}; 
        namespace B76ValC{
        }
        ///b77
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> b77{}; 
        namespace B77ValC{
        }
        ///b78
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> b78{}; 
        namespace B78ValC{
        }
        ///b79
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> b79{}; 
        namespace B79ValC{
        }
        ///b80
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> b80{}; 
        namespace B80ValC{
        }
        ///b81
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> b81{}; 
        namespace B81ValC{
        }
        ///b82
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> b82{}; 
        namespace B82ValC{
        }
        ///b83
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> b83{}; 
        namespace B83ValC{
        }
        ///b84
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> b84{}; 
        namespace B84ValC{
        }
        ///b85
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> b85{}; 
        namespace B85ValC{
        }
        ///b86
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> b86{}; 
        namespace B86ValC{
        }
        ///b87
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> b87{}; 
        namespace B87ValC{
        }
        ///b88
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> b88{}; 
        namespace B88ValC{
        }
        ///b89
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> b89{}; 
        namespace B89ValC{
        }
        ///b90
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> b90{}; 
        namespace B90ValC{
        }
        ///b91
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> b91{}; 
        namespace B91ValC{
        }
        ///b92
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> b92{}; 
        namespace B92ValC{
        }
        ///b93
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> b93{}; 
        namespace B93ValC{
        }
        ///b94
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> b94{}; 
        namespace B94ValC{
        }
        ///b95
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> b95{}; 
        namespace B95ValC{
        }
    }
    namespace Nonek3lr{    ///<key registers
        using Addr = Register::Address<0x50060038,0x00000000,0,unsigned>;
        ///b32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> b32{}; 
        namespace B32ValC{
        }
        ///b33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> b33{}; 
        namespace B33ValC{
        }
        ///b34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> b34{}; 
        namespace B34ValC{
        }
        ///b35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> b35{}; 
        namespace B35ValC{
        }
        ///b36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> b36{}; 
        namespace B36ValC{
        }
        ///b37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> b37{}; 
        namespace B37ValC{
        }
        ///b38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b38{}; 
        namespace B38ValC{
        }
        ///b39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> b39{}; 
        namespace B39ValC{
        }
        ///b40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> b40{}; 
        namespace B40ValC{
        }
        ///b41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> b41{}; 
        namespace B41ValC{
        }
        ///b42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> b42{}; 
        namespace B42ValC{
        }
        ///b43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b43{}; 
        namespace B43ValC{
        }
        ///b44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> b44{}; 
        namespace B44ValC{
        }
        ///b45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> b45{}; 
        namespace B45ValC{
        }
        ///b46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> b46{}; 
        namespace B46ValC{
        }
        ///b47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> b47{}; 
        namespace B47ValC{
        }
        ///b48
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> b48{}; 
        namespace B48ValC{
        }
        ///b49
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> b49{}; 
        namespace B49ValC{
        }
        ///b50
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> b50{}; 
        namespace B50ValC{
        }
        ///b51
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> b51{}; 
        namespace B51ValC{
        }
        ///b52
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> b52{}; 
        namespace B52ValC{
        }
        ///b53
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> b53{}; 
        namespace B53ValC{
        }
        ///b54
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> b54{}; 
        namespace B54ValC{
        }
        ///b55
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> b55{}; 
        namespace B55ValC{
        }
        ///b56
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> b56{}; 
        namespace B56ValC{
        }
        ///b57
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> b57{}; 
        namespace B57ValC{
        }
        ///b58
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> b58{}; 
        namespace B58ValC{
        }
        ///b59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> b59{}; 
        namespace B59ValC{
        }
        ///b60
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> b60{}; 
        namespace B60ValC{
        }
        ///b61
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> b61{}; 
        namespace B61ValC{
        }
        ///b62
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> b62{}; 
        namespace B62ValC{
        }
        ///b63
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> b63{}; 
        namespace B63ValC{
        }
    }
    namespace Nonek3rr{    ///<key registers
        using Addr = Register::Address<0x5006003c,0x00000000,0,unsigned>;
        ///b0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> b0{}; 
        namespace B0ValC{
        }
        ///b1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> b1{}; 
        namespace B1ValC{
        }
        ///b2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> b2{}; 
        namespace B2ValC{
        }
        ///b3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> b3{}; 
        namespace B3ValC{
        }
        ///b4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> b4{}; 
        namespace B4ValC{
        }
        ///b5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> b5{}; 
        namespace B5ValC{
        }
        ///b6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b6{}; 
        namespace B6ValC{
        }
        ///b7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> b7{}; 
        namespace B7ValC{
        }
        ///b8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> b8{}; 
        namespace B8ValC{
        }
        ///b9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> b9{}; 
        namespace B9ValC{
        }
        ///b10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> b10{}; 
        namespace B10ValC{
        }
        ///b11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> b11{}; 
        namespace B11ValC{
        }
        ///b12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> b12{}; 
        namespace B12ValC{
        }
        ///b13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> b13{}; 
        namespace B13ValC{
        }
        ///b14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> b14{}; 
        namespace B14ValC{
        }
        ///b15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> b15{}; 
        namespace B15ValC{
        }
        ///b16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> b16{}; 
        namespace B16ValC{
        }
        ///b17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> b17{}; 
        namespace B17ValC{
        }
        ///b18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> b18{}; 
        namespace B18ValC{
        }
        ///b19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> b19{}; 
        namespace B19ValC{
        }
        ///b20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> b20{}; 
        namespace B20ValC{
        }
        ///b21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> b21{}; 
        namespace B21ValC{
        }
        ///b22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> b22{}; 
        namespace B22ValC{
        }
        ///b23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> b23{}; 
        namespace B23ValC{
        }
        ///b24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> b24{}; 
        namespace B24ValC{
        }
        ///b25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> b25{}; 
        namespace B25ValC{
        }
        ///b26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> b26{}; 
        namespace B26ValC{
        }
        ///b27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> b27{}; 
        namespace B27ValC{
        }
        ///b28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> b28{}; 
        namespace B28ValC{
        }
        ///b29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> b29{}; 
        namespace B29ValC{
        }
        ///b30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> b30{}; 
        namespace B30ValC{
        }
        ///b31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> b31{}; 
        namespace B31ValC{
        }
    }
    namespace Noneiv0lr{    ///<initialization vector
          registers
        using Addr = Register::Address<0x50060040,0x00000000,0,unsigned>;
        ///IV31
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iv31{}; 
        namespace Iv31ValC{
        }
        ///IV30
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iv30{}; 
        namespace Iv30ValC{
        }
        ///IV29
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iv29{}; 
        namespace Iv29ValC{
        }
        ///IV28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iv28{}; 
        namespace Iv28ValC{
        }
        ///IV27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iv27{}; 
        namespace Iv27ValC{
        }
        ///IV26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iv26{}; 
        namespace Iv26ValC{
        }
        ///IV25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iv25{}; 
        namespace Iv25ValC{
        }
        ///IV24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iv24{}; 
        namespace Iv24ValC{
        }
        ///IV23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iv23{}; 
        namespace Iv23ValC{
        }
        ///IV22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iv22{}; 
        namespace Iv22ValC{
        }
        ///IV21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iv21{}; 
        namespace Iv21ValC{
        }
        ///IV20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> iv20{}; 
        namespace Iv20ValC{
        }
        ///IV19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> iv19{}; 
        namespace Iv19ValC{
        }
        ///IV18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> iv18{}; 
        namespace Iv18ValC{
        }
        ///IV17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> iv17{}; 
        namespace Iv17ValC{
        }
        ///IV16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> iv16{}; 
        namespace Iv16ValC{
        }
        ///IV15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> iv15{}; 
        namespace Iv15ValC{
        }
        ///IV14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> iv14{}; 
        namespace Iv14ValC{
        }
        ///IV13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iv13{}; 
        namespace Iv13ValC{
        }
        ///IV12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> iv12{}; 
        namespace Iv12ValC{
        }
        ///IV11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iv11{}; 
        namespace Iv11ValC{
        }
        ///IV10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> iv10{}; 
        namespace Iv10ValC{
        }
        ///IV9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> iv9{}; 
        namespace Iv9ValC{
        }
        ///IV8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> iv8{}; 
        namespace Iv8ValC{
        }
        ///IV7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> iv7{}; 
        namespace Iv7ValC{
        }
        ///IV6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> iv6{}; 
        namespace Iv6ValC{
        }
        ///IV5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> iv5{}; 
        namespace Iv5ValC{
        }
        ///IV4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> iv4{}; 
        namespace Iv4ValC{
        }
        ///IV3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> iv3{}; 
        namespace Iv3ValC{
        }
        ///IV2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> iv2{}; 
        namespace Iv2ValC{
        }
        ///IV1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> iv1{}; 
        namespace Iv1ValC{
        }
        ///IV0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> iv0{}; 
        namespace Iv0ValC{
        }
    }
    namespace Noneiv0rr{    ///<initialization vector
          registers
        using Addr = Register::Address<0x50060044,0x00000000,0,unsigned>;
        ///IV63
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iv63{}; 
        namespace Iv63ValC{
        }
        ///IV62
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iv62{}; 
        namespace Iv62ValC{
        }
        ///IV61
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iv61{}; 
        namespace Iv61ValC{
        }
        ///IV60
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iv60{}; 
        namespace Iv60ValC{
        }
        ///IV59
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iv59{}; 
        namespace Iv59ValC{
        }
        ///IV58
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iv58{}; 
        namespace Iv58ValC{
        }
        ///IV57
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iv57{}; 
        namespace Iv57ValC{
        }
        ///IV56
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iv56{}; 
        namespace Iv56ValC{
        }
        ///IV55
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iv55{}; 
        namespace Iv55ValC{
        }
        ///IV54
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iv54{}; 
        namespace Iv54ValC{
        }
        ///IV53
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iv53{}; 
        namespace Iv53ValC{
        }
        ///IV52
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> iv52{}; 
        namespace Iv52ValC{
        }
        ///IV51
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> iv51{}; 
        namespace Iv51ValC{
        }
        ///IV50
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> iv50{}; 
        namespace Iv50ValC{
        }
        ///IV49
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> iv49{}; 
        namespace Iv49ValC{
        }
        ///IV48
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> iv48{}; 
        namespace Iv48ValC{
        }
        ///IV47
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> iv47{}; 
        namespace Iv47ValC{
        }
        ///IV46
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> iv46{}; 
        namespace Iv46ValC{
        }
        ///IV45
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iv45{}; 
        namespace Iv45ValC{
        }
        ///IV44
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> iv44{}; 
        namespace Iv44ValC{
        }
        ///IV43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iv43{}; 
        namespace Iv43ValC{
        }
        ///IV42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> iv42{}; 
        namespace Iv42ValC{
        }
        ///IV41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> iv41{}; 
        namespace Iv41ValC{
        }
        ///IV40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> iv40{}; 
        namespace Iv40ValC{
        }
        ///IV39
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> iv39{}; 
        namespace Iv39ValC{
        }
        ///IV38
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> iv38{}; 
        namespace Iv38ValC{
        }
        ///IV37
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> iv37{}; 
        namespace Iv37ValC{
        }
        ///IV36
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> iv36{}; 
        namespace Iv36ValC{
        }
        ///IV35
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> iv35{}; 
        namespace Iv35ValC{
        }
        ///IV34
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> iv34{}; 
        namespace Iv34ValC{
        }
        ///IV33
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> iv33{}; 
        namespace Iv33ValC{
        }
        ///IV32
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> iv32{}; 
        namespace Iv32ValC{
        }
    }
    namespace Noneiv1lr{    ///<initialization vector
          registers
        using Addr = Register::Address<0x50060048,0x00000000,0,unsigned>;
        ///IV95
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iv95{}; 
        namespace Iv95ValC{
        }
        ///IV94
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iv94{}; 
        namespace Iv94ValC{
        }
        ///IV93
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iv93{}; 
        namespace Iv93ValC{
        }
        ///IV92
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iv92{}; 
        namespace Iv92ValC{
        }
        ///IV91
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iv91{}; 
        namespace Iv91ValC{
        }
        ///IV90
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iv90{}; 
        namespace Iv90ValC{
        }
        ///IV89
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iv89{}; 
        namespace Iv89ValC{
        }
        ///IV88
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iv88{}; 
        namespace Iv88ValC{
        }
        ///IV87
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iv87{}; 
        namespace Iv87ValC{
        }
        ///IV86
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iv86{}; 
        namespace Iv86ValC{
        }
        ///IV85
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iv85{}; 
        namespace Iv85ValC{
        }
        ///IV84
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> iv84{}; 
        namespace Iv84ValC{
        }
        ///IV83
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> iv83{}; 
        namespace Iv83ValC{
        }
        ///IV82
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> iv82{}; 
        namespace Iv82ValC{
        }
        ///IV81
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> iv81{}; 
        namespace Iv81ValC{
        }
        ///IV80
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> iv80{}; 
        namespace Iv80ValC{
        }
        ///IV79
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> iv79{}; 
        namespace Iv79ValC{
        }
        ///IV78
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> iv78{}; 
        namespace Iv78ValC{
        }
        ///IV77
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iv77{}; 
        namespace Iv77ValC{
        }
        ///IV76
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> iv76{}; 
        namespace Iv76ValC{
        }
        ///IV75
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iv75{}; 
        namespace Iv75ValC{
        }
        ///IV74
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> iv74{}; 
        namespace Iv74ValC{
        }
        ///IV73
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> iv73{}; 
        namespace Iv73ValC{
        }
        ///IV72
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> iv72{}; 
        namespace Iv72ValC{
        }
        ///IV71
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> iv71{}; 
        namespace Iv71ValC{
        }
        ///IV70
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> iv70{}; 
        namespace Iv70ValC{
        }
        ///IV69
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> iv69{}; 
        namespace Iv69ValC{
        }
        ///IV68
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> iv68{}; 
        namespace Iv68ValC{
        }
        ///IV67
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> iv67{}; 
        namespace Iv67ValC{
        }
        ///IV66
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> iv66{}; 
        namespace Iv66ValC{
        }
        ///IV65
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> iv65{}; 
        namespace Iv65ValC{
        }
        ///IV64
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> iv64{}; 
        namespace Iv64ValC{
        }
    }
    namespace Noneiv1rr{    ///<initialization vector
          registers
        using Addr = Register::Address<0x5006004c,0x00000000,0,unsigned>;
        ///IV127
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iv127{}; 
        namespace Iv127ValC{
        }
        ///IV126
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iv126{}; 
        namespace Iv126ValC{
        }
        ///IV125
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> iv125{}; 
        namespace Iv125ValC{
        }
        ///IV124
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> iv124{}; 
        namespace Iv124ValC{
        }
        ///IV123
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> iv123{}; 
        namespace Iv123ValC{
        }
        ///IV122
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> iv122{}; 
        namespace Iv122ValC{
        }
        ///IV121
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iv121{}; 
        namespace Iv121ValC{
        }
        ///IV120
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> iv120{}; 
        namespace Iv120ValC{
        }
        ///IV119
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> iv119{}; 
        namespace Iv119ValC{
        }
        ///IV118
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> iv118{}; 
        namespace Iv118ValC{
        }
        ///IV117
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> iv117{}; 
        namespace Iv117ValC{
        }
        ///IV116
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> iv116{}; 
        namespace Iv116ValC{
        }
        ///IV115
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> iv115{}; 
        namespace Iv115ValC{
        }
        ///IV114
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> iv114{}; 
        namespace Iv114ValC{
        }
        ///IV113
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> iv113{}; 
        namespace Iv113ValC{
        }
        ///IV112
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> iv112{}; 
        namespace Iv112ValC{
        }
        ///IV111
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> iv111{}; 
        namespace Iv111ValC{
        }
        ///IV110
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> iv110{}; 
        namespace Iv110ValC{
        }
        ///IV109
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iv109{}; 
        namespace Iv109ValC{
        }
        ///IV108
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> iv108{}; 
        namespace Iv108ValC{
        }
        ///IV107
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iv107{}; 
        namespace Iv107ValC{
        }
        ///IV106
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> iv106{}; 
        namespace Iv106ValC{
        }
        ///IV105
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> iv105{}; 
        namespace Iv105ValC{
        }
        ///IV104
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> iv104{}; 
        namespace Iv104ValC{
        }
        ///IV103
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> iv103{}; 
        namespace Iv103ValC{
        }
        ///IV102
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> iv102{}; 
        namespace Iv102ValC{
        }
        ///IV101
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> iv101{}; 
        namespace Iv101ValC{
        }
        ///IV100
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> iv100{}; 
        namespace Iv100ValC{
        }
        ///IV99
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> iv99{}; 
        namespace Iv99ValC{
        }
        ///IV98
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> iv98{}; 
        namespace Iv98ValC{
        }
        ///IV97
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> iv97{}; 
        namespace Iv97ValC{
        }
        ///IV96
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> iv96{}; 
        namespace Iv96ValC{
        }
    }
    namespace Nonecsgcmccm0r{    ///<context swap register
        using Addr = Register::Address<0x50060050,0x00000000,0,unsigned>;
        ///CSGCMCCM0R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcmccm0r{}; 
        namespace Csgcmccm0rValC{
        }
    }
    namespace Nonecsgcmccm1r{    ///<context swap register
        using Addr = Register::Address<0x50060054,0x00000000,0,unsigned>;
        ///CSGCMCCM1R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcmccm1r{}; 
        namespace Csgcmccm1rValC{
        }
    }
    namespace Nonecsgcmccm2r{    ///<context swap register
        using Addr = Register::Address<0x50060058,0x00000000,0,unsigned>;
        ///CSGCMCCM2R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcmccm2r{}; 
        namespace Csgcmccm2rValC{
        }
    }
    namespace Nonecsgcmccm3r{    ///<context swap register
        using Addr = Register::Address<0x5006005c,0x00000000,0,unsigned>;
        ///CSGCMCCM3R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcmccm3r{}; 
        namespace Csgcmccm3rValC{
        }
    }
    namespace Nonecsgcmccm4r{    ///<context swap register
        using Addr = Register::Address<0x50060060,0x00000000,0,unsigned>;
        ///CSGCMCCM4R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcmccm4r{}; 
        namespace Csgcmccm4rValC{
        }
    }
    namespace Nonecsgcmccm5r{    ///<context swap register
        using Addr = Register::Address<0x50060064,0x00000000,0,unsigned>;
        ///CSGCMCCM5R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcmccm5r{}; 
        namespace Csgcmccm5rValC{
        }
    }
    namespace Nonecsgcmccm6r{    ///<context swap register
        using Addr = Register::Address<0x50060068,0x00000000,0,unsigned>;
        ///CSGCMCCM6R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcmccm6r{}; 
        namespace Csgcmccm6rValC{
        }
    }
    namespace Nonecsgcmccm7r{    ///<context swap register
        using Addr = Register::Address<0x5006006c,0x00000000,0,unsigned>;
        ///CSGCMCCM7R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcmccm7r{}; 
        namespace Csgcmccm7rValC{
        }
    }
    namespace Nonecsgcm0r{    ///<context swap register
        using Addr = Register::Address<0x50060070,0x00000000,0,unsigned>;
        ///CSGCM0R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcm0r{}; 
        namespace Csgcm0rValC{
        }
    }
    namespace Nonecsgcm1r{    ///<context swap register
        using Addr = Register::Address<0x50060074,0x00000000,0,unsigned>;
        ///CSGCM1R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcm1r{}; 
        namespace Csgcm1rValC{
        }
    }
    namespace Nonecsgcm2r{    ///<context swap register
        using Addr = Register::Address<0x50060078,0x00000000,0,unsigned>;
        ///CSGCM2R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcm2r{}; 
        namespace Csgcm2rValC{
        }
    }
    namespace Nonecsgcm3r{    ///<context swap register
        using Addr = Register::Address<0x5006007c,0x00000000,0,unsigned>;
        ///CSGCM3R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcm3r{}; 
        namespace Csgcm3rValC{
        }
    }
    namespace Nonecsgcm4r{    ///<context swap register
        using Addr = Register::Address<0x50060080,0x00000000,0,unsigned>;
        ///CSGCM4R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcm4r{}; 
        namespace Csgcm4rValC{
        }
    }
    namespace Nonecsgcm5r{    ///<context swap register
        using Addr = Register::Address<0x50060084,0x00000000,0,unsigned>;
        ///CSGCM5R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcm5r{}; 
        namespace Csgcm5rValC{
        }
    }
    namespace Nonecsgcm6r{    ///<context swap register
        using Addr = Register::Address<0x50060088,0x00000000,0,unsigned>;
        ///CSGCM6R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcm6r{}; 
        namespace Csgcm6rValC{
        }
    }
    namespace Nonecsgcm7r{    ///<context swap register
        using Addr = Register::Address<0x5006008c,0x00000000,0,unsigned>;
        ///CSGCM7R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> csgcm7r{}; 
        namespace Csgcm7rValC{
        }
    }
}
