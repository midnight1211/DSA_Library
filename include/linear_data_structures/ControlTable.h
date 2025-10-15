//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_CONTROLTABLE_H
#define DSA_LIBRARY_CONTROLTABLE_H

#include <iostream>

template <typename K, typename V>
class ControlTable {
private:
	struct Entry {
		K key;
		V value;
		bool active;
		Entry() : active(false) {}
	};

	DynamicArray<Entry> table;

public:
	void add_rule(const K& key, const V& value);
	V* lookup_rule(const K& key);
	void remove_rule(const K& key);

};


#endif //DSA_LIBRARY_CONTROLTABLE_H