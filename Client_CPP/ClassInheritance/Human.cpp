#include <iostream>
#include "Human.h"

void Human::WearCloth(string cloth)
{
	clothes.Add(cloth);
	std::cout << "�����԰� �ִ� �ʵ��̾�";
	for (int i = 0; i < clothes.Length(); i++)
	{
		std::cout << clothes[i] << ", ";
	}
	std::cout << std::endl;
}

void Human::PrintAllClothes()
{
	std::cout << "���� �԰� �ִ� �ʵ��̾� :";
	for (int i = 0; i < clothes.Length(); i++)
	{
		std::cout << clothes[i] << ", ";
	}
	std::cout << std::endl;
}

void Human::TwoLeggedWalk()
{
	std::cout << "���������� �ǽ��մϴ�" << std::endl;
}

void Human::FourLeggedWalk()
{
}

void Human::MakeDogFollowMe(Dog& dog)
{
	dog.followEnable = true;
}
