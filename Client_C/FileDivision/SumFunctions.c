#include "SumFunctions.h"

// extern Ű���� 
// �ٸ� �ҽ����Ͽ� ���ǵ� ���������� �����ؼ� ��������� 
// �ش� �������� ���� �տ� extern Ű���带 ���δ�.
// �����Ϳ����� �ش� �ε����̸����� ����� ������ ������ �ش� ������ ����
extern int opCount;

int sum_int(int a, int b) {	
	opCount++;
	return a + b;
}

double sum_double(double a, double b){
	opCount++;
	return a + b;
}
