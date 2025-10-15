//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/DynamicArray.h"

template <typename T>
void DynamicArray<T>::resize(size_t new_capacity) {
	T* new_data = new T[new_capacity];
	for (size_t i = 0; i < size; ++i)
		new_data[i] = data[i];
	delete[] data;
	data = new_data;
	capacity = new_capacity;
}

template <typename T>
DynamicArray<T>::DynamicArray(size_t initial_capacity = 10) : size(0), capacity(initial_capacity) {
	data = new T[capacity];
}

template<typename T>
DynamicArray<T>::~DynamicArray() {
	delete[] data;
}

template <typename T>
void DynamicArray<T>::push_back(const T& val) {
	if (size >= capacity)
		resize(capacity * 2);
	data[size++] = val;
}

template <typename T>
void DynamicArray<T>::pop_back() {
	if (size > 0) size--;
}

template <typename T>
T& DynamicArray<T>::at(size_t idx) {
	if (idx >= size) throw std::out_of_range("Index out of bounds");
	return data[idx];
}

template <typename T>
T& DynamicArray<T>::operator[](size_t idx) {
	return data[idx];
}

template <typename T>
size_t DynamicArray<T>::get_size() const {
	return size;
}

template <typename T>
size_t DynamicArray<T>::get_capacity() const {
	return capacity;
}

template <typename T>
void DynamicArray<T>::insert(size_t idx, const T& val) {
	if (idx > size) throw std::out_of_range("Invalid index");
	if (size >= capacity) resize(capacity * 2);
	for (size_t i = size; i > idx; --i) {
		data[i] = data[i - 1];
	}
	data[idx] = val;
	size++;
}

template <typename T>
void DynamicArray<T>::erase(size_t idx) {
	if (idx >= size) throw std::out_of_range("Invalid index");
	for (size_t i = idx; i < size - 1; ++i)
		data[i] = data[i + 1];
	size--;
}

template <typename T>
void DynamicArray<T>::clear() {
	size = 0;
}

template <typename T>
T* DynamicArray<T>::begin() {
	return data;
}

template <typename T>
T* DynamicArray<T>::end() {
	return data + size;
}