#include "Guild.h"

Guild::Guild(std::string name) : _name(name)
{
}

Guild::~Guild()
{
}
void Guild::AddAdventurer(std::string name, int type)
{	
	if (type == 1) {
		auto adventurer = std::make_shared<Mage>(name, type);
		mages++;
		_allAdventurers.push_back(adventurer);
	}
	else if (type == 2) {
		auto adventurer = std::make_shared<Ranger>(name, type);
		rangers++;
		_allAdventurers.push_back(adventurer);
	}
	else if (type == 3) {
		auto adventurer = std::make_shared<Paladin>(name, type);
		paladins++;
		_allAdventurers.push_back(adventurer);
	}
	else if (type == 4) {
		auto adventurer = std::make_shared<Warrior>(name, type);
		warriors++;
		_allAdventurers.push_back(adventurer);
	}
}

std::string Guild::GetInfo()
{
	std::string output = "Your guild has: \n";
	output += (std::to_string(mages) + " mages!\n");
	output += (std::to_string(rangers) + " rangers!\n");
	output += (std::to_string(paladins) + " paladins!\n");
	output += (std::to_string(warriors) + " warriors!\n");
	return output;
}

std::string Guild::AttackWithMages()
{
	std::string output = "You command your mages to attack! \n";
	if (_allAdventurers.size() > 0) {
		for (auto s : _allAdventurers) {
			if (s->GetType() == 1) {
				output += "Your mage " + s->GetName() + " says, ";
				output += s->Attack() + "\n";
			}
		}
	}
	return output;
}

std::string Guild::AttackWithPaladins()
{
	std::string output = "You command your paladins to attack! \n";
	if (_allAdventurers.size() > 0) {
		for (auto s : _allAdventurers) {
			if (s->GetType() == 2) {
				output += "Your paladins " + s->GetName() + " says, ";
				output += s->Attack() + "\n";
			}
		}
	}
	return output;
}

std::string Guild::AttackWithRangers()
{
	std::string output = "You command your rangers to attack! \n";
	if (_allAdventurers.size() > 0) {
		for (auto s : _allAdventurers) {
			if (s->GetType() == 3) {
				output += "Your ranger " + s->GetName() + " says, ";
				output += s->Attack() + "\n";
			}
		}
	}
	return output;
}

std::string Guild::AttackWithWarriors()
{
	std::string output = "You command your warriors to attack! \n";
	if (_allAdventurers.size() > 0) {
		for (auto s : _allAdventurers) {
			if (s->GetType() == 4) {
				output += "Your warrior " + s->GetName() + " says, ";
				output += s->Attack() + "\n";
			}
		}
	}
	return output;
}

std::string Guild::AttackWithAllAdventurers()
{
	std::string output = "You command everyone to attack! \n";
	for (auto s : _allAdventurers) {
		if (s->GetType() == 1) {
			output += "Your mage " + s->GetName() + " says, ";
			output += s->Attack();
		};
	}
	for (auto s : _allAdventurers) {
		if (s->GetType() == 2) {
			output += "Your ranger " + s->GetName() + " says, ";
			output += s->Attack();
		};
	}
	for (auto s : _allAdventurers) {
		if (s->GetType() == 3) {
			output += "Your paladin " + s->GetName() + " says, ";
			output += s->Attack();
		};
	}
	for (auto s : _allAdventurers) {
		if (s->GetType() == 4) {
			output += "Your warrior " + s->GetName() + " says, ";
			output += s->Attack();
		};
	}
	return output;
}
