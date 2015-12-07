#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Advanced Encryption Standard
    namespace AesCr{    ///<Control Register
        using Addr = Register::Address<0xfffc0000,0xfffefefe,0,unsigned>;
        ///Start Processing
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///Random Number Generator Seed Loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> loadseed{}; 
        namespace LoadseedValC{
        }
    }
    namespace AesMr{    ///<Mode Register
        using Addr = Register::Address<0xfffc0004,0xe008000e,0,unsigned>;
        ///Processing Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cipher{}; 
        namespace CipherValC{
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
        ///Countermeasure Key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> ckey{}; 
        namespace CkeyValC{
        }
        ///CounterMeasure Type 1
        enum class Cmtyp1Val {
            noprotExtxkey=0x00000000,     ///<Counter-Measure type 1 is disabled
            protExtkey=0x00000001,     ///<Counter-Measure type 1 is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Cmtyp1Val> cmtyp1{}; 
        namespace Cmtyp1ValC{
            constexpr Register::FieldValue<decltype(cmtyp1),Cmtyp1Val::noprotExtxkey> noprotExtxkey{};
            constexpr Register::FieldValue<decltype(cmtyp1),Cmtyp1Val::protExtkey> protExtkey{};
        }
        ///CounterMeasure Type 2
        enum class Cmtyp2Val {
            noPause=0x00000000,     ///<Counter-Measure type 2 is disabled
            pause=0x00000001,     ///<Counter-Measure type 2 is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Cmtyp2Val> cmtyp2{}; 
        namespace Cmtyp2ValC{
            constexpr Register::FieldValue<decltype(cmtyp2),Cmtyp2Val::noPause> noPause{};
            constexpr Register::FieldValue<decltype(cmtyp2),Cmtyp2Val::pause> pause{};
        }
        ///CounterMeasure Type 3
        enum class Cmtyp3Val {
            noDummy=0x00000000,     ///<Counter-Measure type 3 is disabled
            dummy=0x00000001,     ///<Counter-Measure type 3 is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Cmtyp3Val> cmtyp3{}; 
        namespace Cmtyp3ValC{
            constexpr Register::FieldValue<decltype(cmtyp3),Cmtyp3Val::noDummy> noDummy{};
            constexpr Register::FieldValue<decltype(cmtyp3),Cmtyp3Val::dummy> dummy{};
        }
        ///CounterMeasure Type 4
        enum class Cmtyp4Val {
            noRestart=0x00000000,     ///<Counter-Measure type 4 is disabled
            restart=0x00000001,     ///<Counter-Measure type 4 is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Cmtyp4Val> cmtyp4{}; 
        namespace Cmtyp4ValC{
            constexpr Register::FieldValue<decltype(cmtyp4),Cmtyp4Val::noRestart> noRestart{};
            constexpr Register::FieldValue<decltype(cmtyp4),Cmtyp4Val::restart> restart{};
        }
        ///CounterMeasure Type 5
        enum class Cmtyp5Val {
            noAddaccess=0x00000000,     ///<Counter-Measure type 5 is disabled
            addaccess=0x00000001,     ///<Counter-Measure type 5 is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Cmtyp5Val> cmtyp5{}; 
        namespace Cmtyp5ValC{
            constexpr Register::FieldValue<decltype(cmtyp5),Cmtyp5Val::noAddaccess> noAddaccess{};
            constexpr Register::FieldValue<decltype(cmtyp5),Cmtyp5Val::addaccess> addaccess{};
        }
    }
    namespace AesIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffc0010,0xfffffefe,0,unsigned>;
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
        using Addr = Register::Address<0xfffc0014,0xfffffefe,0,unsigned>;
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
        using Addr = Register::Address<0xfffc0018,0xfffffefe,0,unsigned>;
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
        using Addr = Register::Address<0xfffc001c,0xffff0efe,0,unsigned>;
        ///Data Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datrdy{}; 
        namespace DatrdyValC{
        }
        ///Unspecified Register Access Detection Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> urad{}; 
        namespace UradValC{
        }
        ///Unspecified Register Access Type:
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
        using Addr = Register::Address<0xfffc0020,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesKeywr1{    ///<Key Word Register
        using Addr = Register::Address<0xfffc0024,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesKeywr2{    ///<Key Word Register
        using Addr = Register::Address<0xfffc0028,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesKeywr3{    ///<Key Word Register
        using Addr = Register::Address<0xfffc002c,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesKeywr4{    ///<Key Word Register
        using Addr = Register::Address<0xfffc0030,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesKeywr5{    ///<Key Word Register
        using Addr = Register::Address<0xfffc0034,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesKeywr6{    ///<Key Word Register
        using Addr = Register::Address<0xfffc0038,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesKeywr7{    ///<Key Word Register
        using Addr = Register::Address<0xfffc003c,0x00000000,0,unsigned>;
        ///Key Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyw{}; 
        namespace KeywValC{
        }
    }
    namespace AesIdatar0{    ///<Input Data Register
        using Addr = Register::Address<0xfffc0040,0x00000000,0,unsigned>;
        ///Input Data Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
        namespace IdataValC{
        }
    }
    namespace AesIdatar1{    ///<Input Data Register
        using Addr = Register::Address<0xfffc0044,0x00000000,0,unsigned>;
        ///Input Data Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
        namespace IdataValC{
        }
    }
    namespace AesIdatar2{    ///<Input Data Register
        using Addr = Register::Address<0xfffc0048,0x00000000,0,unsigned>;
        ///Input Data Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
        namespace IdataValC{
        }
    }
    namespace AesIdatar3{    ///<Input Data Register
        using Addr = Register::Address<0xfffc004c,0x00000000,0,unsigned>;
        ///Input Data Word
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> idata{}; 
        namespace IdataValC{
        }
    }
    namespace AesOdatar0{    ///<Output Data Register
        using Addr = Register::Address<0xfffc0050,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
        namespace OdataValC{
        }
    }
    namespace AesOdatar1{    ///<Output Data Register
        using Addr = Register::Address<0xfffc0054,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
        namespace OdataValC{
        }
    }
    namespace AesOdatar2{    ///<Output Data Register
        using Addr = Register::Address<0xfffc0058,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
        namespace OdataValC{
        }
    }
    namespace AesOdatar3{    ///<Output Data Register
        using Addr = Register::Address<0xfffc005c,0x00000000,0,unsigned>;
        ///Output Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> odata{}; 
        namespace OdataValC{
        }
    }
    namespace AesIvr0{    ///<Initialization Vector Register
        using Addr = Register::Address<0xfffc0060,0x00000000,0,unsigned>;
        ///Initialization Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> iv{}; 
        namespace IvValC{
        }
    }
    namespace AesIvr1{    ///<Initialization Vector Register
        using Addr = Register::Address<0xfffc0064,0x00000000,0,unsigned>;
        ///Initialization Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> iv{}; 
        namespace IvValC{
        }
    }
    namespace AesIvr2{    ///<Initialization Vector Register
        using Addr = Register::Address<0xfffc0068,0x00000000,0,unsigned>;
        ///Initialization Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> iv{}; 
        namespace IvValC{
        }
    }
    namespace AesIvr3{    ///<Initialization Vector Register
        using Addr = Register::Address<0xfffc006c,0x00000000,0,unsigned>;
        ///Initialization Vector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> iv{}; 
        namespace IvValC{
        }
    }
}
