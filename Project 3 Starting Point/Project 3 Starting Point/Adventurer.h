#pragma once
#include <string>
class Adventurer
{
protected:
	std::string _name;
public:
	Adventurer(std::string name);
	std::string GetName() const { return _name; }
	std::string virtual Attack() { return _name + " hurled their fists!"; };
	~Adventurer();
};

