#include<stdio.h>
#include<stdint.h>
#include<time.h>
#include"input"
int main()
{
	
	//コンピュータの時間を変数に代入
	//int t = (int)time(nullptr);
	//int answer = t % 10;
	// 入力した数字を変数 input に代入する
	while(true)
	{
		int input;
		scanf_s("%d", & input);
		// ランクを保持する変数を宣言
		int rank = 0;
		// answer と input の数値が一致時のみ「一致」と表示	
		int sub = answer - input;
		if (answer == input)
		{
			rank = 2;
			printf("一致\n");
		}
		if (answer > input)
		{
			printf("小さい\n");
		}
		if (answer < input)
		{
			printf("大きい\n");
		}
		if (rank == 2)
		{
			break;
		}
	}
	return 0;
}