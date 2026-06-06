#include<stdlib.h>
#include<stdio.h>
#include<iostream>
class Animal final
{
public:
	Animal& operator = (const Animal& animal);

public:
	std::string name_ = {};
	int footNum_ = 0;
};

int main()
{
	int a = 0;
	int b = a;
	int c = a + b;
	// 各インスタンスを作成する
	Animal animal1("動物１", 2);
	Animal animal2;
	Animal animal3;

	animal3 = animal2 = animal1;

	animal3.operator=(animal2.operator=(animal1));
}

Animal& Animal:: operator =(const Animal& src)
{
	name_ = {};
	int footNum_ = 0;
	return *this;
}