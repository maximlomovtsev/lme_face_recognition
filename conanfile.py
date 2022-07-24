from conans import ConanFile, CMake

class LMEFaceRecognitionConan(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "cmake", "gcc", "txt"

    requires = [
        "gtest/cci.20210126"
        ]

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()