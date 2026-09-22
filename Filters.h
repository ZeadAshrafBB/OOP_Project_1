#include "Image_Class.h"
#include <string>
#include <filesystem>

class Filters {
	std::filesystem::path img_path;
	Image image;
	int filter_num; // Use enums itf

	public:
		Filters(); // Defualt Constructor
		Filters(std::filesystem::path& p);
		Filters(std::filesystem::path& p, int n);
		// bool input_validation(Image& img);
};
