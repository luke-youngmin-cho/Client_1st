#pragma once
#pragma warning (disable : 4996)
#include "Warrior.h";
// ������ �÷��̾� ü�±�� ģ��
class Debuffer
{
public:
	int _damage = 10;
	char* _name;

public:
	void DecreaseHP(Warrior& target);
	void DecreaseHP();


	Debuffer() {
		_name = new char[20];
	}

	Debuffer(const Debuffer& origin) {
		_damage = origin._damage;
		_name = new char[strlen(origin._name) + 1];
		strcpy(_name, origin._name);
	}

	~Debuffer() {
		delete[] _name;
	}

};