#pragma once

#include <vector>
#include "SCV.h"

#define SCV_STANDARD_NUMBER 2

using namespace std;
class CommandCenter
{
#pragma region �̱���
private:
	static CommandCenter* _instance; 

public:
	static CommandCenter* GetInstance(); 
#pragma endregion

private: 
	
	int _minerals; // ���� �ڿ�
	int _unitSpawnCount; // ��ȯ�� ���� ��

public :
	
	vector<SCV> SCVs; // ��ȯ�� SCV�� 
	
	static void SCVCallBack(int id); // SCV���� ��ɳ����� ȣ���� �ݹ�

	void UpdateAllSCVs(); // ��� SCV ���� ����
	bool TrySpawnSCV(); // SCV ���� �õ� (�̳׶� �ʿ���)
	void SpawnSCV(); // SCV ����
	void Register(SCV& scv); // SCV ���
	int GetUnitSpawnCount(); // ��ȯ�� ���� ���� 
	void IncreaseMinerals(int amount); // �ڿ� ����
};

