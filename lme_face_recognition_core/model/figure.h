#pragma once

#include <cstdint>

namespace lme
{
namespace face_recognition
{
namespace core
{

struct Figure
{
    virtual ~Figure() = default;

    virtual uint64_t GetSquare() const = 0;
};

} // namespace core
} // namespace face_recognition
} // namespace lme
