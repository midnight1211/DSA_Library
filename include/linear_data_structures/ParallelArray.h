//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_PARALLELARRAY_H
#define DSA_LIBRARY_PARALLELARRAY_H
#include "DynamicArray.h"

template <typename T1, typename T2>
class ParallelArray {
private:
	DynamicArray<T1> arr1;
	DynamicArray<T2> arr2;

public:
	void push_back(const T1& val1, const T2& val2);
	void get(size_t idx, T1& val1, T2& val2) const;
	size_t size() const;
};


#endif //DSA_LIBRARY_PARALLELARRAY_H