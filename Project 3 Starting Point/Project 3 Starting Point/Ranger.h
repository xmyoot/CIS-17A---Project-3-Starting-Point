#pragma once
#include <string>
#include "Adventurer.h"
class Ranger: public Adventurer
{

public:
	Ranger(std::string name, int);
	~Ranger();

	std::string Attack() { return " shoots arrows at his enemies!  PEW PEW PEW \n"; }
};

