#include <iostream>
#include "SCV.h"
#include "CommandCenter.h"
#include <Windows.h>

int main() {

	CommandCenter* commandCenter = CommandCenter::GetInstance();

	// �⺻���� �־����� SCV
	for (int i = 0; i < SCV_STANDARD_NUMBER; i++)
		commandCenter->SpawnSCV();

	float scv_timer = SCV_SPAWN_TIME;
	float delta_time = 16.6666667; // 60fps ���� �����Ӵ� �ɸ��� �ð�
	while (true)
	{
		if (scv_timer <= 0) 
		{
			if (commandCenter->TrySpawnSCV())
			{
				scv_timer = SCV_SPAWN_TIME;
			}			
		}

		commandCenter->UpdateAllSCVs();

		Sleep(delta_time);
		scv_timer -= delta_time;
	}
	

	return 0;
}