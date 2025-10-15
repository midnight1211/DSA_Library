//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_SPARSEMATRIX_H
#define DSA_LIBRARY_SPARSEMATRIX_H

#include <iostream>

template <typename T>
class SparseMatrix {
private:
	struct Entry {
		size_t row, col;
		T value;
	};

	DynamicArray<Entry> entries;
	size_t rows;
	size_t cols;

public:
	SparseMatrix(size_t r, size_t c);
	void set(size_t r, size_t c, const T& val);
	T get(size_t r, size_t c) const;
	size_t get_rows() const;
	size_t get_cols() const;
	size_t non_zero_count() const;
};


#endif //DSA_LIBRARY_SPARSEMATRIX_H