#include <iostream>
#include <string>
// #include <cstring>
using namespace std;

int main() {

	const int DEFAULT_SIZE = 4;
	// ���� C ���ڿ�
	//char firstName[DEFAULT_SIZE];
	//char lastName[DEFAULT_SIZE]; // �ѹ��ڸ� 1byte�� �����
	//wchar_t ct = L'��'; //���ѹ��ڸ������������� �����.

	// C++ ���ڿ�
	string firstName, lastName;

	cout << "���� �Է��ϼ���";
	//cin >> firstName;
	//cin.get(firstName, DEFAULT_SIZE).get();
	//cin.get(firstName, DEFAULT_SIZE).ignore(DEFAULT_SIZE, '\n');
	getline(cin, firstName);

	cout << "�̸��� �Է��ϼ���";
	//cin >> lastName;
	//cin.get(lastName, DEFAULT_SIZE).get();
	//cin.get(lastName, DEFAULT_SIZE).ignore(DEFAULT_SIZE, '\n');
	getline(cin, lastName);

	cout << "����" << firstName << "�̿�, �̸���" << lastName << "�̴�" << endl;

	// ���ڿ� Ŭ������ Ȱ��

	// ���� C ���ڿ�ó�� �ε��������� �����ϴ�
	cout << firstName[0];

	// ���ڿ� Ŭ������ �Լ���
	//=============================================================
	// �ε��������� Ȱ���� for���� �����ϴ�
	for (int i = 0; i < firstName.length(); i++)
		cout << firstName[i];

	cout << firstName.length() << endl;
	cout << firstName.size() << endl;

	// append()
	// ���ڿ��� �߰��ϴ� �޼ҵ� 
	string str1, str2, str3;
	str1.append("Hello World!");
	str2.append("Hello World!", 6, 5);
	str3.append(4, '!');

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	// find()
	// ���� ���ڿ� ��ü���� Ư�� ���ڿ��� ã�� �޼ҵ�
	// ���ڿ��� ã�µ� �����ϸ� string::npos;
	
	if (str1.find("Hello", 0) != string::npos)
		cout << "Hello ã�µ� ����" << endl;
	else
		cout << "Hello ã�µ� ����" << endl;

	// compare()
	// �� ���ڿ��� ���ϴ� �޼ҵ�
	// ������� 0 , ���ں��� ���������� �տ�������� ����, �ڿ����������
	cout << (str1.compare(str2) == 0) << endl;
	cout << (str1.compare(str2) < 0) << endl;
	cout << (str1.compare(str2) > 0) << endl;

	// replace()
	// ���ڷ� �־��� ���ڿ��� ��ü�ϴ� �޼ҵ�
	// ���ڿ�.replace(��ü���ڿ�������ġ, ��ü���ڿ�����, ���ο� ���ڿ�);

	str1.replace(0, str2.length(), str3);
	cout << str1 << endl;

	string str = "123456678901234567890";
	cout << str.capacity() << endl;
	cout << str.max_size() << endl;

	return 0;
}