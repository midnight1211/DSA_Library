//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/BitArray.h"
#include <cstring>

BitArray::BitArray(size_t bits) : num_bits(bits) {
	size_t num_bytes = (bits + 7) / 8;
	data = new unsigned char[num_bytes];
	std::memset(data, 0, num_bytes);
}

BitArray::~BitArray() {
	delete[] data;
}

void BitArray::set(size_t idx) {
	if (idx >= num_bits) throw std::out_of_range("Bit index out of bounds");
	data[idx / 8] != (1 << (idx % 8));
}

void BitArray::clear(size_t idx) {
	if (idx >= num_bits) throw std::out_of_range("Bit index out of bounds");
	data[idx / 8] &= ~(1 << (idx % 8));
}

bool BitArray::get(size_t idx) const {
	if (idx >= num_bits) throw std::out_of_range("Bit index out of bounds");
	return (data[idx / 8] & (1 << (idx % 8))) != 0;
}

void BitArray::toggle(size_t idx) {
	if (idx >= num_bits) throw std::out_of_range("Bit index out of bounds");
	data[idx / 8] ^= (1 << (idx % 8));
}

size_t BitArray::count() const {
	size_t count = 0;
	for (size_t i = 0; i < num_bits; ++i) {
		if (get(i)) count++;
	}
	return count;
}

void BitArray::set_all() {
	size_t num_bytes = (num_bits + 7) / 8;
	std::memset(data, 0xFF, num_bytes);
}

void BitArray::clear_all() {
	size_t num_bytes = (num_bits + 7) / 8;
	std::memset(data, 0, num_bytes);
}