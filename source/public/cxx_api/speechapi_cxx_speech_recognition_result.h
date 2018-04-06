//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
// speechapi_cxx_speech_recognition_result.h: Public API declarations for SpeechRecognitionResult C++ class
//

#pragma once
#include <string>
#include <speechapi_c.h>
#include <speechapi_cxx_common.h>
#include <speechapi_cxx_recognition_result.h>


namespace CARBON_NAMESPACE_ROOT {
namespace Recognition {
namespace Speech {


class SpeechRecognitionResult final : public RecognitionResult
{
public:

    SpeechRecognitionResult(SPXRESULTHANDLE hresult) :
        RecognitionResult(hresult)
    {
        SPX_DBG_TRACE_VERBOSE("%s (this=0x%x, handle=0x%x) -- resultid=%S; reason=0x%x; text=%S", __FUNCTION__, this, Handle, ResultId.c_str(), Reason, Text.c_str());
    }

    virtual ~SpeechRecognitionResult()
    {
        SPX_DBG_TRACE_VERBOSE("%s (this-0x%x, handle=0x%x)", __FUNCTION__, this, Handle);
    }


private:
    DISABLE_DEFAULT_CTORS(SpeechRecognitionResult);
};


} } } // CARBON_NAMESPACE_ROOT :: Recognition :: Speech
