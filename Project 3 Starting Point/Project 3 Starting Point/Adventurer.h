#pragma once
#include <string>
class Adventurer
{
protected:
	std::string _name;
	int _type;
public:
	Adventurer(std::string name, int type);
	int GetType() const { return _type; }
	std::string GetName() const { return _name; }
	std::string virtual Attack() { return _name + " hurled their fists! \n"; };
	~Adventurer();
};

