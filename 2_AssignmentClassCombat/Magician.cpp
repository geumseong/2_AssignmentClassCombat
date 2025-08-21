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
	cout << damage << "��ŭ�� �������� 1ȸ ����!" << endl;

	cout << "* ���Ϳ��� " << damage << "��ŭ�� ���ظ� ������!" << endl;

	if (monster->setHP(monster->getHP() - damage)) //������ hp�� set�ϰ� �� �� �������θ� MonsterŬ������ bool alive�� ��ȯ.
	{
		cout << "* ������ ���� HP: " << monster->getHP() << endl;
	}
	else
	{
		cout << "* ������ ���� HP: " << monster->getHP() << endl << "* �÷��̾� �¸�!" << endl;
	}
}