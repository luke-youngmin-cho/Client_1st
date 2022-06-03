#include "SortExamples.h"
#include <iostream>
using namespace std;

int SortExamples::testCount1;
int SortExamples::testCount2;
void SortExamples::Merge(int arr[], int start, int end, int mid)
{
	static int mergeCount;
	int* tmp = new int[end + 1];

	// ���� �迭 ����
	for (int i = start; i <= end; i++)
	{
		tmp[i] = arr[i];
		cout << "������..";
		mergeCount++;
	}

	int part1 = start; // ���� , ���� ��Ʈ�� ���� ���� �ε����� �ʱ�ȭ
	int part2 = mid + 1; // ������, ������ ��Ʈ�� ���� ���� �ε����� �ʱ�ȭ
	int index = start; // ���� �迭 ���� ��ġ

	// ��Ʈ 1�� ��Ʈ 2�� ������ ������ ���� ��ȸ
	while (part1 <= mid && // ��Ʈ 1�� ��Ʈ 2�� ������ �Ѿ�� �ʾ��� ��
		   part2 <= end) // ��Ʈ 2�� �ִ� ������ �Ѿ�� �ʾ��� �� 
	{
		// ��Ʈ 1 �� ��Ʈ 2 �� ũ�� ��
		if (tmp[part1] <= tmp[part2]) 
		{
			arr[index++] = tmp[part1++]; // ��Ʈ 1 �ε��� ��Ҹ� ������ �����ϰ� �� �ε��� ����
			cout << "������..";
			mergeCount++;
		}
		else
		{
			arr[index++] = tmp[part2++]; // ��Ʈ 2 �ε��� ��Ҹ� ������ �����ϰ� �� �ε��� ����
			cout << "������..";
			mergeCount++;
		}
	}

	// ������ ���� part1 ���ĺ��� mid ������ ��Ҹ� ������ ������
	for (int i = 0; i <= mid - part1; i++)
	{
		arr[index + i] = tmp[part1 + i];
		cout << "������..";
		mergeCount++;
	}

	cout << "�����Ϸ� (count : " << mergeCount << ") :";
	for (int i = start; i <= end; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;

	delete[] tmp;
}

int SortExamples::Partition(int arr[], int start, int end)
{
	int pivot = arr[(start + end) / 2];

	while (true)
	{
		while (arr[start] < pivot) start++;
		while (arr[end] > pivot) end--;

		if (start < end) {
			int temp = arr[end];
			arr[end] = arr[start];
			arr[start] = temp;

			cout << "������..";
			for (int i = start; i <= end; i++)
			{
				cout << arr[i] << ", ";
			}
			cout << endl;
		}
		else
		{
			return end;
		}
	}

	return 0;
}



void SortExamples::BubbleSort(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		// �̹� ���ĵ� ģ������ ���ʿ� �����Ƿ� length - i - 1 ���� ��ȸ
		for (int j = 0; j < length - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				// ����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

				// ���� ��� ���
				cout << "���ҵ� : ";
				for (int k = 0; k < length; k++)
				{
					cout << arr[k] << ",";
				}
				cout << endl;
			}
		}
	}
}

void SortExamples::SelectionSort(int arr[], int length)
{
	int minIdx = 0;
	for (int i = 0; i < length - 1; i++)
	{
		minIdx = i;
		for (int j = i + 1; j < length; j++)
		{
			if (arr[j] < arr[minIdx])
				minIdx = j;
		
		}

		// ����
		int tmp = arr[i];
		arr[i] = arr[minIdx];
		arr[minIdx] = tmp;

		// ���� ��� ���
		cout << "���ҵ� : ";
		for (int k = 0; k < length; k++)
		{
			cout << arr[k] << ",";
		}
		cout << endl;
	}
}

void SortExamples::InsertionSort(int arr[], int length)
{
	int key, j = 0;
	for (int i = 1; i < length; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 &&
			   arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
			cout << "������.. : ";
		}
		arr[j + 1] = key;

		// ���� ��� ���
		cout << "���ҵ� : ";
		for (int k = 0; k < length; k++)
		{
			cout << arr[k] << ",";
		}
		cout << endl;
	}
}

void SortExamples::MergeSort(int arr[], int start, int end)
{
	if (start < end) {
		int mid = (start + end) / 2;

		MergeSort(arr, start, mid);
		MergeSort(arr, mid + 1, end);

		Merge(arr, start, end, mid);
	}
}

void SortExamples::QuickSort(int arr[], int start, int end)
{
	if (start < end) {
		int p = Partition(arr, start, end);

		QuickSort(arr, start, p - 1);
		QuickSort(arr, p + 1, end);
	}
}

void SortExamples::HeapSort(int arr[], int length)
{
	// �� �ڷᱸ���� ��ȯ
	//Heapify_TopDown(arr, length);
	Heapify_BottomUp(arr, length);

	for (int i = 0; i < length; i++)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << std::endl;

	// ��ȯ�� �� �ڷᱸ�� ���� �ϸ鼭 �⺻ �迭 �ڷᱸ���� ��ȯ
	int end = length - 1;
	while (end > 0)
	{
		int tmp = arr[0];
		arr[0] = arr[end];
		arr[end] = tmp;
		
		end--;
		SIFT_Down(arr, end, 1);
	}
}

void SortExamples::Heapify_TopDown(int arr[], int length)
{
	int end = 1;

	while (end < length)
	{		
		SIFT_Up(arr, 0, end++);
	}
	std::cout << "Swap Ƚ�� : " << testCount1 << std::endl;
}

void SortExamples::Heapify_BottomUp(int arr[], int length)
{
	int end = length - 1;
	int current = end - 1;

	while (current >= 0)
	{
		SIFT_Down(arr, end, current--);
	}
	std::cout << "Swap Ƚ�� : " << testCount1 << std::endl;
}

void SortExamples::SIFT_Up(int arr[], int root, int current)
{
	int parent = (current - 1) / 2;
	while (current > root)
	{
		if (arr[parent] < arr[current])
		{
			int tmp = arr[parent];
			arr[parent] = arr[current];
			arr[current] = tmp;
			
			current = parent;
			parent = (current - 1) / 2;
			testCount1++;
		}
		else
		{
			break;
		}
	}
}

void SortExamples::SIFT_Down(int arr[], int end, int current)
{
	int parent = (current - 1) / 2;
	bool doSwap = false;

	while (current <= end)
	{
		// ������ �ڽ��� �� ũ�� �����ʲ��� �������� ����
		if ((current + 1) <= end &&
			arr[current] < arr[current + 1])
			current++;

		if (arr[parent] < arr[current])
			doSwap = true;

		if (doSwap) 
		{
			int tmp = arr[parent];
			arr[parent] = arr[current];
			arr[current] = tmp;
			
			doSwap = false;
			parent = current;
			current = parent * 2 + 1;
			testCount1++;
		}
		else
		{
			break;
		}
	}
}
