/*----------------------------------------------------------------------------
 *      U S B  -  K e r n e l
 *----------------------------------------------------------------------------
 *      Name:    cdcuser.h
 *      Purpose: USB Communication Device Class User module Definitions
 *      Version: V1.10
 *----------------------------------------------------------------------------
 *      This software is supplied "AS IS" without any warranties, express,
 *      implied or statutory, including but not limited to the implied
 *      warranties of fitness for purpose, satisfactory quality and
 *      noninfringement. Keil extends you a royalty-free right to reproduce
 *      and distribute executable files created using this software for use
 *      on NXP Semiconductors LPC microcontroller devices only. Nothing else 
 *      gives you the right to use this software.
 *
 * Copyright (c) 2009 Keil - An ARM Company. All rights reserved.
 *---------------------------------------------------------------------------*/
#ifndef __CDC_H__
#define __CDC_H__

#include "Type.hpp"
#include "USBCore.hpp"
//#include "ConstLogic.h"
#include "CDC.h"

namespace Kvasir{
namespace CDC{

class DefaultTraits {

};

template<typename Derived, typename Traits>
class Core: public USBCore<Core<Derived,Traits>,Traits> {
protected:
	static constexpr unsigned long bufferSize = 64;
	static volatile bool depInEmpty_;
protected:
	Core(){depInEmpty_ = true;}
	static void EP2In(){
		static unsigned char bulkBufIn_[bufferSize];            // Buffer to store USB OUT packet
		uint32_t outSize = Derived::ReadInBuf(bulkBufIn_);
		if(outSize){
			USBHw<Traits>::WriteEP(CDC_DEP_IN, bulkBufIn_ ,outSize);
		}
	}
	static void EP2Out(){
		static unsigned char bulkBufOut_ [bufferSize];            // Buffer to store USB OUT packet
		auto size = USBHw<Traits>::ReadEP(CDC_DEP_OUT, bulkBufOut_);
		for(int i=0;i<size;i++){
			Derived::USBOutPush(bulkBufOut_[i]);
		}
	}
	static void SetTxEpInt(){
		//LPC_USB->EpIntSet = ShiftLeft(1, EPAdr( CDC_DEP_IN ));
	}
	static void RequestClassInterface(){
//        switch (SetupPacket.request_) {
//          case CDC_SEND_ENCAPSULATED_COMMAND:
//          case CDC_SET_COMM_FEATURE:
//          case CDC_SET_LINE_CODING:
//            EP0Data.pData = EP0Buf;                              /* data to be received, see USB_EVT_OUT */
//            goto setup_class_ok;
//          case CDC_GET_COMM_FEATURE:
//          case CDC_GET_ENCAPSULATED_RESPONSE:
//          case CDC_GET_LINE_CODING:
//            EP0Data.pData = EP0Buf;                            /* point to data to be sent */
//            USBCore::DataInStage();                                 /* send requested data */
//            goto setup_class_ok;
//            break;
//          case CDC_CLEAR_COMM_FEATURE:
//          case CDC_SET_CONTROL_LINE_STATE:
//          case CDC_SEND_BREAK:
//        	USBCore::StatusInStage();                               /* send Acknowledge */
//            goto setup_class_ok;
//            break;
//        }
	}
	friend class USBCore<Core<Derived,Traits>,Traits>;
};
template<typename T,typename U>
volatile bool Core<T,U>::depInEmpty_ = true;

}
}

#endif  /* __CDCUSER_H__ */

