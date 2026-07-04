#pragma once
#include <iostream>
struct CharacterParam
{
	int hp;
	int attack;
};
// キャラクタークラス
class Character
{
public:
	Character(){}
	~Character(){}
protected:
	CharacterParam param;
public:
	virtual ~Character(){}

	virtual void SetAttack() = 0;

	void Attack(Character& target)
	{
		target.Damage(param.attack);
	}

	void Damage(int damage) {
		param.hp -= damage;
		if (param.hp < 0) param.hp = 0;
	}

	bool IsDead() const
	{
		return param.hp == 0;
	}

	int GetHP()const { return param.hp; }
	int GetAttack() const { return param.attack; }
};

// プレイヤークラス
class Player : public Character
{
public:
	Player(){
		param.hp = rand() % 51 + 50;
	}
	void SetAttack() override{
		param.attack = rand() % 21;
	}
};

// スライムクラス
class Slime : public Character
{
public:
	Slime(){
		param.hp = rand() % 51 + 50;
	}
	void SetAttack() override {
		param.attack = rand() % 21;
	}

};

// ゴブリンクラス
class Goblin : public Character
{
public:
	Goblin() {
		param.hp = rand() % 51 + 50;
	}
 	void SetAttack() override {
	param.attack = rand() % 21;
}
};
// キャラクタークラス

// class Character 
// { public: Character() {} 
// ~Character() {} public: };

// プレイヤークラス
//class Player : public Character 
// { public: Player() {} 
// ~Player() {} 
// public: 
// int hp = rand() % (100 - 50 + 1) + 50;
// int attack = rand() % (20 - 0 + 1) + 0; };

// スライムクラス
//class Slime : public Character 
//{ public: Slime() {}
//~Slime() {} 
//public: 
//	int hp = rand() % (100 - 50 + 1) + 50; 
//	int attack = rand() % (10 - 0 + 1) + 0; 
//};

// ゴブリンクラス
//class Goblin : public Character 
//{ public: Goblin() {}
//~Goblin() {} public: 
//	int hp = rand() % (100 - 50 + 1) + 50; 
//	int attack = rand() % (16 - 8 + 1) + 8; 
//};


