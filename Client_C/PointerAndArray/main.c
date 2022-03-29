#include <stdio.h>

void print_all_elements(int* arr, int len) {

	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}


int main() {

	// �迭�� �����ϰԵǸ� 
	// �迭�� �޸𸮿� �Ҵ�ɶ�
	// a ��� �������� �������Ҵ� �������� ������ �ٲ� 
	// �� �迭�� �տ� ������(*) �� ���� �ʾƵ� �����ͺ�����.
	int arr[] = { 10,20,30,40,50,80,90 };
	int len = sizeof(arr) / sizeof(int);
	print_all_elements(arr, len);

	printf("%p\n", arr);
	printf("%d\n", arr[0]); // arr[index] �� ���� ����.
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);

	// �迭�� ����
	printf("%p\n", arr + 4); // �ǹ� : arr�ּҿ� 4 * sizeof(arr �ڷ���) 
	printf("%d\n", *(arr + 0)); // �ǹ� : arr�ּҿ������� arr �ڷ��� ũ�⸸ŭ ���� ������.
	printf("%d\n", *(arr + 1));
	printf("%d\n", *(arr + 2));
	printf("%d\n", *(arr + 3));
	printf("%d\n", *(arr + 4));
	printf("%d\n", *(arr + 5));

	// ������ ���� ����

	int* p, * q;
	p = &arr[0];
	q = &arr[4];

	// �����Ͱ��� ������ �Ұ�����. 
	//printf("%d\n", p + q);
	// �����Ͱ��� ���� = �ּҰ��� �ε��� ���̸� ��ȯ�� 
	// ������ ������� ������, �ش� �ε��� * �ڷ��� byte �� ��ŭ �ּҰ� �ռ��ִ�.
	printf("%d\n", p - q);

	// �����Ͱ��� ���迬��
	printf("%d\n", p < q ); 

	// �������� ����
	printf("%d\n", *p++);
	printf("%d\n", *(++p));
	printf("%d\n", *(p++));
	printf("%d\n", (*p)++);
	printf("%d\n", *p);

	return 0;
}