#include <iostream>
#include "Filters.h"
#include <filesystem>

enum filters_menu {
	GRAY_SCALE,
	BLACK_WHITE,
	INVERT,
	ADDING_FRAME,
	FLIP_IMAGE_H,
	FLIP_IMAGE_V
};

bool Filters::loadImage(const std::string& s) {
	src_image= Image();
	if (src_image.loadNewImage(s)) {
		return true;
	} else {
		return false;
	}
}

Filters::Filters() {
	std::cout << "No image to apply filter\n";
	// Error Handling
}

Filters::Filters(std::filesystem::path& p, int n) {
	// Setting Data members, from now on we will use
	// the data members for consistency
	img_path = p;
	filter_num = n;
	if (!loadImage(img_path.string())) {
		std::cerr << "Faild to load image\n";
		throw std::invalid_argument("");
	}
	Image target_image = Image();
	switch (filter_num) {
		case filters_menu::GRAY_SCALE:
			target_image = Filters::gray_scale(src_image);
			break;
		case filters_menu::BLACK_WHITE:
			// target_image = Filters::black_white(src_image);
			break;
		case filters_menu::INVERT:
			// target_image = Filters::invert(src_image);
			break;
		case filters_menu::ADDING_FRAME:
			// target_image = Filters::adding_frame(src_image);
			break;
		case filters_menu::FLIP_IMAGE_H:
			std::cout << "APPLY FLIP_H\n";
			target_image = Filters::flip_image_h(src_image);
			break;
		case filters_menu::FLIP_IMAGE_V:
			target_image = Filters::flip_image_v(src_image);
			break;
		default:
			std::cout << "Not Valid Filter";
	}
	std::cout << "SAVE IMAGE\n";
	target_image.saveImage("o.jpg");
}
