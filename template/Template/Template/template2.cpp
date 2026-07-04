#include <iostream>
#include "template.h"

template<class T,class T2>
void disp(T value,class T2)
{
	T Cos = value + value2;
	std::cout << value << std::endl;
}
template void disp<int>(int intvalue)
;
template<class T>
void Data<T>::Set(T date)
{
	value_ = date;
}

template<class T>
T Data<T>::get() const
{
	return value_;
}