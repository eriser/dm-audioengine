/*
 * Copyright (c) 2015, Dinahmoe. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright notice, 
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation 
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software 
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL PETER THORSON BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
 
//  Created by Alessandro Saccoia on 2/25/14.

#ifndef __Dmaf_Offline_Audio_Renderer__DynamicsCompressorNode__
#define __Dmaf_Offline_Audio_Renderer__DynamicsCompressorNode__

#include "AudioNode.hpp"
#include "Compressor.hpp"

namespace dinahmoe {
namespace audioengine {

class AudioParam;

class DynamicsCompressorNode :
	public AudioNode,
  public dsp::Compressor<float> {
public:	
	DynamicsCompressorNode(AudioContext* context);
	~DynamicsCompressorNode();
	void processInternal(int numSamples, int outputRequesting);
  void process_inputChannelsChanged(unsigned int inputNumber_);
  inline const char* getType() { return "DynamicsCompressorNode"; }  

private:
  AudioBuffer m_temp;
};

} // AUDIOENGINE
} // DMAF

#endif /* defined(__Dmaf_Offline_Audio_Renderer__DynamicsCompressorNode__) */
