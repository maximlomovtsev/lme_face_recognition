#pragma once

#include "../impl/image.h"

namespace lme
{
namespace face_recognition
{
namespace core
{

struct RecognitionEngine
{
    virtual ~RecognitionEngine() = default;

    virtual Image FindRectangle(const Image& photo) const = 0;
};

}
}
}