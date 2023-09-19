#include "array.h"
#include <cassert>

//const int ARRAYSIZE = 100;
const int Array::ARRAYSIZE;

/*
Array::Array()
: pArr_(new int[100]), size_(100)
{
	assert(pArr_);
}
*/
Array::Array(int size)
: pArr_(new int[size]), size_(size)
{
	//this->pArr_ = new int[size]
	assert(pArr_);
	//this->size_ = size
}

Array::Array(const int* pArr, int size)
: pArr_(new int[size]), size_(size)
{
	assert(pArr_);
	
	for(int i=0 ; i < size ; ++i)
	{
		pArr_[i] = pArr[i];
	}
}

Array::Array(const Array& arr)
: pArr_(new int[arr.size]), size_(arr.size)
{
	assert(pArr_);

	for(int i=0 ; i < arr.size ; ++i)
	{
		pArr_[i] = arr.pArr[i];
	}
}

Array::~Array()
{
	delete [] pArr_;
}

Array& Array::operator=(const Array& arr)
{
	delete [] pArr_;
	
	pArr_ = new int[arr.size]
	assert(pArr_);
	size_ = arr.size;
	
	for(int i=0 ; i<arr.size_ ; ++i)
	{
		pArr_[i] = arr.pArr_[i];
	}
	
	return *this;
}

bool Array::operator==(const Array& arr) const
{
	if(size_ != arr.size_)
		return false;
	
	int i;
	for( i=0 ; i<arr.size_ ; ++i)
	{
		if(pArr_[i] != arr.pArr_[i])
			break;
	}
	return i == arr.size;
}

bool Array::operator!=(const Array& arr) const
{

}

int& Array::operator[](int index)
{
	return pArr_[index];
}
