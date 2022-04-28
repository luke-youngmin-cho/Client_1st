#include <iostream>
#include <Windows.h>

#include "Creature.h"
#include "Dog.h"
#include "Human.h"
using namespace std;
int main() {

	Creature* creature1 = new Creature();
	Dog* dog1 = new Dog();
	Human* human1 = new Human();
	human1->WearCloth("��¤����");
	human1->WearCloth("������Ŷ");
	human1->WearCloth("û�ݹ���");
	human1->WearCloth("����");

	human1->PrintAllClothes();
	int elapsedTime = 0;
	while (true)
	{
		// ũ��ó ������
		creature1->Breath();

		cout << "ũ��ó ���� : " << creature1->age 
			 << ", ũ��ó ���� :" << creature1->height 
			 << ", ũ��ó ���� :" << creature1->mass << endl;

		// �� ������
		dog1->Breath();

		cout << "�� ���� : " << dog1->age
			 << ", �� ���� :" << dog1->height
			 << ", �� ���� :" << dog1->mass << endl;

		// ��� ������
		human1->Breath();

		cout << "��� ���� : " << human1->age
			<< ", ��� ���� :" << human1->height
			<< ", ��� ���� :" << human1->mass << endl;
		Sleep(1000);

		// 3�ʿ� �ѹ��� ����
		if (elapsedTime > 2) {
			dog1->Bite(creature1);
			elapsedTime = 0;
		}	
		else
			elapsedTime++;
	}

	delete creature1;
	delete dog1;
	return 0;
}