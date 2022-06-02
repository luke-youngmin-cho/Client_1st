#include <iostream>
#include <stdlib.h>
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

	int const mergeSortArrayCount = 10;
	int arr4[mergeSortArrayCount] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	std::cout << "���� ��Ʈ ���� : " << arr4 << std::endl;
	SortExamples::MergeSort(arr4, 0, mergeSortArrayCount - 1);

	for (int i = 0; i < mergeSortArrayCount; i++)
	{
		std::cout << arr4[i];
	}

	int arr5[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	std::cout << "�� ��Ʈ ���� : " << arr5 << std::endl;
	SortExamples::QuickSort(arr5, 0, 9);

	for (int i = 0; i < 10; i++)
	{
		std::cout << arr5[i];
	}

	int arr6[10] = { 3, 5, 9, 6, 7, 4, 8, 2, 1, 0 };

	for (int i = 0; i < 10; i++)
	{
		arr6[i] = rand() % 100;
	}

	std::cout<<std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr6[i] << ", ";
	}
	std::cout << std::endl;

	std::cout << "�� ��Ʈ ���� : " << arr6 << std::endl;
	SortExamples::HeapSort(arr6, 10);

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << arr6[i] << ", ";
	}


	return 0;
}