//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_STATIC_ARRAY_H
#define DSA_LIBRARY_STATIC_ARRAY_H

#include <iostream>

template <typename T, size_t N>
class Array {
private:
	T data[N];
public:
	Array() {}
	T& at(size_t idx);
	T& operator[](size_t idx);
	size_t size() const;
	T* begin();
	T* end();
	const T* begin() const;
	const T* end() const;
};

#endif //DSA_LIBRARY_STATIC_ARRAY_H