#pragma warning (disable:4996)
#include <stdio.h>

int main() {

	// & : �ּ� ������
	int a = 3;
	//scanf("%d", &a);
	printf("%d\n", a);
	printf("%d\n", sizeof(a));
	printf("%d\n",& a);
	printf("%p\n", &a);

	// * : ���� ���� ������
	// �ּ� �տ� �پ �ش� �ּ��� ���� ������.
	// ���������� : ���� ���� �����ϴ°� ���� ������� �Ѵ� ( ���� R value ��� )
	printf("%d\n", *&a);
	printf("%d\n", sizeof(*&a));
	// * : ������
	// �ڷ��� �ڿ� �پ �ش� �ڷ����� �ּҸ� ����Ű�� �ڷ������� �ٲ���
	int* p;
	p = &a;
	printf("%d\n", p);

	double d = 1.23;
	printf("%d\n", sizeof(d));
	double* pd = &d;
	p = &d;

	// �����͵� ���� �ڷ����̰�, ������ ������ �ڷ��� ������� 4byte ũ�⸦ �Ҵ�޴´�.
	// (��, 16��Ʈ ��ǻ�ʹ� 2byte)
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(pd));

	printf("size of *p %d\n", sizeof(*p));
	printf("size of *pd %d\n", sizeof(*pd));


	return 0;
}