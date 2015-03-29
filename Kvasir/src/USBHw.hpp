#pragma once
/*----------------------------------------------------------------------------
 *      U S B  -  K e r n e l
 *----------------------------------------------------------------------------
 * Name:    usbhw.h
 * Purpose: USB Hardware Layer Definitions
 * Version: V1.20
 *----------------------------------------------------------------------------
 *      This software is supplied "AS IS" without any warranties, express,
 *      implied or statutory, including but not limited to the implied
 *      warranties of fitness for purpose, satisfactory quality and
 *      noninfringement. Keil extends you a royalty-free right to reproduce
 *      and distribute executable files created using this software for use
 *      on NXP Semiconductors LPC family microcontroller devices only. Nothing 
 *      else gives you the right to use this software.
 *
 * Copyright (c) 2009 Keil - An ARM Company. All rights reserved.
 *----------------------------------------------------------------------------
 * History:
 *          V1.20 Added USB_ClearEPBuf 
 *          V1.00 Initial Version
 *----------------------------------------------------------------------------*/
//#include "LPC17xx.h"                        /* LPC17xx definitions */
#include "usbreg.h"
#include "usbcfg.h"
#include "usb.h"
//#include "SystemControl.hpp"
//#include "GPIO.hpp"
//#include "IRQ.hpp"

#define     __I     volatile                  /*!< defines 'read only' permissions      */
#define     __O     volatile                  /*!< defines 'write only' permissions     */
#define     __IO    volatile                  /*!< defines 'read / write' permissions   */

