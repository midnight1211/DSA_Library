//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/Bitmap.h"
#include <cstring>

Bitmap::Bitmap(size_t w, size_t h) : width(w), height(h) {
	size_t total_bits = w * h;
	size_t num_bytes = (total_bits + 7) / 8;
	data = new unsigned char[num_bytes];
	std::memset(data, 0, num_bytes)
}

Bitmap::~Bitmap() {
	delete[] data;
}

void Bitmap::set_pixel(size_t x, size_t y) {
	if (x >= width || y >= height) throw std::out_of_range("Pixel out of range");
	size_t bit_idx = y * width + x;
	data[bit_idx / 8] |= (1 << (bit_idx % 8));
}

void Bitmap::clear_pixel(size_t x, size_t y) {
	if (x >= width || y >= height) throw std::out_of_range("Pixel out of range");
	size_t bit_idx = y * width + x;
	data[bit_idx / 8] &= ~(1 << (bit_idx % 8));
}

bool Bitmap::get_pixel(size_t x, size_t y) const {
	if (x >= width || y >= height) throw std::out_of_range("Pixel out of range");
	size_t bit_idx = y * width + x;
	return (data[bit_idx / 8] & (1 << (bit_idx % 8))) != 0;
}

size_t Bitmap::get_width() const {
	return width;
}

size_t Bitmap::get_height() const {
	return height;
}