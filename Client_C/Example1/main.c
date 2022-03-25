#pragma warning(disable : 4996)
#include <stdio.h>
#include "basicOperations.h"

int OperationCount;
int main() {
	int op[4];
	int a, b;

	printf("5 factorial  %d", factorial(5));

	while (1)
	{
		int isOperated = 1;
		printf("명령을 입력하세요 (sum, sub, mul, div, mod) : ");
		scanf("%s", op);
		printf("연산에 사용할 숫자를 두개 입력하세요");
		scanf("%d %d", &a, &b);

		if (!strcmp("sum", op)) printf("%d\n", sum(a, b));
		else if (!strcmp("sub", op)) printf("%d\n", sub(a, b));
		else if (!strcmp("mul", op)) printf("%d\n", mul(a, b));
		else if (!strcmp("div", op)) printf("%d\n", div(a, b));
		else if (!strcmp("mod", op)) printf("%d\n", mod(a, b));
		else {
			printf("입력이 이상합니다");
			isOperated = 0;
		}
		OperationCount += isOperated;
		printf("operation count : %d\n", OperationCount);
	}


}

