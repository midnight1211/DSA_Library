//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_GAPBUFFER_H
#define DSA_LIBRARY_GAPBUFFER_H

#include <iostream>

template <typename T>
class GapBuffer {
private:
	T* data;
	size_t buffer_size;
	size_t gap_start;
	size_t gap_end;

public:
	GapBuffer(size_t size = 100);
	~GapBuffer();
	void insert(const T& val);
	void delete_char();
	void move_cursor(int pos);
	size_t get_gap_size() const;

private:
	void expand_gap();
};


#endif //DSA_LIBRARY_GAPBUFFER_H