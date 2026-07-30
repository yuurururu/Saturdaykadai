#include "TurnManager.h"
#include <ctime>
#include <cstdlib>

int main()
{
	srand((unsigned int)time(nullptr));
	
	TurnManager turnManager;

	turnManager.start();

	return 0;
}