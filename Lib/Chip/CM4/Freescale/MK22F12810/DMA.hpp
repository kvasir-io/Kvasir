#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace DMA_cr{
        using Addr = Register::Address<0x40008000,0x7ffcff09>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EDBG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERCA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> HOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> HALT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EMLM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ECX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> CX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ACTIVE; 
    }
    namespace DMA_es{
        using Addr = Register::Address<0x40008004,0x7ffebc00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SBE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> SGE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> NCE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SAE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> ERRCHN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ECX; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> VLD; 
    }
    namespace DMA_erq{
        using Addr = Register::Address<0x4000800c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERQ0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ERQ3; 
    }
    namespace DMA_eei{
        using Addr = Register::Address<0x40008014,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EEI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EEI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EEI2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EEI3; 
    }
    namespace DMA_ceei{
        using Addr = Register::Address<0x40008018,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CEEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_seei{
        using Addr = Register::Address<0x40008019,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SAEE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_cerq{
        using Addr = Register::Address<0x4000801a,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CERQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_serq{
        using Addr = Register::Address<0x4000801b,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SERQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SAER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_cdne{
        using Addr = Register::Address<0x4000801c,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CDNE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CADN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_ssrt{
        using Addr = Register::Address<0x4000801d,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SSRT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SAST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_cerr{
        using Addr = Register::Address<0x4000801e,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAEI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_cint{
        using Addr = Register::Address<0x4000801f,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CAIR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> NOP; 
    }
    namespace DMA_int{
        using Addr = Register::Address<0x40008024,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> INT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> INT3; 
    }
    namespace DMA_err{
        using Addr = Register::Address<0x4000802c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ERR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ERR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ERR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ERR3; 
    }
    namespace DMA_hrs{
        using Addr = Register::Address<0x40008034,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> HRS0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HRS1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HRS2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> HRS3; 
    }
    namespace DMA_ears{
        using Addr = Register::Address<0x40008044,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EDREQ_0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EDREQ_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EDREQ_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EDREQ_3; 
    }
    namespace DMA_dchpri3{
        using Addr = Register::Address<0x40008100,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri2{
        using Addr = Register::Address<0x40008101,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri1{
        using Addr = Register::Address<0x40008102,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_dchpri0{
        using Addr = Register::Address<0x40008103,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DPA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ECP; 
    }
    namespace DMA_tcd0_saddr{
        using Addr = Register::Address<0x40009000,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd1_saddr{
        using Addr = Register::Address<0x40009020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd2_saddr{
        using Addr = Register::Address<0x40009040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd3_saddr{
        using Addr = Register::Address<0x40009060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADDR; 
    }
    namespace DMA_tcd0_soff{
        using Addr = Register::Address<0x40009004,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd1_soff{
        using Addr = Register::Address<0x40009024,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd2_soff{
        using Addr = Register::Address<0x40009044,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd3_soff{
        using Addr = Register::Address<0x40009064,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> SOFF; 
    }
    namespace DMA_tcd0_attr{
        using Addr = Register::Address<0x40009006,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd1_attr{
        using Addr = Register::Address<0x40009026,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd2_attr{
        using Addr = Register::Address<0x40009046,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd3_attr{
        using Addr = Register::Address<0x40009066,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3)> DMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8)> SSIZE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,11)> SMOD; 
    }
    namespace DMA_tcd0_nbytes_mlno{
        using Addr = Register::Address<0x40009008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd1_nbytes_mlno{
        using Addr = Register::Address<0x40009028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd2_nbytes_mlno{
        using Addr = Register::Address<0x40009048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd3_nbytes_mlno{
        using Addr = Register::Address<0x40009068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> NBYTES; 
    }
    namespace DMA_tcd0_nbytes_mloffno{
        using Addr = Register::Address<0x40009008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd1_nbytes_mloffno{
        using Addr = Register::Address<0x40009028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd2_nbytes_mloffno{
        using Addr = Register::Address<0x40009048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd3_nbytes_mloffno{
        using Addr = Register::Address<0x40009068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd0_nbytes_mloffyes{
        using Addr = Register::Address<0x40009008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd1_nbytes_mloffyes{
        using Addr = Register::Address<0x40009028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd2_nbytes_mloffyes{
        using Addr = Register::Address<0x40009048,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd3_nbytes_mloffyes{
        using Addr = Register::Address<0x40009068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,0)> NBYTES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,10)> MLOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> DMLOE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SMLOE; 
    }
    namespace DMA_tcd0_slast{
        using Addr = Register::Address<0x4000900c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd1_slast{
        using Addr = Register::Address<0x4000902c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd2_slast{
        using Addr = Register::Address<0x4000904c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd3_slast{
        using Addr = Register::Address<0x4000906c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SLAST; 
    }
    namespace DMA_tcd0_daddr{
        using Addr = Register::Address<0x40009010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd1_daddr{
        using Addr = Register::Address<0x40009030,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd2_daddr{
        using Addr = Register::Address<0x40009050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd3_daddr{
        using Addr = Register::Address<0x40009070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADDR; 
    }
    namespace DMA_tcd0_doff{
        using Addr = Register::Address<0x40009014,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd1_doff{
        using Addr = Register::Address<0x40009034,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd2_doff{
        using Addr = Register::Address<0x40009054,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd3_doff{
        using Addr = Register::Address<0x40009074,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> DOFF; 
    }
    namespace DMA_tcd0_citer_elinkno{
        using Addr = Register::Address<0x40009016,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd1_citer_elinkno{
        using Addr = Register::Address<0x40009036,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd2_citer_elinkno{
        using Addr = Register::Address<0x40009056,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd3_citer_elinkno{
        using Addr = Register::Address<0x40009076,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd0_citer_elinkyes{
        using Addr = Register::Address<0x40009016,0xffff7800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd1_citer_elinkyes{
        using Addr = Register::Address<0x40009036,0xffff7800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd2_citer_elinkyes{
        using Addr = Register::Address<0x40009056,0xffff7800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd3_citer_elinkyes{
        using Addr = Register::Address<0x40009076,0xffff7800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> CITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd0_dlastsga{
        using Addr = Register::Address<0x40009018,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd1_dlastsga{
        using Addr = Register::Address<0x40009038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd2_dlastsga{
        using Addr = Register::Address<0x40009058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd3_dlastsga{
        using Addr = Register::Address<0x40009078,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DLASTSGA; 
    }
    namespace DMA_tcd0_csr{
        using Addr = Register::Address<0x4000901c,0xffff3c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd1_csr{
        using Addr = Register::Address<0x4000903c,0xffff3c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd2_csr{
        using Addr = Register::Address<0x4000905c,0xffff3c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd3_csr{
        using Addr = Register::Address<0x4000907c,0xffff3c00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> INTMAJOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> INTHALF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MAJORELINK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ACTIVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> MAJORLINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> BWC; 
    }
    namespace DMA_tcd0_biter_elinkno{
        using Addr = Register::Address<0x4000901e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd1_biter_elinkno{
        using Addr = Register::Address<0x4000903e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd2_biter_elinkno{
        using Addr = Register::Address<0x4000905e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd3_biter_elinkno{
        using Addr = Register::Address<0x4000907e,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd0_biter_elinkyes{
        using Addr = Register::Address<0x4000901e,0xffff7800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd1_biter_elinkyes{
        using Addr = Register::Address<0x4000903e,0xffff7800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd2_biter_elinkyes{
        using Addr = Register::Address<0x4000905e,0xffff7800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
    namespace DMA_tcd3_biter_elinkyes{
        using Addr = Register::Address<0x4000907e,0xffff7800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> BITER; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> LINKCH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ELINK; 
    }
}
