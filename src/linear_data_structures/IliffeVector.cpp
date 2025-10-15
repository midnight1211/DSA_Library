//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/IliffeVector.h"
#include <cstring>

template <typename T>
IliffeVector<T>::IliffeVector(size_t rows) : num_rows(rows) {
    data = new T*[rows];
    row_sizes = new size_t[rows];
    
    // Initialize all row pointers to nullptr and sizes to 0
    for (size_t i = 0; i < rows; ++i) {
        data[i] = nullptr;
        row_sizes[i] = 0;
    }
}

template <typename T>
IliffeVector<T>::~IliffeVector() {
    if (data) {  // Check if data is not null
        for (size_t i = 0; i < num_rows; ++i) {
            if (data[i] != nullptr) {  // Check each row before deletion
                delete[] data[i];
                data[i] = nullptr;
            }
        }
        delete[] data;
        data = nullptr;
    }
    
    if (row_sizes) {  // Also check row_sizes before deletion
        delete[] row_sizes;
        row_sizes = nullptr;
    }
}

template <typename T>
T& IliffeVector<T>::at(size_t row, size_t col) {
	if (row >= num_rows || col >= row_sizes[row])
		throw std::out_of_range("Index out of bounds");
	return data[row][col];
}

template <typename T>
size_t IliffeVector<T>::get_num_rows() const {
	return num_rows;
}

template <typename T>
size_t IliffeVector<T>::get_row_size(size_t row) const {
	if (row >= num_rows) throw std::out_of_range("Row out of bounds");
	return row_sizes[row];
}