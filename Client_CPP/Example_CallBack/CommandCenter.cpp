#include "CommandCenter.h"
#include <iostream>

#pragma region �̱���
CommandCenter* CommandCenter::_instance = NULL;

CommandCenter* CommandCenter::GetInstance()
{
    if (_instance == nullptr)
        _instance = new CommandCenter();
    return _instance;
}
#pragma endregion

/// <summary>
/// ��� ��ϵ� SCV ���� ����
/// SCV ��������� �Ͻ�Ŵ
/// </summary>
void CommandCenter::UpdateAllSCVs()
{
    vector<SCV>::iterator iter = SCVs.begin();
    for (; iter != SCVs.end(); iter++)
    {
        // SCV ��������� ä���϶�� ��
        if (iter->state == SCV::STATE::IDLE)
            iter->DoMine();

        iter->UpdateState();
    }
}

/// <summary>
/// SCV ��ȯ �����ϸ� ��ȯ
/// </summary>
/// <returns> ��ȯ ���� : true , ���� : false </returns>
bool CommandCenter::TrySpawnSCV()
{
    if (_minerals > SCV_COST) 
    {
        _minerals -= SCV_COST; // �̳׶� ����
        SpawnSCV();
        return true;
    }
    return false;
}

/// <summary>
/// SCV ��ȯ
/// </summary>
void CommandCenter::SpawnSCV() 
{
    new SCV();
    _unitSpawnCount++;
}

/// <summary>
/// SCV ���� ��� ������ ȣ���� �ݹ�
/// </summary>
/// <param name="id"> ���� ��ȣ </param>
void CommandCenter::SCVCallBack(int id)
{
    std::cout << "SCV (Unit ID : " << id << ") ����" << std::endl;
}

/// <summary>
/// SCV �ݹ��Լ� ��� & ���Ϳ� ���
/// </summary>
void CommandCenter::Register(SCV& scv)
{
    scv.RegisterCallBack(SCVCallBack);
    SCVs.push_back(scv);
}

/// <summary>
/// ��ȯ�� �� ���� ��
/// </summary>
int CommandCenter::GetUnitSpawnCount()
{
    return _unitSpawnCount;
}

/// <summary>
/// �̳׶� �� ���� �� ���� �̳׶� �� ���
/// </summary>
void CommandCenter::IncreaseMinerals(int amount)
{
    _minerals += amount;
    std::cout << "���� �̳׶� :" << _minerals << std::endl;
}
