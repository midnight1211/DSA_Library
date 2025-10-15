//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_BITBOARD_H
#define DSA_LIBRARY_BITBOARD_H

#include <iostream>

class BitBoard {
private:
	unsigned long long board;

public:
	BitBoard(unsigned long long val = 0) : board(val) {}
	void set(int idx);
	void clear(int idx);
	bool get(int idx) const;
	unsigned long long get_value() const;
	void set_value(unsigned long long val);
	int count_bits() const;
	int get_lsb() const;
	int get_msb() const;
};


#endif //DSA_LIBRARY_BITBOARD_H