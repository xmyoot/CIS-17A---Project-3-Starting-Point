#pragma once
#include <string>
#include "Adventurer.h"
class Warrior: public Adventurer
{

public:
	Warrior(std::string name, int);
	~Warrior();

	std::string Attack() { return  " shouts 'DO YOU LIKE MY SWORD SWORD SWORD MY DIAMOND SWORD! \n"; }
};

