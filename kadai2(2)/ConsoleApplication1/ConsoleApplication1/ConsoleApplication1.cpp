#include <iostream>
#include "Player.h"
#include "Gobrin.h"
#include "Slime.h"
#include "Turn.h"

int main()
{
	Turn turn;

	std::shared_ptr<Character> player;
	player.reset(new Player());

	std::shared_ptr<Character> enemies[2];
	enemies[0].reset(new Gobrin());
	enemies[1].reset(new Slime());

	while (true)
	{
		turn.exec(player, enemise, 2);
		if (end)
		{
			break;
		}
	}

}