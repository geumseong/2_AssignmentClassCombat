#pragma once
#include <iostream>
using namespace std;

class Player;

class Monster
{
public:
	Monster(string name);
	void Attack(Player* player);

    string getName() { return name; }
    int getHP() { return hp; }
    int getPower() { return power; }
    int getDefence() { return defence; }
    int getSpeed() { return speed; }

    void setName(string name) { this->name = name; }
    bool setHP(int HP);
    void setPower(int power) { this->power = power; }
    void setDefence(int defence) { this->defence = defence; }
    void setSpeed(int speed) { this->speed = speed; }

protected:
    string name;
    int hp;
    int power;
    int defence;
    int speed;
};