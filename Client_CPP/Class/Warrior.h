#pragma once
#include <iostream>
using namespace std;

class Warrior
{
	// Ŭ���� ���� static ���
	// ��ü��°� Ŭ������ �����Ҵ��ؼ� �����ϴ°ǵ�, 
	// static Ű����� �����Ҵ��� �Ұ����ϴٰ� ����ϴ� Ű�����̹Ƿ�
	// �׷��� Ŭ���� ���� ����� static �̶�� ����Ǹ�
	// ���̻� ��ü�� ���� ���� �� ������.
private:
	static Warrior* _instance;

private:
	int _hp;

public:
	Warrior()
		: _hp(100)
	{

	}
	static Warrior* GetInstance();

	void Attack();
	void SetHP(int hp);
	int GetHP();
};