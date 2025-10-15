//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/ParallelArray.h"

template <typename T1, typename T2>
void ParallelArray<T1, T2>::push_back(const T1& val1, const T2& val2) {
	arr1.push_back(val1);
	arr2.push_back(val2);
}

template <typename T1, typename T2>
void ParallelArray<T1, T2>::get(size_t idx, T1& val1, T2& val2) const {
	val1 = arr1.at(idx);
	val2 = arr2.at(idx);
}

template <typename T1, typename T2>
size_t ParallelArray<T1, T2>::size() const {
	return arr1.get_size();
}