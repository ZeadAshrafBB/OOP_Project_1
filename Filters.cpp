#include <iostream>
#include "Filters.h"
#include <filesystem>

Filters::Filters() {
	std::cout << "No image to apply filter\n";
	// Error Handling
}

Filters::Filters(std::filesystem::path& p) {
	img_path = p;
	image= Image(p.string());
	// Handle filter is not choosen
}

Filters::Filters(std::filesystem::path& p, int n) {
	img_path = p;
	image= Image(p.string());
	filter_num = n;
}
