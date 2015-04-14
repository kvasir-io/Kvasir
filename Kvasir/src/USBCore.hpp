#pragma once

#include "USBHw.hpp"
#include "usbdesc.h"
#include "usbreg.h"
#include "CDC.h"
#include "MPLUtility.hpp"

namespace Kvasir {

/* USB Endpoint Data Structure */
typedef struct _USB_EP_DATA {
  uint8_t  *pData;
  uint16_t Count;
} USB_EP_DATA;

/* USB Endpoint Events Callback Pointers */
//extern void (* const USB_P_EP[16])(uint32_t event);
constexpr bool IsSelfPowered(uint8_t * in){
	return (in[7] & USB_CONFIG_POWERED_MASK) != 0;
}
//constexpr bool val = (USB_ConfigDescriptor[7] & USB_CONFIG_POWERED_MASK)!=0;

namespace Detail {
namespace {
	template<bool B>
	void CompileTimeTestForSelfPowered(DeviceStatus &stat){}
	template<>
	ALWAYS_INLINE void CompileTimeTestForSelfPowered<false>(DeviceStatus &stat)
	{
		stat = static_cast<DeviceStatus>(static_cast<uint8_t>(stat) &  ~static_cast<uint8_t>(DeviceStatus::SelfPowerdFlag));
	}
	template<>
	ALWAYS_INLINE void CompileTimeTestForSelfPowered<true>(DeviceStatus &stat){
		stat = static_cast<DeviceStatus>(static_cast<uint8_t>(stat) | static_cast<uint8_t>(DeviceStatus::SelfPowerdFlag));
	}
}
}


namespace Usb{
template<typename TDerived, typename TConfig>
class Base : public USBHw<TConfig>
{
	//redesign stuff
public:
	static constexpr auto init = MPL::list(TConfig::setPinFunction);
	static constexpr auto powerClockEnable = MPL::list(System::PowerControlForPeripherals::usbPowerOn);
private:
	//old stuff
	static uint8_t  deviceAddress_;
	static volatile uint8_t  configuration_;
	static uint32_t USB_EndPointMask;
	static uint32_t USB_EndPointHalt;
	static uint32_t USB_EndPointStall;                         /* EP must stay stalled */
	static uint8_t  USB_NumInterfaces;
	static uint8_t  USB_AltSetting[USB_IF_NUM];
	static USB_EP_DATA EP0Data;
	static USB_SETUP_PACKET SetupPacket;
	static DeviceStatus  deviceStatus_;
	static Kvasir::CDC::CDC_LINE_CODING CDC_LineCoding;

	protected:
	static uint8_t  EP0Buf[TConfig::ep0BufSize];
public:
	//static constexpr Nvic::Irqs MyIrq = Nvic::Irqs::USB;
	static bool Configured() ALWAYS_INLINE {return configuration_;}
	static uint32_t GetAddress() {
		return deviceAddress_;
	}
	static void RunningReinit(uint32_t usbAddress) {
		deviceAddress_ = usbAddress;
		configuration_ = 0x01;
		USB_EndPointMask = 0x70005;
		USB_EndPointHalt = 0x00;
		USB_EndPointStall = 0x00;
		USB_NumInterfaces = 0x02;
		for(unsigned i=0;i<USB_IF_NUM;i++){
			USB_AltSetting[i]=0;
		}
		deviceStatus_ = DeviceStatus::BusPowered;
	}

private:
	static uint32_t CDC_GetLineCoding (void) {

//	  EP0Buf[0] = (CDC_LineCoding.dwDTERate >>  0) & 0xFF;
//	  EP0Buf[1] = (CDC_LineCoding.dwDTERate >>  8) & 0xFF;
//	  EP0Buf[2] = (CDC_LineCoding.dwDTERate >> 16) & 0xFF;
//	  EP0Buf[3] = (CDC_LineCoding.dwDTERate >> 24) & 0xFF;
//	  EP0Buf[4] =  CDC_LineCoding.bCharFormat;
//	  EP0Buf[5] =  CDC_LineCoding.bParityType;
//	  EP0Buf[6] =  CDC_LineCoding.bDataBits;

	  return (TRUE);
	}

	static uint32_t CDC_SetLineCoding (void) {

//	  CDC_LineCoding.dwDTERate   =   (EP0Buf[0] <<  0)
//	                               | (EP0Buf[1] <<  8)
//	                               | (EP0Buf[2] << 16)
//	                               | (EP0Buf[3] << 24);
//	  CDC_LineCoding.bCharFormat =  EP0Buf[4];
//	  CDC_LineCoding.bParityType =  EP0Buf[5];
//	  CDC_LineCoding.bDataBits   =  EP0Buf[6];

	  return (TRUE);
	}

	static __inline uint32_t ReqGetStatus () {
	  switch (SetupPacket.Recipient()) {
	    case RequestRecipient::Device:
	      EP0Data.pData = (uint8_t*)&deviceStatus_;
	      break;
	    case RequestRecipient::Interface:
	      if ((configuration_ != 0) && (SetupPacket.wIndex.WB.L < USB_NumInterfaces)) {
	        *((__attribute__((packed)) uint16_t *)EP0Buf) = 0;
	        EP0Data.pData = EP0Buf;
	      } else {
	        return (FALSE);
	      }
	      break;
	    case RequestRecipient::Endpoint:
	    {
	      auto epNum = SetupPacket.wIndex.WB.L & 0x8F;
	      auto m = (epNum & 0x80) ? ((1 << 16) << (epNum & 0x0F)) : (1 << epNum);
	      if (((configuration_ != 0) || ((epNum & 0x0F) == 0)) && (USB_EndPointMask & m)) {
	        *((__attribute__((packed)) uint16_t *)EP0Buf) = (USB_EndPointHalt & m) ? 1 : 0;
	        EP0Data.pData = EP0Buf;
	      } else {
	        return (FALSE);
	      }
	      break;
	    }
	    default:
	      return (FALSE);
	  }
	  return (TRUE);
	}

