#include <iostream>
#include "SortExamples.h"
int main() {

	
	int arr1[10] = { 7, 6, 2, 4, 5, 1, 7, 9, 8, 0 };
	std::cout << "���� ��Ʈ ���� : " << arr1 << std::endl;
	SortExamples::BubbleSort(arr1, 10);

	// ������ ��Ʈ�� ���� ��Ʈ���� �Ϲ������� �� ������.
	// �Ѵ� 1/2 * N^2 �� �ð��� �ɸ����� ������ �� Ƚ���� 
	// ������ ��Ʈ�� ���� �����̴�.
	int arr2[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	std::cout << "������ ��Ʈ ���� : " << arr2 << std::endl;
	SortExamples::SelectionSort(arr2, 10);

	int arr3[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	std::cout << "�μ��� ��Ʈ ���� : " << arr3 << std::endl;
	SortExamples::InsertionSort(arr3, 10);


	return 0;
}