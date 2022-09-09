#pragma once

#include "recognition_engine_impl.h"

#include <vector>
#include <array>
#include <tuple>
#include <iostream>
#include <sstream>

namespace lme
{
namespace face_recognition
{
namespace core
{

Image RecognitionEngineImpl::FindRectangle(const Image& photo) const
{
    auto image = photo.GetImage();

    // for(auto i : image)
    // {
    //     std::cout << i;
    // }

    uint32_t heigth{};
    uint32_t width{};
    std::tie(heigth, width) = photo.GetImageResolution();

    auto offset = photo.GetImageDataOffset();
    std::vector<std::string> matrix(heigth);
    for(auto& row : matrix)
    {
        char* data = new char[width + 1];
        image.copy(data, width, offset);
        data[width] = '\0';

        row = std::string{data};

        std::cout << data << std::endl;

        delete[] data;
        offset += width + 3;
    }

    return {};
}

}
}
}