/*------------- Universal Serial Bus (USB) -----------------------------------*/
/** @brief  Universal Serial Bus (USB) register structure definition */
typedef struct
{
  __I  uint32_t Revision;                 /*!< Offset: 0x000 (R/ )  Revision Register */
  __IO uint32_t Control;                  /*!< Offset: 0x004 (R/W)  Control Register */
  __IO uint32_t CommandStatus;            /*!< Offset: 0x008 (R/W)  Command / Status Register */
  __IO uint32_t InterruptStatus;          /*!< Offset: 0x00C (R/W)  Interrupt Status Register */
  __IO uint32_t InterruptEnable;          /*!< Offset: 0x010 (R/W)  Interrupt Enable Register */
  __IO uint32_t InterruptDisable;         /*!< Offset: 0x014 (R/W)  Interrupt Disable Register */
  __IO uint32_t HCCA;                     /*!< Offset: 0x018 (R/W)  Host Controller communication Area Register */
  __I  uint32_t PeriodCurrentED;          /*!< Offset: 0x01C (R/ )   Register */
  __IO uint32_t ControlHeadED;            /*!< Offset: 0x020 (R/W)   Register */
  __IO uint32_t ControlCurrentED;         /*!< Offset: 0x024 (R/W)   Register */
  __IO uint32_t BulkHeadED;               /*!< Offset: 0x028 (R/W)   Register */
  __IO uint32_t BulkCurrentED;            /*!< Offset: 0x02C (R/W)   Register */
  __I  uint32_t DoneHead;                 /*!< Offset: 0x030 (R/ )   Register */
  __IO uint32_t FmInterval;               /*!< Offset: 0x034 (R/W)   Register */
  __I  uint32_t FmRemaining;              /*!< Offset: 0x038 (R/ )   Register */
  __I  uint32_t FmNumber;                 /*!< Offset: 0x03C (R/ )   Register */
  __IO uint32_t PeriodicStart;            /*!< Offset: 0x040 (R/W)   Register */
  __IO uint32_t LSTreshold;               /*!< Offset: 0x044 (R/W)   Register */
  __IO uint32_t RhDescriptorA;            /*!< Offset: 0x048 (R/W)   Register */
  __IO uint32_t RhDescriptorB;            /*!< Offset: 0x04C (R/W)   Register */
  __IO uint32_t RhStatus;                 /*!< Offset: 0x050 (R/W)   Register */
  __IO uint32_t RhPortStatus1;            /*!< Offset: 0x054 (R/W)   Register */
  __IO uint32_t RhPortStatus2;            /*!< Offset: 0x05C (R/W)   Register */
       uint32_t RESERVED0[40];
  __I  uint32_t Module_ID;                /*!< Offset: 0x0FC (R/ )  Module ID / Version Reverence ID Register */
                                          /* USB On-The-Go Registers            */
  __I  uint32_t IntSt;                    /*!< Offset: 0x100 (R/ )  OTG Interrupt Status Register */
  __IO uint32_t IntEn;                    /*!< Offset: 0x104 (R/W)  OTG Interrupt Enable Register */
  __O  uint32_t IntSet;                   /*!< Offset: 0x108 ( /W)  OTG Interrupt Set Register */
  __O  uint32_t IntClr;                   /*!< Offset: 0x10C ( /W)  OTG Interrupt Clear Register */
  __IO uint32_t StCtrl;                   /*!< Offset: 0x110 (R/W)  OTG Status and Control Register */
  __IO uint32_t Tmr;                      /*!< Offset: 0x114 (R/W)  OTG Timer Register */
       uint32_t RESERVED1[58];
                                          /* USB Device Interrupt Registers     */
  __I  uint32_t DevIntSt;                 /*!< Offset: 0x200 (R/ )  USB Device Interrupt Status Register */
  __IO uint32_t DevIntEn;                 /*!< Offset: 0x204 (R/W)  USB Device Interrupt Enable Register */
  __O  uint32_t DevIntClr;                /*!< Offset: 0x208 ( /W)  USB Device Interrupt Clear Register */
  __O  uint32_t DevIntSet;                /*!< Offset: 0x20C ( /W)  USB Device Interrupt Set Register */
                                          /* USB Device SIE Command Registers   */
  __O  uint32_t CmdCode;                  /*!< Offset: 0x210 (R/W)  USB Command Code Register */
  __I  uint32_t CmdData;                  /*!< Offset: 0x214 (R/W)  USB Command Data Register */
                                          /* USB Device Transfer Registers      */
  __I  uint32_t RxData;                   /*!< Offset: 0x218 (R/ )  USB Receive Data Register */
  __O  uint32_t TxData;                   /*!< Offset: 0x21C ( /W)  USB Transmit Data Register */
  __I  uint32_t RxPLen;                   /*!< Offset: 0x220 (R/ )  USB Receive Packet Length Register */
  __O  uint32_t TxPLen;                   /*!< Offset: 0x224 ( /W)  USB Transmit Packet Length Register */
  __IO uint32_t Ctrl;                     /*!< Offset: 0x228 (R/W)  USB Control Register */
  __O  uint32_t DevIntPri;                /*!< Offset: 0x22C (R/W)  USB Device Interrupt Priority Register */
                                          /* USB Device Endpoint Interrupt Regs */
  __I  uint32_t EpIntSt;                  /*!< Offset: 0x230 (R/ )  USB Endpoint Interrupt Status Register */
  __IO uint32_t EpIntEn;                  /*!< Offset: 0x234 (R/W)  USB Endpoint Interrupt Enable Register */
  __O  uint32_t EpIntClr;                 /*!< Offset: 0x238 ( /W)  USB Endpoint Interrupt Clear Register */
  __O  uint32_t EpIntSet;                 /*!< Offset: 0x23C ( /W)  USB Endpoint Interrupt Set Register */
  __O  uint32_t EpIntPri;                 /*!< Offset: 0x240 ( /W)  USB Endpoint Interrupt Priority Register */
                                          /* USB Device Endpoint Realization Reg*/
  __IO uint32_t ReEp;                     /*!< Offset: 0x244 (R/W)  USB Realize Endpoint Register */
  __O  uint32_t EpInd;                    /*!< Offset: 0x248 ( /W)  USB Endpoint Index Register */
  __IO uint32_t MaxPSize;                 /*!< Offset: 0x24C (R/W)  USB MaxPacketSize Register */
                                          /* USB Device DMA Registers           */
  __I  uint32_t DMARSt;                   /*!< Offset: 0x250 (R/ )  USB DMA Request Status Register */
  __O  uint32_t DMARClr;                  /*!< Offset: 0x254 ( /W)  USB DMA Request Clear Register */
  __O  uint32_t DMARSet;                  /*!< Offset: 0x258 ( /W)  USB DMA Request Set Register */
       uint32_t RESERVED2[9];
  __IO uint32_t UDCAH;                    /*!< Offset: 0x280 (R/W)  USB UDCA Head Register */
  __I  uint32_t EpDMASt;                  /*!< Offset: 0x284 (R/ )  USB EP DMA Status Register */
  __O  uint32_t EpDMAEn;                  /*!< Offset: 0x288 ( /W)  USB EP DMA Enable Register */
  __O  uint32_t EpDMADis;                 /*!< Offset: 0x28C ( /W)  USB EP DMA Disable Register */
  __I  uint32_t DMAIntSt;                 /*!< Offset: 0x290 (R/ )  USB DMA Interrupt Status Register */
  __IO uint32_t DMAIntEn;                 /*!< Offset: 0x294 (R/W)  USB DMA Interrupt Enable Register */
       uint32_t RESERVED3[2];
  __I  uint32_t EoTIntSt;                 /*!< Offset: 0x2A0 (R/ )  USB End of Transfer Interrupt Status Register */
  __O  uint32_t EoTIntClr;                /*!< Offset: 0x2A4 ( /W)  USB End of Transfer Interrupt Clear Register */
  __O  uint32_t EoTIntSet;                /*!< Offset: 0x2A8 ( /W)  USB End of Transfer Interrupt Set Register */
  __I  uint32_t NDDRIntSt;                /*!< Offset: 0x2AC (R/ )  USB New DD Request Interrupt Status Register */
  __O  uint32_t NDDRIntClr;               /*!< Offset: 0x2B0 ( /W)  USB New DD Request Interrupt Clear Register */
  __O  uint32_t NDDRIntSet;               /*!< Offset: 0x2B4 ( /W)  USB New DD Request Interrupt Set Register */
  __I  uint32_t SysErrIntSt;              /*!< Offset: 0x2B8 (R/ )  USB System Error Interrupt Status Register */
  __O  uint32_t SysErrIntClr;             /*!< Offset: 0x2BC ( /W)  USB System Error Interrupt Clear Register */
  __O  uint32_t SysErrIntSet;             /*!< Offset: 0x2C0 ( /W)  USB System Error Interrupt Set Register */
       uint32_t RESERVED4[15];
                                          /* USB OTG I2C Registers              */
  union {
  __I  uint32_t I2C_RX;                   /*!< Offset: 0x300 (R/ )  OTG I2C Receive Register */
  __O  uint32_t I2C_TX;                   /*!< Offset: 0x300 ( /W)  OTG I2C Transmit Register */
  };
  __I  uint32_t I2C_STS;                  /*!< Offset: 0x304 (R/ )  OTG I2C Status Register */
  __IO uint32_t I2C_CTL;                  /*!< Offset: 0x308 (R/W)  OTG I2C Control Register */
  __IO uint32_t I2C_CLKHI;                /*!< Offset: 0x30C (R/W)  OTG I2C Clock High Register */
  __O  uint32_t I2C_CLKLO;                /*!< Offset: 0x310 ( /W)  OTG I2C Clock Low Register */
       uint32_t RESERVED5[824];
                                          /* USB Clock Control Registers        */
  union {
  __IO uint32_t USBClkCtrl;               /*!< Offset: 0xFF4 (R/W)  OTG clock controller Register */
  __IO uint32_t OTGClkCtrl;               /*!< Offset: 0xFF4 (R/W)  USB clock controller Register */
  };
  union {
  __I  uint32_t USBClkSt;                 /*!< Offset: 0xFF8 (R/ )  OTG clock status Register */
  __I  uint32_t OTGClkSt;                 /*!< Offset: 0xFF8 (R/ )  USB clock status Register */
  };
} LPC_USB_TypeDef;

