//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/GapBuffer.h"

template <typename T>
GapBuffer<T>::GapBuffer(size_t size = 100) : buffer_size(size), gap_start(0), gap_end(size) {
	data = new T[buffer_size];
}

template <typename T>
GapBuffer<T>::~GapBuffer() {
	delete[] data;
}

template <typename T>
void GapBuffer<T>::insert(const T& val) {
	if (gap_start == gap_end) {
		expand_gap();
	}
	data[gap_start] = val;
	gap_start++;
}

template <typename T>
void GapBuffer<T>::delete_char() {
	if (gap_start > 0) {
		gap_start--;
	}
}

template <typename T>
void GapBuffer<T>::move_cursor(int pos) {
	if (pos > 0) {
		size_t to_move = std::min((size_t)pos, gap_start);
		for (size_t i = 0; i < to_move; ++i)
			data[gap_end - 1 - i] = data[gap_start - 1 - i];
		gap_start -= to_move;
		gap_end -= to_move;
	} else if (pos < 0) {
		size_t to_move = std::min((size_t)(-pos), buffer_size - gap_end);
		for (size_t i = 0; i < to_move; ++i)
			data[gap_start + i] = data[gap_end + i];
		gap_start += to_move;
		gap_end += to_move;
	}
}

template <typename T>
size_t GapBuffer<T>::get_gap_size() const {
	return gap_end - gap_start;
}

template <typename T>
void GapBuffer<T>::expand_gap() {
	T* new_data = new T[buffer_size * 2];
	size_t new_gap_start = gap_start;
	for (size_t i = 0; i < gap_start; ++i)
		new_data[i] = data[i];
	size_t new_gap_end = new_gap_start + (buffer_size - gap_end + gap_start);
	for (size_t i = gap_end; i < buffer_size; ++i)
		new_data[new_gap_end + (i - gap_end)] = data[i];
	delete[] data;
	data = new_data;
	gap_end = new_gap_end;
	buffer_size *= 2;
}