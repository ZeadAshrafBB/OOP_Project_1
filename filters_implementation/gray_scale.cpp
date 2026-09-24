#include "../Filters.h"

const int SHADES = 255;

Image Filters::gray_scale(Image& img) {
	for (int x=0; x<=img.width; x++) {
		for (int y=0; y<=img.height; y++) {
			int gray = 0;
			for (int z=0; z<3; z++) {
				// I found this Formula on the internet :)
				// but it seems to work fine
				if (z==0) {
					gray += img.getPixel(x,y,z) * 0.299;
				} else if (z==1) {
					gray += img.getPixel(x,y,z) * 0.587;
				} else {
					gray += img.getPixel(x,y,z) * 0.114;
				}
			}
			for (int z=0; z<3; z++) {
				img.setPixel(x, y, z, gray);
			}
		}
	}
	return img;
}