#define LPC_AHB_BASE          (0x50000000UL)
#define LPC_USB_BASE          (LPC_AHB_BASE  + 0x0C000)
#define LPC_USB               ((LPC_USB_TypeDef       *) LPC_USB_BASE      )
/* USB RAM Definitions */
#define USB_RAM_ADR     0x20080000  /* USB RAM Start Address */
#define USB_RAM_SZ      0x00004000  /* USB RAM Size (4kB) */

/* DMA Endpoint Descriptors */
#define DD_NISO_CNT             16  /* Non-Iso EP DMA Descr. Count (max. 32) */
#define DD_ISO_CNT               8  /* Iso EP DMA Descriptor Count (max. 32) */
#define DD_NISO_SZ    (DD_NISO_CNT * 16)    /* Non-Iso DMA Descr. Size */
#define DD_ISO_SZ     (DD_ISO_CNT  * 20)    /* Iso DMA Descriptor Size */
#define DD_NISO_ADR   (USB_RAM_ADR + 128)   /* Non-Iso DMA Descr. Address */
#define DD_ISO_ADR    (DD_NISO_ADR + DD_NISO_SZ) /* Iso DMA Descr. Address */
#define DD_SZ                 (128 + DD_NISO_SZ + DD_ISO_SZ) /* Descr. Size */

