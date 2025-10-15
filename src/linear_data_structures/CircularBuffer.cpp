//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/CircularBuffer.h"

template <typename T>
CircularBuffer<T>::CircularBuffer(size_t cap) : capacity(cap), size(0), front_idx(0) {
	data = new T[capacity];
}

template <typename T>
CircularBuffer<T>::~CircularBuffer() {
	delete[] data;
}

template <typename T>
void CircularBuffer<T>::push_back(const T& val) {
	if (size < capacity) {
		data[(front_idx + size) % capacity] = val;
		size++;
	} else {
		data[front_idx] = val;
		front_idx = (front_idx + 1) % capacity;
	}
}

template <typename T>
T CircularBuffer<T>::pop_front() {
	if (size == 0) throw std::underflow_error("Buffer is empty");
	T val = data[front_idx];
	front_idx = (front_idx + 1) % capacity;
	size--;
	return val;
}

template <typename T>
T& CircularBuffer<T>::front() {
	if (size == 0) throw std::underflow_error("Buffer is empty");
	return data[front_idx];
}

template <typename T>
T& CircularBuffer<T>::back() {
	if (size == 0) throw std::underflow_error("Buffer is empty");
	return data[(front_idx + size - 1) % capacity];
}

template <typename T>
size_t CircularBuffer<T>::get_size() const {
	return size;
}

template <typename T>
bool CircularBuffer<T>::is_full() const {
	return size == capacity;
}

template <typename T>
bool CircularBuffer<T>::is_empty() const {
	return size == 0;
}

template <typename T>
void CircularBuffer<T>::clear() {
	size = 0;
	front_idx = 0;
}