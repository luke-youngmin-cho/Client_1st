#include <stdio.h>
#include "test.h"



// ��ȯ�� �Լ��̸� (�Ű�����1�ڷ��� �Ű�����1�̸�, �Ű�����2�ڷ��� �Ű�����2�̸�, ... )
// {
//		���곻��
//		��ȯ�� (return ��ȯ��)
// }

// �������� : �߰�ȣ ���� ���ǵ� ����. �ش� �߰�ȣ�� ����� �޸𸮿��� ������.
// �������� : ��� ������ �����Ҽ� �ִ� ����

int globalCount;


// ������ ������ ����Ǵ� ������ ( ��������, �������� ) �� ����� ���ÿ� 0 ���� �ʱ�ȭ�ȴ�.

int main(void) {

	doSomething();

	int testNum1 = 3;
	int testNum2 = 5;
	// �Լ��� ȣ�� ����
	// �Լ��̸�(����1, ����2, ...)
	sum(testNum1, testNum2);
	sum(2, 3); // �ѹ� ���� �� �Լ��� ������ ȣ�� ����.( �Լ�ȣ��� ���ǵ� �Լ��� �����ؼ� �����)
	sub(4, 3);
	return 0;
}

//int doSomething() {
//
//	//int globalCount = 0; // ���������� �ش� �߰�ȣ �ۿ��� ���ǵ� ��� ���� �̸��� �������� �켱������. 
//
//	// static : ���� Ű���� , static ���� ����Ǹ� �������� �޸��Ҵ��� �Ұ����ϴ�. ���α׷��� ���������� �������� �ʵ��� �����Ϳ����� ����ȴ�.
//	static int localCount; // ���� �������� : �����Ϳ����� ����Ǿ� ���α׷��� ���������� ���������� ������, �ش� �߰�ȣ �ȿ����� ���ٰ����ϴ�. 
//
//	localCount++;
//	globalCount++;
//	printf("doSomething has been called :  %d times(global)\n", globalCount);
//	printf("doSomething has been called :  %d times(static local)\n", localCount);
//
//	if (localCount < 10) {
//		doSomething();// ����Լ� : �Լ� ������ ������ �Լ� ȣ��
//	}
//	return 0;
//}

// �Ű����� �� �������� ( �Ű����� �� �������� )
int sum(int a, int b) {
	
	int tmpValue = a + b;
	printf("%d\n", tmpValue); // �Լ� �������� �Լ� ȣ�� ����
	return tmpValue;
}

int sub(int a, int b) {

	// register ����
	// �ش� ������ ���� ���������ؼ� �޸𸮿� �Ҵ��������� register �� ���� �Ҵ��� �õ��ϴ� Ű����
	// ���࿡ register Ű���带 ����ϴ°� �������� �ʴٰ� �����Ϸ��� �Ǵ��ϸ� register�� �Ҵ����� �ʴ´�.
	register int tmpValue = a - b;
	printf("%d\n", tmpValue);
	return tmpValue;
}