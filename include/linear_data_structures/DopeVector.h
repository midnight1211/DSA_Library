//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_DOPEVECTOR_H
#define DSA_LIBRARY_DOPEVECTOR_H

#include <iostream>

template <typename T>
class DopeVector {
private:
	struct Descriptor {
		T* data;
		size_t size;
		size_t stride;
		int lower_bound;
		int upper_bound;
	};

	Descriptor desc;

public:
	DopeVector(size_t size, T* array = nullptr, int lower = 0);
	~DopeVector();
	T& at(int idx);
	T& operator[](int idx);
	size_t size() const;
	int lower_bound() const;
	int upper_bound() const;
};


#endif //DSA_LIBRARY_DOPEVECTOR_H