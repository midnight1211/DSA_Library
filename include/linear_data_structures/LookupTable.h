//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_LOOKUPTABLE_H
#define DSA_LIBRARY_LOOKUPTABLE_H

#include <iostream>

#include "DynamicArray.h"

template <typename K, typename V>
class LookupTable {
private:
	struct Entry {
		K key;
		V value;
		bool used;
		Entry() : used(false) {}
	};

	DynamicArray<Entry> table;

public:
	void insert(const K& key, const V& value);
	V* lookup(const K& key);
	void remove(const K& key);
};


#endif //DSA_LIBRARY_LOOKUPTABLE_H