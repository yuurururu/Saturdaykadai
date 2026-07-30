#include "BattleManager.h"
#include <iostream>

BattleManager::BattleManager() {}

// 戦闘処理
void BattleManager::battle
(
	CharacterBase& attacker,
	CharacterBase& defender,
	int attackerAction,
	int defenderAction

)
{
	// 両方攻撃
	if (attackerAction == 0 && defenderAction == 0)
	{
		int attackPower = attacker.attack();
		int defensePower = defender.attack();

		// 攻撃力比較
		if (attackPower > defensePower)
		{
			std::cout << attacker.name() << "の攻撃成功" << std::endl;

			damage(defender, attackPower);
		}
		else if (defensePower > attackPower)
		{
			std::cout << defender.name() << "の攻撃成功" << std::endl;

			damage(attacker, defensePower);
		}
		else
		{
			std::cout << "攻撃力が同じなのでドロー" << std::endl;
		}
	}

	// 攻撃側 防御側
	else if (attackerAction == 0 && defenderAction == 1)
	{
		int result = judgeType(attacker, defender);

		switch(result)
		{
		// ドロー
		case 0:
			std::cout << "ドロー"<< std::endl;break;

		case 2:
			std::cout<< "カウンター発生"<< std::endl;

			damage(
				defender, defender.attack() * 2
			);

			break;

		case 3:
			std::cout << "クリティカル攻撃" << std::endl;

			damage(
				defender, attacker.attack() * 2
			);
			
			break;
		}

	}

	// 防御側 攻撃側
	else if (attackerAction == 1 && defenderAction == 0)
	{
		int result = judgeType(defender, attacker);

		switch (result)
		{
			// ドロー
		case 0:
			std::cout << "ドロー" << std::endl;break;

		case 2:
			std::cout << "カウンター発生" << std::endl;

			damage(
				attacker, attacker.attack() * 2
			);

			break;

		case 3:
			std::cout << "クリティカル攻撃" << std::endl;

			damage(
				defender, attacker.attack() * 2
			);

			break;
		}
	}

	// 両方防御
	else
	{
		std::cout << "お互い防御" << std::endl;
	}
}

// 相性判定
int BattleManager::judgeType
(
	CharacterBase& attacker,
	CharacterBase& defender
)
{
	int atkID = attacker.charaID();
	int defID = defender.charaID();
	
	// 同キャラ
	if (atkID == defID)
	{
		return 0;
	}

	// カウンター
	if ((atkID + 1) % 3 == defID)
	{
		return 2;
	}
	
	// クリティカル
	if ((defID + 1) % 3 == atkID) 
	{
		return 3;
	}

	return 0;
}

// ダメージ処理
void BattleManager::damage
(
	CharacterBase& target,
	int power
)
{
	target.damage(power);
}