#include <stdio.h>

// if �� : Ư�� ������ ��/���� ���ο� ���� �帧�� ������.
// ���� : if (����) { ������ ���϶� ������ ���� }

// if else ��
// ���� : if (����) {������ ���϶� ������ ����}
//		  else { ������ �����϶� ������ ���� }
int main(void) {

	int isTrue = 0;

	if (isTrue) {
		printf("this is true");
	}
	else{
		printf("this is false");
	}

	int num = 10;

	if (num == 0) {
		printf("this is 0");
	}
	else if (num == 1) {
		printf("this is 1");
	}
	else if (num == 2) {
		printf("this is 2");
	}
	else {
		printf("I don't know this number");
	}
}