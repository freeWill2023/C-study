#ifndef ARRAY_H
#define ARRAY_H

//extern const int ARRAYSIZE; 

class Array
{
private:
	int* pArr_;
	int size_;
	
	static const int ARRAYSIZE
	
public:
	//Array();
	explicit Array(int size = 100);
	Array(const int* pArr, int size);
	Array(const Array& rhs);
	~Array();
	
	Array& operator=(const Array& arr);
	
	bool operator==(const Array& arr) const;
	bool operator!=(const Array& arr) const;
	
	int& operator[](int index);
	const int& operator[](int index) const;
	
	int size() const;
	
};




#endif
