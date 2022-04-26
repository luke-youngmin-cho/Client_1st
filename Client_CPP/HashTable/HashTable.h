#pragma once

#include "LinkedListTemplate.h"
#include <string>
using namespace std;
class HashTable
{
private:
	const int DEFAULT_SIZE;
	LinkedList<string>** _bucket;
	int _tmpHash;

public:
	HashTable();
	void Add(string value); // ���� value �� �ؽ�Ű�� ���ؼ� �ش� bucket �� value �� �߰��ϴ� �Լ�
	bool ContainsKey(int key); // �ؽ�Ű�� �����ϴ��� üũ�ϴ� �Լ�
	bool ContainsKey(string value); // value �� �ش��ϴ� �ؽ�Ű�� �����ϴ��� üũ�ϴ� �Լ�
	bool ContainsValue(string value); // ���� value �� �����ϴ��� üũ�ϴ� �Լ�
	bool RemoveKey(int key); // ���� key �� �ش��ϴ� bucket �� �޸����� �ϴ� �Լ�
	bool RemoveKey(string value); // ���� value �� �ش��ϴ� key �� �ش��ϴ� bucket �� �޸������ϴ� �Լ�
	bool RemoveValue(string value); // ���� value�� �޸� �����ϴ� �Լ�
	void Clear(); // ��� bucket �޸�����
	void Delete(); // hashtable �޸�����

private:
	int Hash(string value); // �ؽø� ���ϴ� �Լ�
};

