#include <stdio.h>

// while : Ư�� ���ǿ� ���� ������ �ݺ� ����
// ���� : while(����) { ������ ���϶� �ݺ��� ���� }

// do while : ������ �ϴ� �ѹ� �����ϰ� Ư�� ���ǿ� ���� ������ �ݺ�����
// ���� : do { ������ ���϶� �ݺ��� ���� } while(����)

int main(void) {

	// ������ �׻� ���� �ݺ����� ���� ������� ��
	while (0)
	{
		printf("ahahahahahah11111");
		continue; // �б⹮, ���� ����� �ݺ����� ã�Ƽ� �ش� �ݺ����� ���� ���ٷ� ���ư�
		printf("ahahahahahah22222");
	}
	printf("while statement is over\n");

	int count = 0;
	while (count < 5)
	{
		printf("while count : %d\n", count);
		count++;
	}
	printf("while statement is over\n");

	// do while
	do {
		printf("do while test");
	} while (0);


	return 0;
}