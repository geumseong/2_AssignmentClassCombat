#pragma once
#include <iostream>
using namespace std;

class Monster;

class Player
{
public:
	Player(string nickname);
	string getJobName() { return jobName; }
	string getNickname() { return nickname; }
	int getLevel() { return level; }
	int getHP() { return hp; }
	int getMP() { return mp; }
	int getPower() { return power; }
	int getDefence() { return defence; }
	int getAccuracy() { return accuracy; }
	int getSpeed() { return speed; }

	void setJobName(string jobName) { this->jobName = jobName; }
	void setNickname(string nickname) { this, nickname = nickname; }
	void setLevel(int level) {this->level = level;}
	bool setHP(int hp);
	bool setMP(int mp);
	void setPower(int power) { this->power = power; }
	void setDefence(int defence) { this->defence = defence; }
	void setAccuracy(int accuracy) { this->accuracy = accuracy;  }
	void setSpeed(int speed) { this->speed = speed; }

	virtual void Attack() = 0;
	virtual void Attack(Monster* monster) = 0;
	void printPlayerStatus();

protected:
	string jobName;
	string nickname;
	int level;
	int hp;
	int mp;
	int power;
	int defence;
	int accuracy;
	int speed;
};