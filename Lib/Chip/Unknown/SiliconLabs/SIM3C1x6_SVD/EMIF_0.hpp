#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x40026000,0xffffffec,0,unsigned>;
        ///Interface 0 Enable. 
        enum class if0enVal {
            disabled=0x00000000,     ///<Disable interface 0.
            enabled=0x00000001,     ///<Enable interface 0.
        };
        namespace if0enValC{
            constexpr MPL::Value<if0enVal,if0enVal::disabled> disabled{};
            constexpr MPL::Value<if0enVal,if0enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,if0enVal> if0en{}; 
        ///Interface 1 Enable. 
        enum class if1enVal {
            disabled=0x00000000,     ///<Disable interface 1.
            enabled=0x00000001,     ///<Enable interface 1.
        };
        namespace if1enValC{
            constexpr MPL::Value<if1enVal,if1enVal::disabled> disabled{};
            constexpr MPL::Value<if1enVal,if1enVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,if1enVal> if1en{}; 
        ///OFF Output State Enable. 
        enum class offstenVal {
            disabled=0x00000000,     ///<EMIF will not enter the off state after 4 idle cycles.
            enabled=0x00000001,     ///<EMIF will enter the off state after 4 idle cycles.
        };
        namespace offstenValC{
            constexpr MPL::Value<offstenVal,offstenVal::disabled> disabled{};
            constexpr MPL::Value<offstenVal,offstenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,offstenVal> offsten{}; 
    }
    namespace Nonestatus{    ///<Module Status
        using Addr = Register::Address<0x40026020,0xfffffffc,0,unsigned>;
        ///EMIF OFF Status. 
        enum class offstsVal {
            on=0x00000000,     ///<The EMIF bus is active.
            off=0x00000001,     ///<The EMIF is in the off bus state.
        };
        namespace offstsValC{
            constexpr MPL::Value<offstsVal,offstsVal::on> on{};
            constexpr MPL::Value<offstsVal,offstsVal::off> off{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,offstsVal> offsts{}; 
        ///EMIF IDLE Status. 
        enum class idlestsVal {
            notIdle=0x00000000,     ///<The EMIF has not been idle for four cycles.
            idle=0x00000001,     ///<The EMIF has been idle for four four cycles.
        };
        namespace idlestsValC{
            constexpr MPL::Value<idlestsVal,idlestsVal::notIdle> notIdle{};
            constexpr MPL::Value<idlestsVal,idlestsVal::idle> idle{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,idlestsVal> idlests{}; 
    }
    namespace Noneconfig0{    ///<Interface Configuration
        using Addr = Register::Address<0x40026080,0xfffeeee2,0,unsigned>;
        ///Interface Bus Data Width. 
        enum class buswidthVal {
            v8bit=0x00000000,     ///<The data bus is 8-bits wide.
            v16bit=0x00000001,     ///<The data bus is 16-bits wide.
        };
        namespace buswidthValC{
            constexpr MPL::Value<buswidthVal,buswidthVal::v8bit> v8bit{};
            constexpr MPL::Value<buswidthVal,buswidthVal::v16bit> v16bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,buswidthVal> buswidth{}; 
        ///Interface Mux Mode. 
        enum class muxmdVal {
            nonmuxed=0x00000000,     ///<The interface operates in non-multiplexed mode.
            muxed=0x00000001,     ///<The interface operates in multiplexed mode.
        };
        namespace muxmdValC{
            constexpr MPL::Value<muxmdVal,muxmdVal::nonmuxed> nonmuxed{};
            constexpr MPL::Value<muxmdVal,muxmdVal::muxed> muxed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,muxmdVal> muxmd{}; 
        ///Interface Automatic Address Shift Enable. 
        enum class asenVal {
            disabled=0x00000000,     ///<The address is not automatically shifted.
            enabled=0x00000001,     ///<The address is automatically shifted.
        };
        namespace asenValC{
            constexpr MPL::Value<asenVal,asenVal::disabled> disabled{};
            constexpr MPL::Value<asenVal,asenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,asenVal> asen{}; 
        ///Interface Read Only Enable. 
        enum class roenVal {
            disabled=0x00000000,     ///<The interface supports reads and writes.
            enabled=0x00000001,     ///<The interface supports only reads.
        };
        namespace roenValC{
            constexpr MPL::Value<roenVal,roenVal::disabled> disabled{};
            constexpr MPL::Value<roenVal,roenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,roenVal> roen{}; 
        ///Write Data Hold State Inhibit. 
        enum class wdhinhVal {
            inactive=0x00000000,     ///<Enable the write data hold state.
            active=0x00000001,     ///<Inhibit the write data hold state.
        };
        namespace wdhinhValC{
            constexpr MPL::Value<wdhinhVal,wdhinhVal::inactive> inactive{};
            constexpr MPL::Value<wdhinhVal,wdhinhVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wdhinhVal> wdhinh{}; 
        ///Output Enable Delay. 
        enum class delayoeVal {
            disabled=0x00000000,     ///<The output enable signal (/OE) is not delayed.
            enabled=0x00000001,     ///<The output enable signal (/OE) is delayed.
        };
        namespace delayoeValC{
            constexpr MPL::Value<delayoeVal,delayoeVal::disabled> disabled{};
            constexpr MPL::Value<delayoeVal,delayoeVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,delayoeVal> delayoe{}; 
        ///Keep Last Read Enable. 
        enum class klrenVal {
            disabled=0x00000000,     ///<The bus is driven to the idle state between active requests.
            enabled=0x00000001,     ///<The bus drives the last value read on the interface between active requests.
        };
        namespace klrenValC{
            constexpr MPL::Value<klrenVal,klrenVal::disabled> disabled{};
            constexpr MPL::Value<klrenVal,klrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,klrenVal> klren{}; 
    }
    namespace Noneifrt0{    ///<Interface Read Timing
        using Addr = Register::Address<0x40026090,0xffc0f000,0,unsigned>;
        ///Interface Read Address Setup Delay . 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> raset{}; 
        ///Interface Read Address Hold Delay. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rahold{}; 
        ///Interface Read Data Hold Delay. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rdhold{}; 
        ///Interface Read Data Wait Delay. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> rdwait{}; 
    }
    namespace Noneifwt0{    ///<Interface Write Timing
        using Addr = Register::Address<0x400260a0,0xffc0f000,0,unsigned>;
        ///Interface Write Address Setup Delay . 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waset{}; 
        ///Interface Write Address Hold Delay. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> wahold{}; 
        ///Interface Write Data Hold Delay. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> wdhold{}; 
        ///Interface Write Data Wait Delay. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> wdwait{}; 
    }
    namespace Noneifrcst0{    ///<Interface Read Control States
        using Addr = Register::Address<0x400260b0,0xffff0000,0,unsigned>;
        ///Chip Select Read Address Setup State. 
        enum class csrasVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read address setup state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read address setup state.
        };
        namespace csrasValC{
            constexpr MPL::Value<csrasVal,csrasVal::low> low{};
            constexpr MPL::Value<csrasVal,csrasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,csrasVal> csras{}; 
        ///Chip Select Read Address Hold State. 
        enum class csrahVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read address hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read address hold state.
        };
        namespace csrahValC{
            constexpr MPL::Value<csrahVal,csrahVal::low> low{};
            constexpr MPL::Value<csrahVal,csrahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,csrahVal> csrah{}; 
        ///Chip Select Read Data Wait State. 
        enum class csrdwVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read data wait state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read data wait state.
        };
        namespace csrdwValC{
            constexpr MPL::Value<csrdwVal,csrdwVal::low> low{};
            constexpr MPL::Value<csrdwVal,csrdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,csrdwVal> csrdw{}; 
        ///Chip Select Read Data Hold State. 
        enum class csrdhVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read data hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read data hold state.
        };
        namespace csrdhValC{
            constexpr MPL::Value<csrdhVal,csrdhVal::low> low{};
            constexpr MPL::Value<csrdhVal,csrdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,csrdhVal> csrdh{}; 
        ///Output Enable Read Address Setup State. 
        enum class oerasVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read address setup state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read address setup state.
        };
        namespace oerasValC{
            constexpr MPL::Value<oerasVal,oerasVal::low> low{};
            constexpr MPL::Value<oerasVal,oerasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,oerasVal> oeras{}; 
        ///Output Enable Read Address Hold State. 
        enum class oerahVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read address hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read address hold state.
        };
        namespace oerahValC{
            constexpr MPL::Value<oerahVal,oerahVal::low> low{};
            constexpr MPL::Value<oerahVal,oerahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,oerahVal> oerah{}; 
        ///Output Enable Read Data Wait State. 
        enum class oerdwVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read data wait state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read data wait state.
        };
        namespace oerdwValC{
            constexpr MPL::Value<oerdwVal,oerdwVal::low> low{};
            constexpr MPL::Value<oerdwVal,oerdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,oerdwVal> oerdw{}; 
        ///Output Enable Read Data Hold State. 
        enum class oerdhVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read data hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read data hold state.
        };
        namespace oerdhValC{
            constexpr MPL::Value<oerdhVal,oerdhVal::low> low{};
            constexpr MPL::Value<oerdhVal,oerdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,oerdhVal> oerdh{}; 
        ///Write Signal Read Address Setup State. 
        enum class wrrasVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read address setup state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read address setup state.
        };
        namespace wrrasValC{
            constexpr MPL::Value<wrrasVal,wrrasVal::low> low{};
            constexpr MPL::Value<wrrasVal,wrrasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wrrasVal> wrras{}; 
        ///Write Signal Read Address Hold State. 
        enum class wrrahVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read address hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read address hold state.
        };
        namespace wrrahValC{
            constexpr MPL::Value<wrrahVal,wrrahVal::low> low{};
            constexpr MPL::Value<wrrahVal,wrrahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wrrahVal> wrrah{}; 
        ///Write Signal Read Data Wait State. 
        enum class wrrdwVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read data wait state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read data wait state.
        };
        namespace wrrdwValC{
            constexpr MPL::Value<wrrdwVal,wrrdwVal::low> low{};
            constexpr MPL::Value<wrrdwVal,wrrdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,wrrdwVal> wrrdw{}; 
        ///Write Signal Read Data Hold State. 
        enum class wrrdhVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read data hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read data hold state.
        };
        namespace wrrdhValC{
            constexpr MPL::Value<wrrdhVal,wrrdhVal::low> low{};
            constexpr MPL::Value<wrrdhVal,wrrdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,wrrdhVal> wrrdh{}; 
        ///Address Latch Enable Read Address Setup State. 
        enum class alerasVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read address setup state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read address setup state.
        };
        namespace alerasValC{
            constexpr MPL::Value<alerasVal,alerasVal::low> low{};
            constexpr MPL::Value<alerasVal,alerasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,alerasVal> aleras{}; 
        ///Address Latch Enable Read Address Hold State. 
        enum class alerahVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read address hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read address hold state.
        };
        namespace alerahValC{
            constexpr MPL::Value<alerahVal,alerahVal::low> low{};
            constexpr MPL::Value<alerahVal,alerahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,alerahVal> alerah{}; 
        ///Address Latch Enable Read Data Wait State. 
        enum class alerdwVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read data wait state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read data wait state.
        };
        namespace alerdwValC{
            constexpr MPL::Value<alerdwVal,alerdwVal::low> low{};
            constexpr MPL::Value<alerdwVal,alerdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,alerdwVal> alerdw{}; 
        ///Address Latch Enable Read Data Hold State. 
        enum class alerdhVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read data hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read data hold state.
        };
        namespace alerdhValC{
            constexpr MPL::Value<alerdhVal,alerdhVal::low> low{};
            constexpr MPL::Value<alerdhVal,alerdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,alerdhVal> alerdh{}; 
    }
    namespace Noneifwcst0{    ///<Interface Write Control States
        using Addr = Register::Address<0x400260c0,0xffff0000,0,unsigned>;
        ///Chip Select Write Address Setup State. 
        enum class cswasVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write address setup state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write address setup state.
        };
        namespace cswasValC{
            constexpr MPL::Value<cswasVal,cswasVal::low> low{};
            constexpr MPL::Value<cswasVal,cswasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cswasVal> cswas{}; 
        ///Chip Select Write Address Hold State. 
        enum class cswahVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write address hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write address hold state.
        };
        namespace cswahValC{
            constexpr MPL::Value<cswahVal,cswahVal::low> low{};
            constexpr MPL::Value<cswahVal,cswahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cswahVal> cswah{}; 
        ///Chip Select Write Data Wait State. 
        enum class cswdwVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write data wait state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write data wait state.
        };
        namespace cswdwValC{
            constexpr MPL::Value<cswdwVal,cswdwVal::low> low{};
            constexpr MPL::Value<cswdwVal,cswdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cswdwVal> cswdw{}; 
        ///Chip Select Write Data Hold State. 
        enum class cswdhVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write data hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write data hold state.
        };
        namespace cswdhValC{
            constexpr MPL::Value<cswdhVal,cswdhVal::low> low{};
            constexpr MPL::Value<cswdhVal,cswdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cswdhVal> cswdh{}; 
        ///Output Enable Write Address Setup State. 
        enum class oewasVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write address setup state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write address setup state.
        };
        namespace oewasValC{
            constexpr MPL::Value<oewasVal,oewasVal::low> low{};
            constexpr MPL::Value<oewasVal,oewasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,oewasVal> oewas{}; 
        ///Output Enable Write Address Hold State. 
        enum class oewahVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write address hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write address hold state.
        };
        namespace oewahValC{
            constexpr MPL::Value<oewahVal,oewahVal::low> low{};
            constexpr MPL::Value<oewahVal,oewahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,oewahVal> oewah{}; 
        ///Output Enable Write Data Wait State. 
        enum class oewdwVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write data wait state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write data wait state.
        };
        namespace oewdwValC{
            constexpr MPL::Value<oewdwVal,oewdwVal::low> low{};
            constexpr MPL::Value<oewdwVal,oewdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,oewdwVal> oewdw{}; 
        ///Output Enable Write Data Hold State. 
        enum class oewdhVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write data hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write data hold state.
        };
        namespace oewdhValC{
            constexpr MPL::Value<oewdhVal,oewdhVal::low> low{};
            constexpr MPL::Value<oewdhVal,oewdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,oewdhVal> oewdh{}; 
        ///Write Signal Write Address Setup State. 
        enum class wrwasVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write address setup state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write address setup state.
        };
        namespace wrwasValC{
            constexpr MPL::Value<wrwasVal,wrwasVal::low> low{};
            constexpr MPL::Value<wrwasVal,wrwasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wrwasVal> wrwas{}; 
        ///Write Signal Write Address Hold State. 
        enum class wrwahVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write address hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write address hold state.
        };
        namespace wrwahValC{
            constexpr MPL::Value<wrwahVal,wrwahVal::low> low{};
            constexpr MPL::Value<wrwahVal,wrwahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wrwahVal> wrwah{}; 
        ///Write Signal Write Data Wait State. 
        enum class wrwdwVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write data wait state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write data wait state.
        };
        namespace wrwdwValC{
            constexpr MPL::Value<wrwdwVal,wrwdwVal::low> low{};
            constexpr MPL::Value<wrwdwVal,wrwdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,wrwdwVal> wrwdw{}; 
        ///Write Signal Write Data Hold State. 
        enum class wrwdhVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write data hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write data hold state.
        };
        namespace wrwdhValC{
            constexpr MPL::Value<wrwdhVal,wrwdhVal::low> low{};
            constexpr MPL::Value<wrwdhVal,wrwdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,wrwdhVal> wrwdh{}; 
        ///Address Latch Enable Write Address Setup State. 
        enum class alewasVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write address setup state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write address setup state.
        };
        namespace alewasValC{
            constexpr MPL::Value<alewasVal,alewasVal::low> low{};
            constexpr MPL::Value<alewasVal,alewasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,alewasVal> alewas{}; 
        ///Address Latch Enable Write Address Hold State. 
        enum class alewahVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write address hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write address hold state.
        };
        namespace alewahValC{
            constexpr MPL::Value<alewahVal,alewahVal::low> low{};
            constexpr MPL::Value<alewahVal,alewahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,alewahVal> alewah{}; 
        ///Address Latch Enable Write Data Wait State. 
        enum class alewdwVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write data wait state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write data wait state.
        };
        namespace alewdwValC{
            constexpr MPL::Value<alewdwVal,alewdwVal::low> low{};
            constexpr MPL::Value<alewdwVal,alewdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,alewdwVal> alewdw{}; 
        ///Address Latch Enable Write Data Hold State. 
        enum class alewdhVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write data hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write data hold state.
        };
        namespace alewdhValC{
            constexpr MPL::Value<alewdhVal,alewdhVal::low> low{};
            constexpr MPL::Value<alewdhVal,alewdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,alewdhVal> alewdh{}; 
    }
    namespace Noneconfig1{    ///<Interface Configuration
        using Addr = Register::Address<0x40026100,0xfffeeee2,0,unsigned>;
        ///Interface Bus Data Width. 
        enum class buswidthVal {
            v8bit=0x00000000,     ///<The data bus is 8-bits wide.
            v16bit=0x00000001,     ///<The data bus is 16-bits wide.
        };
        namespace buswidthValC{
            constexpr MPL::Value<buswidthVal,buswidthVal::v8bit> v8bit{};
            constexpr MPL::Value<buswidthVal,buswidthVal::v16bit> v16bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,buswidthVal> buswidth{}; 
        ///Interface Mux Mode. 
        enum class muxmdVal {
            nonmuxed=0x00000000,     ///<The interface operates in non-multiplexed mode.
            muxed=0x00000001,     ///<The interface operates in multiplexed mode.
        };
        namespace muxmdValC{
            constexpr MPL::Value<muxmdVal,muxmdVal::nonmuxed> nonmuxed{};
            constexpr MPL::Value<muxmdVal,muxmdVal::muxed> muxed{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,muxmdVal> muxmd{}; 
        ///Interface Automatic Address Shift Enable. 
        enum class asenVal {
            disabled=0x00000000,     ///<The address is not automatically shifted.
            enabled=0x00000001,     ///<The address is automatically shifted.
        };
        namespace asenValC{
            constexpr MPL::Value<asenVal,asenVal::disabled> disabled{};
            constexpr MPL::Value<asenVal,asenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,asenVal> asen{}; 
        ///Interface Read Only Enable. 
        enum class roenVal {
            disabled=0x00000000,     ///<The interface supports reads and writes.
            enabled=0x00000001,     ///<The interface supports only reads.
        };
        namespace roenValC{
            constexpr MPL::Value<roenVal,roenVal::disabled> disabled{};
            constexpr MPL::Value<roenVal,roenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,roenVal> roen{}; 
        ///Write Data Hold State Inhibit. 
        enum class wdhinhVal {
            inactive=0x00000000,     ///<Enable the write data hold state.
            active=0x00000001,     ///<Inhibit the write data hold state.
        };
        namespace wdhinhValC{
            constexpr MPL::Value<wdhinhVal,wdhinhVal::inactive> inactive{};
            constexpr MPL::Value<wdhinhVal,wdhinhVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wdhinhVal> wdhinh{}; 
        ///Output Enable Delay. 
        enum class delayoeVal {
            disabled=0x00000000,     ///<The output enable signal (/OE) is not delayed.
            enabled=0x00000001,     ///<The output enable signal (/OE) is delayed.
        };
        namespace delayoeValC{
            constexpr MPL::Value<delayoeVal,delayoeVal::disabled> disabled{};
            constexpr MPL::Value<delayoeVal,delayoeVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,delayoeVal> delayoe{}; 
        ///Keep Last Read Enable. 
        enum class klrenVal {
            disabled=0x00000000,     ///<The bus is driven to the idle state between active requests.
            enabled=0x00000001,     ///<The bus drives the last value read on the interface between active requests.
        };
        namespace klrenValC{
            constexpr MPL::Value<klrenVal,klrenVal::disabled> disabled{};
            constexpr MPL::Value<klrenVal,klrenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,klrenVal> klren{}; 
    }
    namespace Noneifrt1{    ///<Interface Read Timing
        using Addr = Register::Address<0x40026110,0xffc0f000,0,unsigned>;
        ///Interface Read Address Setup Delay . 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> raset{}; 
        ///Interface Read Address Hold Delay. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> rahold{}; 
        ///Interface Read Data Hold Delay. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> rdhold{}; 
        ///Interface Read Data Wait Delay. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> rdwait{}; 
    }
    namespace Noneifwt1{    ///<Interface Write Timing
        using Addr = Register::Address<0x40026120,0xffc0f000,0,unsigned>;
        ///Interface Write Address Setup Delay . 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> waset{}; 
        ///Interface Write Address Hold Delay. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> wahold{}; 
        ///Interface Write Data Hold Delay. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> wdhold{}; 
        ///Interface Write Data Wait Delay. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> wdwait{}; 
    }
    namespace Noneifrcst1{    ///<Interface Read Control States
        using Addr = Register::Address<0x40026130,0xffff0000,0,unsigned>;
        ///Chip Select Read Address Setup State. 
        enum class csrasVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read address setup state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read address setup state.
        };
        namespace csrasValC{
            constexpr MPL::Value<csrasVal,csrasVal::low> low{};
            constexpr MPL::Value<csrasVal,csrasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,csrasVal> csras{}; 
        ///Chip Select Read Address Hold State. 
        enum class csrahVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read address hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read address hold state.
        };
        namespace csrahValC{
            constexpr MPL::Value<csrahVal,csrahVal::low> low{};
            constexpr MPL::Value<csrahVal,csrahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,csrahVal> csrah{}; 
        ///Chip Select Read Data Wait State. 
        enum class csrdwVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read data wait state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read data wait state.
        };
        namespace csrdwValC{
            constexpr MPL::Value<csrdwVal,csrdwVal::low> low{};
            constexpr MPL::Value<csrdwVal,csrdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,csrdwVal> csrdw{}; 
        ///Chip Select Read Data Hold State. 
        enum class csrdhVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the read data hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the read data hold state.
        };
        namespace csrdhValC{
            constexpr MPL::Value<csrdhVal,csrdhVal::low> low{};
            constexpr MPL::Value<csrdhVal,csrdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,csrdhVal> csrdh{}; 
        ///Output Enable Read Address Setup State. 
        enum class oerasVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read address setup state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read address setup state.
        };
        namespace oerasValC{
            constexpr MPL::Value<oerasVal,oerasVal::low> low{};
            constexpr MPL::Value<oerasVal,oerasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,oerasVal> oeras{}; 
        ///Output Enable Read Address Hold State. 
        enum class oerahVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read address hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read address hold state.
        };
        namespace oerahValC{
            constexpr MPL::Value<oerahVal,oerahVal::low> low{};
            constexpr MPL::Value<oerahVal,oerahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,oerahVal> oerah{}; 
        ///Output Enable Read Data Wait State. 
        enum class oerdwVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read data wait state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read data wait state.
        };
        namespace oerdwValC{
            constexpr MPL::Value<oerdwVal,oerdwVal::low> low{};
            constexpr MPL::Value<oerdwVal,oerdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,oerdwVal> oerdw{}; 
        ///Output Enable Read Data Hold State. 
        enum class oerdhVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the read data hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the read data hold state.
        };
        namespace oerdhValC{
            constexpr MPL::Value<oerdhVal,oerdhVal::low> low{};
            constexpr MPL::Value<oerdhVal,oerdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,oerdhVal> oerdh{}; 
        ///Write Signal Read Address Setup State. 
        enum class wrrasVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read address setup state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read address setup state.
        };
        namespace wrrasValC{
            constexpr MPL::Value<wrrasVal,wrrasVal::low> low{};
            constexpr MPL::Value<wrrasVal,wrrasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wrrasVal> wrras{}; 
        ///Write Signal Read Address Hold State. 
        enum class wrrahVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read address hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read address hold state.
        };
        namespace wrrahValC{
            constexpr MPL::Value<wrrahVal,wrrahVal::low> low{};
            constexpr MPL::Value<wrrahVal,wrrahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wrrahVal> wrrah{}; 
        ///Write Signal Read Data Wait State. 
        enum class wrrdwVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read data wait state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read data wait state.
        };
        namespace wrrdwValC{
            constexpr MPL::Value<wrrdwVal,wrrdwVal::low> low{};
            constexpr MPL::Value<wrrdwVal,wrrdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,wrrdwVal> wrrdw{}; 
        ///Write Signal Read Data Hold State. 
        enum class wrrdhVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the read data hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the read data hold state.
        };
        namespace wrrdhValC{
            constexpr MPL::Value<wrrdhVal,wrrdhVal::low> low{};
            constexpr MPL::Value<wrrdhVal,wrrdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,wrrdhVal> wrrdh{}; 
        ///Address Latch Enable Read Address Setup State. 
        enum class alerasVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read address setup state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read address setup state.
        };
        namespace alerasValC{
            constexpr MPL::Value<alerasVal,alerasVal::low> low{};
            constexpr MPL::Value<alerasVal,alerasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,alerasVal> aleras{}; 
        ///Address Latch Enable Read Address Hold State. 
        enum class alerahVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read address hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read address hold state.
        };
        namespace alerahValC{
            constexpr MPL::Value<alerahVal,alerahVal::low> low{};
            constexpr MPL::Value<alerahVal,alerahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,alerahVal> alerah{}; 
        ///Address Latch Enable Read Data Wait State. 
        enum class alerdwVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read data wait state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read data wait state.
        };
        namespace alerdwValC{
            constexpr MPL::Value<alerdwVal,alerdwVal::low> low{};
            constexpr MPL::Value<alerdwVal,alerdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,alerdwVal> alerdw{}; 
        ///Address Latch Enable Read Data Hold State. 
        enum class alerdhVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the read data hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the read data hold state.
        };
        namespace alerdhValC{
            constexpr MPL::Value<alerdhVal,alerdhVal::low> low{};
            constexpr MPL::Value<alerdhVal,alerdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,alerdhVal> alerdh{}; 
    }
    namespace Noneifwcst1{    ///<Interface Write Control States
        using Addr = Register::Address<0x40026140,0xffff0000,0,unsigned>;
        ///Chip Select Write Address Setup State. 
        enum class cswasVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write address setup state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write address setup state.
        };
        namespace cswasValC{
            constexpr MPL::Value<cswasVal,cswasVal::low> low{};
            constexpr MPL::Value<cswasVal,cswasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,cswasVal> cswas{}; 
        ///Chip Select Write Address Hold State. 
        enum class cswahVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write address hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write address hold state.
        };
        namespace cswahValC{
            constexpr MPL::Value<cswahVal,cswahVal::low> low{};
            constexpr MPL::Value<cswahVal,cswahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cswahVal> cswah{}; 
        ///Chip Select Write Data Wait State. 
        enum class cswdwVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write data wait state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write data wait state.
        };
        namespace cswdwValC{
            constexpr MPL::Value<cswdwVal,cswdwVal::low> low{};
            constexpr MPL::Value<cswdwVal,cswdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cswdwVal> cswdw{}; 
        ///Chip Select Write Data Hold State. 
        enum class cswdhVal {
            low=0x00000000,     ///<Set chip select (CSx) to low during the write data hold state.
            high=0x00000001,     ///<Set chip select (CSx) to high during the write data hold state.
        };
        namespace cswdhValC{
            constexpr MPL::Value<cswdhVal,cswdhVal::low> low{};
            constexpr MPL::Value<cswdhVal,cswdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,cswdhVal> cswdh{}; 
        ///Output Enable Write Address Setup State. 
        enum class oewasVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write address setup state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write address setup state.
        };
        namespace oewasValC{
            constexpr MPL::Value<oewasVal,oewasVal::low> low{};
            constexpr MPL::Value<oewasVal,oewasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,oewasVal> oewas{}; 
        ///Output Enable Write Address Hold State. 
        enum class oewahVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write address hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write address hold state.
        };
        namespace oewahValC{
            constexpr MPL::Value<oewahVal,oewahVal::low> low{};
            constexpr MPL::Value<oewahVal,oewahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,oewahVal> oewah{}; 
        ///Output Enable Write Data Wait State. 
        enum class oewdwVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write data wait state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write data wait state.
        };
        namespace oewdwValC{
            constexpr MPL::Value<oewdwVal,oewdwVal::low> low{};
            constexpr MPL::Value<oewdwVal,oewdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,oewdwVal> oewdw{}; 
        ///Output Enable Write Data Hold State. 
        enum class oewdhVal {
            low=0x00000000,     ///<Set output enable (/OE) to low during the write data hold state.
            high=0x00000001,     ///<Set output enable (/OE) to high during the write data hold state.
        };
        namespace oewdhValC{
            constexpr MPL::Value<oewdhVal,oewdhVal::low> low{};
            constexpr MPL::Value<oewdhVal,oewdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,oewdhVal> oewdh{}; 
        ///Write Signal Write Address Setup State. 
        enum class wrwasVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write address setup state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write address setup state.
        };
        namespace wrwasValC{
            constexpr MPL::Value<wrwasVal,wrwasVal::low> low{};
            constexpr MPL::Value<wrwasVal,wrwasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,wrwasVal> wrwas{}; 
        ///Write Signal Write Address Hold State. 
        enum class wrwahVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write address hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write address hold state.
        };
        namespace wrwahValC{
            constexpr MPL::Value<wrwahVal,wrwahVal::low> low{};
            constexpr MPL::Value<wrwahVal,wrwahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,wrwahVal> wrwah{}; 
        ///Write Signal Write Data Wait State. 
        enum class wrwdwVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write data wait state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write data wait state.
        };
        namespace wrwdwValC{
            constexpr MPL::Value<wrwdwVal,wrwdwVal::low> low{};
            constexpr MPL::Value<wrwdwVal,wrwdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,wrwdwVal> wrwdw{}; 
        ///Write Signal Write Data Hold State. 
        enum class wrwdhVal {
            low=0x00000000,     ///<Set write signal (/WR) to low during the write data hold state.
            high=0x00000001,     ///<Set write signal (/WR) to high during the write data hold state.
        };
        namespace wrwdhValC{
            constexpr MPL::Value<wrwdhVal,wrwdhVal::low> low{};
            constexpr MPL::Value<wrwdhVal,wrwdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,wrwdhVal> wrwdh{}; 
        ///Address Latch Enable Write Address Setup State. 
        enum class alewasVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write address setup state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write address setup state.
        };
        namespace alewasValC{
            constexpr MPL::Value<alewasVal,alewasVal::low> low{};
            constexpr MPL::Value<alewasVal,alewasVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,alewasVal> alewas{}; 
        ///Address Latch Enable Write Address Hold State. 
        enum class alewahVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write address hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write address hold state.
        };
        namespace alewahValC{
            constexpr MPL::Value<alewahVal,alewahVal::low> low{};
            constexpr MPL::Value<alewahVal,alewahVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,alewahVal> alewah{}; 
        ///Address Latch Enable Write Data Wait State. 
        enum class alewdwVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write data wait state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write data wait state.
        };
        namespace alewdwValC{
            constexpr MPL::Value<alewdwVal,alewdwVal::low> low{};
            constexpr MPL::Value<alewdwVal,alewdwVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,alewdwVal> alewdw{}; 
        ///Address Latch Enable Write Data Hold State. 
        enum class alewdhVal {
            low=0x00000000,     ///<Set address latch enable (ALEm) to low during the write data hold state.
            high=0x00000001,     ///<Set address latch enable (ALEm) to high during the write data hold state.
        };
        namespace alewdhValC{
            constexpr MPL::Value<alewdhVal,alewdhVal::low> low{};
            constexpr MPL::Value<alewdhVal,alewdhVal::high> high{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,alewdhVal> alewdh{}; 
    }
}
