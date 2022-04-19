#include <iostream>
#include "MyTemplate.h"
// �����͸� ���°�� vs �����ڸ� ���°��
// ������ : ���� �ش� ������ �ּҰ��� �ʿ��� ���
// ������ : �ش� ������ ���� �ʿ��� ���

template <typename T>
void Swap(T& a, T& b);

template <typename T, typename K>
void ForceSum(T& a, K& b);

int main() {

	int a = 3;
	int b = 5;
	double c = 2.0;
	double d = 4.4;

	Swap<int>(a, b);
	Swap<double>(c, d);

	// �Լ� ���ø�
	ForceSum<int, double>(a, c);

	//Ŭ���� ���ø�
	MyTemplate<int, double> myTemplate;
	myTemplate.ForceSum(a, c);

	return 0;
}

template<typename T>
void Swap(T& a, T& b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template<typename T, typename K>
void ForceSum(T& a, K& b)
{
	return a + (T)b;
}


