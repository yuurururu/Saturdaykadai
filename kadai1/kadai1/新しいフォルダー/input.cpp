#include<time.h>
#include<stdio.h>
int rand()
{
	//コンピュータの時間を変数に代入
	int t = (int)time(nullptr);
	int answer = t % 10;
}
int input()
{
	int input;
	scanf_s("%d", &input);
}