	static __inline uint32_t ReqSetClrFeature (uint32_t sc) {
	  uint32_t n, m;

	  switch (SetupPacket.Recipient()) {
	    case RequestRecipient::Device:
	      if (SetupPacket.wValue.W == USB_FEATURE_REMOTE_WAKEUP) {
	        if (sc) {
	        	Base::WakeUpCfg(TRUE);
	          deviceStatus_ = (DeviceStatus)(static_cast<uint8_t>(deviceStatus_) |  static_cast<uint8_t>(DeviceStatus::RemoteWakeupFlag));
	        } else {
	        	Base::WakeUpCfg(FALSE);
	          deviceStatus_ = (DeviceStatus)(static_cast<uint8_t>(deviceStatus_) & ~static_cast<uint8_t>(DeviceStatus::RemoteWakeupFlag));
	        }
	      } else {
	        return (FALSE);
	      }
	      break;
	    case RequestRecipient::Interface:
	      return (FALSE);
	    case RequestRecipient::Endpoint:
	      n = SetupPacket.wIndex.WB.L & 0x8F;
	      m = (n & 0x80) ? ((1 << 16) << (n & 0x0F)) : (1 << n);
	      if ((configuration_ != 0) && ((n & 0x0F) != 0) && (USB_EndPointMask & m)) {
	        if (SetupPacket.wValue.W == USB_FEATURE_ENDPOINT_STALL) {
	          if (sc) {
	        	  Base::SetStallEP(n);
	            USB_EndPointHalt |=  m;
	          } else {
	            if ((USB_EndPointStall & m) != 0) {
	              return (TRUE);
	            }
	            Base::ClrStallEP(n);
	#if (USB_MSC)
	            if ((n == MSC_EP_IN) && ((USB_EndPointHalt & m) != 0)) {
	              /* Compliance Test: rewrite CSW after unstall */
	              if (CSW.dSignature == MSC_CSW_Signature) {
	                USB_WriteEP(MSC_EP_IN, (uint8_t *)&CSW, sizeof(CSW));
	              }
	            }
	#endif
	            USB_EndPointHalt &= ~m;
	          }
	        } else {
	          return (FALSE);
	        }
	      } else {
	        return (FALSE);
	      }
	      break;
	    default:
	      return (FALSE);
	  }
	  return (TRUE);
	}

	static __inline uint32_t ReqSetAddress (void) {
	  if (SetupPacket.Recipient() == RequestRecipient::Device) {
	      deviceAddress_ = 0x80 | SetupPacket.wValue.WB.L;
	      return true;
	  }
	  return false;
	}

