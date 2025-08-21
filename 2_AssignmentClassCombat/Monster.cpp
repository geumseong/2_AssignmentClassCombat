#include <iostream>
#include "Monster.h"
#include "Player.h"

using namespace std;

Monster::Monster(string name) :name(name) {
	this->setHP(10);
	this->setPower(30);
	this->setDefence(10);
	this->setSpeed(10);
}

//몬스터 HP를 바꾸면서 생존여부를 bool alive로 반환.
bool Monster::setHP(int hp)
{
	bool alive = 1;
	if (hp > 0)
	{
		this->hp = hp;
	}
	else
	{
		this->hp = 0;
		alive = 0;
	}
	return alive;
}

//몬스터의 플레이어 대상 공격.
void Monster::Attack(Player* player)
{
	int damage = this->getPower() - player->getDefence();
	if (damage < 1)
	{
		damage = 1;
	}
	cout << "플레이어에게 " << damage << "만큼의 피해를 입혔습니다." << endl;

	if (player->setHP(player->getHP() - damage)) //hp를 새로 set하고 난 후 생존여부를 player 클래스의 bool alive를 통해 반환.
	{
		cout << "플레이어의 남은 HP: " << player->getHP() << endl;
	}
	else
	{
		cout << "플레이어의 남은 HP: " << player->getHP() << endl << "몬스터 승리!" << endl;
	}
}

