#pragma once
#define SCV_COST 50
#define SCV_SPAWN_TIME 4000
#define SCV_MINING_TIME 2000
#define SCV_MINING_AMOUNT 8


typedef void(*REGISTER_CALLBACK)(int);

class SCV
{
public :
	// FSM (Finite State Machine , ���� ���� �ӽ� )
	enum STATE
	{
		IDLE,
		START_MININING,
		ON_MINING,
		FINISH_MINING,
	};
	STATE state;
	double timeMark; // ä�� ���۽� �ð� üũ��
	int id;
	REGISTER_CALLBACK cb; // ä�� ��� �޾��� �� ȣ���� �ݹ�

	SCV();
	void DoMine(); // ä�� ����
	void UpdateState(); // FSM ����
	void NextState(); // FSM �״��� ��������
	void RegisterCallBack(REGISTER_CALLBACK callback); // �ݹ� ���
};

