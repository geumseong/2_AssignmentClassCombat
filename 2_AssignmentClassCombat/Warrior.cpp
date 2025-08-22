#include <iostream>
#include "Warrior.h"
#include "Monster.h"
using namespace std;


Warrior::Warrior(string nickname) : Player(nickname)
{
	this->setJobName("Warrior");
	this->setLevel(1);
	this->setHP(50);
	this->setMP(20);
	this->setPower(18);
	this->setDefence(15);
	this->setAccuracy(7);
	this->setSpeed(10);
	//PrintNickname(nickname);
	//cout << "워리어 클래스의 닉네임 호출: " << this->getNickname() << endl;

}

//void warrior::printnickname(string nickname)
//{
//	cout << "워리어 클래스 오브젝트 생성 후 닉네임: " << nickname << endl;
//}

void Warrior::Attack()
{
	cout << "Attack() by Warrior." << endl;
}

void Warrior::Attack(Monster* monster)
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