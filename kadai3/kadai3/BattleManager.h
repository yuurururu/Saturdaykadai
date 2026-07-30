#pragma once
#include "Character.h"

// 戦闘管理クラス
class BattleManager final
{
public:
	BattleManager();

	~BattleManager() = default;

public:
	// 戦闘処理
	void battle
	(
		CharacterBase& attacker,
		CharacterBase& defender,
		int attackerAction,
		int defenderAction
	);

private:
	// キャラクター相性判定
	int judgeType
	(
		CharacterBase& attacker,
		CharacterBase& defender
	);

	// ダメージ処理
	void damage
	(
		CharacterBase& target,
		int power
	);
};

