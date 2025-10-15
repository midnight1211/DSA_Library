//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/Matrix.h"
#include <cstring>

template <typename T>
Matrix<T>::Matrix(size_t r, size_t c) : rows(r), cols(c) {
	data = new T[r * c];
	std::memset(data, 0, r * c * sizeof(T));
}

template <typename T>
Matrix<T>::~Matrix() {
	delete[] data;
}

template <typename T>
T& Matrix<T>::at(size_t r, size_t c) {
	if (r >= rows || c >= cols) throw std::out_of_range("Index out of bounds");
	return data[r * cols + c];
}

template <typename T>
T& Matrix<T>::operator()(size_t r, size_t c) {
	return data[r * cols + c];
}

template <typename T>
size_t Matrix<T>::get_rows() const {
	return rows;
}

template <typename T>
size_t Matrix<T>::get_cols() const {
	return cols;
}

template <typename T>
Matrix<T> Matrix<T>::transpose() const {
	Matrix result(cols, rows);
	for (size_t r = 0; r < rows; ++r) {
		for (size_t c = 0; c < cols; ++c) {
			result(c, r) = at(r, c);
		}
	}
	return result;
}