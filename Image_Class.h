#include <iostream>
#include <string>

/**
 * @class Image
 * @brief Represents an image with functionalities for loading, saving, and manipulating pixels.
 */
class Image {
    bool isValidFilename(const std::string& filename);
    short getExtensionType(const char* extension);
    std::string filename; ///< Stores the filename of the image.

    public:
    int width = 0; ///< Width of the image.
    int height = 0; ///< Height of the image.
    int channels = 3; ///< Number of color channels in the image.
    unsigned char* imageData = nullptr; ///< Pointer to the image data
    Image();
    Image(std::string filename);
    Image(int mWidth, int mHeight);
    Image(const Image& other);
    Image& operator=(const Image& image);
    ~Image();
    bool loadNewImage(const std::string& filename);
    bool saveImage(const std::string& outputFilename);
    unsigned char& getPixel(int x, int y, int c);
    const unsigned char& getPixel(int x, int y, int c) const;
    void setPixel(int x, int y, int c, unsigned char value);
    const unsigned char& operator()(int row, int col, int channel) const;
    unsigned char& operator()(int row, int col, int channel);
};
