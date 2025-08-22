#pragma once
#include <string>
#include "Player.h"
using namespace std;

class Archer : public Player
{
public:
	Archer(string nickname);
	string nickname;
	void Attack() override;
	void Attack(Monster* monster);
};