#include "Instance.h"
#include <iostream>
Instance::Instance()
{
	std::cout << "コンストラクタ" << std::endl;
}
Instance::~Instance()
{
	std::cout << "デストラクタ" << std::endl;
}