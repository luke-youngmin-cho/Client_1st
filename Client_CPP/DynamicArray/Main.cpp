#include <iostream>
//#include "DynamicArray.h"
#include "DynamicArrayTemplate.h"

int main() {

	/*DynamicArray da;
	da.Add(1);
	da.Add(2);

	std::cout << "1 �� ã�� �� �ֳ��� ? " << da.IsExist(1) << std::endl;

	da.Remove(1);

	da.Delete();*/

	DynamicArray<int> int_DA;
	DynamicArray<double> double_DA;
	DynamicArray<float> float_DA;

	int_DA.Add(0);
	int_DA.Remove(0);

	return 0;
}