#include "Character.h"
void Character::Attack(Character& target)
{
	target.Damage(param.attack);
}

void Character::Damage(int damage)
{
	param.hp -= damage;
	if (param.hp < 0) param.hp = 0;
}

bool Character::IsDead() const
{
	return param.hp == 0;
}

int Character::GetHP()const
{
	return param.hp;
}

int Character::GetAttack()const
{
	return param.attack;
}