	static __inline uint32_t ReqGetDescriptor (void) {

	  switch (SetupPacket.Recipient()) {
	    case RequestRecipient::Device:
	      switch (SetupPacket.wValue.WB.H) {
	        case USB_DEVICE_DESCRIPTOR_TYPE:
				EP0Data.pData = (uint8_t *)TConfig::DeviceDescriptor.data_;
				EP0Data.Count = USB_DEVICE_DESC_SIZE;
				break;
	        case USB_CONFIGURATION_DESCRIPTOR_TYPE:
	        {
	        	uint8_t  *pD = (uint8_t *)TConfig::ConfigDescriptor.data_;
	        	for (unsigned n = 0; n != SetupPacket.wValue.WB.L; n++) {
	        		if (((USB_CONFIGURATION_DESCRIPTOR *)pD)->bLength != 0) {
	        			pD += ((USB_CONFIGURATION_DESCRIPTOR *)pD)->wTotalLength;
	        		}
	        	}

	        	if (((USB_CONFIGURATION_DESCRIPTOR *)pD)->bLength == 0) {
	        		return (FALSE);
	        	}
	        	EP0Data.pData = pD;
	        	EP0Data.Count = ((USB_CONFIGURATION_DESCRIPTOR *)pD)->wTotalLength;
	        	break;
	        }
	        case USB_STRING_DESCRIPTOR_TYPE:
	        {
	        	uint8_t  *pD = (uint8_t *)USB_StringDescriptor;
	        	for (unsigned n = 0; n != SetupPacket.wValue.WB.L; n++) {
	        		if (((USB_STRING_DESCRIPTOR *)pD)->bLength != 0) {
	        			pD += ((USB_STRING_DESCRIPTOR *)pD)->bLength;
	        		}
	        	}
	        	if (((USB_STRING_DESCRIPTOR *)pD)->bLength == 0) {
	        		return (FALSE);
	        	}
	        	EP0Data.pData = pD;
	        	EP0Data.Count = ((USB_STRING_DESCRIPTOR *)EP0Data.pData)->bLength;
	        	break;
	        }
	        default:
	          return (FALSE);
	      }
	      break;
        case RequestRecipient::Interface:
	    default:
	      return (FALSE);
	  }
	  return (TRUE);
	}
	static __inline bool ReqGetConfiguration (void) {

	  if (SetupPacket.Recipient() == RequestRecipient::Device) {
	      EP0Data.pData = (uint8_t*)&configuration_;
	      return true;
	  }
	  return false;
	}
	static __inline uint32_t ReqSetConfiguration (void) {
	  USB_COMMON_DESCRIPTOR *pD;
	  uint32_t alt = 0;
	  uint32_t n, m;

	  switch (SetupPacket.Recipient()) {
	    case RequestRecipient::Device:

	      if (SetupPacket.wValue.WB.L) {
	    	  //TODO metaprogram this
	        pD = (USB_COMMON_DESCRIPTOR *)TConfig::ConfigDescriptor.data_;
	        while (pD->bLength) {
	          switch (pD->bDescriptorType) {
	            case USB_CONFIGURATION_DESCRIPTOR_TYPE:
	              if (((USB_CONFIGURATION_DESCRIPTOR *)pD)->bConfigurationValue == SetupPacket.wValue.WB.L) {
	                configuration_ = SetupPacket.wValue.WB.L;
	                USB_NumInterfaces = ((USB_CONFIGURATION_DESCRIPTOR *)pD)->bNumInterfaces;
	                for (n = 0; n < USB_IF_NUM; n++) {
	                  USB_AltSetting[n] = 0;
	                }
	                for (n = 1; n < 16; n++) {
	                  if (USB_EndPointMask & (1 << n)) {
	                	  Base::DisableEP(n);
	                  }
	                  if (USB_EndPointMask & ((1 << 16) << n)) {
	                	  Base::DisableEP(n | 0x80);
	                  }
	                }
	                USB_EndPointMask = 0x00010001;
	                USB_EndPointHalt = 0x00000000;
	                USB_EndPointStall= 0x00000000;
	                Base::Configure(TRUE);
	                Detail::CompileTimeTestForSelfPowered<false>(deviceStatus_);
	                //static_assert(__GNUC__ == 4 && __GNUC_MINOR__ == 6,"TODO decide if self powered using derived class traits after upgrade to new version of GCC");
	              } else {
	                pD = (USB_COMMON_DESCRIPTOR *)((uint32_t)pD + ((__attribute__((packed)) USB_CONFIGURATION_DESCRIPTOR *)pD)->wTotalLength);
	                continue;
	              }
	              break;
	            case USB_INTERFACE_DESCRIPTOR_TYPE:
	              alt = ((USB_INTERFACE_DESCRIPTOR *)pD)->bAlternateSetting;
	              break;
	            case USB_ENDPOINT_DESCRIPTOR_TYPE:
	              if (alt == 0) {
	                n = ((USB_ENDPOINT_DESCRIPTOR *)pD)->bEndpointAddress & 0x8F;
	                m = (n & 0x80) ? ((1 << 16) << (n & 0x0F)) : (1 << n);
	                USB_EndPointMask |= m;
	                Base::ConfigEP((USB_ENDPOINT_DESCRIPTOR *)pD);
	                Base::EnableEP(n);
	                Base::ResetEP(n);
	              }
	              break;
	          }
	          pD = (USB_COMMON_DESCRIPTOR *)((uint32_t)pD + pD->bLength);
	        }
	      }
	      else {
	        configuration_ = 0;
	        for (n = 1; n < 16; n++) {
	          if (USB_EndPointMask & (1 << n)) {
	        	  Base::DisableEP(n);
	          }
	          if (USB_EndPointMask & ((1 << 16) << n)) {
	        	  Base::DisableEP(n | 0x80);
	          }
	        }
	        USB_EndPointMask  = 0x00010001;
	        USB_EndPointHalt  = 0x00000000;
	        USB_EndPointStall = 0x00000000;
	        Base::Configure(FALSE);
	      }

	      if (configuration_ != SetupPacket.wValue.WB.L) {
	        return (FALSE);
	      }
	      break;
	    default:
	      return (FALSE);
	  }
	  return (TRUE);
	}
	static __inline uint32_t ReqGetInterface (void) {

	  switch (SetupPacket.Recipient()) {
	    case RequestRecipient::Interface:
	      if ((configuration_ != 0) && (SetupPacket.wIndex.WB.L < USB_NumInterfaces)) {
	        EP0Data.pData = USB_AltSetting + SetupPacket.wIndex.WB.L;
	      } else {
	        return (FALSE);
	      }
	      break;
	    default:
	      return (FALSE);
	  }
	  return (TRUE);
	}
	static __inline uint32_t ReqSetInterface (void) {
	  USB_COMMON_DESCRIPTOR *pD;
	  uint32_t ifn = 0, alt = 0, old = 0, msk = 0;
	  uint32_t n, m;
	  uint32_t set;

	  switch (SetupPacket.Recipient()) {
	    case RequestRecipient::Interface:
	      if (configuration_ == 0) return (FALSE);
	      set = FALSE;
	      pD  = (USB_COMMON_DESCRIPTOR *)TConfig::ConfigDescriptor.data_;
	      while (pD->bLength) {
	        switch (pD->bDescriptorType) {
	          case USB_CONFIGURATION_DESCRIPTOR_TYPE:
	            if (((USB_CONFIGURATION_DESCRIPTOR *)pD)->bConfigurationValue != configuration_) {
	              pD = (USB_COMMON_DESCRIPTOR *)((uint32_t)pD + ((__attribute__((packed)) USB_CONFIGURATION_DESCRIPTOR *)pD)->wTotalLength);
	              continue;
	            }
	            break;
	          case USB_INTERFACE_DESCRIPTOR_TYPE:
	            ifn = ((USB_INTERFACE_DESCRIPTOR *)pD)->bInterfaceNumber;
	            alt = ((USB_INTERFACE_DESCRIPTOR *)pD)->bAlternateSetting;
	            msk = 0;
	            if ((ifn == SetupPacket.wIndex.WB.L) && (alt == SetupPacket.wValue.WB.L)) {
	              set = TRUE;
	              old = USB_AltSetting[ifn];
	              USB_AltSetting[ifn] = (uint8_t)alt;
	            }
	            break;
	          case USB_ENDPOINT_DESCRIPTOR_TYPE:
	            if (ifn == SetupPacket.wIndex.WB.L) {
	              n = ((USB_ENDPOINT_DESCRIPTOR *)pD)->bEndpointAddress & 0x8F;
	              m = (n & 0x80) ? ((1 << 16) << (n & 0x0F)) : (1 << n);
	              if (alt == SetupPacket.wValue.WB.L) {
	                USB_EndPointMask |=  m;
	                USB_EndPointHalt &= ~m;
	                Base::ConfigEP((USB_ENDPOINT_DESCRIPTOR *)pD);
	                Base::EnableEP(n);
	                Base::ResetEP(n);
	                msk |= m;
	              }
	              else if ((alt == old) && ((msk & m) == 0)) {
	                USB_EndPointMask &= ~m;
	                USB_EndPointHalt &= ~m;
	                Base::DisableEP(n);
	              }
	            }
	           break;
	        }
	        pD = (USB_COMMON_DESCRIPTOR *)((uint32_t *)pD + pD->bLength);
	      }
	      break;
	    default:
	      return (FALSE);
	  }

	  return (set);
	}
	static __inline void ConfigureEvent(){}
	static __inline void EP0Setup () {
	      Base::SetupStage();
	      Base::DirCtrlEP(SetupPacket.Direction());
	      EP0Data.Count = SetupPacket.wLength;     /* Number of bytes to transfer */
	      switch (SetupPacket.Type()) {

	        case RequestType::Standard:
	          switch (SetupPacket.request_) {
	            case RequestCode::GetStatus:
	              if (!ReqGetStatus()) {
	                goto stall_i;
	              }
	              Base::DataInStage();
	              break;

	            case RequestCode::ClearFeature:
	              if (!ReqSetClrFeature(0)) {
	                goto stall_i;
	              }
	              Base::StatusInStage();
	#if USB_FEATURE_EVENT
	              USB_Feature_Event();
	#endif
	              break;

	            case RequestCode::SetFeature:
	              if (!ReqSetClrFeature(1)) {
	                goto stall_i;
	              }
	              Base::StatusInStage();
	#if USB_FEATURE_EVENT
	              USB_Feature_Event();
	#endif
	              break;

	            case RequestCode::SetAddress:
	              if (!ReqSetAddress()) {
	                goto stall_i;
	              }
	              Base::StatusInStage();
	              break;

	            case RequestCode::GetDescriptor:
	              if (!ReqGetDescriptor()) {
	                goto stall_i;
	              }
	              Base::DataInStage();
	              break;

	            case RequestCode::SetDescriptor:
	/*stall_o:*/  USBHw<TConfig>::SetStallEP(0x00);            /* not supported */
	              EP0Data.Count = 0;
	              break;

	            case RequestCode::GetConfiguration:
	              if (!ReqGetConfiguration()) {
	                goto stall_i;
	              }
	              DataInStage();
	              break;

	            case RequestCode::SetConfiguration:
	              if (!ReqSetConfiguration()) {
	                goto stall_i;
	              }
	              StatusInStage();
	#if USB_CONFIGURE_EVENT
	              ConfigureEvent();
	#endif
	              break;

	            case RequestCode::GetInterface:
	              if (!ReqGetInterface()) {
	                goto stall_i;
	              }
	              Base::DataInStage();
	              break;

	            case RequestCode::SetInterface:
	              if (!ReqSetInterface()) {
	                goto stall_i;
	              }
	              Base::StatusInStage();
	#if USB_INTERFACE_EVENT
	              USB_Interface_Event();
	#endif
	              break;

	            default:
	              goto stall_i;
	          }
	          break;  /* end case REQUEST_STANDARD */

	#if USB_CLASS
	        case RequestType::Class:
	          switch (SetupPacket.Recipient()) {

	            case RequestRecipient::Device:
	              goto stall_i;                                              /* not supported */

	            case RequestRecipient::Interface:
	#if USB_HID
	              if (SetupPacket.wIndex.WB.L == USB_HID_IF_NUM) {           /* IF number correct? */
	                switch (SetupPacket.bRequest) {
	                  case HID_REQUEST_GET_REPORT:
	                    if (HID_GetReport()) {
	                      EP0Data.pData = EP0Buf;                            /* point to data to be sent */
	                      USB_DataInStage();                                 /* send requested data */
	                      goto setup_class_ok;
	                    }
	                    break;
	                  case HID_REQUEST_SET_REPORT:
	                    EP0Data.pData = EP0Buf;                              /* data to be received */
	                    goto setup_class_ok;
	                  case HID_REQUEST_GET_IDLE:
	                    if (HID_GetIdle()) {
	                      EP0Data.pData = EP0Buf;                            /* point to data to be sent */
	                      USB_DataInStage();                                 /* send requested data */
	                      goto setup_class_ok;
	                    }
	                    break;
	                  case HID_REQUEST_SET_IDLE:
	                    if (HID_SetIdle()) {
	                      USB_StatusInStage();                               /* send Acknowledge */
	                      goto setup_class_ok;
	                    }
	                    break;
	                  case HID_REQUEST_GET_PROTOCOL:
	                    if (HID_GetProtocol()) {
	                      EP0Data.pData = EP0Buf;                            /* point to data to be sent */
	                      USB_DataInStage();                                 /* send requested data */
	                      goto setup_class_ok;
	                    }
	                    break;
	                  case HID_REQUEST_SET_PROTOCOL:
	                    if (HID_SetProtocol()) {
	                      USB_StatusInStage();                               /* send Acknowledge */
	                      goto setup_class_ok;
	                    }
	                    break;
	                }
	              }
	#endif  /* USB_HID */
	#if USB_MSC
	              if (SetupPacket.wIndex.WB.L == USB_MSC_IF_NUM) {           /* IF number correct? */
	                switch (SetupPacket.bRequest) {
	                  case MSC_REQUEST_RESET:
	                    if ((SetupPacket.wValue.W == 0) &&	                 /* RESET with invalid parameters -> STALL */
	                        (SetupPacket.wLength  == 0)) {
	                      if (MSC_Reset()) {
	                        USB_StatusInStage();
	                        goto setup_class_ok;
	                      }
	                    }
	                    break;
	                  case MSC_REQUEST_GET_MAX_LUN:
	                    if ((SetupPacket.wValue.W == 0) &&	                 /* GET_MAX_LUN with invalid parameters -> STALL */
	                        (SetupPacket.wLength  == 1)) {
	                      if (MSC_GetMaxLUN()) {
	                        EP0Data.pData = EP0Buf;
	                        USB_DataInStage();
	                        goto setup_class_ok;
	                      }
	                    }
	                    break;
	                }
	              }
	#endif  /* USB_MSC */
	#if USB_AUDIO
	              if ((SetupPacket.wIndex.WB.L == USB_ADC_CIF_NUM)  ||       /* IF number correct? */
	                  (SetupPacket.wIndex.WB.L == USB_ADC_SIF1_NUM) ||
	                  (SetupPacket.wIndex.WB.L == USB_ADC_SIF2_NUM)) {
	                switch (SetupPacket.bRequest) {
	                  case AUDIO_REQUEST_GET_CUR:
	                  case AUDIO_REQUEST_GET_MIN:
	                  case AUDIO_REQUEST_GET_MAX:
	                  case AUDIO_REQUEST_GET_RES:
	                    if (ADC_IF_GetRequest()) {
	                      EP0Data.pData = EP0Buf;                            /* point to data to be sent */
	                      USB_DataInStage();                                 /* send requested data */
	                      goto setup_class_ok;
	                    }
	                    break;
	                  case AUDIO_REQUEST_SET_CUR:
	//                case AUDIO_REQUEST_SET_MIN:
	//                case AUDIO_REQUEST_SET_MAX:
	//                case AUDIO_REQUEST_SET_RES:
	                    EP0Data.pData = EP0Buf;                              /* data to be received */
	                    goto setup_class_ok;
	                }
	              }
	#endif  /* USB_AUDIO */
#define CDC_SEND_ENCAPSULATED_COMMAND           0x00
#define CDC_GET_ENCAPSULATED_RESPONSE           0x01
#define CDC_SET_COMM_FEATURE                    0x02
#define CDC_GET_COMM_FEATURE                    0x03
#define CDC_CLEAR_COMM_FEATURE                  0x04
#define CDC_SET_AUX_LINE_STATE                  0x10
#define CDC_SET_HOOK_STATE                      0x11
#define CDC_PULSE_SETUP                         0x12
#define CDC_SEND_PULSE                          0x13
#define CDC_SET_PULSE_TIME                      0x14
#define CDC_RING_AUX_JACK                       0x15
#define CDC_SET_LINE_CODING                     0x20
#define CDC_GET_LINE_CODING                     0x21
#define CDC_SET_CONTROL_LINE_STATE              0x22
#define CDC_SEND_BREAK                          0x23
#define CDC_SET_RINGER_PARMS                    0x30
#define CDC_GET_RINGER_PARMS                    0x31
#define CDC_SET_OPERATION_PARMS                 0x32
#define CDC_GET_OPERATION_PARMS                 0x33
#define CDC_SET_LINE_PARMS                      0x34
#define CDC_GET_LINE_PARMS                      0x35
#define CDC_DIAL_DIGITS                         0x36
#define CDC_SET_UNIT_PARAMETER                  0x37
#define CDC_GET_UNIT_PARAMETER                  0x38
#define CDC_CLEAR_UNIT_PARAMETER                0x39

	              if ((SetupPacket.wIndex.WB.L == USB_CDC_CIF_NUM)  ||       /* IF number correct? */
	                  (SetupPacket.wIndex.WB.L == USB_CDC_DIF_NUM)) {
	            	  //Derived::RequestClassInterface();
	                  switch ((int)SetupPacket.request_) {
	                    case CDC_SEND_ENCAPSULATED_COMMAND:
	                      EP0Data.pData = EP0Buf;                              /* data to be received, see USB_EVT_OUT */
	                      goto setup_class_ok;
	                    case CDC_GET_ENCAPSULATED_RESPONSE:
	                      if (true/*CDC_GetEncapsulatedResponse()*/) {
	                        EP0Data.pData = EP0Buf;                            /* point to data to be sent */
	                        Base::DataInStage();                            /* send requested data */
	                        goto setup_class_ok;
	                      }
	                      break;
	                    case CDC_SET_COMM_FEATURE:
	                      EP0Data.pData = EP0Buf;                              /* data to be received, see USB_EVT_OUT */
	                      goto setup_class_ok;
	                    case CDC_GET_COMM_FEATURE:
	                      if (true/*CDC_GetCommFeature(SetupPacket.wValue.W)*/) {
	                        EP0Data.pData = EP0Buf;                            /* point to data to be sent */
	                        Base::DataInStage();                                  /* send requested data */
	                        goto setup_class_ok;
	                      }
	                      break;
	                    case CDC_SET_LINE_CODING:
	                      EP0Data.pData = EP0Buf;                              /* data to be received, see USB_EVT_OUT */
	                      goto setup_class_ok;
	                    case CDC_GET_LINE_CODING:
	                      if (CDC_GetLineCoding()) {
	                        EP0Data.pData = EP0Buf;                            /* point to data to be sent */
	                        Base::DataInStage();                              /* send requested data */
	                        goto setup_class_ok;
	                      }
	                      break;
	                    default:
	                    	Base::StatusInStage();                               /* send Acknowledge */
	                    	return;
	                    	break;
	                  }
	              }

	              goto stall_i;                                              /* not supported */
	              /* end case REQUEST_TO_INTERFACE */

	            case RequestRecipient::Endpoint:
	#if USB_AUDIO
	              switch (SetupPacket.bRequest) {
	                case AUDIO_REQUEST_GET_CUR:
	                case AUDIO_REQUEST_GET_MIN:
	                case AUDIO_REQUEST_GET_MAX:
	                case AUDIO_REQUEST_GET_RES:
	                  if (ADC_EP_GetRequest()) {
	                    EP0Data.pData = EP0Buf;                              /* point to data to be sent */
	                    USB_DataInStage();                                   /* send requested data */
	                    goto setup_class_ok;
	                  }
	                  break;
	                case AUDIO_REQUEST_SET_CUR:
	//              case AUDIO_REQUEST_SET_MIN:
	//              case AUDIO_REQUEST_SET_MAX:
	//              case AUDIO_REQUEST_SET_RES:
	                  EP0Data.pData = EP0Buf;                                /* data to be received */
	                  goto setup_class_ok;
	              }
	#endif  /* USB_AUDIO */
	              goto stall_i;
	              /* end case REQUEST_TO_ENDPOINT */

	            default:
	              goto stall_i;
	          }
	setup_class_ok:                                                          /* request finished successfully */
	          break;  /* end case REQUEST_CLASS */
	#endif  /* USB_CLASS */

	#if USB_VENDOR
	        case REQUEST_VENDOR:
	          switch (SetupPacket.bmRequestType.BM.Recipient) {

	            case REQUEST_TO_DEVICE:
	              if (!USB_ReqVendorDev(TRUE)) {
	                goto stall_i;                                            /* not supported */
	              }
	              break;

	            case REQUEST_TO_INTERFACE:
	              if (!USB_ReqVendorIF(TRUE)) {
	                goto stall_i;                                            /* not supported */
	              }
	              break;

	            case REQUEST_TO_ENDPOINT:
	              if (!USB_ReqVendorEP(TRUE)) {
	                goto stall_i;                                            /* not supported */
	              }
	              break;

	            default:
	              goto stall_i;
	          }

	          if (SetupPacket.wLength) {
	            if (SetupPacket.bmRequestType.BM.Dir == REQUEST_DEVICE_TO_HOST) {
	              USB_DataInStage();
	            }
	          } else {
	            USB_StatusInStage();
	          }

	          break;  /* end case REQUEST_VENDOR */
	#endif  /* USB_VENDOR */

	        default:
	stall_i:  Base::SetStallEP(0x80);
	          EP0Data.Count = 0;
	          break;
	      }
	}
	static __inline void EP0Out () {
	      if (SetupPacket.Direction() == RequestDirection::HostToDevice) {
	        if (EP0Data.Count) {                                             /* still data to receive ? */
	          Base::DataOutStage();                                            /* receive data */
	          if (EP0Data.Count == 0) {                                      /* data complete ? */
	            switch (SetupPacket.Type()) {

	              case RequestType::Standard:
	                goto stall_i;                                            /* not supported */

	#if (USB_CLASS)
	              case RequestType::Class:
	                switch (SetupPacket.Recipient()) {
	                  case RequestRecipient::Device:
	                    goto stall_i;                                        /* not supported */

	                  case RequestRecipient::Interface:
	#if USB_HID
	                    if (SetupPacket.wIndex.WB.L == USB_HID_IF_NUM) {     /* IF number correct? */
	                      switch (SetupPacket.bRequest) {
	                        case HID_REQUEST_SET_REPORT:
	                          if (HID_SetReport()) {
	                            USB_StatusInStage();                         /* send Acknowledge */
	                            goto out_class_ok;
	                          }
	                          break;
	                      }
	                    }
	#endif  /* USB_HID */
	#if USB_AUDIO
	                    if ((SetupPacket.wIndex.WB.L == USB_ADC_CIF_NUM)  || /* IF number correct? */
	                        (SetupPacket.wIndex.WB.L == USB_ADC_SIF1_NUM) ||
	                        (SetupPacket.wIndex.WB.L == USB_ADC_SIF2_NUM)) {
	                      switch (SetupPacket.bRequest) {
	                        case AUDIO_REQUEST_SET_CUR:
	//                      case AUDIO_REQUEST_SET_MIN:
	//                      case AUDIO_REQUEST_SET_MAX:
	//                      case AUDIO_REQUEST_SET_RES:
	                          if (ADC_IF_SetRequest()) {
	                            USB_StatusInStage();                         /* send Acknowledge */
	                            goto out_class_ok;
	                          }
	                          break;
	                      }
	                    }
	#endif  /* USB_AUDIO */
	#if USB_CDC

#define CDC_SEND_ENCAPSULATED_COMMAND           0x00
#define CDC_GET_ENCAPSULATED_RESPONSE           0x01
#define CDC_SET_COMM_FEATURE                    0x02
#define CDC_GET_COMM_FEATURE                    0x03
#define CDC_CLEAR_COMM_FEATURE                  0x04
#define CDC_SET_AUX_LINE_STATE                  0x10
#define CDC_SET_HOOK_STATE                      0x11
#define CDC_PULSE_SETUP                         0x12
#define CDC_SEND_PULSE                          0x13
#define CDC_SET_PULSE_TIME                      0x14
#define CDC_RING_AUX_JACK                       0x15
#define CDC_SET_LINE_CODING                     0x20
	                    if ((SetupPacket.wIndex.WB.L == USB_CDC_CIF_NUM)  || /* IF number correct? */
	                        (SetupPacket.wIndex.WB.L == USB_CDC_DIF_NUM)) {
//	                      switch ((int)SetupPacket.request_) {
//	                        case CDC_SEND_ENCAPSULATED_COMMAND:
	                          Base::StatusInStage();                         /* send Acknowledge */
//	                          goto out_class_ok;
//	                          break;
//	                        case CDC_SET_COMM_FEATURE:
//	                          USBCore::StatusInStage();                         /* send Acknowledge */
//	                          goto out_class_ok;
//	                          break;
//	                        case CDC_SET_LINE_CODING:
//	                        	CDC_SetLineCoding();
//	                          USBCore::StatusInStage();                         /* send Acknowledge */
	                          return;
//	                          break;
//	                      }
	                    }
	#endif  /* USB_CDC */
	                    goto stall_i;
	                    /* end case REQUEST_TO_INTERFACE */

	                  case RequestRecipient::Endpoint:
	#if USB_AUDIO
	                    switch (SetupPacket.bRequest) {
	                      case AUDIO_REQUEST_SET_CUR:
	//                    case AUDIO_REQUEST_SET_MIN:
	//                    case AUDIO_REQUEST_SET_MAX:
	//                    case AUDIO_REQUEST_SET_RES:
	                        if (ADC_EP_SetRequest()) {
	                          USB_StatusInStage();                           /* send Acknowledge */
	                          goto out_class_ok;
	                        }
	                        break;
	                    }
	#endif  /* USB_AUDIO */
	                    goto stall_i;
	                    /* end case REQUEST_TO_ENDPOINT */

	                  default:
	                    goto stall_i;
	                }
	out_class_ok:                                                            /* request finished successfully */
	                break; /* end case REQUEST_CLASS */
	#endif  /* USB_CLASS */

	#if USB_VENDOR
	              case REQUEST_VENDOR:
	                switch (SetupPacket.bmRequestType.BM.Recipient) {

	                  case REQUEST_TO_DEVICE:
	                    if (!USB_ReqVendorDev(FALSE)) {
	                      goto stall_i;                                      /* not supported */
	                    }
	                    break;

	                  case REQUEST_TO_INTERFACE:
	                    if (!USB_ReqVendorIF(FALSE)) {
	                      goto stall_i;                                      /* not supported */
	                    }
	                    break;

	                  case REQUEST_TO_ENDPOINT:
	                    if (!USB_ReqVendorEP(FALSE)) {
	                      goto stall_i;                                      /* not supported */
	                    }
	                    break;

	                  default:
	                    goto stall_i;
	                }

	                USB_StatusInStage();

	                break;  /* end case REQUEST_VENDOR */
	#endif  /* USB_VENDOR */

	              default:
	                goto stall_i;
	            }
	          }
	        }
	      } else {
	    	Base::StatusOutStage();                                            /* receive Acknowledge */
	      }
	      stall_i:  Base::SetStallEP(0x80);
	      EP0Data.Count = 0;
	}

