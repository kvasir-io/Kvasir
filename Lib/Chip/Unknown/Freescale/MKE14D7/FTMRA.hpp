#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//FTMRA Family Flash Module
    namespace FtmraFsec{    ///<Flash Security Register
        using Addr = Register::Address<0x40039000,0xffffff00,0,unsigned char>;
        ///Flash Security
        enum class secVal {
            v00=0x00000000,     ///<MCU security status is secure
            v01=0x00000001,     ///<MCU security status is secure,it is the preferred SEC state to set MCU to secured state
            v10=0x00000002,     ///<MCU security status is unsecure
            v11=0x00000003,     ///<MCU security status is secure
        };
        namespace secValC{
            constexpr MPL::Value<secVal,secVal::v00> v00{};
            constexpr MPL::Value<secVal,secVal::v01> v01{};
            constexpr MPL::Value<secVal,secVal::v10> v10{};
            constexpr MPL::Value<secVal,secVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,secVal> sec{}; 
        ///Reserved Nonvolatile Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> rnv{}; 
        ///Backdoor Key Security Enable
        enum class keyenVal {
            v00=0x00000000,     ///<Backdoor key access disabled
            v01=0x00000001,     ///<Backdoor key access disabled (preferred KEYEN state to disable backdoor key access)
            v10=0x00000002,     ///<Backdoor key access enabled
            v11=0x00000003,     ///<Backdoor key access disabled
        };
        namespace keyenValC{
            constexpr MPL::Value<keyenVal,keyenVal::v00> v00{};
            constexpr MPL::Value<keyenVal,keyenVal::v01> v01{};
            constexpr MPL::Value<keyenVal,keyenVal::v10> v10{};
            constexpr MPL::Value<keyenVal,keyenVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,keyenVal> keyen{}; 
    }
    namespace FtmraFclkdiv{    ///<Flash Clock Divider Register
        using Addr = Register::Address<0x40039001,0xffffff00,0,unsigned char>;
        ///Clock Divider Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> fdiv{}; 
        ///Clock Divider Loaded
        enum class fdivldVal {
            v0=0x00000000,     ///<FCLKDIV register has not been written.
            v1=0x00000001,     ///<FCLKDIV register has been written since the last reset.
        };
        namespace fdivldValC{
            constexpr MPL::Value<fdivldVal,fdivldVal::v0> v0{};
            constexpr MPL::Value<fdivldVal,fdivldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,fdivldVal> fdivld{}; 
    }
    namespace FtmraFeccrix{    ///<Flash ECCR Index Register
        using Addr = Register::Address<0x40039002,0xfffffff8,0,unsigned char>;
        ///ECC Error Register Index
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> eccrix{}; 
    }
    namespace FtmraFccobix{    ///<Flash Common Command Object Index Register
        using Addr = Register::Address<0x40039003,0xfffffff8,0,unsigned char>;
        ///Common Command Register Index
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ccobix{}; 
    }
    namespace FtmraFercnfg{    ///<Flash Error Configuration Register
        using Addr = Register::Address<0x40039004,0xfffffffc,0,unsigned char>;
        ///Single Bit Fault Detect Interrupt Enable
        enum class sfdieVal {
            v0=0x00000000,     ///<SFDIF interrupt disabled whenever the SFDIF flag is set
            v1=0x00000001,     ///<An interrupt will be requested whenever the SFDIF flag is set
        };
        namespace sfdieValC{
            constexpr MPL::Value<sfdieVal,sfdieVal::v0> v0{};
            constexpr MPL::Value<sfdieVal,sfdieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sfdieVal> sfdie{}; 
        ///Double Bit Fault Detect Interrupt Enable
        enum class dfdieVal {
            v0=0x00000000,     ///<SFDIF interrupt disabled whenever the SFDIF flag is set
            v1=0x00000001,     ///<An interrupt will be requested whenever the SFDIF flag is set
        };
        namespace dfdieValC{
            constexpr MPL::Value<dfdieVal,dfdieVal::v0> v0{};
            constexpr MPL::Value<dfdieVal,dfdieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dfdieVal> dfdie{}; 
    }
    namespace FtmraFcnfg{    ///<Flash Configuration Register
        using Addr = Register::Address<0x40039005,0xffffff4c,0,unsigned char>;
        ///Force Single Bit Fault Detect
        enum class fsfdVal {
            v0=0x00000000,     ///<Flash array read operations will set the SFDIF flag in the FERSTAT register only if a single bit fault is detected
            v1=0x00000001,     ///<Flash array read operation will force the SFDIF flag in the FERSTAT register to be set (see Section 1.3.2.7) and an interrupt will be generated as long as the SFDIE interrupt enable in the FERCNFG register is set
        };
        namespace fsfdValC{
            constexpr MPL::Value<fsfdVal,fsfdVal::v0> v0{};
            constexpr MPL::Value<fsfdVal,fsfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fsfdVal> fsfd{}; 
        ///Force Double Bit Fault Detect
        enum class fdfdVal {
            v0=0x00000000,     ///<Flash array read operations will set the DFDIF flag in the FERSTAT register only if a double bit fault is detected
            v1=0x00000001,     ///<Any flash array read operation will force the FERSTAT[DFDIF] flag to be set and an interrupt will be generated as long as the FERCNFG[DFDIE] is set
        };
        namespace fdfdValC{
            constexpr MPL::Value<fdfdVal,fdfdVal::v0> v0{};
            constexpr MPL::Value<fdfdVal,fdfdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,fdfdVal> fdfd{}; 
        ///Ignore Single Bit Fault
        enum class ignsfVal {
            v0=0x00000000,     ///<All single bit faults detected during array reads are reported
            v1=0x00000001,     ///<Single bit faults detected during array reads are not reported and the single bit fault interrupt is not generated
        };
        namespace ignsfValC{
            constexpr MPL::Value<ignsfVal,ignsfVal::v0> v0{};
            constexpr MPL::Value<ignsfVal,ignsfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ignsfVal> ignsf{}; 
        ///Erase All Request
        enum class ersareqVal {
            v0=0x00000000,     ///<No request or request complete
            v1=0x00000001,     ///<Request to: run the Erase All Blocks command, verify the erased state, program the security byte in the Flash Configuration Field to the unsecure state, and release MCU security by setting the FSEC[SEC] field to the unsecure state.
        };
        namespace ersareqValC{
            constexpr MPL::Value<ersareqVal,ersareqVal::v0> v0{};
            constexpr MPL::Value<ersareqVal,ersareqVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ersareqVal> ersareq{}; 
        ///Command Complete Interrupt Enable
        enum class ccieVal {
            v0=0x00000000,     ///<Command complete interrupt disabled
            v1=0x00000001,     ///<Command complete interrupt enabled. An interrupt request is generated whenever the FSTAT[CCIF] flag is set.
        };
        namespace ccieValC{
            constexpr MPL::Value<ccieVal,ccieVal::v0> v0{};
            constexpr MPL::Value<ccieVal,ccieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ccieVal> ccie{}; 
    }
    namespace FtmraFerstat{    ///<Flash Error Status Register
        using Addr = Register::Address<0x40039006,0xfffffffc,0,unsigned char>;
        ///Single Bit Fault Detect Interrupt Flag
        enum class sfdifVal {
            v0=0x00000000,     ///<No single bit fault detected
            v1=0x00000001,     ///<Single bit fault detected and corrected or an invalid Flash array read operation attempted
        };
        namespace sfdifValC{
            constexpr MPL::Value<sfdifVal,sfdifVal::v0> v0{};
            constexpr MPL::Value<sfdifVal,sfdifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,sfdifVal> sfdif{}; 
        ///Double Bit Fault Detect Interrupt Flag
        enum class dfdifVal {
            v0=0x00000000,     ///<No double bit fault detected
            v1=0x00000001,     ///<Double bit fault detected or an invalid Flash array read operation attempted
        };
        namespace dfdifValC{
            constexpr MPL::Value<dfdifVal,dfdifVal::v0> v0{};
            constexpr MPL::Value<dfdifVal,dfdifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,dfdifVal> dfdif{}; 
    }
    namespace FtmraFstat{    ///<Flash Status Register
        using Addr = Register::Address<0x40039007,0xffffff44,0,unsigned char>;
        ///MGATE Command Completion Status Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mgstat{}; 
        ///MGATE Busy Flag
        enum class mgbusyVal {
            v0=0x00000000,     ///<MGATE is idle
            v1=0x00000001,     ///<MGATE is busy executing a Flash command (CCIF = 0)
        };
        namespace mgbusyValC{
            constexpr MPL::Value<mgbusyVal,mgbusyVal::v0> v0{};
            constexpr MPL::Value<mgbusyVal,mgbusyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,mgbusyVal> mgbusy{}; 
        ///Flash Protection Violation Flag
        enum class fpviolVal {
            v0=0x00000000,     ///<No protection violation detected
            v1=0x00000001,     ///<Protection violation detected
        };
        namespace fpviolValC{
            constexpr MPL::Value<fpviolVal,fpviolVal::v0> v0{};
            constexpr MPL::Value<fpviolVal,fpviolVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,fpviolVal> fpviol{}; 
        ///Flash Access Error Flag
        enum class accerrVal {
            v0=0x00000000,     ///<No access error detected
            v1=0x00000001,     ///<Access error detected
        };
        namespace accerrValC{
            constexpr MPL::Value<accerrVal,accerrVal::v0> v0{};
            constexpr MPL::Value<accerrVal,accerrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,accerrVal> accerr{}; 
        ///Command Complete Interrupt Flag
        enum class ccifVal {
            v0=0x00000000,     ///<Flash command in progress
            v1=0x00000001,     ///<Flash command has completed
        };
        namespace ccifValC{
            constexpr MPL::Value<ccifVal,ccifVal::v0> v0{};
            constexpr MPL::Value<ccifVal,ccifVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ccifVal> ccif{}; 
    }
    namespace FtmraDfprot{    ///<D-Flash Protection Register
        using Addr = Register::Address<0x40039008,0xffffff60,0,unsigned char>;
        ///EraseD-Flash Protection Size
        enum class dpsVal {
            v00000=0x00000000,     ///<Flash address range: 0x00_0000 - 0x00_00FF; protected size: 256 bytes
            v00001=0x00000001,     ///<Flash address range: 0x00_0000 - 0x00_01FF; protected size: 512 bytes
            v00010=0x00000002,     ///<Flash address range: 0x00_0000 - 0x00_02FF; protected size: 768 bytes
            v00011=0x00000003,     ///<Flash address range: 0x00_0000 - 0x00_03FF; protected size: 1024 bytes
            v00100=0x00000004,     ///<Flash address range: 0x00_0000 - 0x00_04FF; protected size: 1280 bytes
            v00101=0x00000005,     ///<Flash address range: 0x00_0000 - 0x00_05FF; protected size: 1536 bytes
            v00110=0x00000006,     ///<Flash address range: 0x00_0000 - 0x00_06FF; protected size: 1792 bytes
            v00111=0x00000007,     ///<Flash address range: 0x00_0000 - 0x00_07FF; protected size: 2048 bytes
            v01000=0x00000008,     ///<Flash address range: 0x00_0000 - 0x00_08FF; protected size: 2304 bytes
            v01001=0x00000009,     ///<Flash address range: 0x00_0000 - 0x00_09FF; protected size: 2560 bytes
            v01010=0x0000000a,     ///<Flash address range: 0x00_0000 - 0x00_0AFF; protected size: 2816 bytes
            v01011=0x0000000b,     ///<Flash address range: 0x00_0000 - 0x00_0BFF; protected size: 3072 bytes
            v01100=0x0000000c,     ///<Flash address range: 0x00_0000 - 0x00_0CFF; protected size: 3328 bytes
            v01101=0x0000000d,     ///<Flash address range: 0x00_0000 - 0x00_0DFF; protected size: 3584 bytes
            v01110=0x0000000e,     ///<Flash address range: 0x00_0000 - 0x00_0EFF; protected size: 3840 bytes
            v01111=0x0000000f,     ///<Flash address range: 0x00_0000 - 0x00_0FFF; protected size: 4096 bytes
            v10000=0x00000010,     ///<Flash address range: 0x00_0000 - 0x00_10FF; protected size: 4352 bytes
            v10001=0x00000011,     ///<Flash address range: 0x00_0000 - 0x00_11FF; protected size: 4608 bytes
            v10010=0x00000012,     ///<Flash address range: 0x00_0000 - 0x00_12FF; protected size: 4864 bytes
            v10011=0x00000013,     ///<Flash address range: 0x00_0000 - 0x00_13FF; protected size: 5120 bytes
            v10100=0x00000014,     ///<Flash address range: 0x00_0000 - 0x00_14FF; protected size: 5376 bytes
            v10101=0x00000015,     ///<Flash address range: 0x00_0000 - 0x00_15FF; protected size: 5632 bytes
            v10110=0x00000016,     ///<Flash address range: 0x00_0000 - 0x00_16FF; protected size: 5888 bytes
            v10111=0x00000017,     ///<Flash address range: 0x00_0000 - 0x00_17FF; protected size: 6144 bytes
            v11000=0x00000018,     ///<Flash address range: 0x00_0000 - 0x00_18FF; protected size: 6400 bytes
            v11001=0x00000019,     ///<Flash address range: 0x00_0000 - 0x00_19FF; protected size: 6656 bytes
            v11010=0x0000001a,     ///<Flash address range: 0x00_0000 - 0x00_1AFF; protected size: 6912 bytes
            v11011=0x0000001b,     ///<Flash address range: 0x00_0000 - 0x00_1BFF; protected size: 7168 bytes
            v11100=0x0000001c,     ///<Flash address range: 0x00_0000 - 0x00_1CFF; protected size: 7424 bytes
            v11101=0x0000001d,     ///<Flash address range: 0x00_0000 - 0x00_1DFF; protected size: 7680 bytes
            v11110=0x0000001e,     ///<Flash address range: 0x00_0000 - 0x00_1EFF; protected size: 7936 bytes
            v11111=0x0000001f,     ///<Flash address range: 0x00_0000 - 0x00_1FFF; protected size: 8192 bytes
        };
        namespace dpsValC{
            constexpr MPL::Value<dpsVal,dpsVal::v00000> v00000{};
            constexpr MPL::Value<dpsVal,dpsVal::v00001> v00001{};
            constexpr MPL::Value<dpsVal,dpsVal::v00010> v00010{};
            constexpr MPL::Value<dpsVal,dpsVal::v00011> v00011{};
            constexpr MPL::Value<dpsVal,dpsVal::v00100> v00100{};
            constexpr MPL::Value<dpsVal,dpsVal::v00101> v00101{};
            constexpr MPL::Value<dpsVal,dpsVal::v00110> v00110{};
            constexpr MPL::Value<dpsVal,dpsVal::v00111> v00111{};
            constexpr MPL::Value<dpsVal,dpsVal::v01000> v01000{};
            constexpr MPL::Value<dpsVal,dpsVal::v01001> v01001{};
            constexpr MPL::Value<dpsVal,dpsVal::v01010> v01010{};
            constexpr MPL::Value<dpsVal,dpsVal::v01011> v01011{};
            constexpr MPL::Value<dpsVal,dpsVal::v01100> v01100{};
            constexpr MPL::Value<dpsVal,dpsVal::v01101> v01101{};
            constexpr MPL::Value<dpsVal,dpsVal::v01110> v01110{};
            constexpr MPL::Value<dpsVal,dpsVal::v01111> v01111{};
            constexpr MPL::Value<dpsVal,dpsVal::v10000> v10000{};
            constexpr MPL::Value<dpsVal,dpsVal::v10001> v10001{};
            constexpr MPL::Value<dpsVal,dpsVal::v10010> v10010{};
            constexpr MPL::Value<dpsVal,dpsVal::v10011> v10011{};
            constexpr MPL::Value<dpsVal,dpsVal::v10100> v10100{};
            constexpr MPL::Value<dpsVal,dpsVal::v10101> v10101{};
            constexpr MPL::Value<dpsVal,dpsVal::v10110> v10110{};
            constexpr MPL::Value<dpsVal,dpsVal::v10111> v10111{};
            constexpr MPL::Value<dpsVal,dpsVal::v11000> v11000{};
            constexpr MPL::Value<dpsVal,dpsVal::v11001> v11001{};
            constexpr MPL::Value<dpsVal,dpsVal::v11010> v11010{};
            constexpr MPL::Value<dpsVal,dpsVal::v11011> v11011{};
            constexpr MPL::Value<dpsVal,dpsVal::v11100> v11100{};
            constexpr MPL::Value<dpsVal,dpsVal::v11101> v11101{};
            constexpr MPL::Value<dpsVal,dpsVal::v11110> v11110{};
            constexpr MPL::Value<dpsVal,dpsVal::v11111> v11111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,dpsVal> dps{}; 
        ///D-Flash Protection Control
        enum class dpopenVal {
            v0=0x00000000,     ///<Enables D-Flash memory protection from program and erase with protected address range defined by DPS bits
            v1=0x00000001,     ///<Disables D-Flash memory protection from program and erase
        };
        namespace dpopenValC{
            constexpr MPL::Value<dpopenVal,dpopenVal::v0> v0{};
            constexpr MPL::Value<dpopenVal,dpopenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dpopenVal> dpopen{}; 
    }
    namespace FtmraFprot{    ///<P-Flash Protection Register
        using Addr = Register::Address<0x40039009,0xffffff00,0,unsigned char>;
        ///Flash Protection Lower Address Size
        enum class fplsVal {
            v00=0x00000000,     ///<Address range: 0x00_0000-0x00_07FF; protected size: 2 KB
            v01=0x00000001,     ///<Address range: 0x00_0000-0x00_0FFF; protected size: 4 KB
            v10=0x00000002,     ///<Address range: 0x00_0000-0x00_1FFF; protected size: 8 KB
            v11=0x00000003,     ///<Address range: 0x00_0000-0x00_3FFF; protected size: 16 KB
        };
        namespace fplsValC{
            constexpr MPL::Value<fplsVal,fplsVal::v00> v00{};
            constexpr MPL::Value<fplsVal,fplsVal::v01> v01{};
            constexpr MPL::Value<fplsVal,fplsVal::v10> v10{};
            constexpr MPL::Value<fplsVal,fplsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,fplsVal> fpls{}; 
        ///Flash Protection Lower Address Range Disable
        enum class fpldisVal {
            v0=0x00000000,     ///<Protection/Unprotection enabled
            v1=0x00000001,     ///<Protection/Unprotection disabled
        };
        namespace fpldisValC{
            constexpr MPL::Value<fpldisVal,fpldisVal::v0> v0{};
            constexpr MPL::Value<fpldisVal,fpldisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,fpldisVal> fpldis{}; 
        ///Flash Protection Higher Address Size
        enum class fphsVal {
            v00=0x00000000,     ///<Address range: 0x00_7C00-0x00_7FFF; protected size: 1 KB
            v01=0x00000001,     ///<Address range: 0x00_7800-0x00_7FFF; protected size: 2 KB
            v10=0x00000002,     ///<Address range: 0x00_7000-0x00_7FFF; protected size: 4 KB
            v11=0x00000003,     ///<Address range: 0x00_6000-0x00_7FFF; protected size: 8 KB
        };
        namespace fphsValC{
            constexpr MPL::Value<fphsVal,fphsVal::v00> v00{};
            constexpr MPL::Value<fphsVal,fphsVal::v01> v01{};
            constexpr MPL::Value<fphsVal,fphsVal::v10> v10{};
            constexpr MPL::Value<fphsVal,fphsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,fphsVal> fphs{}; 
        ///Flash Protection Higher Address Range Disable
        enum class fphdisVal {
            v0=0x00000000,     ///<Protection/Unprotection enabled
            v1=0x00000001,     ///<Protection/Unprotection disabled
        };
        namespace fphdisValC{
            constexpr MPL::Value<fphdisVal,fphdisVal::v0> v0{};
            constexpr MPL::Value<fphdisVal,fphdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,fphdisVal> fphdis{}; 
        ///Reserved Nonvolatile Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rnv{}; 
        ///Flash Protection Operation Enable
        enum class fpopenVal {
            v0=0x00000000,     ///<When FPOPEN is clear, the FPHDIS and FPLDIS bits define unprotected address ranges as specified by the corresponding FPHS and FPLS bits
            v1=0x00000001,     ///<When FPOPEN is set, the FPHDIS and FPLDIS bits enable protection for the address range specified by the corresponding FPHS and FPLS bits
        };
        namespace fpopenValC{
            constexpr MPL::Value<fpopenVal,fpopenVal::v0> v0{};
            constexpr MPL::Value<fpopenVal,fpopenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,fpopenVal> fpopen{}; 
    }
    namespace FtmraFccoblo{    ///<Flash Common Command Object Low Register
        using Addr = Register::Address<0x4003900a,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
    }
    namespace FtmraFccobhi{    ///<Flash Common Command Object High Register
        using Addr = Register::Address<0x4003900b,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ccobn{}; 
    }
    namespace FtmraFeccrlo{    ///<Flash ECC Error Results Low Register
        using Addr = Register::Address<0x4003900e,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> eccr{}; 
    }
    namespace FtmraFeccrhi{    ///<Flash ECC Error Results High Register
        using Addr = Register::Address<0x4003900f,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> eccr{}; 
    }
    namespace FtmraFopt{    ///<Flash Option Register
        using Addr = Register::Address<0x40039011,0xffffff00,0,unsigned char>;
        ///Nonvolatile Bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> nv{}; 
    }
}
