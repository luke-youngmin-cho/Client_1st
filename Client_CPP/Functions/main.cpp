#include <iostream>
using namespace std;

// ����Ʈ �μ�
// �Լ� ���� ���� �����ʿ��� ���� ������� ���� �� �� ����
// �Լ� ȣ��� ����Ʈ �μ��� ������ �Ķ���Ϳ� ������ ���ڰ� ���޵��� ������
// ������ ����Ʈ �μ����� �����Ѵ�.
// �Լ� �����ε��� �浹�� ���� �� �����Ƿ� �����ؼ� ����. 
int Sum(int a , int b = 2);
int Sum(int a, int b, int c);
double Sum(double a, double b);
float Sum(float a, float b);

// �ζ��� �Լ�
// ���� �Լ� ȣ�������
// ���ÿ����� �Լ� ���� �����ؼ� ������ ( �Ű����� + ��ȯ�� + ��ȯ �ּҰ� �� )
// �Լ�ȣ���� ������ ���� �� ��ȯ�ϰ� ���ÿ������� ������. 
// 
// �ζ����Լ��� �Լ� ����ð��� ȣ��ð����� ª������ ���ؼ� �������
// �Լ� ���Ǹ� �Լ�ȣ�⽺�ÿ� �״�� �׾Ƴ��� ����
inline int Sub(int a, int b)
{
	return a - b;
};


int main() {

	cout << Sum(1, 2) << endl;
	cout << Sum(1.3, 2.4) << endl;
	cout << Sum(1.3f, 2.4f) << endl;
	cout << Sum(1, 2, 3) << endl;
	return 0;
}

// �Լ� �����ε�
// ��ü���⿡�� �������� �����ϴ� ����
// ������ �̸��� ���� �Լ��� �����Ҽ� �ִ� ���

int Sum(int a, int b) {
	return a + b;
}

int Sum(int a, int b, int c) {
	return a + b + c;
}

double Sum(double a, double b) {
	return a + b;
}

float Sum(float a, float b) {
	return a + b;
}