	static __inline void EP0In()
	{
		if (SetupPacket.Direction() == RequestDirection::DeviceToHost) {
			Base::DataInStage();                                               /* send data */
		}
		else
		{
	        if (deviceAddress_ & 0x80) {
	        	deviceAddress_ &= 0x7F;
	        	Base::SetAddress(deviceAddress_);
	        }
		}
	}
	static void Reset()
	{
		deviceStatus_  = DeviceStatus::BusPowered;	//TODO make this decision depending on traits of the derived class
		deviceAddress_ = 0;
		configuration_ = 0;
		USB_EndPointMask  = 0x00010001;
		USB_EndPointHalt  = 0x00000000;
		USB_EndPointStall = 0x00000000;
	}
	static void SetupStage() {
		Base::ReadEP(0x00, (uint8_t *)&SetupPacket);
	}
	static void DataInStage() {
	  uint32_t cnt;

	  if (EP0Data.Count > TConfig::ep0BufSize) {
	    cnt = TConfig::ep0BufSize;
	  } else {
	    cnt = EP0Data.Count;
	  }
	  cnt = Base::WriteEP(0x80, EP0Data.pData, cnt);
	  EP0Data.pData += cnt;
	  EP0Data.Count -= cnt;
	}
	static void DataOutStage() {
	  uint32_t cnt;

	  cnt = Base::ReadEP(0x00, EP0Data.pData);
	  EP0Data.pData += cnt;
	  EP0Data.Count -= cnt;
	}
	static void StatusInStage() {
		Base::WriteEP(0x80, (uint8_t *)NULL, 0);
	}
	static void StatusOutStage() {
		Base::ReadEP(0x00, EP0Buf);
	}
private:
	static inline void OnIntMember(){
		uint32_t val;
		uint32_t disr = LPC_USB->DevIntSt;       /* Device Interrupt Status */

		/* Device Status Interrupt (Reset, Connect change, Suspend/Resume) */
		if (disr & DEV_STAT_INT) {
			LPC_USB->DevIntClr = DEV_STAT_INT;
			Base::WrCmd(CMD_GET_DEV_STAT);
		    val = Base::RdCmdDat(DAT_GET_DEV_STAT);       /* Device Status */
		    if (val & DEV_RST) {                    /* Reset */
		    	Base::Reset();
		#if   USB_RESET_EVENT
		    	Base::Reset();
		#endif
		    }
		    if (val & DEV_CON_CH) {                 /* Connect change */
		#if   USB_POWER_EVENT
		      USB_Power_Event(val & DEV_CON);
		#endif
		    }
		    if (val & DEV_SUS_CH) {                 /* Suspend/Resume */
		      if (val & DEV_SUS) {                  /* Suspend */
		    	  Base::Suspend();
		#if     USB_SUSPEND_EVENT
		        USB_Suspend_Event();
		#endif
		      } else {                              /* Resume */
		    	  Base::Resume();
		#if     USB_RESUME_EVENT
		        USB_Resume_Event();
		#endif
		      }
		    }
		    return;
		  }

		#if USB_SOF_EVENT
		  /* Start of Frame Interrupt */
		  if (disr & FRAME_INT) {
		    USB_SOF_Event();
		  }
		#endif

		#if USB_ERROR_EVENT
		  /* Error Interrupt */
		  if (disr & ERR_INT) {
		    WrCmd(CMD_RD_ERR_STAT);
		    val = RdCmdDat(DAT_RD_ERR_STAT);
		    USB_Error_Event(val);
		  }
		#endif

		  /* Endpoint's Slow Interrupt */
		  if (disr & EP_SLOW_INT) {
		    auto epInts    = LPC_USB->EpIntSt;
		    if(epInts & (1<<0)){
		    	LPC_USB->EpIntClr = (1 << 0);
		    	while ((LPC_USB->DevIntSt & CDFULL_INT) == 0);
		    	if (LPC_USB->CmdData & EP_SEL_STP) {         /* Setup Packet */
		    		EP0Setup();
		    	}
		    	else {
		    		EP0Out();
		    	}

		    }
		    if(epInts & (1<<1)){
		    	LPC_USB->EpIntClr = (1 << 1);
		    	while ((LPC_USB->DevIntSt & CDFULL_INT) == 0);
		    	EP0In();
		    }
		    if(epInts & (1<<4)){
		    	LPC_USB->EpIntClr = (1 << 4);
		    	while ((LPC_USB->DevIntSt & CDFULL_INT) == 0);
		    	//CondCallEP2Out<Derived>();
		    }
		    if(epInts & (1<<5)){
		    	LPC_USB->EpIntClr = (1 << 5);
		    	while ((LPC_USB->DevIntSt & CDFULL_INT) == 0);
		    	//CondCallEP2In<Derived>();
		    }
		    LPC_USB->DevIntClr = EP_SLOW_INT;
		  }
		  return;
	}
	//friend void OnIntHandler<Kvasir::Nvic::Irqs::USB>();
};
template <typename T, typename U> uint8_t Base<T,U>::deviceAddress_ = 0;
template <typename T, typename U>  volatile uint8_t  Base<T,U>::configuration_;
template <typename T, typename U>  uint32_t Base<T,U>::USB_EndPointMask;
template <typename T, typename U>  uint32_t Base<T,U>::USB_EndPointHalt;
template <typename T, typename U>  uint32_t Base<T,U>::USB_EndPointStall;                         /* EP must stay stalled */
template <typename T, typename U>  uint8_t  Base<T,U>::USB_NumInterfaces;
template <typename T, typename U>  uint8_t  Base<T,U>::USB_AltSetting[];
template <typename T, typename U>  uint8_t  Base<T,U>::EP0Buf[];
template <typename T, typename U>  USB_EP_DATA Base<T,U>::EP0Data;
template <typename T, typename U>  USB_SETUP_PACKET Base<T,U>::SetupPacket;
template <typename T, typename U> DeviceStatus Base<T,U>::deviceStatus_ = DeviceStatus::BusPowered;
template <typename T, typename U> Kvasir::CDC::CDC_LINE_CODING Base<T,U>::CDC_LineCoding = {9600, 0, 0, 8};
}
}


