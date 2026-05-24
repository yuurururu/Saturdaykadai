#include<time.h>
#include<stdio.h>
int rand()
{
	// コンピュータの時間（を表す値）を変数に代入する
	int t = (int)time(nullptr);
	// t を 10 で割って、その余りを変数 answer に代入する
    // 10 で割った余りなので、answer には「0～9」のどれかが入っている
	int answer = t % 10;
	return answer;
}
int input()
{
	int input;
	scanf_s("%d", &input);
	return input;
}