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

typedef struct _Student {	
	char name[20]; // 20byte
	double average; // 8 byte
	int korean, english, math;
} Student;

// ��Ʈ�ʵ� 
// �޸� ���� ���� �� �ִ� �������, ù��° ������� ���������� ��Ʈ�� �Ҵ� �� �� �ִ�.
// ��, ���� �ش� ��Ʈ���� �Ѿ�ԵǸ� �����÷ΰ� �߻��ϴ� �����ؼ� ����ؾ��Ѵ�.
struct Time {
	unsigned int sec : 6; // LSB ~ Bit5
	//unsigned int : 31; // �е���Ʈ ����
	unsigned int min : 6; // Bit6 ~ Bit11
	unsigned int hour : 5; // Bit12 ~ Bit16
};

struct StudentList {
	Student students[3];
	int num;
} studentList;

void SwapStudents(Student* student1, Student* student2);

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

	printf("Student : %d\n", sizeof(Student));

	Student studentA;
	Student* student_P;

	strcpy(studentA.name, "Luke");
	studentA.english = 80;
	studentA.korean = 60;
	studentA.math = 40;
	studentA.average = (double)(studentA.english + studentA.korean + studentA.math) / 3.0;

	printf("%s", studentA.name);
	printf("%lf", studentA.average);

	student_P = &studentA;

	// -> ������ ( ������������� : ����ü ������ ������ ����� �����ϴ� ������ )
	printf("%s", student_P->name);
	student_P->english = 10;
	printf("%d", student_P->english);
	printf("%d", studentA.english);

	// ����ü ������ ����� �ּҿ��� ������ �� �ִ�.
	int* koreanGrade = &studentA.korean;


	printf("\n");
	// ��Ʈ�ʵ� 
	struct Time t1;
	printf("%d\n", sizeof(struct Time));

	/*t1.hour = 5;
	t1.min = 12;
	t1.sec = 80;
	printf("%d:%d:%d\n", t1.hour, t1.min, t1.sec);*/
	//unsigned int* tmpHour = &t1.hour; ��Ʈ�ʵ��� �ּҿ��� ������ �� ����.

	Student studentB = {
		{"Jerry"},
		{55},
		{65},
		{32},
		{(double)(55 + 65 + 32) / 3.0}
	};

	Student studentC = {
		{"Tom"},
		{85},
		{25},
		{62},
		{(double)(85 + 25 + 62) / 3.0}
	};

	// ����ü�� ����ΰ����� ����ü
	studentList.num = 3;
	studentList.students[0] = studentA;
	studentList.students[1] = studentB;
	studentList.students[2] = studentC;
	printf("student A' english grade %d\n", studentList.students[0].english);
	
	// ����ü�� �����ϴ� �Լ� 
}

void SwapStudents(Student* student1, Student* student2)
{
	Student tmpStudent = *student1;
	*student1 = *student2;
	*student2 = tmpStudent;
}
