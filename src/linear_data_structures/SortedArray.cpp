//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/SortedArray.h"

template <typename T>
void SortedArray<T>::insert(const T& val) {
	size_t pos = 0;
	while (pos < arr.get_size() && arr[pos] < val)
		pos++;
	arr.insert(pos, val);
}

template <typename T>
bool SortedArray<T>::contains(const T& val) const {
	for (size_t i = 0; i < arr.get_size(); ++i)
		if (arr[i] == val) return true;
	return false;
}

template <typename T>
T& SortedArray<T>::operator[](size_t idx) {
	return arr[idx];
}

template <typename T>
size_t SortedArray<T>::get_size() const {
	return arr.get_size();
}

template <typename T>
void SortedArray<T>::remove(const T& val) {
	for (size_t i = 0; i < arr.get_size(); ++i) {
		if (arr[i] == val) {
			arr.erase(i);
			return;
		}
	}
}