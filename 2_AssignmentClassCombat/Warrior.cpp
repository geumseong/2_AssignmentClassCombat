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
	//cout << "������ Ŭ������ �г��� ȣ��: " << this->getNickname() << endl;

}

//void warrior::printnickname(string nickname)
//{
//	cout << "������ Ŭ���� ������Ʈ ���� �� �г���: " << nickname << endl;
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