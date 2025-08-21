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

//플레이어 hp를 set하고 난 후 생존여부를 bool alive로 반환.
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

//플레이어 mp를 set하고 난 후 마나여부를 bool mpEmpty로 반환.
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
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << hp << endl;
    cout << "MP: " << hp << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}