#ifndef SafeArray_H
#define SafeArray_H
#include "array.h"
//extern const int SafeArraySIZE; 

class SafeArray : public Array {
{
private:
	
public:
	//SafeArray();
	explicit SafeArray(int size = 100);
	SafeArray(const int* pArr, int size);
	SafeArray(const SafeArray& rhs);
	~SafeArray();
	
	SafeArray& operator=(const SafeArray& arr);
	
	bool operator==(const SafeArray& arr) const;
	bool operator!=(const SafeArray& arr) const;
	
	int& operator[](int index);
	const int& operator[](int index) const;
	
	//int size() const;
	
};




#endif
