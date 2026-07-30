#include "Minion.h"
#include <stdlib.h>
void Minion::initializeType()
{
	faction_ = 2;

	charaID_ = 2;

	strcpy_s(name_, 64, "è¢ä´ém");

}

void Minion::updateWhenStartTurn()
{
	param_.attack = 25;
}