#pragma once

#include "image.h"

#include <sstream>
#include <Windows.h>

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
    std::ifstream image;
    image.open(path.c_str(), std::ios_base::binary);
    if(!image.is_open())
    {
        throw std::runtime_error("Not opened");
    }
    if(image.bad())
    {
        throw std::runtime_error("Bad file");
    }
    if(image.fail())
    {
        throw std::runtime_error("Fail file");
    }
    std::stringstream data;
    data << image.rdbuf();
    image_ = data.str();
}

std::string Image::GetImage() const
{
    return image_;
}

std::tuple<uint32_t, uint32_t> Image::GetImageResolution() const
{
    BITMAPFILEHEADER header{};
    image_.copy((char*)&header, sizeof(header));
    if(header.bfType != 19778) // 19778 == 0x4D42 - BMP file signature
    {
        return {};
    }

    BITMAPINFOHEADER infoHeader{};
    image_.copy((char*)&infoHeader, sizeof(infoHeader), sizeof(BITMAPFILEHEADER));
    if(sizeof(infoHeader) != infoHeader.biSize)
    {
        return {};
    }

    return {infoHeader.biHeight, infoHeader.biWidth * 3 * 2};
}

uint32_t Image::GetImageDataOffset() const
{
    return sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);
}

} // namespace core
} // namespace face_recognition
} // namespace lme
