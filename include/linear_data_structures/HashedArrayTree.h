//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_HASHARRAYTREE_H
#define DSA_LIBRARY_HASHARRAYTREE_H

#include <iostream>

template <typename T>
class HashedArrayTree {
private:
	T** leaves;
	size_t num_leaves;
	size_t leaf_size;
	size_t size;

public:
	HashedArrayTree(size_t initial_leaf_size = 8);
	~HashedArrayTree();
	void push_back(const T& val);
	T& at(size_t idx);
	size_t get_size() const;
};


#endif //DSA_LIBRARY_HASHARRAYTREE_H