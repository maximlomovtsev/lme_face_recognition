#pragma once

#include "figure.h"

#include <stack>
#include <memory>
#include <algorithm>
#include <iostream>
#include <vector>

namespace lme
{
namespace face_recognition
{
namespace core
{

class Rectangle : public Figure
{
public:
    Rectangle(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0);

    uint64_t GetSquare() const override;

    void SetX1(int x1);
    void SetX2(int x2);

    void SetY1(int y1);
    void SetY2(int y2);

private:
    int x1_;
    int y1_;
    int x2_;
    int y2_;
};

} // namespace core
} // namespace face_recognition
} // namespace lme