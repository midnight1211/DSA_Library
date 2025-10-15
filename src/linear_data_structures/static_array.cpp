//
// Created by marle on 10/14/2025.
//

#include "C:\Users\marle\CLionProjects\dsa_library\include\linear_data_structures\static_array.h"

template <typename T, size_t N>
T& Array<T, N>::at(size_t idx) {
	if (idx >= N) throw std::out_of_range("Index out of bounds");
	return data[idx];
}

template <typename T, size_t N>
T& Array<T, N>::operator[](size_t idx) {
	return data[idx];
}

template <typename T, size_t N>
size_t Array<T, N>::size() const {
	return N;
}

template <typename T, size_t N>
T* Array<T, N>::begin() {
	return data;
}

template <typename T, size_t N>
T* Array<T, N>::end() {
	return data + N;
}

template <typename T, size_t N>
const T* Array<T, N>::begin() const {
	return data;
}

template <typename T, size_t N>
const T* Array<T, N>::end() const {
	return data + N;
}