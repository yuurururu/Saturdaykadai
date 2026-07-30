#include "Sword.h"
#include <stdlib.h>
void Sword::initializeType()
{
	faction_ = 0;

	charaID_ = 0;

	strcpy_s(name_, 64, "Œ•Žm");

}

void Sword::updateWhenStartTurn()
{
	param_.attack = 40;
}