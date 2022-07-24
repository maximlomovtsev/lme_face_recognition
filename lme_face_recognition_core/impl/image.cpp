#pragma once

#include "image.h"

#include <wingdi.h>

namespace lme
{
namespace face_recognition
{
namespace core
{

Image::Image(const std::string& path)
    : image_{}
{
    Read(path);
}

void Image::Read(const std::string& path)
{
    image_.open(path.c_str(), std::ios_base::binary);
    if(!image_.is_open())
    {
        throw std::runtime_error("Not opened");
    }
    if(image_.bad())
    {
        throw std::runtime_error("Bad file");
    }
    if(image_.fail())
    {
        throw std::runtime_error("Fail file");
    }
}

std::ifstream& Image::GetImage()
{
    return image_;
}

std::tuple<uint8_t, uint8_t> Image::GetImageResolution() const
{
    BITMAPINFOHEADER header{};
    return {};
}

} // namespace core
} // namespace face_recognition
} // namespace lme
