//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/SparseMatrix.h"

template <typename T>
SparseMatrix<T>::SparseMatrix(size_t r, size_t c) : rows(r), cols(c) {}

template <typename T>
void SparseMatrix<T>::set(size_t r, size_t c, const T& val) {
	if (r >= rows || c >= cols) throw std::out_of_range("Index out of bounds");
	for (size_t i = 0; i < entries.get_size(); ++i) {
		if (entries[i].row == r && entries[i].col == c) {
			entries[i].value = val;
			return;
		}
	}
	Entry e;
	e.row = r;
	e.col = c;
	e.value = val;
	entries.push_back(e);
}

template <typename T>
T SparseMatrix<T>::get(size_t r, size_t c) const {
	if (r >= rows ||  c >= cols) throw std::out_of_range("Index out of bounds");
	for (size_t i = 0; i < entries.get_size(); ++i) {
		if (entries[i].row == r && entries[i].col == c)
			return entries[i].value;
	}
	return T();
}

template <typename T>
size_t SparseMatrix<T>::get_rows() const {
	return rows;
}

template <typename T>
size_t SparseMatrix<T>::get_cols() const {
	return cols;
}

template <typename T>
size_t SparseMatrix<T>::non_zero_count() const {
	return entries.get_size();
}