#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Emif0Control{    ///<Module Control
        using Addr = Register::Address<0x40026000,0xffffffec,0x00000000,unsigned>;
        ///Interface 0 Enable. 
        enum class If0enVal {
            disabled=0x00000000,     ///<Disable interface 0.
            enabled=0x00000001,     ///<Enable interface 0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,If0enVal> if0en{}; 
        namespace If0enValC{
            constexpr Register::FieldValue<decltype(if0en)::Type,If0enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(if0en)::Type,If0enVal::enabled> enabled{};
        }
        ///Interface 1 Enable. 
        enum class If1enVal {
            disabled=0x00000000,     ///<Disable interface 1.
            enabled=0x00000001,     ///<Enable interface 1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,If1enVal> if1en{}; 
        namespace If1enValC{
            constexpr Register::FieldValue<decltype(if1en)::Type,If1enVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(if1en)::Type,If1enVal::enabled> enabled{};
        }
        ///OFF Output State Enable. 
        enum class OffstenVal {
            disabled=0x00000000,     ///<EMIF will not enter the off state after 4 idle cycles.
            enabled=0x00000001,     ///<EMIF will enter the off state after 4 idle cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OffstenVal> offsten{}; 
        namespace OffstenValC{
            constexpr Register::FieldValue<decltype(offsten)::Type,OffstenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(offsten)::Type,OffstenVal::enabled> enabled{};
        }
    }
    namespace Emif0Status{    ///<Module Status
        using Addr = Register::Address<0x40026020,0xfffffffc,0x00000000,unsigned>;
        ///EMIF OFF Status. 
        enum class OffstsVal {
            on=0x00000000,     ///<The EMIF bus is active.
            off=0x00000001,     ///<The EMIF is in the off bus state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,OffstsVal> offsts{}; 
        namespace OffstsValC{
            constexpr Register::FieldValue<decltype(offsts)::Type,OffstsVal::on> on{};
            constexpr Register::FieldValue<decltype(offsts)::Type,OffstsVal::off> off{};
        }
        ///EMIF IDLE Status. 
        enum class IdlestsVal {
            notIdle=0x00000000,     ///<The EMIF has not been idle for four cycles.
            idle=0x00000001,     ///<The EMIF has been idle for four four cycles.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,IdlestsVal> idlests{}; 
        namespace IdlestsValC{
            constexpr Register::FieldValue<decltype(idlests)::Type,IdlestsVal::notIdle> notIdle{};
            constexpr Register::FieldValue<decltype(idlests)::Type,IdlestsVal::idle> idle{};
        }
    }
    namespace Emif0Config0{    ///<Interface Configuration
        using Addr = Register::Address<0x40026080,0xfffeeee2,0x00000000,unsigned>;
        ///Interface Bus Data Width. 
        enum class BuswidthVal {
            v8bit=0x00000000,     ///<The data bus is 8-bits wide.
            v16bit=0x00000001,     ///<The data bus is 16-bits wide.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BuswidthVal> buswidth{}; 
        namespace BuswidthValC{
            constexpr Register::FieldValue<decltype(buswidth)::Type,BuswidthVal::v8bit> v8bit{};
            constexpr Register::FieldValue<decltype(buswidth)::Type,BuswidthVal::v16bit> v16bit{};
        }
        ///Interface Mux Mode. 
        enum class MuxmdVal {
            nonmuxed=0x00000000,     ///<The interface operates in non-multiplexed mode.
            muxed=0x00000001,     ///<The interface operates in multiplexed mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,MuxmdVal> muxmd{}; 
        namespace MuxmdValC{
            constexpr Register::FieldValue<decltype(muxmd)::Type,MuxmdVal::nonmuxed> nonmuxed{};
            constexpr Register::FieldValue<decltype(muxmd)::Type,MuxmdVal::muxed> muxed{};
        }
        ///Interface Automatic Address Shift Enable. 
        enum class AsenVal {
            disabled=0x00000000,     ///<The address is not automatically shifted.
            enabled=0x00000001,     ///<The address is automatically shifted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AsenVal> asen{}; 
        namespace AsenValC{
            constexpr Register::FieldValue<decltype(asen)::Type,AsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(asen)::Type,AsenVal::enabled> enabled{};
        }
        ///Interface Read Only Enable. 
        enum class RoenVal {
            disabled=0x00000000,     ///<The interface supports reads and writes.
            enabled=0x00000001,     ///<The interface supports only reads.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RoenVal> roen{}; 
        namespace RoenValC{
            constexpr Register::FieldValue<decltype(roen)::Type,RoenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(roen)::Type,RoenVal::enabled> enabled{};
        }
        ///Write Data Hold State Inhibit. 
        enum class WdhinhVal {
            inactive=0x00000000,     ///<Enable the write data hold state.
            active=0x00000001,     ///<Inhibit the write data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WdhinhVal> wdhinh{}; 
        namespace WdhinhValC{
            constexpr Register::FieldValue<decltype(wdhinh)::Type,WdhinhVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(wdhinh)::Type,WdhinhVal::active> active{};
        }
        ///Output Enable Delay. 
        enum class DelayoeVal {
            disabled=0x00000000,     ///<The output enable signal (/OE) is not delayed.
            enabled=0x00000001,     ///<The output enable signal (/OE) is delayed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DelayoeVal> delayoe{}; 
        namespace DelayoeValC{
            constexpr Register::FieldValue<decltype(delayoe)::Type,DelayoeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(delayoe)::Type,DelayoeVal::enabled> enabled{};
        }
        ///Keep Last Read Enable. 
        enum class KlrenVal {
            disabled=0x00000000,     ///<The bus is driven to the idle state between active requests.
            enabled=0x00000001,     ///<The bus drives the last value read on the interface between active requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,KlrenVal> klren{}; 
        namespace KlrenValC{
            constexpr Register::FieldValue<decltype(klren)::Type,KlrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(klren)::Type,KlrenVal::enabled> enabled{};
        }
    }
    namespace Emif0Ifrt0{    ///<Interface Read Timing
        using Addr = Register::Address<0x40026090,0xffc0f000,0x00000000,unsigned>;
        ///Interface Read Address Setup Delay . 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> raset{}; 
        ///Interface Read Address Hold Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rahold{}; 
        ///Interface Read Data Hold Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rdhold{}; 
        ///Interface Read Data Wait Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> rdwait{}; 
    }
    namespace Emif0Ifwt0{    ///<Interface Write Timing
        using Addr = Register::Address<0x400260a0,0xffc0f000,0x00000000,unsigned>;
        ///Interface Write Address Setup Delay . 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waset{}; 
        ///Interface Write Address Hold Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> wahold{}; 
        ///Interface Write Data Hold Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> wdhold{}; 
        ///Interface Write Data Wait Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> wdwait{}; 
    }
    namespace Emif0Ifrcst0{    ///<Interface Read Control States
        using Addr = Register::Address<0x400260b0,0xffff0000,0x00000000,unsigned>;
        ///Chip Select Read Address Setup State. 
        enum class CsrasVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read address setup state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CsrasVal> csras{}; 
        namespace CsrasValC{
            constexpr Register::FieldValue<decltype(csras)::Type,CsrasVal::low> low{};
            constexpr Register::FieldValue<decltype(csras)::Type,CsrasVal::high> high{};
        }
        ///Chip Select Read Address Hold State. 
        enum class CsrahVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read address hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CsrahVal> csrah{}; 
        namespace CsrahValC{
            constexpr Register::FieldValue<decltype(csrah)::Type,CsrahVal::low> low{};
            constexpr Register::FieldValue<decltype(csrah)::Type,CsrahVal::high> high{};
        }
        ///Chip Select Read Data Wait State. 
        enum class CsrdwVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read data wait state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CsrdwVal> csrdw{}; 
        namespace CsrdwValC{
            constexpr Register::FieldValue<decltype(csrdw)::Type,CsrdwVal::low> low{};
            constexpr Register::FieldValue<decltype(csrdw)::Type,CsrdwVal::high> high{};
        }
        ///Chip Select Read Data Hold State. 
        enum class CsrdhVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read data hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CsrdhVal> csrdh{}; 
        namespace CsrdhValC{
            constexpr Register::FieldValue<decltype(csrdh)::Type,CsrdhVal::low> low{};
            constexpr Register::FieldValue<decltype(csrdh)::Type,CsrdhVal::high> high{};
        }
        ///Output Enable Read Address Setup State. 
        enum class OerasVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read address setup state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OerasVal> oeras{}; 
        namespace OerasValC{
            constexpr Register::FieldValue<decltype(oeras)::Type,OerasVal::low> low{};
            constexpr Register::FieldValue<decltype(oeras)::Type,OerasVal::high> high{};
        }
        ///Output Enable Read Address Hold State. 
        enum class OerahVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read address hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OerahVal> oerah{}; 
        namespace OerahValC{
            constexpr Register::FieldValue<decltype(oerah)::Type,OerahVal::low> low{};
            constexpr Register::FieldValue<decltype(oerah)::Type,OerahVal::high> high{};
        }
        ///Output Enable Read Data Wait State. 
        enum class OerdwVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read data wait state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,OerdwVal> oerdw{}; 
        namespace OerdwValC{
            constexpr Register::FieldValue<decltype(oerdw)::Type,OerdwVal::low> low{};
            constexpr Register::FieldValue<decltype(oerdw)::Type,OerdwVal::high> high{};
        }
        ///Output Enable Read Data Hold State. 
        enum class OerdhVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read data hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,OerdhVal> oerdh{}; 
        namespace OerdhValC{
            constexpr Register::FieldValue<decltype(oerdh)::Type,OerdhVal::low> low{};
            constexpr Register::FieldValue<decltype(oerdh)::Type,OerdhVal::high> high{};
        }
        ///Write Signal Read Address Setup State. 
        enum class WrrasVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read address setup state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WrrasVal> wrras{}; 
        namespace WrrasValC{
            constexpr Register::FieldValue<decltype(wrras)::Type,WrrasVal::low> low{};
            constexpr Register::FieldValue<decltype(wrras)::Type,WrrasVal::high> high{};
        }
        ///Write Signal Read Address Hold State. 
        enum class WrrahVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read address hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,WrrahVal> wrrah{}; 
        namespace WrrahValC{
            constexpr Register::FieldValue<decltype(wrrah)::Type,WrrahVal::low> low{};
            constexpr Register::FieldValue<decltype(wrrah)::Type,WrrahVal::high> high{};
        }
        ///Write Signal Read Data Wait State. 
        enum class WrrdwVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read data wait state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,WrrdwVal> wrrdw{}; 
        namespace WrrdwValC{
            constexpr Register::FieldValue<decltype(wrrdw)::Type,WrrdwVal::low> low{};
            constexpr Register::FieldValue<decltype(wrrdw)::Type,WrrdwVal::high> high{};
        }
        ///Write Signal Read Data Hold State. 
        enum class WrrdhVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read data hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,WrrdhVal> wrrdh{}; 
        namespace WrrdhValC{
            constexpr Register::FieldValue<decltype(wrrdh)::Type,WrrdhVal::low> low{};
            constexpr Register::FieldValue<decltype(wrrdh)::Type,WrrdhVal::high> high{};
        }
        ///Address Latch Enable Read Address Setup State. 
        enum class AlerasVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read address setup state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,AlerasVal> aleras{}; 
        namespace AlerasValC{
            constexpr Register::FieldValue<decltype(aleras)::Type,AlerasVal::low> low{};
            constexpr Register::FieldValue<decltype(aleras)::Type,AlerasVal::high> high{};
        }
        ///Address Latch Enable Read Address Hold State. 
        enum class AlerahVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read address hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,AlerahVal> alerah{}; 
        namespace AlerahValC{
            constexpr Register::FieldValue<decltype(alerah)::Type,AlerahVal::low> low{};
            constexpr Register::FieldValue<decltype(alerah)::Type,AlerahVal::high> high{};
        }
        ///Address Latch Enable Read Data Wait State. 
        enum class AlerdwVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read data wait state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,AlerdwVal> alerdw{}; 
        namespace AlerdwValC{
            constexpr Register::FieldValue<decltype(alerdw)::Type,AlerdwVal::low> low{};
            constexpr Register::FieldValue<decltype(alerdw)::Type,AlerdwVal::high> high{};
        }
        ///Address Latch Enable Read Data Hold State. 
        enum class AlerdhVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read data hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AlerdhVal> alerdh{}; 
        namespace AlerdhValC{
            constexpr Register::FieldValue<decltype(alerdh)::Type,AlerdhVal::low> low{};
            constexpr Register::FieldValue<decltype(alerdh)::Type,AlerdhVal::high> high{};
        }
    }
    namespace Emif0Ifwcst0{    ///<Interface Write Control States
        using Addr = Register::Address<0x400260c0,0xffff0000,0x00000000,unsigned>;
        ///Chip Select Write Address Setup State. 
        enum class CswasVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write address setup state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CswasVal> cswas{}; 
        namespace CswasValC{
            constexpr Register::FieldValue<decltype(cswas)::Type,CswasVal::low> low{};
            constexpr Register::FieldValue<decltype(cswas)::Type,CswasVal::high> high{};
        }
        ///Chip Select Write Address Hold State. 
        enum class CswahVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write address hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CswahVal> cswah{}; 
        namespace CswahValC{
            constexpr Register::FieldValue<decltype(cswah)::Type,CswahVal::low> low{};
            constexpr Register::FieldValue<decltype(cswah)::Type,CswahVal::high> high{};
        }
        ///Chip Select Write Data Wait State. 
        enum class CswdwVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write data wait state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CswdwVal> cswdw{}; 
        namespace CswdwValC{
            constexpr Register::FieldValue<decltype(cswdw)::Type,CswdwVal::low> low{};
            constexpr Register::FieldValue<decltype(cswdw)::Type,CswdwVal::high> high{};
        }
        ///Chip Select Write Data Hold State. 
        enum class CswdhVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write data hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CswdhVal> cswdh{}; 
        namespace CswdhValC{
            constexpr Register::FieldValue<decltype(cswdh)::Type,CswdhVal::low> low{};
            constexpr Register::FieldValue<decltype(cswdh)::Type,CswdhVal::high> high{};
        }
        ///Output Enable Write Address Setup State. 
        enum class OewasVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write address setup state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OewasVal> oewas{}; 
        namespace OewasValC{
            constexpr Register::FieldValue<decltype(oewas)::Type,OewasVal::low> low{};
            constexpr Register::FieldValue<decltype(oewas)::Type,OewasVal::high> high{};
        }
        ///Output Enable Write Address Hold State. 
        enum class OewahVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write address hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OewahVal> oewah{}; 
        namespace OewahValC{
            constexpr Register::FieldValue<decltype(oewah)::Type,OewahVal::low> low{};
            constexpr Register::FieldValue<decltype(oewah)::Type,OewahVal::high> high{};
        }
        ///Output Enable Write Data Wait State. 
        enum class OewdwVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write data wait state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,OewdwVal> oewdw{}; 
        namespace OewdwValC{
            constexpr Register::FieldValue<decltype(oewdw)::Type,OewdwVal::low> low{};
            constexpr Register::FieldValue<decltype(oewdw)::Type,OewdwVal::high> high{};
        }
        ///Output Enable Write Data Hold State. 
        enum class OewdhVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write data hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,OewdhVal> oewdh{}; 
        namespace OewdhValC{
            constexpr Register::FieldValue<decltype(oewdh)::Type,OewdhVal::low> low{};
            constexpr Register::FieldValue<decltype(oewdh)::Type,OewdhVal::high> high{};
        }
        ///Write Signal Write Address Setup State. 
        enum class WrwasVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write address setup state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WrwasVal> wrwas{}; 
        namespace WrwasValC{
            constexpr Register::FieldValue<decltype(wrwas)::Type,WrwasVal::low> low{};
            constexpr Register::FieldValue<decltype(wrwas)::Type,WrwasVal::high> high{};
        }
        ///Write Signal Write Address Hold State. 
        enum class WrwahVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write address hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,WrwahVal> wrwah{}; 
        namespace WrwahValC{
            constexpr Register::FieldValue<decltype(wrwah)::Type,WrwahVal::low> low{};
            constexpr Register::FieldValue<decltype(wrwah)::Type,WrwahVal::high> high{};
        }
        ///Write Signal Write Data Wait State. 
        enum class WrwdwVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write data wait state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,WrwdwVal> wrwdw{}; 
        namespace WrwdwValC{
            constexpr Register::FieldValue<decltype(wrwdw)::Type,WrwdwVal::low> low{};
            constexpr Register::FieldValue<decltype(wrwdw)::Type,WrwdwVal::high> high{};
        }
        ///Write Signal Write Data Hold State. 
        enum class WrwdhVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write data hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,WrwdhVal> wrwdh{}; 
        namespace WrwdhValC{
            constexpr Register::FieldValue<decltype(wrwdh)::Type,WrwdhVal::low> low{};
            constexpr Register::FieldValue<decltype(wrwdh)::Type,WrwdhVal::high> high{};
        }
        ///Address Latch Enable Write Address Setup State. 
        enum class AlewasVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write address setup state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,AlewasVal> alewas{}; 
        namespace AlewasValC{
            constexpr Register::FieldValue<decltype(alewas)::Type,AlewasVal::low> low{};
            constexpr Register::FieldValue<decltype(alewas)::Type,AlewasVal::high> high{};
        }
        ///Address Latch Enable Write Address Hold State. 
        enum class AlewahVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write address hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,AlewahVal> alewah{}; 
        namespace AlewahValC{
            constexpr Register::FieldValue<decltype(alewah)::Type,AlewahVal::low> low{};
            constexpr Register::FieldValue<decltype(alewah)::Type,AlewahVal::high> high{};
        }
        ///Address Latch Enable Write Data Wait State. 
        enum class AlewdwVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write data wait state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,AlewdwVal> alewdw{}; 
        namespace AlewdwValC{
            constexpr Register::FieldValue<decltype(alewdw)::Type,AlewdwVal::low> low{};
            constexpr Register::FieldValue<decltype(alewdw)::Type,AlewdwVal::high> high{};
        }
        ///Address Latch Enable Write Data Hold State. 
        enum class AlewdhVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write data hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AlewdhVal> alewdh{}; 
        namespace AlewdhValC{
            constexpr Register::FieldValue<decltype(alewdh)::Type,AlewdhVal::low> low{};
            constexpr Register::FieldValue<decltype(alewdh)::Type,AlewdhVal::high> high{};
        }
    }
    namespace Emif0Config1{    ///<Interface Configuration
        using Addr = Register::Address<0x40026100,0xfffeeee2,0x00000000,unsigned>;
        ///Interface Bus Data Width. 
        enum class BuswidthVal {
            v8bit=0x00000000,     ///<The data bus is 8-bits wide.
            v16bit=0x00000001,     ///<The data bus is 16-bits wide.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,BuswidthVal> buswidth{}; 
        namespace BuswidthValC{
            constexpr Register::FieldValue<decltype(buswidth)::Type,BuswidthVal::v8bit> v8bit{};
            constexpr Register::FieldValue<decltype(buswidth)::Type,BuswidthVal::v16bit> v16bit{};
        }
        ///Interface Mux Mode. 
        enum class MuxmdVal {
            nonmuxed=0x00000000,     ///<The interface operates in non-multiplexed mode.
            muxed=0x00000001,     ///<The interface operates in multiplexed mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,MuxmdVal> muxmd{}; 
        namespace MuxmdValC{
            constexpr Register::FieldValue<decltype(muxmd)::Type,MuxmdVal::nonmuxed> nonmuxed{};
            constexpr Register::FieldValue<decltype(muxmd)::Type,MuxmdVal::muxed> muxed{};
        }
        ///Interface Automatic Address Shift Enable. 
        enum class AsenVal {
            disabled=0x00000000,     ///<The address is not automatically shifted.
            enabled=0x00000001,     ///<The address is automatically shifted.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AsenVal> asen{}; 
        namespace AsenValC{
            constexpr Register::FieldValue<decltype(asen)::Type,AsenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(asen)::Type,AsenVal::enabled> enabled{};
        }
        ///Interface Read Only Enable. 
        enum class RoenVal {
            disabled=0x00000000,     ///<The interface supports reads and writes.
            enabled=0x00000001,     ///<The interface supports only reads.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,RoenVal> roen{}; 
        namespace RoenValC{
            constexpr Register::FieldValue<decltype(roen)::Type,RoenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(roen)::Type,RoenVal::enabled> enabled{};
        }
        ///Write Data Hold State Inhibit. 
        enum class WdhinhVal {
            inactive=0x00000000,     ///<Enable the write data hold state.
            active=0x00000001,     ///<Inhibit the write data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WdhinhVal> wdhinh{}; 
        namespace WdhinhValC{
            constexpr Register::FieldValue<decltype(wdhinh)::Type,WdhinhVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(wdhinh)::Type,WdhinhVal::active> active{};
        }
        ///Output Enable Delay. 
        enum class DelayoeVal {
            disabled=0x00000000,     ///<The output enable signal (/OE) is not delayed.
            enabled=0x00000001,     ///<The output enable signal (/OE) is delayed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,DelayoeVal> delayoe{}; 
        namespace DelayoeValC{
            constexpr Register::FieldValue<decltype(delayoe)::Type,DelayoeVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(delayoe)::Type,DelayoeVal::enabled> enabled{};
        }
        ///Keep Last Read Enable. 
        enum class KlrenVal {
            disabled=0x00000000,     ///<The bus is driven to the idle state between active requests.
            enabled=0x00000001,     ///<The bus drives the last value read on the interface between active requests.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,KlrenVal> klren{}; 
        namespace KlrenValC{
            constexpr Register::FieldValue<decltype(klren)::Type,KlrenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(klren)::Type,KlrenVal::enabled> enabled{};
        }
    }
    namespace Emif0Ifrt1{    ///<Interface Read Timing
        using Addr = Register::Address<0x40026110,0xffc0f000,0x00000000,unsigned>;
        ///Interface Read Address Setup Delay . 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> raset{}; 
        ///Interface Read Address Hold Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rahold{}; 
        ///Interface Read Data Hold Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rdhold{}; 
        ///Interface Read Data Wait Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> rdwait{}; 
    }
    namespace Emif0Ifwt1{    ///<Interface Write Timing
        using Addr = Register::Address<0x40026120,0xffc0f000,0x00000000,unsigned>;
        ///Interface Write Address Setup Delay . 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waset{}; 
        ///Interface Write Address Hold Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> wahold{}; 
        ///Interface Write Data Hold Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> wdhold{}; 
        ///Interface Write Data Wait Delay. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> wdwait{}; 
    }
    namespace Emif0Ifrcst1{    ///<Interface Read Control States
        using Addr = Register::Address<0x40026130,0xffff0000,0x00000000,unsigned>;
        ///Chip Select Read Address Setup State. 
        enum class CsrasVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read address setup state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CsrasVal> csras{}; 
        namespace CsrasValC{
            constexpr Register::FieldValue<decltype(csras)::Type,CsrasVal::low> low{};
            constexpr Register::FieldValue<decltype(csras)::Type,CsrasVal::high> high{};
        }
        ///Chip Select Read Address Hold State. 
        enum class CsrahVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read address hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CsrahVal> csrah{}; 
        namespace CsrahValC{
            constexpr Register::FieldValue<decltype(csrah)::Type,CsrahVal::low> low{};
            constexpr Register::FieldValue<decltype(csrah)::Type,CsrahVal::high> high{};
        }
        ///Chip Select Read Data Wait State. 
        enum class CsrdwVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read data wait state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CsrdwVal> csrdw{}; 
        namespace CsrdwValC{
            constexpr Register::FieldValue<decltype(csrdw)::Type,CsrdwVal::low> low{};
            constexpr Register::FieldValue<decltype(csrdw)::Type,CsrdwVal::high> high{};
        }
        ///Chip Select Read Data Hold State. 
        enum class CsrdhVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read data hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CsrdhVal> csrdh{}; 
        namespace CsrdhValC{
            constexpr Register::FieldValue<decltype(csrdh)::Type,CsrdhVal::low> low{};
            constexpr Register::FieldValue<decltype(csrdh)::Type,CsrdhVal::high> high{};
        }
        ///Output Enable Read Address Setup State. 
        enum class OerasVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read address setup state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OerasVal> oeras{}; 
        namespace OerasValC{
            constexpr Register::FieldValue<decltype(oeras)::Type,OerasVal::low> low{};
            constexpr Register::FieldValue<decltype(oeras)::Type,OerasVal::high> high{};
        }
        ///Output Enable Read Address Hold State. 
        enum class OerahVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read address hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OerahVal> oerah{}; 
        namespace OerahValC{
            constexpr Register::FieldValue<decltype(oerah)::Type,OerahVal::low> low{};
            constexpr Register::FieldValue<decltype(oerah)::Type,OerahVal::high> high{};
        }
        ///Output Enable Read Data Wait State. 
        enum class OerdwVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read data wait state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,OerdwVal> oerdw{}; 
        namespace OerdwValC{
            constexpr Register::FieldValue<decltype(oerdw)::Type,OerdwVal::low> low{};
            constexpr Register::FieldValue<decltype(oerdw)::Type,OerdwVal::high> high{};
        }
        ///Output Enable Read Data Hold State. 
        enum class OerdhVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read data hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,OerdhVal> oerdh{}; 
        namespace OerdhValC{
            constexpr Register::FieldValue<decltype(oerdh)::Type,OerdhVal::low> low{};
            constexpr Register::FieldValue<decltype(oerdh)::Type,OerdhVal::high> high{};
        }
        ///Write Signal Read Address Setup State. 
        enum class WrrasVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read address setup state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WrrasVal> wrras{}; 
        namespace WrrasValC{
            constexpr Register::FieldValue<decltype(wrras)::Type,WrrasVal::low> low{};
            constexpr Register::FieldValue<decltype(wrras)::Type,WrrasVal::high> high{};
        }
        ///Write Signal Read Address Hold State. 
        enum class WrrahVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read address hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,WrrahVal> wrrah{}; 
        namespace WrrahValC{
            constexpr Register::FieldValue<decltype(wrrah)::Type,WrrahVal::low> low{};
            constexpr Register::FieldValue<decltype(wrrah)::Type,WrrahVal::high> high{};
        }
        ///Write Signal Read Data Wait State. 
        enum class WrrdwVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read data wait state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,WrrdwVal> wrrdw{}; 
        namespace WrrdwValC{
            constexpr Register::FieldValue<decltype(wrrdw)::Type,WrrdwVal::low> low{};
            constexpr Register::FieldValue<decltype(wrrdw)::Type,WrrdwVal::high> high{};
        }
        ///Write Signal Read Data Hold State. 
        enum class WrrdhVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read data hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,WrrdhVal> wrrdh{}; 
        namespace WrrdhValC{
            constexpr Register::FieldValue<decltype(wrrdh)::Type,WrrdhVal::low> low{};
            constexpr Register::FieldValue<decltype(wrrdh)::Type,WrrdhVal::high> high{};
        }
        ///Address Latch Enable Read Address Setup State. 
        enum class AlerasVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read address setup state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,AlerasVal> aleras{}; 
        namespace AlerasValC{
            constexpr Register::FieldValue<decltype(aleras)::Type,AlerasVal::low> low{};
            constexpr Register::FieldValue<decltype(aleras)::Type,AlerasVal::high> high{};
        }
        ///Address Latch Enable Read Address Hold State. 
        enum class AlerahVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read address hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,AlerahVal> alerah{}; 
        namespace AlerahValC{
            constexpr Register::FieldValue<decltype(alerah)::Type,AlerahVal::low> low{};
            constexpr Register::FieldValue<decltype(alerah)::Type,AlerahVal::high> high{};
        }
        ///Address Latch Enable Read Data Wait State. 
        enum class AlerdwVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read data wait state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,AlerdwVal> alerdw{}; 
        namespace AlerdwValC{
            constexpr Register::FieldValue<decltype(alerdw)::Type,AlerdwVal::low> low{};
            constexpr Register::FieldValue<decltype(alerdw)::Type,AlerdwVal::high> high{};
        }
        ///Address Latch Enable Read Data Hold State. 
        enum class AlerdhVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read data hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AlerdhVal> alerdh{}; 
        namespace AlerdhValC{
            constexpr Register::FieldValue<decltype(alerdh)::Type,AlerdhVal::low> low{};
            constexpr Register::FieldValue<decltype(alerdh)::Type,AlerdhVal::high> high{};
        }
    }
    namespace Emif0Ifwcst1{    ///<Interface Write Control States
        using Addr = Register::Address<0x40026140,0xffff0000,0x00000000,unsigned>;
        ///Chip Select Write Address Setup State. 
        enum class CswasVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write address setup state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CswasVal> cswas{}; 
        namespace CswasValC{
            constexpr Register::FieldValue<decltype(cswas)::Type,CswasVal::low> low{};
            constexpr Register::FieldValue<decltype(cswas)::Type,CswasVal::high> high{};
        }
        ///Chip Select Write Address Hold State. 
        enum class CswahVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write address hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CswahVal> cswah{}; 
        namespace CswahValC{
            constexpr Register::FieldValue<decltype(cswah)::Type,CswahVal::low> low{};
            constexpr Register::FieldValue<decltype(cswah)::Type,CswahVal::high> high{};
        }
        ///Chip Select Write Data Wait State. 
        enum class CswdwVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write data wait state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CswdwVal> cswdw{}; 
        namespace CswdwValC{
            constexpr Register::FieldValue<decltype(cswdw)::Type,CswdwVal::low> low{};
            constexpr Register::FieldValue<decltype(cswdw)::Type,CswdwVal::high> high{};
        }
        ///Chip Select Write Data Hold State. 
        enum class CswdhVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write data hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,CswdhVal> cswdh{}; 
        namespace CswdhValC{
            constexpr Register::FieldValue<decltype(cswdh)::Type,CswdhVal::low> low{};
            constexpr Register::FieldValue<decltype(cswdh)::Type,CswdhVal::high> high{};
        }
        ///Output Enable Write Address Setup State. 
        enum class OewasVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write address setup state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OewasVal> oewas{}; 
        namespace OewasValC{
            constexpr Register::FieldValue<decltype(oewas)::Type,OewasVal::low> low{};
            constexpr Register::FieldValue<decltype(oewas)::Type,OewasVal::high> high{};
        }
        ///Output Enable Write Address Hold State. 
        enum class OewahVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write address hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OewahVal> oewah{}; 
        namespace OewahValC{
            constexpr Register::FieldValue<decltype(oewah)::Type,OewahVal::low> low{};
            constexpr Register::FieldValue<decltype(oewah)::Type,OewahVal::high> high{};
        }
        ///Output Enable Write Data Wait State. 
        enum class OewdwVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write data wait state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,OewdwVal> oewdw{}; 
        namespace OewdwValC{
            constexpr Register::FieldValue<decltype(oewdw)::Type,OewdwVal::low> low{};
            constexpr Register::FieldValue<decltype(oewdw)::Type,OewdwVal::high> high{};
        }
        ///Output Enable Write Data Hold State. 
        enum class OewdhVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write data hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,OewdhVal> oewdh{}; 
        namespace OewdhValC{
            constexpr Register::FieldValue<decltype(oewdh)::Type,OewdhVal::low> low{};
            constexpr Register::FieldValue<decltype(oewdh)::Type,OewdhVal::high> high{};
        }
        ///Write Signal Write Address Setup State. 
        enum class WrwasVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write address setup state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,WrwasVal> wrwas{}; 
        namespace WrwasValC{
            constexpr Register::FieldValue<decltype(wrwas)::Type,WrwasVal::low> low{};
            constexpr Register::FieldValue<decltype(wrwas)::Type,WrwasVal::high> high{};
        }
        ///Write Signal Write Address Hold State. 
        enum class WrwahVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write address hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,WrwahVal> wrwah{}; 
        namespace WrwahValC{
            constexpr Register::FieldValue<decltype(wrwah)::Type,WrwahVal::low> low{};
            constexpr Register::FieldValue<decltype(wrwah)::Type,WrwahVal::high> high{};
        }
        ///Write Signal Write Data Wait State. 
        enum class WrwdwVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write data wait state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,WrwdwVal> wrwdw{}; 
        namespace WrwdwValC{
            constexpr Register::FieldValue<decltype(wrwdw)::Type,WrwdwVal::low> low{};
            constexpr Register::FieldValue<decltype(wrwdw)::Type,WrwdwVal::high> high{};
        }
        ///Write Signal Write Data Hold State. 
        enum class WrwdhVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write data hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,WrwdhVal> wrwdh{}; 
        namespace WrwdhValC{
            constexpr Register::FieldValue<decltype(wrwdh)::Type,WrwdhVal::low> low{};
            constexpr Register::FieldValue<decltype(wrwdh)::Type,WrwdhVal::high> high{};
        }
        ///Address Latch Enable Write Address Setup State. 
        enum class AlewasVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write address setup state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write address setup state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,AlewasVal> alewas{}; 
        namespace AlewasValC{
            constexpr Register::FieldValue<decltype(alewas)::Type,AlewasVal::low> low{};
            constexpr Register::FieldValue<decltype(alewas)::Type,AlewasVal::high> high{};
        }
        ///Address Latch Enable Write Address Hold State. 
        enum class AlewahVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write address hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write address hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,AlewahVal> alewah{}; 
        namespace AlewahValC{
            constexpr Register::FieldValue<decltype(alewah)::Type,AlewahVal::low> low{};
            constexpr Register::FieldValue<decltype(alewah)::Type,AlewahVal::high> high{};
        }
        ///Address Latch Enable Write Data Wait State. 
        enum class AlewdwVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write data wait state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write data wait state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,AlewdwVal> alewdw{}; 
        namespace AlewdwValC{
            constexpr Register::FieldValue<decltype(alewdw)::Type,AlewdwVal::low> low{};
            constexpr Register::FieldValue<decltype(alewdw)::Type,AlewdwVal::high> high{};
        }
        ///Address Latch Enable Write Data Hold State. 
        enum class AlewdhVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write data hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write data hold state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AlewdhVal> alewdh{}; 
        namespace AlewdhValC{
            constexpr Register::FieldValue<decltype(alewdh)::Type,AlewdhVal::low> low{};
            constexpr Register::FieldValue<decltype(alewdh)::Type,AlewdhVal::high> high{};
        }
    }
}
