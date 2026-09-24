#include <filesystem>
#include <iostream>
#include "Filters.h"

int main() {
	std::cout << "Hello Ramly!\n";
	std::filesystem::path p("luffy.jpg");
	Filters m(p, 0);
	return 0;
}
