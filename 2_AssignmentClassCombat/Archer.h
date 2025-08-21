#pragma once
#include <string>
#include "Player.h"
using namespace std;

class Archer : public Player
{
public:
	Archer(string nickname);
	string nickname;
	void Attack();
	void Attack(Monster* monster);
};