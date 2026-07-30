#pragma once
#include "Character.h"
// ¢Š«mƒNƒ‰ƒX
class Minion final :public CharacterBase
{
public:
	Minion() = default;

	~Minion() = default;

	void initializeType() override;

	void updateWhenStartTurn() override;
};

