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

//���� HP�� �ٲٸ鼭 �������θ� bool alive�� ��ȯ.
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

//������ �÷��̾� ��� ����.
void Monster::Attack(Player* player)
{
	int damage = this->getPower() - player->getDefence();
	if (damage < 1)
	{
		damage = 1;
	}
	cout << "�÷��̾�� " << damage << "��ŭ�� ���ظ� �������ϴ�." << endl;

	if (player->setHP(player->getHP() - damage)) //hp�� ���� set�ϰ� �� �� �������θ� player Ŭ������ bool alive�� ���� ��ȯ.
	{
		cout << "�÷��̾��� ���� HP: " << player->getHP() << endl;
	}
	else
	{
		cout << "�÷��̾��� ���� HP: " << player->getHP() << endl << "���� �¸�!" << endl;
	}
}

