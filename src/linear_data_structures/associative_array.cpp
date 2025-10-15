//
// Created by marle on 10/14/2025.
//

#include "C:\Users\marle\CLionProjects\dsa_library\include\linear_data_structures\associative_array.h"

template <typename K, typename V>
void AssociativeArray<K, V>::insert(const K& key, const V& value) {
	map[key]=value;
}

template <typename K, typename V>
V* AssociativeArray<K, V>::lookup(const K& key) {
	auto it = map.find(key);
	return (it != map.end()) ? &it->second : nullptr;
}

template <typename K, typename V>
bool AssociativeArray<K, V>::contains(const K& key) const {
	return map.find(key) != map.end();
}

template <typename K, typename V>
void AssociativeArray<K, V>::remove(const K& key) {
	map.erase(key);
}

template <typename K, typename V>
size_t AssociativeArray<K, V>::size() const {
	return map.size();
}

template <typename K, typename V>
void AssociativeArray<K, V>::clear() {
	map.clear();
}