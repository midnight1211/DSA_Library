//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_DYNAMICARRAY_H
#define DSA_LIBRARY_DYNAMICARRAY_H

#include <iostream>

template <typename T>
class DynamicArray {
private:
	T* data;
	size_t size;
	size_t capacity;

	void resize(size_t new_capacity);

public:
	DynamicArray(size_t initial_capacity = 10);
	~DynamicArray();
	void push_back(const T& val);
	void pop_back();
	T& at(size_t idx);
	T& operator[](size_t idx);
	size_t get_size() const;
	size_t get_capacity() const;
	void insert(size_t idx, const T& val);
	void erase(size_t idx);
	void clear();
	T* begin();
	T* end();
};


#endif //DSA_LIBRARY_DYNAMICARRAY_H