#pragma once
#include <string>
#include "Adventurer.h"
class Mage: public Adventurer
{

public:
	Mage(std::string name, int);
	~Mage();

	std::string Attack() { return _name + " casts magic missle at the darkness!"; }	
};

