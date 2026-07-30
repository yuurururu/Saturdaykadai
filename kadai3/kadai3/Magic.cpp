#include "Magic.h"
#include <stdlib.h>

void Magic::initializeType()
{
	faction_ = 1;

	charaID_ = 1;

	strcpy_s(name_, 64, "–‚–@Žg‚¢");

}

void Magic::updateWhenStartTurn() 
{
	param_.attack = 35;
}