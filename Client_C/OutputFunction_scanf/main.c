#pragma warning(disable : 4996)
#include <stdio.h>

int main(void) 
{
	char c;
	char tmpBuffer;
	//scanf("%c\n", &c, &tmpBuffer);

	scanf("%c\n", &c);
	getchar();
	printf("%c\n", c);

	// scanf
	// scanf(���Ĺ��ڿ�, ������ ����)
	// �Է��� ���ö� ���� ����ϴٰ� ������ ������ ������ �ش� �Է°��� ������.
	int n;
	printf("Enter integer value");
	scanf_s("%d", &n);
	printf("n : %d", n);
	// & : ���� ������
	// ���� �տ� �پ �ش� ������ �ּҰ��� �����ϴ� ������ 

	float f;
	scanf_s("%f", &f);
	
	char str[20];
	scanf("%s", str);
	//scanf_s("%s", str, 10 * sizeof(char));
	// sizeof ������
	// ������� : sizeof(�ڷ���)
	// �ڷ����� �ش��ϴ� ������ ũ�⸦ ��ȯ��

	printf("str : %s", str);

	return 0;
}