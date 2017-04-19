#include <iostream>
#include <string>
#include <memory>
#include "Guild.h"
using namespace std;

void DisplayGuildInfo(const shared_ptr<Guild> guild);
void AddAdventurer(const shared_ptr<Guild> guild);
void Attack(const shared_ptr<Guild> guild);

int main() 
{
	cout << "Welcome to the adventure guild simulator." << endl << "Enter a name for your guild: ";
	string name;
	getline(cin, name);
	auto guild = make_shared<Guild>(name);

	int choice = -1;
	while (choice != 0) 
	{
		system("cls");
		cout << "Now Managing " << guild->GetName() << endl << "****************************" << endl;
		cout << "1) Display Guild Information" << endl;
		cout << "2) Add An Adventurer" << endl;
		cout << "3) Attack!" << endl;
		cin >> choice;

		switch (choice) 
		{
		case 1: DisplayGuildInfo(guild); break;
		case 2: AddAdventurer(guild); break;
		case 3: Attack(guild); break;
		default: return 0; break;
		}
	}
	return 0;
}

void DisplayGuildInfo(const shared_ptr<Guild> guild)
{
	system("cls");
	cout << guild->GetInfo();
	system("pause");
}

void AddAdventurer(const shared_ptr<Guild> guild) 
{
	system("cls");

	cout << "Enter a name for your adventurer: ";
	string name;
	cin >> name;

	system("cls");

	cout << "What type of adventurer would you like to add?" << endl;
	cout << "1) Mage" << endl;
	cout << "2) Ranger" << endl;
	cout << "3) Paladin" << endl;
	cout << "4) Warrior" << endl;

	int choice = -1;
	cin >> choice;
	switch (choice)
	{
	case 1: guild->AddAdventurer(name, 1); break;
	case 2: guild->AddAdventurer(name, 2); break;
	case 3: guild->AddAdventurer(name, 3); break;
	case 4: guild->AddAdventurer(name, 4); break;
	default: cout << "Invalid choice!"; break;
	}
	system("pause");
}

void Attack(const shared_ptr<Guild> guild)
{
	system("cls");

	cout << "1) attack with mages" << endl;
	cout << "2) attack with rangers" << endl;
	cout << "3) attack with warriors" << endl;
	cout << "4) attack with paladins" << endl;
	cout << "5) attack with everything!" << endl;

	int choice = -1;
	cin >> choice;

	switch (choice)
	{
	case 1: cout << guild->AttackWithMages() << endl; break;
	case 2: cout << guild->AttackWithRangers() << endl; break;
	case 3: cout << guild->AttackWithWarriors() << endl; break;
	case 4: cout << guild->AttackWithPaladins() << endl; break;
	case 5: cout << guild->AttackWithAllAdventurers() << endl; break;
	default: cout << "you run away like a coward" << endl; break;
	}
	system("pause");
	
}