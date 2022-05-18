#include "SCV.h"
#include <iostream>
#include <chrono>



SCV::SCV()
	:state(STATE::IDLE)
	, timeMark(0.0)
{
	
}

void SCV::DoMine()
{
    state = STATE::START_MININING;
}

void SCV::UpdateState()
{
	switch (state)
	{
	case SCV::IDLE:
		// �Ұ� ����
		break;
	case SCV::START_MININING:
		timeMark = clock();
		NextState();
		break;
	case SCV::ON_MINING:
		// ä�� �Ϸ� �Ǿ����� üũ
		if ((clock() - timeMark) > SCV_MININGTIME) {
			NextState();
		}
		break;
	case SCV::FINISH_MINING:
		// todo -> Ŀ�ǵ弾�� �� �̳׶� �� ����
		DoMine();
		break;
	default:
		break;
	}
}

void SCV::NextState()
{
	state = (STATE)(state + 1);
}

void SCV::RegisterCallBack(REGISTER_CALLBACK callback)
{
	this->cb = callback;
}

void SCV::SayImReady(int id)
{
	std::cout << "SCV" << id << "�غ�Ϸ�" << std::endl;
}
