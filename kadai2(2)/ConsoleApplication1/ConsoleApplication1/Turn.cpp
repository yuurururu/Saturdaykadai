#include "Turn.h"
bool Turn::exec(std::shared_ptr<Character> player,
	              std::shared_ptr<Character>* enemies, int enemyNum){
	player -> setAttack();

	for (int i = 0; i < enemyNum; i++)
	{
		enemies[i] -> setAttack();
	}

	int targetEnemy = 0;
	for (int i = 0; i < enemies; i++) {


		if (enemies[i] -> isDead())
		{
			targetEnemy = i;
			break;
		}
	}

	int PlayerPower = player -> attack();
	enemies[targetEnemy]->damage(PlayerPower);
	return true;
}
