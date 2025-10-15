//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_BIT_ARRAY_H
#define DSA_LIBRARY_BIT_ARRAY_H

#include <iostream>

class BitArray {
private:
	unsigned char* data;
	size_t num_bits;

public:
	BitArray(size_t bits);
	~BitArray();
	void set(size_t idx);
	void clear(size_t idx);
	bool get(size_t idx) const;
	void toggle(size_t idx);
	size_t count() const;
	void set_all();
	void clear_all();
};


#endif //DSA_LIBRARY_BIT_ARRAY_H