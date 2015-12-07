#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Advanced Encryption Standard
    namespace AesCr{    ///<Control Register
        using Addr = Register::Address<0xf000c000,0xfffffefe,0,unsigned>;
        ///Start Processing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
    }
    namespace AesMr{    ///<Mode Register
        using Addr = Register::Address<0xf000c004,0xff080006,0,unsigned>;
        ///Processing Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cipher{}; 
        namespace CipherValC{
        }
        ///Dual Input BUFFer
        enum class DualbuffVal {
            inactive=0x00000000,     ///<AES_IDATARx cannot be written during processing of previous block.
            active=0x00000001,     ///<AES_IDATARx can be written during processing of previous block when SMOD = 0x2. It speeds up the overall runtime of large files.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DualbuffVal> dualbuff{}; 
        namespace DualbuffValC{
            constexpr Register::FieldValue<decltype(dualbuff),DualbuffVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(dualbuff),DualbuffVal::active> active{};
        }
        ///Processing Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> procdly{}; 
        namespace ProcdlyValC{
        }
        ///Start Mode
        enum class SmodVal {
            manualStart=0x00000000,     ///<Manual Mode
            autoStart=0x00000001,     ///<Auto Mode
            idatar0Start=0x00000002,     ///<AES_IDATAR0 access only Auto Mode
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,SmodVal> smod{}; 
        namespace SmodValC{
            constexpr Register::FieldValue<decltype(smod),SmodVal::manualStart> manualStart{};
            constexpr Register::FieldValue<decltype(smod),SmodVal::autoStart> autoStart{};
            constexpr Register::FieldValue<decltype(smod),SmodVal::idatar0Start> idatar0Start{};
        }
        ///Key Size
        enum class KeysizeVal {
            aes128=0x00000000,     ///<AES Key Size is 128 bits
            aes192=0x00000001,     ///<AES Key Size is 192 bits
            aes256=0x00000002,     ///<AES Key Size is 256 bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,KeysizeVal> keysize{}; 
        namespace KeysizeValC{
            constexpr Register::FieldValue<decltype(keysize),KeysizeVal::aes128> aes128{};
            constexpr Register::FieldValue<decltype(keysize),KeysizeVal::aes192> aes192{};
            constexpr Register::FieldValue<decltype(keysize),KeysizeVal::aes256> aes256{};
        }
        ///Operation Mode
        enum class OpmodVal {
            ecb=0x00000000,     ///<ECB: Electronic Code Book mode
            cbc=0x00000001,     ///<CBC: Cipher Block Chaining mode
            ofb=0x00000002,     ///<OFB: Output Feedback mode
            cfb=0x00000003,     ///<CFB: Cipher Feedback mode
            ctr=0x00000004,     ///<CTR: Counter mode (16-bit internal counter)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,OpmodVal> opmod{}; 
        namespace OpmodValC{
            constexpr Register::FieldValue<decltype(opmod),OpmodVal::ecb> ecb{};
            constexpr Register::FieldValue<decltype(opmod),OpmodVal::cbc> cbc{};
            constexpr Register::FieldValue<decltype(opmod),OpmodVal::ofb> ofb{};
            constexpr Register::FieldValue<decltype(opmod),OpmodVal::cfb> cfb{};
            constexpr Register::FieldValue<decltype(opmod),OpmodVal::ctr> ctr{};
        }
        ///Last Output Data Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lod{}; 
        namespace LodValC{
        }
        ///Cipher Feedback Data Size
        enum class CfbsVal {
            size128bit=0x00000000,     ///<128-bit
            size64bit=0x00000001,     ///<64-bit
            size32bit=0x00000002,     ///<32-bit
            size16bit=0x00000003,     ///<16-bit
            size8bit=0x00000004,     ///<8-bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,CfbsVal> cfbs{}; 
        namespace CfbsValC{
            constexpr Register::FieldValue<decltype(cfbs),CfbsVal::size128bit> size128bit{};
            constexpr Register::FieldValue<decltype(cfbs),CfbsVal::size64bit> size64bit{};
            constexpr Register::FieldValue<decltype(cfbs),CfbsVal::size32bit> size32bit{};
            constexpr Register::FieldValue<decltype(cfbs),CfbsVal::size16bit> size16bit{};
            constexpr Register::FieldValue<decltype(cfbs),CfbsVal::size8bit> size8bit{};
        }
        ///Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> ckey{}; 
        namespace CkeyValC{
        }
    }
    namespace AesIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf000c010,0xfffffefe,0,unsigned>;
        ///Data Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        namespace DatrdyValC{
        }
        ///Unspecified Register Access Detection Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urad{}; 
        namespace UradValC{
        }
    }
    namespace AesIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf000c014,0xfffffefe,0,unsigned>;
        ///Data Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        namespace DatrdyValC{
        }
        ///Unspecified Register Access Detection Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urad{}; 
        namespace UradValC{
        }
    }
    namespace AesImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf000c018,0xfffffefe,0,unsigned>;
        ///Data Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        namespace DatrdyValC{
        }
        ///Unspecified Register Access Detection Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urad{}; 
        namespace UradValC{
        }
    }
    namespace AesIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0xf000c01c,0xffff0efe,0,unsigned>;
        ///Data Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        namespace DatrdyValC{
        }
        ///Unspecified Register Access Detection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urad{}; 
        namespace UradValC{
        }
        ///Unspecified Register Access:
        enum class UratVal {
            idrWrProcessing=0x00000000,     ///<Input Data Register written during the data processing when SMOD=0x2 mode.
            odrRdProcessing=0x00000001,     ///<Output Data Register read during the data processing.
            mrWrProcessing=0x00000002,     ///<Mode Register written during the data processing.
            odrRdSubkgen=0x00000003,     ///<Output Data Register read during the sub-keys generation.
            mrWrSubkgen=0x00000004,     ///<Mode Register written during the sub-keys generation.
            worRdAccess=0x00000005,     ///<Write-only register read access.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,UratVal> urat{}; 
        namespace UratValC{
            constexpr Register::FieldValue<decltype(urat),UratVal::idrWrProcessing> idrWrProcessing{};
            constexpr Register::FieldValue<decltype(urat),UratVal::odrRdProcessing> odrRdProcessing{};
            constexpr Register::FieldValue<decltype(urat),UratVal::mrWrProcessing> mrWrProcessing{};
            constexpr Register::FieldValue<decltype(urat),UratVal::odrRdSubkgen> odrRdSubkgen{};
            constexpr Register::FieldValue<decltype(urat),UratVal::mrWrSubkgen> mrWrSubkgen{};
            constexpr Register::FieldValue<decltype(urat),UratVal::worRdAccess> worRdAccess{};
        }
    }
    namespace AesKeywr0{    ///<Key Word Register
        using Addr = Register::Address<0xf000c020,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesKeywr1{    ///<Key Word Register
        using Addr = Register::Address<0xf000c024,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesKeywr2{    ///<Key Word Register
        using Addr = Register::Address<0xf000c028,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesKeywr3{    ///<Key Word Register
        using Addr = Register::Address<0xf000c02c,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesKeywr4{    ///<Key Word Register
        using Addr = Register::Address<0xf000c030,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesKeywr5{    ///<Key Word Register
        using Addr = Register::Address<0xf000c034,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesKeywr6{    ///<Key Word Register
        using Addr = Register::Address<0xf000c038,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesKeywr7{    ///<Key Word Register
        using Addr = Register::Address<0xf000c03c,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesIdatar0{    ///<Input Data Register
        using Addr = Register::Address<0xf000c040,0x00000000,0,unsigned>;
        ///Input Data Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
        namespace IdataValC{
        }
    }
    namespace AesIdatar1{    ///<Input Data Register
        using Addr = Register::Address<0xf000c044,0x00000000,0,unsigned>;
        ///Input Data Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
        namespace IdataValC{
        }
    }
    namespace AesIdatar2{    ///<Input Data Register
        using Addr = Register::Address<0xf000c048,0x00000000,0,unsigned>;
        ///Input Data Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
        namespace IdataValC{
        }
    }
    namespace AesIdatar3{    ///<Input Data Register
        using Addr = Register::Address<0xf000c04c,0x00000000,0,unsigned>;
        ///Input Data Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
        namespace IdataValC{
        }
    }
    namespace AesOdatar0{    ///<Output Data Register
        using Addr = Register::Address<0xf000c050,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
        namespace OdataValC{
        }
    }
    namespace AesOdatar1{    ///<Output Data Register
        using Addr = Register::Address<0xf000c054,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
        namespace OdataValC{
        }
    }
    namespace AesOdatar2{    ///<Output Data Register
        using Addr = Register::Address<0xf000c058,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
        namespace OdataValC{
        }
    }
    namespace AesOdatar3{    ///<Output Data Register
        using Addr = Register::Address<0xf000c05c,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
        namespace OdataValC{
        }
    }
    namespace AesIvr0{    ///<Initialization Vector Register
        using Addr = Register::Address<0xf000c060,0x00000000,0,unsigned>;
        ///Initialization Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> iv{}; 
        namespace IvValC{
        }
    }
    namespace AesIvr1{    ///<Initialization Vector Register
        using Addr = Register::Address<0xf000c064,0x00000000,0,unsigned>;
        ///Initialization Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> iv{}; 
        namespace IvValC{
        }
    }
    namespace AesIvr2{    ///<Initialization Vector Register
        using Addr = Register::Address<0xf000c068,0x00000000,0,unsigned>;
        ///Initialization Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> iv{}; 
        namespace IvValC{
        }
    }
    namespace AesIvr3{    ///<Initialization Vector Register
        using Addr = Register::Address<0xf000c06c,0x00000000,0,unsigned>;
        ///Initialization Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> iv{}; 
        namespace IvValC{
        }
    }
}
