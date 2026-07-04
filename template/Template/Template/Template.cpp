#include <iostream>
#include<string>
#include "template.h"

// int 型の数値を表示する関数
/*void disp(int value)
{
	std::cout << value << std::endl;
}

// float 型の数値を表示する関数
void disp(float value)
{
	std::cout << value << std::endl;
}

void disp(char value)
{
	std::cout << value << std::endl;
}

void disp(double value)
{
	std::cout << value << std::endl;
}

void disp(const char * value)
{
	std::cout << value << std::endl;
}*/
// disp 関数の関数テンプレートの宣言と定義
//template<class T>
//void disp(T value)
//{
//	std::cout << value << std::endl;
//}




// エントリー関数
int main()
{
	Data<int> data;
	data.Set(100);
	int d = data.get();
	
	Data<float> dataF;
	data.Set(1.5f);
	float f = dataF.get();
}