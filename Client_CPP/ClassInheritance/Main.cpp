#include <iostream>
#include <Windows.h>

#include "Creature.h"
#include "Dog.h"
#include "Human.h"
#include "Human_Yellow.h"
#include "Human_Black.h"
#include "Human_White.h"


using namespace std;
int main() {
	/*
	Creature* creature1 = new Creature();
	Dog* dog1 = new Dog();
	Human* human1 = new Human();
	human1->WearCloth("��¤����");
	human1->WearCloth("������Ŷ");
	human1->WearCloth("û�ݹ���");
	human1->WearCloth("����");

	human1->PrintAllClothes();

	Human_Yellow* human_yellow1 = new Human_Yellow();
	Human_Black* human_black1 = new Human_Black();
	Human_White* human_white1 = new Human_White();

	human_yellow1->GoToAcademy();
	human_black1->GoToGym();
	human_white1->GoTravel();
	*/

	// �θ�-�ڽİ��� Ư¡ 
	// �θ�Ŭ���� Ÿ������ �ڽİ�ü�� �ν��Ͻ�ȭ �� �� �ִ�. 
	// �䷸�� �������� �θ�Ŭ���� Ÿ�Կ� �ִ� ����鸸 ������ �����ϴ�.
	Human* human_yellow2 = new Human_Yellow();
	
	Human* humans[99];
	
	for (int i = 0; i < 99; i += 3)
	{
		humans[i] = new Human_Yellow();
		humans[i + 1] = new Human_Black();
		humans[i + 2] = new Human_White();
	}

	// ���� �����Լ��� ���Ե� Ŭ������ �ν��Ͻ�ȭ�� �Ұ�����. 
	ITwoLeggedWalker* twoLeggedWalkers[99];
	for (int i = 0; i < 99; i += 3)
	{
		twoLeggedWalkers[i] = humans[i];
	}
	
	for (int i = 0; i < 99; i++)
	{
		twoLeggedWalkers[i]->TwoLeggedWalk();
	}

	int elapsedTime = 0;
	//while (true)
	//{
	//	for (int i = 0; i < 99; i++) {
	//		humans[i]->Breath();
	//		cout << i <<" �� ���� : " << humans[i]->age
	//			<< ", Ű :"   << humans[i]->height
	//			<< ", ���� :" << humans[i]->mass << endl;
	//	}
	//		


	//	/*human_yellow1->Breath();
	//	cout << " Ȳ�� ���� : " << human_yellow1->age
	//		<< ", Ȳ�� Ű :"    << human_yellow1->height
	//		<< ", Ȳ�� ���� :"  << human_yellow1->mass << endl;

	//	human_black1->Breath();
	//	cout << " ���� ���� : " << human_black1->age
	//		<< ", ���� Ű :"    << human_black1->height
	//		<< ", ���� ���� :"  << human_black1->mass << endl;

	//	human_white1->Breath();
	//	cout << " ���� ���� : " << human_white1->age
	//		<< ", ���� Ű :"    << human_white1->height
	//		<< ", ���� ���� :"  << human_white1->mass << endl;*/

	//	//// ũ��ó ������
	//	//creature1->Breath();

	//	//cout << "ũ��ó ���� : " << creature1->age 
	//	//	 << ", ũ��ó ���� :" << creature1->height 
	//	//	 << ", ũ��ó ���� :" << creature1->mass << endl;

	//	//// �� ������
	//	//dog1->Breath();

	//	//cout << "�� ���� : " << dog1->age
	//	//	 << ", �� ���� :" << dog1->height
	//	//	 << ", �� ���� :" << dog1->mass << endl;

	//	//// ��� ������
	//	//human1->Breath();

	//	//cout << "��� ���� : " << human1->age
	//	//	<< ", ��� ���� :" << human1->height
	//	//	<< ", ��� ���� :" << human1->mass << endl;


	//	//// 3�ʿ� �ѹ��� ����
	//	//if (elapsedTime > 2) {
	//	//	dog1->Bite(creature1);
	//	//	elapsedTime = 0;
	//	//}	
	//	//else
	//	//	elapsedTime++;

	//	Sleep(1000);
	//}
	/*
	delete creature1;
	delete dog1;
	delete human1;
	delete human_yellow1;
	delete human_black1;
	delete human_white1;
	*/
	
	// ����Ŭ���� ��
	
	// �Ǵ� ���� :����Ŭ������ ��ӹް� �θ��� ������������Լ��� ������ �� Ŭ������ �ν��Ͻ�ȭ ����
	Human_Yellow* yelloMan = new Human_Yellow(); 
	yelloMan->Breath();
	// �ȵǴ� ���� : ����Ŭ������ ��ӹ��� Ŭ������ �ν��Ͻ�ȭ �Ϸ� ������,
	// ������������Լ��� ������(override) ���� �ʾ���
	//Human* human = new Human(); 

	// �ȵǴ� ���� : ����Ŭ������ ���� �ν��Ͻ�ȭ �Ϸ�������
	//Creature* creature = new Creature(); 

	return 0;
}