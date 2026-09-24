#include "Image_Class.h"
#include <string>
#include <filesystem>

class Filters {
	Image src_image;
	std::filesystem::path img_path;
	int filter_num; // Use enums itf

	public:
		Filters(); // Defualt Constructor
		Filters(std::filesystem::path& p, int n);
		bool loadImage(const std::string& s);
		Image gray_scale(Image& img);
		Image black_white(Image& img);
		Image invert(Image& img);
		Image adding_frame(Image& img);
		// bool input_validation(Image& img);
};
