#pragma once
#include <string>
#include "Player.h"
using namespace std;

class Thief : public Player
{
public:
	Thief(string nickname);
	string nickname;
	void Attack();
	void Attack(Monster* monster);
};