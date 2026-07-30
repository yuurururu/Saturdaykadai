#pragma once
#include "Character.h"
// Œ•mƒNƒ‰ƒX
class Sword final:public CharacterBase
{
public:
	Sword() = default;

	~Sword() = default;

	void initializeType() override;

	void updateWhenStartTurn() override;
};

