#include "Warrior.h"

Warrior* Warrior::_instance = NULL;

Warrior* Warrior::GetInstance()
{
	if (_instance == nullptr)
		_instance = new Warrior();
	return _instance;
}

void Warrior::Attack()
{
	cout << "����!!" << endl;
}

void Warrior::SetHP(int hp)
{
	_hp = hp;
	cout << "�� ü���� ����" << _hp << "��" << endl;
}

int Warrior::GetHP()
{
	return _hp;
}