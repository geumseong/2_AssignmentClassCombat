#include <iostream>
#include "Player.h"
using namespace std;

Player::Player(string nickname) : nickname(nickname)
{
    this->setJobName("Player");
    this->setLevel(0);
    this->setHP(0);
    this->setMP(0);
    this->setPower(0);
    this->setDefence(0);
    this->setAccuracy(0);
    this->setSpeed(0);
}

//�÷��̾� hp�� set�ϰ� �� �� �������θ� bool alive�� ��ȯ.
bool Player::setHP(int hp)
{
    bool alive = 1;
    if (hp > 1)
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

//�÷��̾� mp�� set�ϰ� �� �� �������θ� bool mpEmpty�� ��ȯ.
bool Player::setMP(int mp)
{
    bool mpEmpty = 0;
    if (mp > 0)
    {
        this->mp = mp;
    }
    else
    {
        this->mp = 0;
        mpEmpty = 1;
    }
    return mpEmpty;
}

void Player::printPlayerStatus()
{
    cout << "------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << hp << endl;
    cout << "MP: " << hp << endl;
    cout << "���ݷ�: " << power << endl;
    cout << "����: " << defence << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------" << endl;
}