#include <stdio.h>
#include <stdint.h>
#include "input.h"

void judge()
{
	extern int answer;
	extern int input;
	int rank = 0;
	// answer Ç∆ input ÇÃêîílÇ™àÍívéûÇÃÇ›ÅuàÍívÅvÇ∆ï\é¶	
	int sub = answer - input;
	if (answer == input)
	{
		rank = 1;
		printf("àÍív\n");
	}
	if (answer > input)
	{
		rank = 2;
		printf("è¨Ç≥Ç¢\n");
	}
	if (answer < input)
	{
		rank = 2;
		printf("ëÂÇ´Ç¢\n");
	}
}