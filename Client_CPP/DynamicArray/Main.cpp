#include <iostream>
#include "DynamicArray.h"

int main() {

	DynamicArray da;
	da.Add(1);
	da.Add(2);

	std::cout << "1 �� ã�� �� �ֳ��� ? " << da.IsExist(1) << std::endl;

	da.Remove(1);

	da.Delete();

	return 0;
}