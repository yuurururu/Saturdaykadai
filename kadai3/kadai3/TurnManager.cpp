#include "TurnManager.h"
#include "Character.h"
#include "Sword.h"
#include "Magic.h"
#include "Minion.h"
#include "BattleManager.h"
#include <iostream>
#include <cstdlib>

TurnManager::TurnManager()
{

}
// ƒvƒŒƒCƒ„[‘I‘ğ
void TurnManager::selectPlayer()
{
	int select;

	std::cout
		<< "ƒLƒƒƒ‰ƒNƒ^[‚ğ‘I‘ğ‚µ‚Ä‚Ë\n" << "1.Œ•m\n" << "2.–‚–@g‚¢\n" << "3.¢Š«m\n";
	std::cin >> select;

	switch (select)
	{
	case 1:

		player_ = std::shared_ptr<CharacterBase>(new Sword());

		break;
		
	case 2:

		player_ = std::shared_ptr<CharacterBase>(new Magic());

		break;

	case 3:

		player_ = std::shared_ptr<CharacterBase>(new Minion());

		break;
	}

	player_->initialize();
}

// “G‘I‘ğ
void TurnManager::selectEnemy()
{
	int select = rand() % 3;

	switch (select)
	{
	case 0:

		enemy_ = std::shared_ptr<CharacterBase>(new Sword());

		break;

	case 1:

		enemy_ = std::shared_ptr<CharacterBase>(new Magic());

		break;

	case 2:

		enemy_ = std::shared_ptr<CharacterBase>(new Minion());

		break;
	}

	enemy_->initialize();
}

// ƒQ[ƒ€ŠJn
void TurnManager::start()
{
	selectPlayer();

	selectEnemy();

	std::cout << "----------------" << std::endl;
	std::cout << "ƒvƒŒƒCƒ„[ : " << player_->name() << std::endl;
	std::cout << "UŒ‚—Í : " << player_->param().attack << std::endl;

	std::cout << "“G : " << enemy_->name() << std::endl;
	std::cout << "----------------" << std::endl;
	std::cout << "UŒ‚—Í : " << enemy_->param().attack << std::endl;
	BattleManager battle;


	while (true)
	{
		TurnCount_++;

		std::cout << "\n====" << TurnCount_ << "ƒ^[ƒ“ ====\n";

		selectAction();

		battle.battle(
			*player_,
			*enemy_,
			ActionByPlayer_,
			ActionByEnemy_
		);

		std::cout << "---------------------" << std::endl;

		std::cout << player_->name() << "HP : " << player_->param().hp << std::endl;

		std::cout << enemy_->name() << "HP : " << enemy_->param().hp << std::endl;

		std::cout << "---------------------" << std::endl;


		if (player_-> dead())
		{
			std::cout << "‚ ‚È‚½‚Ì”s–k" << std::endl;

			break;
		}

		if (enemy_->dead())
		{
			std::cout << "‚ ‚È‚½‚ÌŸ—˜" << std::endl;

			break;
		}
	}

}

void TurnManager::selectAction()
{
	std::cout << "s“®‚ğ‘I‘ğ" << "0.UŒ‚\n" << "1.–hŒä\n";

	std::cin >> ActionByPlayer_;

	ActionByEnemy_ = rand() % 2;

	std::cout << " ƒvƒŒƒCƒ„[ : " << (ActionByPlayer_ == 0 ? "UŒ‚" : "–hŒä") << std::endl;

	std::cout << " “G :" << (ActionByEnemy_ == 0 ? "UŒ‚" : "–hŒä") << std::endl;
}