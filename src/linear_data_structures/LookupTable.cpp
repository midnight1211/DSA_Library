//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/LookupTable.h"

template <typename K, typename V>
void LookupTable<K, V>::insert(const K& key, const V& value) {
	for (size_t i = 0; i < table.get_size(); ++i) {
		if (!table[i].used || table[i].key == key) {
			table[i].key = key;
			table[i].value = value;
			table[i].used = true;
			return;
		}
	}
	Entry e;
	e.key = key;
	e.value = value;
	e.used = true;
	table.push_back(e);
}

template <typename K, typename V>
V* LookupTable<K, V>::lookup(const K& key) {
	for (size_t i = 0; i < table.get_size(); ++i) {
		if (table[i].used && table[i].key == key) {
			return &table[i].value;
		}
	}
	return nullptr;
}

template <typename K, typename V>
void LookupTable<K, V>::remove(const K& key) {
	for (size_t i = 0; i < table.get_size(); ++i) {
		if (table[i].used && table[i].key == key) {
			table[i].used = false;
			return;
		}
	}
}