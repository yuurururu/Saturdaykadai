#include "OverLoad.h"
#include<iostream>
#include<stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
	std::cout << a + b << std::endl;
	return 0;
}

float add(float a, float b)
{
	std::cout << a + b << std::endl;
	return 0;
}

double add(double a, double b)
{
	std::cout << a + b << std::endl;
	return 0;
}

int add(int a, int b, int c)
{
	std::cout << a + b + c << std::endl;
	return 0;
}