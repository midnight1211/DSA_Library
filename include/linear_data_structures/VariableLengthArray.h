//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_VARIABLELENGTHARRAY_H
#define DSA_LIBRARY_VARIABLELENGTHARRAY_H

#include <iostream>

template <typename T>
class VariableLengthArray {
private:
	T* data;
	size_t size;
	size_t max_size;

public:
	VariableLengthArray(size_t max_sz);
	~VariableLengthArray();
	void push(const T& val);
	T pop();
	T& at(size_t idx);
	size_t get_size() const;
};


#endif //DSA_LIBRARY_VARIABLELENGTHARRAY_H