#pragma once
#include <string>
#include "Adventurer.h"
class Mage: public Adventurer
{

public:
	Mage(std::string name, int);
	~Mage();

	std::string Attack() { return " casts magic missle at the darkness! \n"; }	
};

