#include "Debuffer.h"
#include <iostream>

void Debuffer::DecreaseHP(Warrior& target)
{
	std::cout << "�÷��̾��� ü����" << _damage << "��ŭ �����ž�" << std::endl;
	target.SetHP(target.GetHP() - _damage);
}

void Debuffer::DecreaseHP()
{
	//Warrior& warrior = *(Warrior::GetInstance());
	//warrior.SetHP(warrior.GetHP() - DAMAGE);
	DecreaseHP(*(Warrior::GetInstance()));
}