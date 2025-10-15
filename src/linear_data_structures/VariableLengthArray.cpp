//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/VariableLengthArray.h"

template<typename T>
VariableLengthArray<T>::VariableLengthArray(size_t max_sz) : size(0), max_size(max_sz) {
	data = new T[max_sz];
}

template <typename T>
VariableLengthArray<T>::~VariableLengthArray() {
	delete[] data;
}

template <typename T>
void VariableLengthArray<T>::push(const T& val) {
	if (size >= max_size) throw std::overflow_error("VLA full");
	data[size++] = val;
}

template <typename T>
T VariableLengthArray<T>::pop() {
	if (size == 0) throw std::underflow_error("VLA empty");
	return data[--size];
}

template <typename T>
T& VariableLengthArray<T>::at(size_t idx) {
	if (idx >= size) throw std::out_of_range("Index out of bounds");
	return data[idx];
}

template <typename T>
size_t VariableLengthArray<T>::get_size() const {
	return size;
}