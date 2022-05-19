#include "SCV.h"
#include <iostream>
#include <chrono>
#include "CommandCenter.h"

/// <summary>
/// ��ȯ�� CommandCenter �� �ڱ��ڽ� ��� �� ���� ID �ο�����
/// </summary>
SCV::SCV()
	:state(STATE::IDLE)
	, timeMark(0.0)
{
	CommandCenter* commandCenter = CommandCenter::GetInstance();
	id = commandCenter->GetUnitSpawnCount();
	commandCenter->Register(*this);
}

/// <summary>
/// ä�� �����ϰڴٴ� �ݹ� ȣ�� �� 
/// FSM ���� ä�� �������� ����
/// </summary>
void SCV::DoMine()
{
	cb(id);
    state = STATE::START_MININING;
}

/// <summary>
/// FSM
/// </summary>
void SCV::UpdateState()
{
	switch (state)
	{
		// �ƹ��͵� ����
		//-------------------------------------------------
		case SCV::IDLE:
			// �Ұ� ����
			break;

		// ä�� ����
		//-------------------------------------------------
		case SCV::START_MININING:
			timeMark = clock();
			NextState();
			break;

		// ä�� ��...
		//-------------------------------------------------
		case SCV::ON_MINING:
			// ä�� �Ϸ� �Ǿ����� üũ
			if ((clock() - timeMark) > SCV_MINING_TIME) {
				NextState();
			}
			break;

		// ä�� �Ϸ�
		//-------------------------------------------------
		case SCV::FINISH_MINING:
			CommandCenter::GetInstance()->IncreaseMinerals(SCV_MINING_AMOUNT);
			state = STATE::IDLE;
			break;
		default:
			break;
	}
}

/// <summary>
/// FSM ���� ���·�
/// </summary>
void SCV::NextState()
{
	state = (STATE)(state + 1);
}

/// <summary>
/// �ݹ� ���
/// </summary>
void SCV::RegisterCallBack(REGISTER_CALLBACK callback)
{
	this->cb = callback;
}