/* DMA Buffer Memory Definitions */
#define DMA_BUF_ADR   (USB_RAM_ADR + DD_SZ) /* DMA Buffer Start Address */
#define DMA_BUF_SZ    (USB_RAM_SZ  - DD_SZ) /* DMA Buffer Size */

/* USB Error Codes */
#define USB_ERR_PID         0x0001  /* PID Error */
#define USB_ERR_UEPKT       0x0002  /* Unexpected Packet */
#define USB_ERR_DCRC        0x0004  /* Data CRC Error */
#define USB_ERR_TIMOUT      0x0008  /* Bus Time-out Error */
#define USB_ERR_EOP         0x0010  /* End of Packet Error */
#define USB_ERR_B_OVRN      0x0020  /* Buffer Overrun */
#define USB_ERR_BTSTF       0x0040  /* Bit Stuff Error */
#define USB_ERR_TGL         0x0080  /* Toggle Bit Error */

/* USB DMA Status Codes */
#define USB_DMA_INVALID     0x0000  /* DMA Invalid - Not Configured */
#define USB_DMA_IDLE        0x0001  /* DMA Idle - Waiting for Trigger */
#define USB_DMA_BUSY        0x0002  /* DMA Busy - Transfer in progress */
#define USB_DMA_DONE        0x0003  /* DMA Transfer Done (no Errors)*/
#define USB_DMA_OVER_RUN    0x0004  /* Data Over Run */
#define USB_DMA_UNDER_RUN   0x0005  /* Data Under Run (Short Packet) */
#define USB_DMA_ERROR       0x0006  /* Error */
#define USB_DMA_UNKNOWN     0xFFFF  /* Unknown State */

/* USB DMA Descriptor */
typedef struct _USB_DMA_DESCRIPTOR {
  uint32_t BufAdr;                     /* DMA Buffer Address */
  uint16_t  BufLen;                     /* DMA Buffer Length */
  uint16_t  MaxSize;                    /* Maximum Packet Size */
  uint32_t InfoAdr;                    /* Packet Info Memory Address */
  union {                           /* DMA Configuration */
    struct {
      uint32_t Link   : 1;             /* Link to existing Descriptors */
      uint32_t IsoEP  : 1;             /* Isonchronous Endpoint */
      uint32_t ATLE   : 1;             /* ATLE (Auto Transfer Length Extract) */
      uint32_t Rsrvd  : 5;             /* Reserved */
      uint32_t LenPos : 8;             /* Length Position (ATLE) */
    } Type;
    uint32_t Val;
  } Cfg;
} USB_DMA_DESCRIPTOR;

/* USB Hardware Functions */
extern uint32_t  USB_DMA_Setup  (uint32_t EPNum, USB_DMA_DESCRIPTOR *pDD);
extern void  USB_DMA_Enable (uint32_t EPNum);
extern void  USB_DMA_Disable(uint32_t EPNum);
extern uint32_t USB_DMA_Status (uint32_t EPNum);
extern uint32_t USB_DMA_BufAdr (uint32_t EPNum);
extern uint32_t USB_DMA_BufCnt (uint32_t EPNum);
extern uint32_t USB_GetFrame   (void);
extern "C" void  USB_IRQHandler (void);

constexpr uint32_t EPAdr (uint32_t EPNum) {
  return ((EPNum & 0x0F) << 1) | ((EPNum & 0x80) >> 7);
}

#define EP_MSK_CTRL 0x0001      /* Control Endpoint Logical Address Mask */
#define EP_MSK_BULK 0xC924      /* Bulk Endpoint Logical Address Mask */
#define EP_MSK_INT  0x4492      /* Interrupt Endpoint Logical Address Mask */
#define EP_MSK_ISO  0x1248      /* Isochronous Endpoint Logical Address Mask */

template<typename Traits>
class USBHw
{
protected:
	static void WrCmd (uint32_t cmd) {
	  LPC_USB->DevIntClr = CCEMTY_INT;
	  LPC_USB->CmdCode = cmd;
	  while ((LPC_USB->DevIntSt & CCEMTY_INT) == 0);
	}

	static void WrCmdDat (uint32_t cmd, uint32_t val) {
	  LPC_USB->DevIntClr = CCEMTY_INT;
	  LPC_USB->CmdCode = cmd;
	  while ((LPC_USB->DevIntSt & CCEMTY_INT) == 0);
	  LPC_USB->DevIntClr = CCEMTY_INT;
	  LPC_USB->CmdCode = val;
	  while ((LPC_USB->DevIntSt & CCEMTY_INT) == 0);
	}

