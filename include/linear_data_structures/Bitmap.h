//
// Created by marle on 10/14/2025.
//

#ifndef DSA_LIBRARY_BITMAP_H
#define DSA_LIBRARY_BITMAP_H

#include <iostream>

class Bitmap {
private:
	unsigned char* data;
	size_t width;
	size_t height;

public:
	Bitmap(size_t w, size_t h);
	~Bitmap();
	void set_pixel(size_t x, size_t y);
	void clear_pixel(size_t x, size_t y);
	bool get_pixel(size_t x, size_t y) const;
	size_t get_width() const;
	size_t get_height() const;
};


#endif //DSA_LIBRARY_BITMAP_H