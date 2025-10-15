//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_IMAGE_H
#define DSA_LIBRARY_IMAGE_H

#include <iostream>

class Image {
private:
	struct Pixel {
		unsigned char r, g, b, a;
		Pixel() : r(0), g(0), b(0), a(255) {}
		Pixel(unsigned char rr, unsigned char gg, unsigned char bb, unsigned char aa = 255) : r(rr), g(gg), b(bb), a(aa) {}
	};

	Pixel* data;
	size_t width;
	size_t height;

public:
	Image(size_t w, size_t h);
	~Image();
	void set_pixel(size_t x, size_t y, unsigned char r, unsigned char g, unsigned char b, unsigned char a = 255);
	void get_pixel(size_t x, size_t y, unsigned char& r, unsigned char& g, unsigned char& b, unsigned char& a) const;
	size_t get_width() const;
	size_t get_height() const;
};


#endif //DSA_LIBRARY_IMAGE_H