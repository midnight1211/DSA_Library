//
// Created by marle on 10/14/2025.
//

#include "../../include/linear_data_structures/ControlTable.h"

template <typename K, typename V>
void ControlTable<K, V>::add_rule(const K& key, const V& value) {
	for (size_t i = 0; i < table.get_size(); ++i) {
		if (!table[i].active || table[i].key == key) {
			table[i].key = key;
			table[i].value = value;
			table[i].active = true;
			return;
		}
	}
	Entry e;
	e.key = key;
	e.value = value;
	e.active = true;
	table.push_back(e);
}

template <typename K, typename V>
V* ControlTable<K, V>::lookup_rule(const K& key) {
	for (size_t i = 0; i < table.get_size(); ++i) {
		if (table[i].active && table[i].key == key)
			return &table[i].value;
	}
	return nullptr;
}

template <typename K, typename V>
void ControlTable<K, V>::remove_rule(const K& key) {
	for (size_t i = 0; i < table.get_size(); ++i) {
		if (table[i].active && table[i].key == key) {
			table[i].active = false;
			return;
		}
	}
}