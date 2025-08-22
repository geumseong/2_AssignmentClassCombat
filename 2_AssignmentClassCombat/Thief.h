#pragma once
#include <string>
#include "Player.h"
using namespace std;

class Thief : public Player
{
public:
	Thief(string nickname);
	string nickname;
	void Attack() override;
	void Attack(Monster* monster) override;
};