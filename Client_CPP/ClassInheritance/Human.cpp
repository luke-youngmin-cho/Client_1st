#include <iostream>
#include "Human.h"

void Human::WearCloth(string cloth)
{
	clothes.Add(cloth);
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
