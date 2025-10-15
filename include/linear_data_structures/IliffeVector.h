//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_ILIFFEVECTOR_H
#define DSA_LIBRARY_ILIFFEVECTOR_H

#include <iostream>

template <typename T>
class IliffeVector {
private:
	T** data;
	size_t* row_sizes;
	size_t num_rows;

public:
	IliffeVector(size_t rows);
	~IliffeVector();
	void set_row_size(size_t row, size_t size);
	T& at(size_t row, size_t col);
	size_t get_num_rows() const;
	size_t get_row_size(size_t row) const;
};


#endif //DSA_LIBRARY_ILIFFEVECTOR_H