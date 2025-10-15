//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_MATRIX_H
#define DSA_LIBRARY_MATRIX_H

#include <iostream>

template <typename T>
class Matrix {
private:
	T* data;
	size_t rows;
	size_t cols;

public:
	Matrix(size_t r, size_t c);
	~Matrix();
	T& at(size_t r, size_t c);
	T& operator()(size_t r, size_t c);
	size_t get_rows() const;
	size_t get_cols() const;
	Matrix transpose() const;
};


#endif //DSA_LIBRARY_MATRIX_H