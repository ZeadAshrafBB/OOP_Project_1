#include "../Filters.h"

const int SHADES = 255;

Image Filters::flip_image_h(Image& img) {
	Image flipped_img = Image(img.width, img.height);
	for (int x=img.width; x>=0; x--) {
		for (int y=img.height; y>=0; y--) {
			for (int z=0; z<3; z++) {
				int curr_pxl = img.getPixel(x,y,z);
				flipped_img.setPixel(
					img.width-x,
					img.height-y,
					z,curr_pxl);
			}
		}
	}
	return flipped_img;
}
