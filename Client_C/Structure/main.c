#include <stdio.h>
// ����ü 
// ���� �������� ����� ���� �� �ִ� ����� ���� �ڷ���

// ���� :
//struct ����ü�ڷ����̸� {
//
//	// ��� ����
//};

// ����ü�� �� ���� 
struct Coord {
	int x;
	int y;
};

struct Student {	
	char name[20]; // 20byte
	double average; // 8 byte
	int korean, english, math;
};

int main() {

	struct Coord coord1;
	// . ������ (���������)
	coord1.x = 4;
	coord1.y = 8;
	
	struct Coord coord2;
	coord2 = coord1;

	coord2.x = 1;
	coord2.y = 2;
	printf("��ǥ1 : (%d, %d)\n", coord1.x, coord1.y);
	printf("��ǥ2 : (%d, %d)\n", coord2.x, coord2.y);

	// ����ü�� �޸� �Ҵ�
	printf("Coord Size : %d\n", sizeof(struct Coord));
	
	printf("Student : %d\n", sizeof(struct Student));

	struct Student studentA;
	struct Student* student_P;



}