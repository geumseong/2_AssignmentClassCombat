#include <iostream>
#include "Magician.h"
#include "Monster.h"
using namespace std;


Magician::Magician(string nickname) : Player(nickname) 
{
	this->setJobName("Magician");
	this->setLevel(1);
	this->setHP(30);
	this->setMP(40);
	this->setPower(5);
	this->setDefence(7);
	this->setAccuracy(12);
	this->setSpeed(10);
}

void Magician::Attack()
{
	cout << "Attack() by Magician." << endl;
}

void Magician::Attack(Monster* monster)
{
	int damage = this->getPower() - monster->getDefence();
	if (damage < 1)
	{
		damage = 1;
	}
	cout << damage << "만큼의 데미지로 1회 공격!" << endl;

	cout << "* 몬스터에게 " << damage << "만큼의 피해를 입혔다!" << endl;

	if (monster->setHP(monster->getHP() - damage)) //몬스터의 hp를 set하고 난 후 생존여부를 Monster클래스의 bool alive로 반환.
	{
		cout << "* 몬스터의 남은 HP: " << monster->getHP() << endl;
	}
	else
	{
		cout << "* 몬스터의 남은 HP: " << monster->getHP() << endl << "* 플레이어 승리!" << endl;
	}
}