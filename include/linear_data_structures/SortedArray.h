//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_SORTEDARRAY_H
#define DSA_LIBRARY_SORTEDARRAY_H

#include <iostream>

template <typename T>
class SortedArray {
private:
	DynamicArray<T> arr;

public:
	void insert(const T& val);
	bool contains(const T& val) const;
	T& operator[](size_t idx);
	size_t get_size() const;
	void remove(const T& val);
};


#endif //DSA_LIBRARY_SORTEDARRAY_H