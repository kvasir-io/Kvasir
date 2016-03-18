#pragma once
#include "Common/CdcConstants.hpp"
#include "Vector.hpp"


namespace Kvasir{
namespace Cdc{

class DefaultConfig {
	static constexpr int maxEpBufSize{64};
	//declare inPipe here
	//declare outPipe here
};

template<typename TConfig>
class Core {
	static void EpIn(Vector<unsigned char,TConfig::maxEpBufSize>& data){
		data.resize(0); 							//should we make this an invariant?
		auto size = TConfig::inPipe::sizeWas();
		if(size > TConfig::maxEpBufSize){
			data.resize(TConfig::maxEpBufSize);
		}
		else if(size > 0){
			data.resize(size);
		}
		TConfig::inPipe::pop(data.begin(),data.end());
	}
	static void EpOut(Vector<unsigned char,TConfig::maxEpBufSize>& data){
		TConfig::outPipe::push(data.begin(),data.end());
	}
	static bool controlIn(){

	}
	static bool controlOut(){

	}
};

}
}
