#pragma once
#include <string>
#include "Player.h"
using namespace std;

class Magician : public Player
{
public:
	Magician(string nickname);
	string nickname;
	void Attack() override;
	void Attack(Monster* monster) override;
};