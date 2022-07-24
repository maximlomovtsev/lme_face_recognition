#pragma once

#include "rectangle.h"

namespace lme
{
namespace face_recognition
{
namespace core
{

Rectangle::Rectangle(int x1, int y1, int x2, int y2)
    : x1_{x1}
    , y1_{y1}
    , x2_{x2}
    , y2_{y2}
{

}

uint64_t Rectangle::GetSquare() const
{
    const auto length = (x2_ > x1_) ? (x2_ - x1_) : (x1_ - x2_);
    const auto width = (y2_ > y1_) ? (y2_ - y1_) : (y1_ - y2_);
    return length * width;
}

void Rectangle::SetX1(int x1)
{
    x1_ = x1;
}

void Rectangle::SetX2(int x2)
{
    x2_ = x2;
}

void Rectangle::SetY1(int y1)
{
    y1_ = y1;
}

void Rectangle::SetY2(int y2)
{
    y2_ = y2;
}

} // namespace core
} // namespace face_recognition
} // namespace lme
