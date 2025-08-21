#include <iostream>
#include "Archer.h"
#include "Monster.h"
using namespace std;


Archer::Archer(string nickname) : Player(nickname)
{
	this->setJobName("Archer");
	this->setLevel(1);
	this->setHP(30);
	this->setMP(25);
	this->setPower(9);
	this->setDefence(8);
	this->setAccuracy(14);
	this->setSpeed(11);
}

void Archer::Attack()
{
	cout << "Attack() by Archer." << endl;
}

void Archer::Attack(Monster* monster)
{
	int damage = this->getPower() - monster->getDefence();
	if (damage < 1)
	{
		damage = 1;
	}
	cout << damage/3 << "만큼의 데미지로 3회 공격!" << endl;

	if (damage / 3 < 1)
	{
		damage = 1;
	}

	cout << "* 몬스터에게 " << damage << "만큼의 피해를 입혔다!" << endl;
	cout << "* 몬스터에게 " << damage << "만큼의 피해를 입혔다!" << endl;
	cout << "* 몬스터에게 " << damage << "만큼의 피해를 입혔다!" << endl;

	if (monster->setHP(monster->getHP() - damage*3)) //몬스터의 hp를 set하고 난 후 생존여부를 Monster클래스의 bool alive로 반환.
	{
		cout << "* 몬스터의 남은 HP: " << monster->getHP() << endl;
	}
	else
	{
		cout << "* 몬스터의 남은 HP: " << monster->getHP() << endl << "* 플레이어 승리!" << endl;
	}
}