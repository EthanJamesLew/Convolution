#include "image.h"

enum edgeHandle
{
	NONE = 0,
	EXTEND = 1,
	TILE = 2,
	WRAP = 3,
	MIRROR = 4,
};

Image::Image(unsigned x, unsigned y) : _width(x), _height(y)
{
	_img = (uint32_t*)std::malloc(_width*_height*sizeof(uint32_t));
}

Image::~Image()
{
	free(_img);
}

uint32_t& Image::operator[](unsigned x)
{
	return _img[x];
}

uint32_t& Image::get(unsigned x, unsigned y)
{
	/*TODO: This is where WRAP, NONE, EXTEND, TILE and MIRROR will be used*/
	return _img[_width*y + x];
}

uint32_t* Image::getPtr()
{
	return _img;
}