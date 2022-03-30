#pragma warning (disable:4996)
#include <stdio.h>

void swap(int* a, int* b) {
	int t = *a; // �ӽ÷� ����� �������� t���ٰ� a�� ����Ű�� �ּҾȿ� ����ִ� ���� ����
	*a = *b; // a�� ����Ű�� �ּҾȿ� ����ִ� ���� b�� ����Ű�� �ּҾȿ� ����ִ� ���� ����
	*b = t;
}

int main(void) {

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

	
	double* pd1, * pd2, d1, d2;
	d1 = 2.0;
	d2 = 4.0;
	pd1 = &d1;
	pd2 = &d2;

	// ���Կ����� �����ʰ� *pd1, *pd2, d1, d2 �� �������� 6�� ����� �� �ִ� 
	// 4���� ��츦 �Ẹ���� ( �� ������ ���꿡 �ѹ����� ��� ���� )
	printf("%lf\n", d1 + d2);
	printf("%lf\n", *pd1 + *pd2);
	printf("%lf\n", d1 + *pd2);
	printf("%lf\n", *pd1 + d2);

	// �ùٸ������ ? : *pd1, **&pd1
	//printf("%lf\n", &pd1);
	//printf("%lf\n", *pd1);
	//printf("%lf\n", pd1);
	//printf("%lf\n", **&pd1);

	// �ùٸ� ����� ? : pd1, &*pd1
	//scanf("%lf\n", &pd1);
	//scanf("%lf\n", *pd1);
	//scanf("%lf\n", pd1);
	//scanf("%lf\n", &*pd1);
	//scanf("%lf\n", *&pd1);

	// ����� ������ 
	// ���� : const �ڷ���*
	// �����͸� �ٲܼ� ���ٴ°� �ƴ϶�, �����Ͱ� ����Ű�� �ش� �ּ��� ���� �ٲܼ� ��������.
	// ��, �������������� L-value �� ����Ҽ� ����.
	int n1 = 0,n2 = 0;
	const int* pa = &n1;
	pa = &n2;
	//*pa = 20; // �Ұ���. 
	n1 = *pa; // ����
	// const (�����) �� ������ : ������ �����鼭 Ư�� ���� �������ϰ� ��Ÿ���� ���

	const int n3 = 0; // n3 �� const ������ 
	int* pn3 = &n3;
	*pn3 = 3; // ���������� ���� n3 �� �������� �����ϸ� 
			  // n3 �ĺ��ڸ� ��ġ�� �����Ƿ� �ش� �ּ��� ���� �����Ҽ��� �ִ�.
	printf("%d\n", n3);

	// �ٸ� �ڷ��� �����Ͱ��� ����
	// L-value ������ �ڷ����� �� ũ�ٸ� �Ҵ���� ���� ������ �����ϴ� ������ ��Ȳ��
	// �߻��� �� �����Ƿ� �����ؾ���. ������ ������ �ƴ�. 

	int _n = 3;
	double _d = 3.5;
	int* _p = &_n;
	double* _pd = &_d;

	/*printf("p : %p\n", _p);
	printf("pd : %p\n", _pd);
	_p = _pd;
	printf("p : %p\n", _p);
	printf("%d\n", *_p);

	printf("size of *p %d\n", sizeof(*_p));*/


	printf("%d\n", *_p);
	printf("pd : %p\n", _pd);
	_pd = _p;
	printf("pd : %p\n", _pd);
	printf("%lf\n", *_pd);

	printf("size of *pd %d\n", sizeof(*_pd));
	
	int* pc = NULL;
	if (pc != NULL)
		printf("%p", pc);


	// �����͸� ����ϴ� ����
	// swap ����
	int _a = 1, _b = 2;
	swap(&_a, &_b);
	printf("a = %d, b = %d \n", _a, _b); // ������ a = 2, b = 1;
	 

	// void ������
	int a;

	void* vp = NULL;
	vp = &a;

	printf("%d\n", * (int*) vp);


	return 0;
}

