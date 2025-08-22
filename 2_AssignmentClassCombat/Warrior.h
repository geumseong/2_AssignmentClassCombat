#pragma once
#include <string>
#include "Player.h"
using namespace std;

class Warrior : public Player
{
public:
	Warrior(string nickname);
	string nickname;
	void Attack() override;
	void Attack(Monster* monster) override;
	//void PrintNickname(string nickname);
};