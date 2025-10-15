//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/BitBoard.h"

void BitBoard::set(int idx) {
	if (idx < 0 || idx >= 64) throw std::out_of_range("Index out of range");
	board |= (1ULL << idx);
}

void BitBoard::clear(int idx) {
	if (idx < 0 || idx >= 64) throw std::out_of_range("Index out of range");
	board &= ~(1ULL << idx);
}

bool BitBoard::get(int idx) const {
	if (idx < 0 || idx >= 64) throw std::out_of_range("Index out of range");
	return (board & (1ULL << idx)) != 0;
}

unsigned long long BitBoard::get_value() const {
	return board;
}

void BitBoard::set_value(unsigned long long val) {
	board = val;
}

int BitBoard::count_bits() const {
	return __builtin_popcountll(board);
}

int BitBoard::get_lsb() const {
	return board > __builtin_ctzll(board) : -1;
}

int BitBoard::get_msb() const {
	return board ? 63 - __builtin_clzll(board) : -1;
}