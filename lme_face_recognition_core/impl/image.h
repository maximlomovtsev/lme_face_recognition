#pragma once

#include <string>
#include <fstream>
#include <tuple>

namespace lme
{
namespace face_recognition
{
namespace core
{

class Image
{
public:
    Image() = default;

    Image(const std::string& path);

    void Read(const std::string& path);

    std::ifstream& GetImage();

    std::tuple<uint8_t, uint8_t> GetImageResolution() const;

private:
    std::ifstream image_;
};

} // namespace core
} // namespace face_recognition
} // namespace lme
