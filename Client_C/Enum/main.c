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

enum LAYER_MASK_NOT_OK {
	GHOST, // bit ... 0000
	PLAYER, // bit ... 0001	
	WALL, // bit ... 0010
	GROUND, // bit ... 0011
};

enum LAYER_MASK_OK {
	GHOST = 0 << 0 , // bit ... 0000
	PLAYER = 1 << 0, // bit ... 0001	
	WALL = 1 << 1, // bit ... 0010
	GROUND = 1 << 2, // bit ... 0100
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