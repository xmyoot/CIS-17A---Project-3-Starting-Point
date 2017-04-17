#pragma once
#include <string>
class Adventurer
{
private:
	std::string _name;
public:
	Adventurer(std::string name) { _name = name; };
	std::string GetName() const { return _name; }
	virtual std::string Attack() {};
	~Adventurer();
};

