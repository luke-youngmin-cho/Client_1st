#pragma warning (disable : 4996)
#include <stdio.h>

int main() {

	// ǥ��������Լ� 
	// printf, scanf , putc , getc, puts, gets


	// fopen()
	// �⺻������ ���� ���α׷� ������ �ִ� �������� ������ �˻��Ѵ�. 
	// �ϵ��ũ�κ��� ������ �о�鿩�� FILE Stream �� ���ۿ� ����ϴ� �Լ�
	// 
	// ���� ���� ��� 
	// r : �б� ���� (read mode) : ������ ������ ����
	// w : ���� ���� (write mode) : ������ ������ ����
	// a : ���ٿ����� ���� (append mode) : ������ ������ ����
	// r+ : �б�/���� �� ���� : ������ ������ ���� 
	// w+ : �б�/���� �� ���� : ������ ������ ����
	// a+ : �б�/���ٿ����� �� ���� : ������ ������ ����
	// rb : ���̳ʸ� ���� �б� ���� : ������ ������ ����
	// wb : ���̳ʸ� ���� ���� ���� : ������ ������ ����
	// ab : ���̳ʸ� ���� ���ٿ� ���� ���� : ������ ������ ����
	FILE* fp1 = fopen("a.txt", "r"); 

	// read mode���� FILE* �� NULL �̸�
	// ������ ��ã�Ҵٴ� �ǹ�. 
	if (fp1 == NULL) {
		printf("failed to open a.txt");
		exit(1);
	}
	printf("%c\n", fgetc(fp1));
	printf("%c\n", fgetc(fp1));

	// FILE Stream �� ���ۿ� ��ϵǾ��ִ� �ش� ������ ��� ������Ű�� �Լ�
	fclose(fp1);

	FILE* fp2 = fopen("b.txt", "r");
	if (fp2 == NULL) {
		printf("failed to create b.txt");
		exit(1);
	}
	
	char doOverwrite = 'N';
	printf("b.txt �� ���� ���ðڽ��ϱ� ? ���� ������ ��� �����˴ϴ� (Y / N )");
	scanf("%c", &doOverwrite);
	if (doOverwrite != 'Y') {
		printf("b.txt �� ���� ����⸦ ����Ͽ����ϴ�. ���α׷��� �����մϴ�.");
		fclose(fp2);
		exit(0);
	}

	// write mode �� ������ ���� ���� ������ ��� ������.
	// write mode �� ������ ���µ� �����ϸ� �ش� ������ ���� ������.
	fp2 = fopen("b.txt", "w");

	// write mode ���� FILE* �� NULL �̸�
	// ������ �������� ���ߴٴ� �ǹ�.
	if (fp2 == NULL) {
		printf("failed to create b.txt");		
		exit(1);
	}

	fputc('c', fp2);
	fclose(fp2);
	// �����忡�� ���ۿ� ����ִ� ������ ���� ������ �����ڸ��� fclose�� ȣ�����ִ°��� �����ϴ�.
	// ���ۿ��� �����Ǳ� �������� �ϵ��ũ�� ������ ������ �ݿ��� �ȵǱ� ����.

	// append mode 
	// ������ ������ ������. 
	FILE* fp3 = fopen("c.txt", "a");
	if (fp3 == NULL) {
		printf("failed to create c.txt");
		exit(1);
	}
	fputc('s', fp3);
	fclose(fp3);

	// �پ��� ������ ���ڿ� ����� 
	FILE* fp4;
	FILE* fp5;

	char name[20] = "chulsu";
	int korean = 10, english = 20, math = 30;
	double average;

	fp4 = fopen("chulsu.txt", "r");
	if (fp4 == NULL) {
		printf("failed to open chulsu.txt. exit program");
		exit(0);
	}

	fp5 = fopen("youngheui.txt", "w");
	if (fp5 == NULL) {
		printf("failed to create youngheui.txt. exit program");
		exit(1);
	}

	// chulsu.txt ���� �������� ������ ����
	fscanf(fp4, "%s %d %d %d", name, &korean, &english, &math);
	printf("%s %d %d %d", name, korean, english, math);
	fclose(fp4);

	fprintf(fp5, "%s %d %d %d\n", name, korean, english, math);
	fclose(fp5);

	// ��뷮 �������� ������� ������ �ؾ��Ѵٸ� 
	// fscanf �� fprintf ó�� ���Ŀ� �°� ������ϴ� �Լ� ���� 
	// ���̳ʸ� ���� �״�� ������ϴ� fread �� fwrite �Լ��� ����Ѵ�.
	FILE* fp6;
	fp6 = fopen("binary.txt", "wb");
	char a[] = "asdflkjaeblkj3412323kjb";
	fwrite(a, sizeof(a), 1, fp6);
	fclose(fp6);
}