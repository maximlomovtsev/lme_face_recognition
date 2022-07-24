#include <lme_face_recognition_core/model/rectangle.h>
#include <lme_face_recognition_core/impl/image.h>
#include <lme_face_recognition_core/impl/recognition_engine_impl.h>

#include <iostream>
#include <fstream>
#include <filesystem>
#include <bitset>
#include <vector>
#include <stack>
#include <list>

int main()
{
    const auto imagePath = "C:/Projects/lme_face_recognition/tests/test_data/M.png";
    // const auto imageFileSize = std::filesystem::file_size(imagePath);
    // const auto headerSizeOffset = 54;

    using namespace lme::face_recognition::core;

    Image image{imagePath};
    RecognitionEngineImpl engine{};
    auto foundImage = engine.FindRectangle(image);

    // std::ifstream image(imagePath, std::ios_base::binary);
    // if(!image.is_open())
    // {
    //     return 1;
    // }

    // if(!image.good())
    // {
    //     return 1;
    // }

    // // image.seekg(headerSizeOffset);

    // constexpr auto bufferSize = 2132;
    // char buffer[bufferSize];

    // std::list<std::string> matrix; //((imageFileSize - headerSizeOffset) / bufferSize);

    // for(auto index = 0; image.read(&buffer[0], bufferSize); ++index)
    // {
    //     matrix.push_front(std::string{buffer});
    //     // matrix.at(index) = std::string{buffer};
    // }

    return 0;
}