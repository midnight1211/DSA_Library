//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_ASSOCIATIVE_ARRAY_H
#define DSA_LIBRARY_ASSOCIATIVE_ARRAY_H

#include <iostream>
#include <unordered_map>

template <typename K, typename V>
class AssociativeArray {
private:
	std::unordered_map<K, V> map;

public:
	void insert(const K& key, const V& valye);
	V* lookup(const K& key);
	bool contains(const K& key) const;
	void remove(const K& key);
	size_t size() const;
	void clear();
};
#endif //DSA_LIBRARY_ASSOCIATIVE_ARRAY_H