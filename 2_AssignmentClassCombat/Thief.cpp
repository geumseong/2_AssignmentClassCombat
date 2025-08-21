#include <iostream>
#include "Thief.h"
#include "Monster.h"
using namespace std;


Thief::Thief(string nickname) : Player(nickname) 
{
	this->setJobName("Thief");
	this->setLevel(1);
	this->setHP(35);
	this->setMP(15);
	this->setPower(7);
	this->setDefence(9);
	this->setAccuracy(13);
	this->setSpeed(12);
}

void Thief::Attack()
{
	cout << "Attack() by Thief." << endl;
}

void Thief::Attack(Monster* monster)
{
	int damage = this->getPower() - monster->getDefence();
	if (damage < 1)
	{
		damage = 1;
	}
	cout << damage/5 << "만큼의 데미지로 5회 공격!" << endl;

	if (damage / 5 < 1)
	{
		damage = 1;
	}

	cout << "* 몬스터에게 " << damage << "만큼의 피해를 입혔다!" << endl;
	cout << "* 몬스터에게 " << damage << "만큼의 피해를 입혔다!" << endl;
	cout << "* 몬스터에게 " << damage << "만큼의 피해를 입혔다!" << endl;
	cout << "* 몬스터에게 " << damage << "만큼의 피해를 입혔다!" << endl;
	cout << "* 몬스터에게 " << damage << "만큼의 피해를 입혔다!" << endl;

	if (monster->setHP(monster->getHP() - damage*5)) //몬스터의 hp를 set하고 난 후 생존여부를 Monster클래스의 bool alive로 반환.
	{
		cout << "* 몬스터의 남은 HP: " << monster->getHP() << endl;
	}
	else
	{
		cout << "* 몬스터의 남은 HP: " << monster->getHP() << endl << "* 플레이어 승리!" << endl;
	}
}