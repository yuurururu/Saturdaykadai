#pragma once
#include "Character.h"
// 魔法使いクラス
class Magic final :public CharacterBase
{
public:
	Magic() = default;

	~Magic() = default;

	void initializeType() override;

	void updateWhenStartTurn() override;
};

