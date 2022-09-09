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
    using namespace lme::face_recognition::core;

    const auto imagePath = "C:/Projects/lme_face_recognition/tests/test_data/M.bmp";

    Image image{imagePath};
    RecognitionEngineImpl engine{};
    auto foundImage = engine.FindRectangle(image);

    return 0;
}