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

    std::string GetImage() const;

    std::tuple<uint32_t, uint32_t> GetImageResolution() const;

    uint32_t GetImageDataOffset() const;

private:
    std::string image_;
};

} // namespace core
} // namespace face_recognition
} // namespace lme
