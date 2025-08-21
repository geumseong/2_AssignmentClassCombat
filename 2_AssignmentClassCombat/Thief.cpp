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
	cout << damage/5 << "��ŭ�� �������� 5ȸ ����!" << endl;

	if (damage / 5 < 1)
	{
		damage = 1;
	}

	cout << "* ���Ϳ��� " << damage << "��ŭ�� ���ظ� ������!" << endl;
	cout << "* ���Ϳ��� " << damage << "��ŭ�� ���ظ� ������!" << endl;
	cout << "* ���Ϳ��� " << damage << "��ŭ�� ���ظ� ������!" << endl;
	cout << "* ���Ϳ��� " << damage << "��ŭ�� ���ظ� ������!" << endl;
	cout << "* ���Ϳ��� " << damage << "��ŭ�� ���ظ� ������!" << endl;

	if (monster->setHP(monster->getHP() - damage*5)) //������ hp�� set�ϰ� �� �� �������θ� MonsterŬ������ bool alive�� ��ȯ.
	{
		cout << "* ������ ���� HP: " << monster->getHP() << endl;
	}
	else
	{
		cout << "* ������ ���� HP: " << monster->getHP() << endl << "* �÷��̾� �¸�!" << endl;
	}
}