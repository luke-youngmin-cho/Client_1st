#include <iostream>
#include <vector>
#include "DynamicArrayTemplate.h"

using namespace std;
int main() {

	vector<int> tmpVec;
	tmpVec.push_back(10);
	tmpVec.push_back(20);
	tmpVec.push_back(30);
	tmpVec.push_back(40);
	// begin
	vector<int>::iterator iter = tmpVec.begin();
	int tmpValue = *iter;
	cout << tmpValue << endl;
	// end
	//iter = tmpVec.end(); // ���� ������ ����� ���� �� ������
	//tmpValue = *iter;
	++iter;
	tmpValue = *iter;
	cout << tmpValue << endl;

	for (iter = tmpVec.begin(); iter < tmpVec.end(); iter++)
	{
		cout << *iter << endl;
	}

	//tmpVec.erase(iter);

	DynamicArray<int> tmpDA;
	tmpDA.Add(10);
	tmpDA.Add(20);
	tmpDA.Add(30);
	tmpDA.Add(40);

	//DynamicArray<int>::Iterator myIter;
	//myIter.p_Data = tmpDA.GetData();
	//myIter._idx = 2;
	//tmpValue = *myIter;
	//cout << tmpValue << endl;

	DynamicArray<int>::Iterator iter_Begin = tmpDA.Begin();
	for (; iter_Begin < tmpDA.End(); ++iter_Begin)
	{
		cout << *iter_Begin << endl;
	}

	//iter_Begin++;
	//cout << *(iter_Begin++) << endl;
	//cout << *iter_Begin << endl;
	//++iter_Begin;
	//++iter_Begin;

	return 0;
}