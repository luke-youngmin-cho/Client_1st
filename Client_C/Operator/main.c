#include <stdio.h>
int main(void) {

	// ���� ������
	// ������ ���� ������ ���� ���� �޸𸮿� ������
	// �������� r-value ,  ������ l-value �����
	//---------------------------------------------------------------------------
	int intResult = 0;
	double doubleResult = 0.0;

	// ��� ������
	//---------------------------------------------------------------------------

	// + ������
	intResult = 3 + 4;
	doubleResult = 3.0 + 4.0;
	printf("%d\n", intResult);
	printf("%lf\n", doubleResult);

	// - ������
	intResult = 3 - 4;
	doubleResult = 3.0 - 4.0;
	printf("%d\n", intResult);
	printf("%lf\n", doubleResult);

	// * ������
	intResult = 3 * 4;
	doubleResult = 3.0 * 4.0;
	printf("%d\n", intResult);
	printf("%lf\n", doubleResult);

	// / ������
	// ������ ������ ������ ���� �� ��ȯ�Ѵ�. (�Ҽ��� ���� ����)
	intResult = 3 / 4;
	doubleResult = 3.0 / 4.0;
	printf("%d\n", intResult);
	printf("%lf\n", doubleResult);

	// % ������
	intResult = 3 % 4;
	doubleResult = 3 % 4; // ���������� ���� �Ŀ� �Ϲ������� �Ǽ������� �ڷ��� ��ȯ�� �Ͼ ���
	printf("%d\n", intResult);
	printf("%lf\n", doubleResult);

	// ��ȣ ������
	//--------------------------------------------------------------------------
	intResult = +3;
	intResult = -3;

	// ���� ���Կ�����
	//--------------------------------------------------------------------------
	intResult = 0;

	// + ���Կ�����
	intResult += 3; // ����ǥ�� : intResult = intResult + 3;
	printf("%d\n", intResult);

	// - ���Կ�����
	intResult -= 3; // ����ǥ�� : intResult = intResult - 3;
	printf("%d\n", intResult);

	// * ���Կ�����
	intResult *= 3; // ����ǥ�� : intResult = intResult * 3;
	printf("%d\n", intResult);

	// / ���Կ�����
	intResult /= 3; // ����ǥ�� : intResult = intResult / 3;
	printf("%d\n", intResult);

	// % ���Կ�����
	intResult %= 3; // ����ǥ�� : intResult = intResult % 3;
	printf("%d\n", intResult);

	// ���� ������
	//--------------------------------------------------------------------------

	// ���� ������
	printf("Start testing increament operator !\n");
	intResult = 0;
	printf("intResult : %d\n", intResult);
	printf("intResult : %d\n", intResult++); // ���� ���� ������ , �ش� �����ڰ����Ե� ���� ������ �Ŀ� �����Ѵ�.
	printf("intResult : %d\n", intResult);
	intResult++;
	printf("intResult : %d\n", intResult);
	printf("intResult : %d\n", ++intResult); // ���� ���� ������ , �ش� ������ �� �Ŀ� ���� �����Ѵ�.
	printf("intResult : %d\n", intResult);

	// ���� ������
	printf("Start testing increament operator !\n");
	intResult = 0;
	printf("intResult : %d\n", intResult);
	printf("intResult : %d\n", intResult--); // ���� ���� ������ , �ش� �����ڰ����Ե� ���� ������ �Ŀ� �����Ѵ�.
	printf("intResult : %d\n", intResult);
	intResult--;
	printf("intResult : %d\n", intResult);
	printf("intResult : %d\n", --intResult); // ���� ���� ������ , �ش� ������ �� �Ŀ� ���� �����Ѵ�.
	printf("intResult : %d\n", intResult);

	// ���� ������
	// ���� ����� ���̸� 1, �����̸� 0 �� ��ȯ��.
	//-----------------------------------------------------------------------------------------

	// <
	printf("is %d smaller than %d ? %d\n", 3, 4, 3 < 4);

	// >
	printf("is %d bigger than %d ? %d\n", 3, 4, 3 > 4);

	// ==
	printf("is %d same with %d ? %d\n", 3, 4, 3 == 4);

	// <=
	printf("is %d same with or smaller than %d ? %d\n", 3, 4, 3 <= 4);

	// >=
	printf("is %d same with or bigger than %d ? %d\n", 3, 4, 3 >= 4);

	// �� ������
	// ���� ����: 0�� �ƴ�
	// ������ ���� : 0
	//-----------------------------------------------------------------------------------------
	int grade = 80;

	// && (and ������)
	// �ǿ����� �ΰ��� ��� ���϶� 1 ��������� ���� 0
	printf("is %d  30 < Grade and  80 > Grade ? %d\n", grade, (30 < grade) && (80 > grade));

	// || (or ������)
	// �ǿ����� �ΰ� �߿� �ϳ��� ���̸� 1 ��������� ���� 0
	printf("is %d  30 < Grade or  80 > Grade ? %d\n", grade, (30 < grade) || (80 > grade));

	// ! (not ������)
	// ���Ͽ�����. ( �ǿ����ڰ� �ϳ��� ��� )
	// �ǿ����� ����� ������Ų��. ��, ���̸� 0 , �����̸� 1.
	printf("is %d not 30 < Grade ? %d\n", grade, !(30 < grade));

	// ��Ʈ ������
	//-----------------------------------------------------------------------

	// & ( ��Ʈ and ������. �ǿ����ڰ� 2��.  ���������ڴ� �ǿ����ڰ� �ϳ��� �����̴�)
	// ���� �� ��Ʈ�� ��� 1�϶� �ش��ڸ� ��Ʈ 1, ������ ��� 0
	printf("%d & %d = %d\n", 5, 10, 5 & 10);
	/*
	5 = (2^2 * 1) + (2^1 * 0) + (2^0 * 1) = 00000101
	10= 2^3 + 2^1 =						    00001010 &
										    00000000

	8  = 2^3 =			   00001000
	42 = 2^5 + 2^3 + 2^1 = 00101010 &
						   00001000 = 8
	*/

	// | ( ��Ʈ or ������. �ǿ����� 2��.)
	// ���� �� ��Ʈ �� �ϳ��� 1�̸� �ش��ڸ� ��Ʈ 1, ��������� 0
	printf("%d | %d = %d\n", 5, 10, 5 | 10);

	// ^ ( ��Ʈ xor ������. �ǿ����� 2��.)
	// ���� �� ��Ʈ�� �ϳ��� 1�϶� �ش��Ʈ 1, ��������� 0
	printf("%d ^ %d = %d\n", 8, 42, 8 ^ 42);

	// << ( ��Ʈ ����Ʈ ����Ʈ )
	// ��� ��Ʈ�� �������� ��. �ʰ��ϴ� ��Ʈ�� ����� 
	printf("shift %d to the left by %d = %d\n", 5, 3, 5 << 3);

	// >> ( ��Ʈ ����Ʈ ����Ʈ )
	// ��� ��Ʈ�� ���������� ��. �ʰ��ϴ� ��Ʈ�� ����� 
	printf("shift %d to the right by %d = %d\n", 5, 3, 5 >> 3);

	// ? : (���׿�����)
	// ? �� ���� ������ ���̸� ':' �� ���ʰ��, �����̸� ':' �� ������ ����� ��ȯ��
	//-------------------------------------------------------------
	printf("is 3 smaller than 2 ? %d\n", 3 < 2 ? 1 : 0);

	// , (�޸� ������)
	//-------------------------------------------------------------
	int commaResult = 0, a = 0, b = 0;
	commaResult = a = 3, b = 4;
	printf("commaResult %d, a=%d. b=%d\n", commaResult, a, b);

	// sizeof() (������ ���� ������)
	// �޸𸮰������� �Ҹ��ϴ� �޸�ũ�⸦ ����Ʈ������ ����ؼ� ��ȯ�ϴ¿�����.
	// �ڷ���, ����, �� ��� ���ڷ� ��밡��
	//-------------------------------------------------------------
	int size_int = sizeof(int);
	int size_size_int = sizeof(size_int);
	int size_intConstant = sizeof(3);
	printf("%d, %d, %d\n", size_int, size_size_int, size_intConstant);

	//�������� �켱����
	//	���� > ��� > ���� > �� > ���� > �޸�
	
	// ����ȯ ������
	//-------------------------------------------------------------

	// �Ͻ��� ����ȯ
	// ���α׷��Ӱ� ���� �������� �ʾƵ� �����Ϸ������ؼ� 
	// �ڵ����� ó���Ǵ� ����ȯ�� �Ͻ��� ����ȯ / �ڵ���ȯ �̶�� ��.
	int num_int = 10;
	short num_short = 2;
	char num_char = 4;
	num_short + num_char; 
	// short + char �� ������ ������ �ϱ����� �������Ϳ� �����Ͱ� ���޵ɶ� 
	// ������ ���� ���������� ����ũ�� ��ŭ �ڵ����� �ڷ����� int ������ 
	// ��ȯ�� ä�� ������ �ϰ� �� �� (short + char �� �ϸ� ���� int + int �� ������)
	// �̶� short �Ǵ� char ó�� ����� ���������� ������ũ�⺸�� ���� �ڷ�����
	// ����� �������� ����ũ���� ���·� ������ ũ�Ⱑ Ŀ���°��� �°� (promotion) �̶�� ��
	// �̷���� ���� ���α׷��Ӱ� int ������ �ٲ����� �ʾƵ� �Ǿ �Ͻ��� ����ȯ �̶�� ��.
	printf("%d\n", sizeof(num_short + num_char));

	float num_float = 1.2;
	double num_double = 12.34;
	printf("%d\n", sizeof(num_float + num_double));
	printf("%lf\n", num_float + num_double);

	// �����÷ο쿡 ���� �Ͻ��� ����ȯ
	num_float = num_double;
	printf("%f\n", num_float);

	// ����� ����ȯ
	// ���ľտ� () �� ���̰� () �ȿ� ��ȯ�� ���������� �����ش�.
	int n;
	float f;
	f = 5 / 3;
	printf("%f\n", f);
	f = (float)5 / 3;
	printf("%f\n", f);
	f = (float)5 / (float)3;
	printf("%f\n", f);

	n = 3.5 + 7.7;
	n = (int)( 3.5 + 7.7 );

	// �����ڿ��� �غ����Ѱ� 
	// 1. �پ��� �ڷ��������� ���� (�Ͻ��� ����ȯ ����)
	// 2. ���� ��� ��� �ڷ����� ���ؼ� sizeof() �� ũ�� Ȯ���ϱ�
	// 3. 1+2 : �پ��� �ڷ������� �����Ѱ��� sizeof() �� ũ�� Ȯ���ϱ� 
	// 4. ��Ʈ���� ����� ����ϱ� ���� ����غ��� ��°���� ���� ������ Ȯ���غ���

}