	static void WrCmdEP (uint32_t EPNum, uint32_t cmd){
	  LPC_USB->DevIntClr = CCEMTY_INT;
	  LPC_USB->CmdCode = CMD_SEL_EP(EPAdr(EPNum));
	  while ((LPC_USB->DevIntSt & CCEMTY_INT) == 0);
	  LPC_USB->DevIntClr = CCEMTY_INT;
	  LPC_USB->CmdCode = cmd;
	  while ((LPC_USB->DevIntSt & CCEMTY_INT) == 0);
	}

	static uint32_t RdCmdDat (uint32_t cmd) {
	  LPC_USB->DevIntClr = CCEMTY_INT | CDFULL_INT;
	  LPC_USB->CmdCode = cmd;
	  while ((LPC_USB->DevIntSt & CDFULL_INT) == 0);
	  return (LPC_USB->CmdData);
	}
	static void WakeUpCfg (uint32_t cfg) {
	  /* Not needed */
	}
	static void ConfigEP (USB_ENDPOINT_DESCRIPTOR *pEPD) {
	  uint32_t num;

	  num = EPAdr(pEPD->bEndpointAddress);
	  LPC_USB->ReEp |= (1 << num);
	  LPC_USB->EpInd = num;
	  LPC_USB->MaxPSize = pEPD->wMaxPacketSize;
	  while ((LPC_USB->DevIntSt & EP_RLZED_INT) == 0);
	  LPC_USB->DevIntClr = EP_RLZED_INT;
	}
	static void DirCtrlEP (RequestDirection dir) {
	  /* Not needed */
	}
	static void Suspend (void) {
	  /* Performed by Hardware */
	}
	static void Resume (void) {
	  /* Performed by Hardware */
	}


public:
	static void Connect (bool con) {
	  WrCmdDat(CMD_SET_DEV_STAT, DAT_WR_BYTE(con ? DEV_CON : 0));
	}
//	static void WakeUp (void) {
//	  if (DeviceStatus_ & USB_GETSTATUS_REMOTE_WAKEUP) {
//	    WrCmdDat(CMD_SET_DEV_STAT, DAT_WR_BYTE(DEV_CON));
//	  }
//	}
	static void SetAddress (uint32_t adr) {
	  WrCmdDat(CMD_SET_ADDR, DAT_WR_BYTE(DEV_EN | adr)); /* Don't wait for next */
	  WrCmdDat(CMD_SET_ADDR, DAT_WR_BYTE(DEV_EN | adr)); /*  Setup Status Phase */
	}
	static void Configure (uint32_t cfg) {

	  WrCmdDat(CMD_CFG_DEV, DAT_WR_BYTE(cfg ? CONF_DVICE : 0));

	  LPC_USB->ReEp = 0x00000003;
	  while ((LPC_USB->DevIntSt & EP_RLZED_INT) == 0);
	  LPC_USB->DevIntClr = EP_RLZED_INT;
	}
	static void EnableEP (uint32_t EPNum) {
	  WrCmdDat(CMD_SET_EP_STAT(EPAdr(EPNum)), DAT_WR_BYTE(0));
	}
	static void DisableEP (uint32_t EPNum) {
	  WrCmdDat(CMD_SET_EP_STAT(EPAdr(EPNum)), DAT_WR_BYTE(EP_STAT_DA));
	}
	static void ResetEP (uint32_t EPNum) {
	  WrCmdDat(CMD_SET_EP_STAT(EPAdr(EPNum)), DAT_WR_BYTE(0));
	}
	static void SetStallEP (uint32_t EPNum) {
	  WrCmdDat(CMD_SET_EP_STAT(EPAdr(EPNum)), DAT_WR_BYTE(EP_STAT_ST));
	}
	static void ClrStallEP (uint32_t EPNum) {
	  WrCmdDat(CMD_SET_EP_STAT(EPAdr(EPNum)), DAT_WR_BYTE(0));
	}
	static void ClearEPBuf (uint32_t EPNum) {
	  WrCmdEP(EPNum, CMD_CLR_BUF);
	}
	static uint32_t GetFrame (void) {
	  uint32_t val;

	  WrCmd(CMD_RD_FRAME);
	  val = RdCmdDat(DAT_RD_FRAME);
	  val = val | (RdCmdDat(DAT_RD_FRAME) << 8);

	  return (val);
	}
	static void Init (void) {
		  //LPC_PINCON->PINSEL1 &= ~((3<<26)|(3<<28));   /* P0.29 D+, P0.30 D- */
		  //LPC_PINCON->PINSEL1 |=  ((1<<26)|(1<<28));   /* PINSEL1 26.27, 28.29  = 01 */

		  //LPC_PINCON->PINSEL3 &= ~((3<< 4)/*|(3<<28)*/);   /* P1.18 GoodLink, P1.30 VBUS */
		  //LPC_PINCON->PINSEL3 |=  ((1<< 4)/*|(2<<28)*/);   /* PINSEL3 4.5 = 01, 28.29 = 10 */

		  //LPC_PINCON->PINSEL4 &= ~((3<<18)        );   /* P2.9 SoftConnect */
		  //LPC_PINCON->PINSEL4 |=  ((1<<18)        );   /* PINSEL4 18.19 = 01 */

		  //LPC_SC->PCONP |= (1UL<<31);                /* USB PCLK -> enable USB Per.       */

		  LPC_USB->USBClkCtrl = 0x12;                /* Dev, AHB clock enable */
		  while ((LPC_USB->USBClkSt & 0x12) != 0x12);

		  //Kvasir::Nvic::EnableIRQ<Kvasir::Nvic::Irqs::USB>();               /* enable USB interrupt */

		  Reset();
		  SetAddress(0);
	}
	static void Reset (void) {
	  LPC_USB->EpInd = 0;
	  LPC_USB->MaxPSize = Traits::EP0BufSize;
	  LPC_USB->EpInd = 1;
	  LPC_USB->MaxPSize = Traits::EP0BufSize;
	  while ((LPC_USB->DevIntSt & EP_RLZED_INT) == 0);

	  LPC_USB->EpIntClr  = 0xFFFFFFFF;
	  LPC_USB->EpIntEn   = 0xFFFFFFFF ^ USB_DMA_EP;
	  LPC_USB->DevIntClr = 0xFFFFFFFF;
	  LPC_USB->DevIntEn  = DEV_STAT_INT    | EP_SLOW_INT    |
	               (USB_SOF_EVENT   ? FRAME_INT : 0) |
	               (USB_ERROR_EVENT ? ERR_INT   : 0);

	#if USB_DMA
	  LPC_USB->UDCAH   = USB_RAM_ADR;
	  LPC_USB->DMARClr = 0xFFFFFFFF;
	  LPC_USB->EpDMADis  = 0xFFFFFFFF;
	  LPC_USB->EpDMAEn   = USB_DMA_EP;
	  LPC_USB->EoTIntClr = 0xFFFFFFFF;
	  LPC_USB->NDDRIntClr = 0xFFFFFFFF;
	  LPC_USB->SysErrIntClr = 0xFFFFFFFF;
	  LPC_USB->DMAIntEn  = 0x00000007;
	  DDMemMap[0] = 0x00000000;
	  DDMemMap[1] = 0x00000000;
	  for (unsigned long n = 0; n < USB_EP_NUM; n++) {
	    udca[n] = 0;
	    UDCA[n] = 0;
	  }
	#endif
	}
	static uint32_t ReadEP (uint32_t EPNum, uint8_t *pData) {
		  uint32_t cnt, n;

		  LPC_USB->Ctrl = ((EPNum & 0x0F) << 2) | CTRL_RD_EN;

		  do {
			cnt = LPC_USB->RxPLen;
		  } while ((cnt & PKT_RDY) == 0);
		  cnt &= PKT_LNGTH_MASK;

		  for (n = 0; n < (cnt + 3) / 4; n++) {
			*((__attribute__((packed)) uint32_t *)pData) = LPC_USB->RxData;
			pData += 4;
		  }
		  LPC_USB->Ctrl = 0;

		  if (((EP_MSK_ISO >> EPNum) & 1) == 0) {   /* Non-Isochronous Endpoint */
			WrCmdEP(EPNum, CMD_CLR_BUF);
		  }

		  return (cnt);
	}
	static uint32_t WriteEP (uint32_t EPNum, uint8_t *pData, uint32_t cnt) {
	  uint32_t n;

	  LPC_USB->Ctrl = ((EPNum & 0x0F) << 2) | CTRL_WR_EN;

	  LPC_USB->TxPLen = cnt;

	  for (n = 0; n < (cnt + 3) / 4; n++) {
	    LPC_USB->TxData = *((__attribute__((packed)) uint32_t *)pData);
	    pData += 4;
	  }
	  LPC_USB->Ctrl = 0;
	  WrCmdEP(EPNum, CMD_VALID_BUF);
	  return (cnt);
	}
};

