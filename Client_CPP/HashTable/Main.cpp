#include <iostream>
#include "HashTable.h"

using namespace std;
int main() {

	HashTable* hashTable = new HashTable();
	hashTable->Add("ö��");
	hashTable->Add("����");
	cout << "ö�� ����Ǿ����� ?" << hashTable->ContainsValue("ö��") << endl;

	hashTable->Delete();
	return 0;
}
