#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Programmable Multibit Error Corrected Code Controller
    namespace PmeccCfg{    ///<PMECC Configuration Register
        using Addr = Register::Address<0xffffe000,0xffeeece8,0x00000000,unsigned>;
        ///Error Correct Capability
        enum class BcherrVal {
            bchErr2=0x00000000,     ///<2 errors
            bchErr4=0x00000001,     ///<4 errors
            bchErr8=0x00000002,     ///<8 errors
            bchErr12=0x00000003,     ///<12 errors
            bchErr24=0x00000004,     ///<24 errors
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,BcherrVal> bchErr{}; 
        namespace BcherrValC{
            constexpr Register::FieldValue<decltype(bchErr)::Type,BcherrVal::bchErr2> bchErr2{};
            constexpr Register::FieldValue<decltype(bchErr)::Type,BcherrVal::bchErr4> bchErr4{};
            constexpr Register::FieldValue<decltype(bchErr)::Type,BcherrVal::bchErr8> bchErr8{};
            constexpr Register::FieldValue<decltype(bchErr)::Type,BcherrVal::bchErr12> bchErr12{};
            constexpr Register::FieldValue<decltype(bchErr)::Type,BcherrVal::bchErr24> bchErr24{};
        }
        ///Sector Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sectorsz{}; 
        ///Number of Sectors in the Page
        enum class PagesizeVal {
            pagesize1sec=0x00000000,     ///<1 sector for main area (512 or 1024 bytes)
            pagesize2sec=0x00000001,     ///<2 sectors for main area (1024 or 2048 bytes)
            pagesize4sec=0x00000002,     ///<4 sectors for main area (2048 or 4096 bytes)
            pagesize8sec=0x00000003,     ///<8 errors for main area (4096 or 8192 bytes)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,PagesizeVal> pagesize{}; 
        namespace PagesizeValC{
            constexpr Register::FieldValue<decltype(pagesize)::Type,PagesizeVal::pagesize1sec> pagesize1sec{};
            constexpr Register::FieldValue<decltype(pagesize)::Type,PagesizeVal::pagesize2sec> pagesize2sec{};
            constexpr Register::FieldValue<decltype(pagesize)::Type,PagesizeVal::pagesize4sec> pagesize4sec{};
            constexpr Register::FieldValue<decltype(pagesize)::Type,PagesizeVal::pagesize8sec> pagesize8sec{};
        }
        ///NAND Write Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nandwr{}; 
        ///Spare Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> spareen{}; 
        ///Automatic Mode Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> auto_{}; 
    }
    namespace PmeccSarea{    ///<PMECC Spare Area Size Register
        using Addr = Register::Address<0xffffe004,0xfffffe00,0x00000000,unsigned>;
        ///Spare Area Size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> sparesize{}; 
    }
    namespace PmeccSaddr{    ///<PMECC Start Address Register
        using Addr = Register::Address<0xffffe008,0xfffffe00,0x00000000,unsigned>;
        ///ECC Area Start Address (byte oriented address)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> startaddr{}; 
    }
    namespace PmeccEaddr{    ///<PMECC End Address Register
        using Addr = Register::Address<0xffffe00c,0xfffffe00,0x00000000,unsigned>;
        ///ECC Area End Address (byte oriented address)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> endaddr{}; 
    }
    namespace PmeccClk{    ///<PMECC Clock Control Register
        using Addr = Register::Address<0xffffe010,0xfffffff8,0x00000000,unsigned>;
        ///Clock Control Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> clkctrl{}; 
    }
    namespace PmeccCtrl{    ///<PMECC Control Register
        using Addr = Register::Address<0xffffe014,0xffffffc8,0x00000000,unsigned>;
        ///Reset the PMECC Module
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rst{}; 
        ///Start a Data Phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> data{}; 
        ///Start a User Mode Phase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> user{}; 
        ///PMECC Module Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
        ///PMECC Module Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> disable{}; 
    }
    namespace PmeccSr{    ///<PMECC Status Register
        using Addr = Register::Address<0xffffe018,0xffffffee,0x00000000,unsigned>;
        ///The Kernel of the PMECC is Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///PMECC Module Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> enable{}; 
    }
    namespace PmeccIer{    ///<PMECC Interrupt Enable register
        using Addr = Register::Address<0xffffe01c,0xfffffffe,0x00000000,unsigned>;
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errie{}; 
    }
    namespace PmeccIdr{    ///<PMECC Interrupt Disable Register
        using Addr = Register::Address<0xffffe020,0xfffffffe,0x00000000,unsigned>;
        ///Error Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errid{}; 
    }
    namespace PmeccImr{    ///<PMECC Interrupt Mask Register
        using Addr = Register::Address<0xffffe024,0xfffffffe,0x00000000,unsigned>;
        ///Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errim{}; 
    }
    namespace PmeccIsr{    ///<PMECC Interrupt Status Register
        using Addr = Register::Address<0xffffe028,0xffffff00,0x00000000,unsigned>;
        ///Error Interrupt Status Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> erris{}; 
    }
    namespace PmeccEcc00{    ///<PMECC ECC 0 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe040,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc10{    ///<PMECC ECC 1 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe044,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc20{    ///<PMECC ECC 2 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe048,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc30{    ///<PMECC ECC 3 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe04c,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc40{    ///<PMECC ECC 4 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe050,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc50{    ///<PMECC ECC 5 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe054,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc60{    ///<PMECC ECC 6 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe058,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc70{    ///<PMECC ECC 7 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe05c,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc80{    ///<PMECC ECC 8 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe060,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc90{    ///<PMECC ECC 9 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe064,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc100{    ///<PMECC ECC 10 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe068,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc01{    ///<PMECC ECC 0 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe080,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc11{    ///<PMECC ECC 1 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe084,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc21{    ///<PMECC ECC 2 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe088,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc31{    ///<PMECC ECC 3 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe08c,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc41{    ///<PMECC ECC 4 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe090,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc51{    ///<PMECC ECC 5 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe094,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc61{    ///<PMECC ECC 6 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe098,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc71{    ///<PMECC ECC 7 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe09c,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc81{    ///<PMECC ECC 8 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe0a0,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc91{    ///<PMECC ECC 9 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe0a4,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc101{    ///<PMECC ECC 10 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe0a8,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc02{    ///<PMECC ECC 0 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe0c0,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc12{    ///<PMECC ECC 1 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe0c4,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc22{    ///<PMECC ECC 2 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe0c8,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc32{    ///<PMECC ECC 3 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe0cc,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc42{    ///<PMECC ECC 4 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe0d0,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc52{    ///<PMECC ECC 5 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe0d4,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc62{    ///<PMECC ECC 6 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe0d8,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc72{    ///<PMECC ECC 7 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe0dc,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc82{    ///<PMECC ECC 8 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe0e0,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc92{    ///<PMECC ECC 9 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe0e4,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc102{    ///<PMECC ECC 10 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe0e8,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc03{    ///<PMECC ECC 0 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe100,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc13{    ///<PMECC ECC 1 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe104,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc23{    ///<PMECC ECC 2 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe108,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc33{    ///<PMECC ECC 3 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe10c,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc43{    ///<PMECC ECC 4 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe110,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc53{    ///<PMECC ECC 5 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe114,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc63{    ///<PMECC ECC 6 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe118,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc73{    ///<PMECC ECC 7 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe11c,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc83{    ///<PMECC ECC 8 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe120,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc93{    ///<PMECC ECC 9 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe124,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc103{    ///<PMECC ECC 10 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe128,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc04{    ///<PMECC ECC 0 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe140,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc14{    ///<PMECC ECC 1 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe144,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc24{    ///<PMECC ECC 2 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe148,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc34{    ///<PMECC ECC 3 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe14c,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc44{    ///<PMECC ECC 4 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe150,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc54{    ///<PMECC ECC 5 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe154,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc64{    ///<PMECC ECC 6 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe158,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc74{    ///<PMECC ECC 7 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe15c,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc84{    ///<PMECC ECC 8 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe160,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc94{    ///<PMECC ECC 9 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe164,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc104{    ///<PMECC ECC 10 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe168,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc05{    ///<PMECC ECC 0 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe180,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc15{    ///<PMECC ECC 1 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe184,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc25{    ///<PMECC ECC 2 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe188,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc35{    ///<PMECC ECC 3 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe18c,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc45{    ///<PMECC ECC 4 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe190,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc55{    ///<PMECC ECC 5 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe194,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc65{    ///<PMECC ECC 6 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe198,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc75{    ///<PMECC ECC 7 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe19c,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc85{    ///<PMECC ECC 8 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe1a0,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc95{    ///<PMECC ECC 9 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe1a4,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc105{    ///<PMECC ECC 10 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe1a8,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc06{    ///<PMECC ECC 0 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe1c0,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc16{    ///<PMECC ECC 1 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe1c4,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc26{    ///<PMECC ECC 2 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe1c8,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc36{    ///<PMECC ECC 3 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe1cc,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc46{    ///<PMECC ECC 4 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe1d0,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc56{    ///<PMECC ECC 5 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe1d4,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc66{    ///<PMECC ECC 6 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe1d8,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc76{    ///<PMECC ECC 7 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe1dc,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc86{    ///<PMECC ECC 8 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe1e0,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc96{    ///<PMECC ECC 9 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe1e4,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc106{    ///<PMECC ECC 10 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe1e8,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc07{    ///<PMECC ECC 0 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe200,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc17{    ///<PMECC ECC 1 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe204,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc27{    ///<PMECC ECC 2 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe208,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc37{    ///<PMECC ECC 3 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe20c,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc47{    ///<PMECC ECC 4 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe210,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc57{    ///<PMECC ECC 5 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe214,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc67{    ///<PMECC ECC 6 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe218,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc77{    ///<PMECC ECC 7 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe21c,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc87{    ///<PMECC ECC 8 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe220,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc97{    ///<PMECC ECC 9 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe224,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccEcc107{    ///<PMECC ECC 10 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe228,0x00000000,0x00000000,unsigned>;
        ///BCH Redundancy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ecc{}; 
    }
    namespace PmeccRem00{    ///<PMECC REM 0 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe240,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem10{    ///<PMECC REM 1 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe244,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem20{    ///<PMECC REM 2 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe248,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem30{    ///<PMECC REM 3 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe24c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem40{    ///<PMECC REM 4 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe250,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem50{    ///<PMECC REM 5 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe254,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem60{    ///<PMECC REM 6 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe258,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem70{    ///<PMECC REM 7 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe25c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem80{    ///<PMECC REM 8 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe260,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem90{    ///<PMECC REM 9 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe264,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem100{    ///<PMECC REM 10 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe268,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem110{    ///<PMECC REM 11 Register (sec_num = 0)
        using Addr = Register::Address<0xffffe26c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem01{    ///<PMECC REM 0 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe280,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem11{    ///<PMECC REM 1 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe284,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem21{    ///<PMECC REM 2 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe288,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem31{    ///<PMECC REM 3 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe28c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem41{    ///<PMECC REM 4 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe290,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem51{    ///<PMECC REM 5 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe294,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem61{    ///<PMECC REM 6 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe298,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem71{    ///<PMECC REM 7 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe29c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem81{    ///<PMECC REM 8 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe2a0,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem91{    ///<PMECC REM 9 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe2a4,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem101{    ///<PMECC REM 10 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe2a8,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem111{    ///<PMECC REM 11 Register (sec_num = 1)
        using Addr = Register::Address<0xffffe2ac,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem02{    ///<PMECC REM 0 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe2c0,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem12{    ///<PMECC REM 1 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe2c4,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem22{    ///<PMECC REM 2 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe2c8,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem32{    ///<PMECC REM 3 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe2cc,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem42{    ///<PMECC REM 4 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe2d0,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem52{    ///<PMECC REM 5 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe2d4,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem62{    ///<PMECC REM 6 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe2d8,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem72{    ///<PMECC REM 7 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe2dc,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem82{    ///<PMECC REM 8 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe2e0,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem92{    ///<PMECC REM 9 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe2e4,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem102{    ///<PMECC REM 10 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe2e8,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem112{    ///<PMECC REM 11 Register (sec_num = 2)
        using Addr = Register::Address<0xffffe2ec,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem03{    ///<PMECC REM 0 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe300,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem13{    ///<PMECC REM 1 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe304,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem23{    ///<PMECC REM 2 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe308,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem33{    ///<PMECC REM 3 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe30c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem43{    ///<PMECC REM 4 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe310,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem53{    ///<PMECC REM 5 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe314,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem63{    ///<PMECC REM 6 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe318,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem73{    ///<PMECC REM 7 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe31c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem83{    ///<PMECC REM 8 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe320,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem93{    ///<PMECC REM 9 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe324,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem103{    ///<PMECC REM 10 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe328,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem113{    ///<PMECC REM 11 Register (sec_num = 3)
        using Addr = Register::Address<0xffffe32c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem04{    ///<PMECC REM 0 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe340,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem14{    ///<PMECC REM 1 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe344,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem24{    ///<PMECC REM 2 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe348,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem34{    ///<PMECC REM 3 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe34c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem44{    ///<PMECC REM 4 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe350,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem54{    ///<PMECC REM 5 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe354,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem64{    ///<PMECC REM 6 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe358,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem74{    ///<PMECC REM 7 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe35c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem84{    ///<PMECC REM 8 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe360,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem94{    ///<PMECC REM 9 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe364,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem104{    ///<PMECC REM 10 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe368,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem114{    ///<PMECC REM 11 Register (sec_num = 4)
        using Addr = Register::Address<0xffffe36c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem05{    ///<PMECC REM 0 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe380,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem15{    ///<PMECC REM 1 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe384,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem25{    ///<PMECC REM 2 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe388,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem35{    ///<PMECC REM 3 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe38c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem45{    ///<PMECC REM 4 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe390,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem55{    ///<PMECC REM 5 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe394,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem65{    ///<PMECC REM 6 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe398,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem75{    ///<PMECC REM 7 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe39c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem85{    ///<PMECC REM 8 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe3a0,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem95{    ///<PMECC REM 9 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe3a4,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem105{    ///<PMECC REM 10 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe3a8,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem115{    ///<PMECC REM 11 Register (sec_num = 5)
        using Addr = Register::Address<0xffffe3ac,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem06{    ///<PMECC REM 0 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe3c0,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem16{    ///<PMECC REM 1 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe3c4,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem26{    ///<PMECC REM 2 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe3c8,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem36{    ///<PMECC REM 3 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe3cc,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem46{    ///<PMECC REM 4 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe3d0,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem56{    ///<PMECC REM 5 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe3d4,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem66{    ///<PMECC REM 6 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe3d8,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem76{    ///<PMECC REM 7 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe3dc,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem86{    ///<PMECC REM 8 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe3e0,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem96{    ///<PMECC REM 9 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe3e4,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem106{    ///<PMECC REM 10 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe3e8,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem116{    ///<PMECC REM 11 Register (sec_num = 6)
        using Addr = Register::Address<0xffffe3ec,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem07{    ///<PMECC REM 0 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe400,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem17{    ///<PMECC REM 1 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe404,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem27{    ///<PMECC REM 2 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe408,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem37{    ///<PMECC REM 3 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe40c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem47{    ///<PMECC REM 4 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe410,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem57{    ///<PMECC REM 5 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe414,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem67{    ///<PMECC REM 6 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe418,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem77{    ///<PMECC REM 7 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe41c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem87{    ///<PMECC REM 8 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe420,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem97{    ///<PMECC REM 9 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe424,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem107{    ///<PMECC REM 10 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe428,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
    namespace PmeccRem117{    ///<PMECC REM 11 Register (sec_num = 7)
        using Addr = Register::Address<0xffffe42c,0xc000c000,0x00000000,unsigned>;
        ///BCH Remainder 2 * N + 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np1{}; 
        ///BCH Remainder 2 * N + 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rem2np3{}; 
    }
}
