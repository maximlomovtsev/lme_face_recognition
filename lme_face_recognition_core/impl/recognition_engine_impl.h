#pragma once

#include "../interfaces/recognition_engine.h"

namespace lme
{
namespace face_recognition
{
namespace core
{

class RecognitionEngineImpl : public RecognitionEngine
{
public:
    Image FindRectangle(const Image& photo) const override;
};

}
}
}