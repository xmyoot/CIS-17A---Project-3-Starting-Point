#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Mage.h"
#include "Paladin.h"
#include "Ranger.h"
#include "Warrior.h"
#include "Adventurer.h"

class Guild
{
private:
	std::vector<std::shared_ptr<Adventurer>> _allAdventurers;

	std::string _name;
	int _gold = 0;
	int mages = 0;
	int warriors = 0; 
	int rangers = 0;
	int paladins = 0;
public:
	Guild(std::string name);
	~Guild();

	std::string GetName() const { return _name; }

	void AddAdventurer(std::string name, int type);
	

	std::string GetInfo();
	
	std::string AttackWithMages();
	std::string AttackWithPaladins();
	std::string AttackWithRangers();
	std::string AttackWithWarriors();
	
	std::string AttackWithAllAdventurers();
};

