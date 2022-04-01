#pragma warning (disable : 4996)
#include <stdio.h>

// FSM ( Finite State Machine )
// ���� ���� �ӽ�
enum JumpState {
	Idle,
	PrepareToJump,
	InFlight,
	Falling,
	OnGrouond,
};

// enum : ������, ��������� �ڷ����� �����ϱ����� Ű����
enum PlayerState {
	Idle,
	Walk,
	Run,
	Attack,
	Jump,
	Hurt,
};

// playerState
// ����
// �÷��̾� ����
// 0 = �ƹ��͵� �����ʴ»���
// 1 = �ȱ�
// 2 = �޸���
// 3 = �����ϱ�
// 4 = �����ϱ�
// 5 = �ǰݴ��ϱ�

int main() {

	enum PlayerState playerState;
	playerState = Idle;

	while (1)
	{
		scanf("%d", &playerState);
		switch (playerState)
		{
		case Idle:
			printf("�ƹ��͵� �����ʴ� ����");
			break;
		case Walk:
			printf("�ȱ�");
			break;
		case Run:
			printf("�޸���");
			break;
		case Attack:
			printf("�����ϱ�");
			break;
		case Jump:
			printf("�����ϱ�");
			break;
		case Hurt:
			printf("�ǰݴ��ϱ�");
			break;
		default:
			printf("���� �������� �𸣰ھ�� �Ф�");
			break;
		}
	}
	


}