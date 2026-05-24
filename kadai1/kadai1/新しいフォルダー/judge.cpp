#include <stdio.h>
#include <stdint.h>
#include"input.h"
void judge(int answer , int input)
{
	if (answer < input)
	{
		printf("‘å‚«‚¢‚Ë\n");
	}
	if (answer > input)
	{
		printf("¬‚³‚¢‚Ë\n");
	}
	if (answer = input)
	{
		printf("³‰ğ‚¾\n");
	}
}