#include "Character.h"
#include <stdlib.h>
#include <iostream>

    CharacterBase::CharacterBase() {
    std::cout << "ƒLƒƒƒ‰¶¬" << std::endl;
}

CharacterBase::~CharacterBase() {
    std::cout << name_ << "”jŠü" << std::endl;
}

void CharacterBase::initialize() {
    initializeType();
    param_.hp = 300 ;
    updateWhenStartTurn();
    std::cout << name_ << " ‚Ì HP : " << param_.hp << std::endl;
}

int CharacterBase::attack() {
    std::cout << name_ << " ‚ÌUŒ‚ : ";
    return param_.attack;
}

void CharacterBase::damage(int power) {
    std::cout << name_ << " ‚ª " << power << " ƒ_ƒ[ƒW‚ðŽó‚¯‚½" << std::endl;
    int n = param_.hp - power;
    if (n < 0) {
        n = 0;
    }
    param_.hp = n;
}

bool CharacterBase::dead() const {
    return (param_.hp <= 0);
}
const char* CharacterBase::name() const {
    return name_;
}

const Parameter& CharacterBase::param() const {
    return param_;
}

int CharacterBase::faction() const {
    return faction_;
}

int CharacterBase::charaID() const {
    return charaID_;
}