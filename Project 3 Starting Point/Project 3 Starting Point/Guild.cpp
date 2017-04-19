#include "Guild.h"

Guild::Guild(std::string name) : _name(name)
{
}

Guild::~Guild()
{
}
//
//void Guild::AddMage(std::string name)
//{
//	auto magePtr = std::make_shared<Mage>(name);
//	_mages.push_back(magePtr);
//}
//
//void Guild::AddPaladin(std::string name)
//{
//	auto paladin = std::make_shared<Paladin>(name);
//	_paladins.push_back(paladin);
//}
//
//void Guild::AddRanger(std::string name)
//{
//	auto ranger = std::make_shared<Ranger>(name);
//	_rangers.push_back(ranger);
//}
//
//void Guild::AddWarrior(std::string name)
//{
//	auto warrior = std::make_shared<Warrior>(name);
//	_warriors.push_back(warrior);
//}

void Guild::AddAdventurer(std::string name, int type)
{
	auto adventurer = std::make_shared<Adventurer>(name, type);
	_allAdventurers.push_back(adventurer);
}

std::string Guild::GetInfo()
{
	std::string output = "Your guild has: \n";	
	int mages, rangers, paladins, warriors =0;
	for (auto s : _allAdventurers) {
		if (s->GetType() == 1) {
			mages++;
		}
		if (s->GetType() == 2) {
			rangers++;
		}
		if (s->GetType() == 3) {
			paladins++;
		}
		if (s->GetType() == 4) {
			warriors++;
		}
	}
	output += (std::to_string(mages) + " mages!\n");
	output += (std::to_string(mages) + " rangers!\n");
	output += (std::to_string(mages) + " paladins!\n");
	output += (std::to_string(mages) + " warriors!\n");
	/*output += _mages.size()		> 0 ? std::to_string(_mages.size()) + " mages\n" : "No mages!\n";
	output += _rangers.size()	> 0 ? std::to_string(_rangers.size()) + " rangers\n" : "No rangers!\n";
	output += _warriors.size()	> 0 ? std::to_string(_warriors.size()) + " warriors\n" : "No warriors!\n";
	output += _paladins.size()	> 0 ? std::to_string(_paladins.size()) + " paladins\n" : "No paladins!\n";*/
	return output;
}

//std::string Guild::AttackWithMages()
//{
//	std::string output = "You command your mages to attack! \n";
//	if (_mages.size() > 0) {
//		for (auto mage : _mages) {
//			output += mage->Attack() + "\n";
//		}
//	}
//	return output;
//}
//
//std::string Guild::AttackWithPaladins()
//{
//	std::string output = "You command your paladins to attack! \n";
//	if (_paladins.size() > 0) {
//		for (auto paladin : _paladins) {
//			output += paladin->Attack() + "\n";
//		}
//	}
//	return output;
//}
//
//std::string Guild::AttackWithRangers()
//{
//	std::string output = "You command your rangers to attack! \n";
//	if (_rangers.size() > 0) {
//		for (auto ranger : _rangers) {
//			output += ranger->Attack() + "\n";
//		}
//	}
//	return output;
//}
//
//std::string Guild::AttackWithWarriors()
//{
//	std::string output = "You command your warriors to attack! \n";
//	if (_warriors.size() > 0) {
//		for (auto warrior : _warriors) {
//			output += warrior->Attack() + "\n";
//		}
//	}
//	return output;
//}
//
//std::string Guild::AttackWithAllAdventurers()
//{
//	std::string output = "You command everyone to attack! \n";
//	output += AttackWithMages();
//	output += AttackWithPaladins();
//	output += AttackWithRangers();
//	output += AttackWithWarriors();
//	return output;
//}
