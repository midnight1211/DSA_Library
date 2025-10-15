//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/Image.h"

Image::Image(size_t w, size_t h) : width(w), height(h) {
	data = new Pixel[w * h];
}

Image::~Image() {
	delete[] data;
}

void Image::set_pixel(size_t x, size_t y, unsigned char r, unsigned char g, unsigned char b, unsigned char a = 255) {
	if (x >= width || y >= height) throw std::out_of_range("Pixel out of bounds");
	data[y * width + x] = Pixel(r, g, b, a);
}

void Image::get_pixel(size_t x, size_t y, unsigned char& r, unsigned char& g, unsigned char& b, unsigned char& a) const {
	if (x >= width || y >= height) throw std::out_of_range("Pixel out of bounds");
	const Pixel& p = data[y * width + x];
	r = p.r;
	g = p.g;
	b = p.b;
	a = p.a;
}

size_t Image::get_width() const {
	return width;
}

size_t Image::get_height() const {
	return height;
}