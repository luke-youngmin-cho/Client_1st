#include <iostream>
#include <stdlib.h>
struct MyStruct
{
	int a;
};
int main() {

	// c ���� �����Ҵ� 
	struct MyStruct* a = (struct MyStruct*)malloc(sizeof(struct MyStruct));
	free(a);

	// c++ ���� �����Ҵ�
	// new Ű���带 ���
	// Ÿ��* �������̸� = new Ÿ��;
	MyStruct* myStruct = new MyStruct;
	delete myStruct;

	int* pi = new int;
	*pi = 100;
	std::cout << *pi << std::endl;
	delete pi;

	return 0;
}