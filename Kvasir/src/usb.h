/*----------------------------------------------------------------------------
 *      U S B  -  K e r n e l
 *----------------------------------------------------------------------------
 * Name:    usb.h
 * Purpose: USB Definitions
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
 *---------------------------------------------------------------------------*/

#ifndef __USB_H__
#define __USB_H__
#include "Type.hpp"


typedef union {
//typedef __packed union {
  uint16_t W;
  struct {
    uint8_t L;
    uint8_t H;
  } __attribute__((packed)) WB;
} __attribute__((packed)) WORD_BYTE;


/* bmRequestType.Dir */
enum class RequestDirection : uint8_t {HostToDevice = 0,DeviceToHost = 1};

/* bmRequestType.Type */
enum class RequestType : uint8_t {Standard = 0, Class = 1, Vendor = 2, Reserved = 3};

/* bmRequestType.Recipient */
enum class RequestRecipient : uint8_t {Device = 0, Interface = 1, Endpoint = 2, Other = 3};

/* bmRequestType Definition */
typedef union _REQUEST_TYPE {
	struct _BM {
    uint8_t Recipient : 5;
    uint8_t Type      : 2;
    uint8_t Dir       : 1;
  } __attribute__((packed)) BM;
  uint8_t B;
} __attribute__((packed)) REQUEST_TYPE;

/* USB Standard Request Codes */
enum class RequestCode : uint8_t {
	GetStatus = 0,
	ClearFeature = 1,
	SetFeature = 3,
	SetAddress = 5,
	GetDescriptor = 6,
	SetDescriptor = 7,
	GetConfiguration = 8,
	SetConfiguration = 9,
	GetInterface = 10,
	SetInterface = 11,
	SyncFrame = 12
};

/* USB GET_STATUS Bit Values */
enum class DeviceStatus : uint8_t {BusPowered = 0, SelfPowerdFlag = 1, RemoteWakeupFlag = 2};
//#define USB_GETSTATUS_SELF_POWERED             0x01
//#define USB_GETSTATUS_REMOTE_WAKEUP            0x02
//#define USB_GETSTATUS_ENDPOINT_STALL           0x01

/* USB Standard Feature selectors */
#define USB_FEATURE_ENDPOINT_STALL             0
#define USB_FEATURE_REMOTE_WAKEUP              1

/* USB Default Control Pipe Setup Packet */
typedef struct _USB_SETUP_PACKET {
  REQUEST_TYPE bmRequestType_;
public:
  RequestCode  request_;
  WORD_BYTE    wValue;
  WORD_BYTE    wIndex;
  uint16_t     wLength;
  RequestDirection Direction()ALWAYS_INLINE{return static_cast<RequestDirection>(bmRequestType_.BM.Dir);}
  RequestType Type()ALWAYS_INLINE{return static_cast<RequestType>(bmRequestType_.BM.Type);}
  RequestRecipient Recipient()ALWAYS_INLINE{return static_cast<RequestRecipient>(bmRequestType_.BM.Recipient);}
} __attribute__((packed)) USB_SETUP_PACKET;


/* USB Descriptor Types */
#define USB_DEVICE_DESCRIPTOR_TYPE             1
#define USB_CONFIGURATION_DESCRIPTOR_TYPE      2
#define USB_STRING_DESCRIPTOR_TYPE             3
#define USB_INTERFACE_DESCRIPTOR_TYPE          4
#define USB_ENDPOINT_DESCRIPTOR_TYPE           5
#define USB_DEVICE_QUALIFIER_DESCRIPTOR_TYPE   6
#define USB_OTHER_SPEED_CONFIG_DESCRIPTOR_TYPE 7
#define USB_INTERFACE_POWER_DESCRIPTOR_TYPE    8
#define USB_OTG_DESCRIPTOR_TYPE                     9
#define USB_DEBUG_DESCRIPTOR_TYPE                  10
#define USB_INTERFACE_ASSOCIATION_DESCRIPTOR_TYPE  11 

/* USB Device Classes */
#define USB_DEVICE_CLASS_RESERVED              0x00
#define USB_DEVICE_CLASS_AUDIO                 0x01
#define USB_DEVICE_CLASS_COMMUNICATIONS        0x02
#define USB_DEVICE_CLASS_HUMAN_INTERFACE       0x03
#define USB_DEVICE_CLASS_MONITOR               0x04
#define USB_DEVICE_CLASS_PHYSICAL_INTERFACE    0x05
#define USB_DEVICE_CLASS_POWER                 0x06
#define USB_DEVICE_CLASS_PRINTER               0x07
#define USB_DEVICE_CLASS_STORAGE               0x08
#define USB_DEVICE_CLASS_HUB                   0x09
#define USB_DEVICE_CLASS_MISCELLANEOUS         0xEF
#define USB_DEVICE_CLASS_VENDOR_SPECIFIC       0xFF

/* bmAttributes in Configuration Descriptor */
#define USB_CONFIG_POWERED_MASK                0x40
#define USB_CONFIG_BUS_POWERED                 0x80
#define USB_CONFIG_SELF_POWERED                0xC0
#define USB_CONFIG_REMOTE_WAKEUP               0x20

