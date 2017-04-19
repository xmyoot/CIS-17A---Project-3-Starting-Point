#pragma once
#include <string>
#include "Adventurer.h"
class Paladin: public Adventurer
{
public:
	Paladin(std::string name, int);
	~Paladin();
	std::string Attack() { return " swings a giant maul at his foes! \n"; }
};

