//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_CIRCULARBUFFER_H
#define DSA_LIBRARY_CIRCULARBUFFER_H

#include <iostream>

template <typename T>
class CircularBuffer {
private:
	T* data;
	size_t capacity;
	size_t size;
	size_t front_idx;

public:
	CircularBuffer(size_t cap);
	~CircularBuffer();
	void push_back(const T& val);
	T pop_front();
	T& front();
	T& back();
	size_t get_size() const;
	bool is_full() const;
	bool is_empty() const;
	void clear();

};


#endif //DSA_LIBRARY_CIRCULARBUFFER_H