/* bMaxPower in Configuration Descriptor */
#define USB_CONFIG_POWER_MA(mA)                ((mA)/2)

/* bEndpointAddress in Endpoint Descriptor */
#define USB_ENDPOINT_DIRECTION_MASK            0x80
#define USB_ENDPOINT_OUT(addr)                 ((addr) | 0x00)
#define USB_ENDPOINT_IN(addr)                  ((addr) | 0x80)

/* bmAttributes in Endpoint Descriptor */
#define USB_ENDPOINT_TYPE_MASK                 0x03
#define USB_ENDPOINT_TYPE_CONTROL              0x00
#define USB_ENDPOINT_TYPE_ISOCHRONOUS          0x01
#define USB_ENDPOINT_TYPE_BULK                 0x02
#define USB_ENDPOINT_TYPE_INTERRUPT            0x03
#define USB_ENDPOINT_SYNC_MASK                 0x0C
#define USB_ENDPOINT_SYNC_NO_SYNCHRONIZATION   0x00
#define USB_ENDPOINT_SYNC_ASYNCHRONOUS         0x04
#define USB_ENDPOINT_SYNC_ADAPTIVE             0x08
#define USB_ENDPOINT_SYNC_SYNCHRONOUS          0x0C
#define USB_ENDPOINT_USAGE_MASK                0x30
#define USB_ENDPOINT_USAGE_DATA                0x00
#define USB_ENDPOINT_USAGE_FEEDBACK            0x10
#define USB_ENDPOINT_USAGE_IMPLICIT_FEEDBACK   0x20
#define USB_ENDPOINT_USAGE_RESERVED            0x30

/* USB Standard Device Descriptor */
typedef struct _USB_DEVICE_DESCRIPTOR {
  uint8_t  bLength;
  uint8_t  bDescriptorType;
  uint16_t bcdUSB;
  uint8_t  bDeviceClass;
  uint8_t  bDeviceSubClass;
  uint8_t  bDeviceProtocol;
  uint8_t  bMaxPacketSize0;
  uint16_t idVendor;
  uint16_t idProduct;
  uint16_t bcdDevice;
  uint8_t  iManufacturer;
  uint8_t  iProduct;
  uint8_t  iSerialNumber;
  uint8_t  bNumConfigurations;
} __attribute__((packed)) USB_DEVICE_DESCRIPTOR;

/* USB 2.0 Device Qualifier Descriptor */
typedef struct _USB_DEVICE_QUALIFIER_DESCRIPTOR {
  uint8_t  bLength;
  uint8_t  bDescriptorType;
  uint16_t bcdUSB;
  uint8_t  bDeviceClass;
  uint8_t  bDeviceSubClass;
  uint8_t  bDeviceProtocol;
  uint8_t  bMaxPacketSize0;
  uint8_t  bNumConfigurations;
  uint8_t  bReserved;
} __attribute__((packed)) USB_DEVICE_QUALIFIER_DESCRIPTOR;

/* USB Standard Configuration Descriptor */
typedef struct _USB_CONFIGURATION_DESCRIPTOR {
  uint8_t  bLength;
  uint8_t  bDescriptorType;
  uint16_t wTotalLength;
  uint8_t  bNumInterfaces;
  uint8_t  bConfigurationValue;
  uint8_t  iConfiguration;
  uint8_t  bmAttributes;
  uint8_t  bMaxPower;
} __attribute__((packed)) USB_CONFIGURATION_DESCRIPTOR;

/* USB Standard Interface Descriptor */
typedef struct _USB_INTERFACE_DESCRIPTOR {
  uint8_t  bLength;
  uint8_t  bDescriptorType;
  uint8_t  bInterfaceNumber;
  uint8_t  bAlternateSetting;
  uint8_t  bNumEndpoints;
  uint8_t  bInterfaceClass;
  uint8_t  bInterfaceSubClass;
  uint8_t  bInterfaceProtocol;
  uint8_t  iInterface;
} __attribute__((packed)) USB_INTERFACE_DESCRIPTOR;

/* USB Standard Endpoint Descriptor */
typedef struct _USB_ENDPOINT_DESCRIPTOR {
  uint8_t  bLength;
  uint8_t  bDescriptorType;
  uint8_t  bEndpointAddress;
  uint8_t  bmAttributes;
  uint16_t wMaxPacketSize;
  uint8_t  bInterval;
} __attribute__((packed)) USB_ENDPOINT_DESCRIPTOR;

/* USB String Descriptor */
typedef struct _USB_STRING_DESCRIPTOR {
  uint8_t  bLength;
  uint8_t  bDescriptorType;
  uint16_t bString/*[]*/;
} __attribute__((packed)) USB_STRING_DESCRIPTOR;

/* USB Common Descriptor */
typedef struct _USB_COMMON_DESCRIPTOR {
  uint8_t  bLength;
  uint8_t  bDescriptorType;
} __attribute__((packed)) USB_COMMON_DESCRIPTOR;


#endif  /* __USB_H__ */
