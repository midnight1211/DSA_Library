//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/DopeVector.h"
#include <cstring>

template<typename T>
DopeVector<T>::DopeVector(size_t size, T *array, int lower) : desc{array ? array : new T[size], size, sizeof(T), lower, lower + (int)size - 1} {
	if (!array) {
		std::memset(desc.data, 0, size * sizeof(T));
	}
}

template <typename T>
DopeVector<T>::~DopeVector() {
	if (desc.data) delete[] desc.data;
}

template <typename T>
T& DopeVector<T>::at(int idx) {
	if (idx < desc.lower_bound || idx > desc.upper_bound)
		throw std::out_of_range("Index out of bounds");
	return desc.data[idx - desc.lower_bound];
}

template <typename T>
T& DopeVector<T>::operator[](int idx) {
	return desc.data[idx - desc.lower_bound];
}

template <typename T>
size_t DopeVector<T>::size() const {
	return desc.size;
}

template <typename T>
int DopeVector<T>::lower_bound() const {
	return desc.lower_bound;
}

template <typename T>
int DopeVector<T>::upper_bound() const {
	return desc.upper_bound;
}