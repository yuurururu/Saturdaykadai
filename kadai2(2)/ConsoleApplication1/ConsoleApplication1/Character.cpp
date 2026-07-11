#include "Character.h"

#include <stdlib.h>
#include <iostream>

void Character::setHP() {
	// 
	param_.HP_ = (rand() % 5) + 50;
}
// UŒ‚‚·‚é (©g‚ÌUŒ‚—Í‚ğ•Ô‚·‚Ì‚İ)
int Character::attack(){

	std::cout << "UŒ‚‚µ‚Ü‚·" << std::endl;
	return param_.Attack_ ;
}

// ƒ_ƒ[ƒW‚ğó‚¯‚é (UŒ‚‚µ‚Ä‚«‚½ƒLƒƒƒ‰‚ÌUŒ‚—Í‚ğó‚¯æ‚Á‚Ä HP ‚ğ’²®)
void Character::damage(int power) {

	std::cout << "UŒ‚‚ğó‚¯‚Ü‚µ‚½" << damage << std::endl;
	param_.HP_ -= power;

	// HP ‚ªƒ[ƒ–¢–‚É‚È‚Á‚½‚çƒ[ƒ‚É‚µ‚Ä‚¨‚­
	if (param_. HP_ < 0)
	param_. HP_ = 0;
}

// €‚ñ‚¾‚©‚Ç‚¤‚©
bool Character::isDead() const {
	return param_. HP_ == 0;

}

// ƒpƒ‰ƒ[ƒ^‚ğ•Ô‚· (î•ñ‚ğ‹³‚¦‚é)
Parameter Character::getParameter() const {
	return param_;

}
