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
	cout << damage/3 << "��ŭ�� �������� 3ȸ ����!" << endl;

	if (damage / 3 < 1)
	{
		damage = 1;
	}

	cout << "* ���Ϳ��� " << damage << "��ŭ�� ���ظ� ������!" << endl;
	cout << "* ���Ϳ��� " << damage << "��ŭ�� ���ظ� ������!" << endl;
	cout << "* ���Ϳ��� " << damage << "��ŭ�� ���ظ� ������!" << endl;

	if (monster->setHP(monster->getHP() - damage*3)) //������ hp�� set�ϰ� �� �� �������θ� MonsterŬ������ bool alive�� ��ȯ.
	{
		cout << "* ������ ���� HP: " << monster->getHP() << endl;
	}
	else
	{
		cout << "* ������ ���� HP: " << monster->getHP() << endl << "* �÷��̾� �¸�!" << endl;
	}
}