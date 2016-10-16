#ifndef IMAGE_H
#define IMAGE_H

#include <cstdint>
#include <cstdlib>

class Image
{
public:
	Image(unsigned x, unsigned y);
	~Image();

	uint32_t& operator[](unsigned x);
	uint32_t& get(unsigned x, unsigned y);

	uint32_t* getPtr();

private:
	uint32_t* _img;
	unsigned _width;
	unsigned _height;
};

#endif