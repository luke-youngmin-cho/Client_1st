#include <stdio.h>
#include "OperationFunctions.h"
#include "SubFunctions.h"

// static (����) Ű���� 
// �޸� ���� �Ҵ��� �Ұ����ϰ��ϴ� Ű����  /
// �ν��Ͻ�ȭ�� �Ұ����ϰ��ϴ� Ű����

// ���� ���� ���� 
// �ٸ� �ҽ����Ͽ��� �����Ҽ� ���� ��������
//static int opCount;
int opCount;

int main() {
	printf("%d\n",sum_int(1, 2));
	printf("%d\n", sum_int(1, 2));
	printf("%d\n", sum_int(1, 2));
	printf("%d\n", sum_int(1, 2));
	printf("%d", opCount);
	return 0;
}




