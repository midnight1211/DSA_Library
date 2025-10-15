//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/HashedArrayTree.h"

template <typename T>
HashedArrayTree<T>::HashedArrayTree(size_t initial_leaf_size) : leaf_size(initial_leaf_size), size(0), num_leaves(0) {
	leaves = new T*[16];
	for (int i = 0; i < 16; ++i)
		leaves[i] = nullptr;
}

template <typename T>
HashedArrayTree<T>::~HashedArrayTree() {
	for (size_t i = 0; i < num_leaves; ++i)
		delete[] leaves[i];
	delete[] leaves;
}

template <typename T>
void HashedArrayTree<T>::push_back(const T& val) {
	if (size ==  num_leaves * leaf_size) {
		if (num_leaves == 0) {
			leaves[0] = new T[leaf_size];
			num_leaves = 1;
		} else {
			leaves[num_leaves] = new T[leaf_size * (num_leaves + 1)];
			num_leaves++;
		}
	}

	size_t leaf_idx = size / leaf_size;
	size_t offset = size % leaf_size;
	leaves[leaf_idx][offset] = val;
	size++;
}

template <typename T>
T& HashedArrayTree<T>::at(size_t idx) {
	if (idx >= size) throw std::out_of_range("Index out of bounds");
	size_t leaf_idx = idx / leaf_size;
	size_t offset = idx % leaf_size;
	return leaves[leaf_idx][offset];
}

template <typename T>
size_t HashedArrayTree<T>::get_size() const {
	return size;
}