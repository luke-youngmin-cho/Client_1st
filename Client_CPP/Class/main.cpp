#include <iostream>
using namespace std;

// ����������
// public : �ܺο��� ���� ������ Ű����
// private : �ܺο��� ���� �Ұ����� Ű����
// protected : �ڽİ�ü�� ���ٰ����� Ű����

class Coord {

private:
	int _x, _y;

public :	
	// ��ü�������������� 
	// �ǵ��� ��ü�� �ٸ� ��ü�� ��������� ���� �����ؼ� �������� �ʵ��� ������
	// ���� �����Ҽ��ִ� �Լ��� �����ϵ�����.
	void SetCoord(int x, int y) {
		_x = x;
		_y = y;
	}

	int GetCoordX() {
		return _x;
	}
	int GetCoordY() {
		return _y;
	}

	// ������ (��� �Լ�)
	// ��ü ������ (�޸𸮰��� Ȯ����) �ڵ����� ȣ�� 
	Coord() {
		SetCoord(0, 0);
	};

	// ������ �����ε�
	Coord(int x, int y) {
		SetCoord(x, y);
	}

	//�Ҹ��� (�굵 �Լ�)
	// ��ü ������ (�޸𸮰��� ������) �ڵ����� ȣ��
	~Coord() {};

	// ������ �����ε�
	const Coord& operator = (const Coord& _other) {
		this->_x = _other._x;
		this->_y = _other._y;
		// this ������
		// ���� ��ü �ڱ��ڽ��� ����Ű�� ������
		// Ŭ�����ȿ��� ����� �����Ҷ��� this �����Ͱ� �����Ǿ��ִ�. 
	}

	// ������ ����
	const Coord& operator + (const Coord& _other) {
		Coord tmpCoord;
		tmpCoord.SetCoord(_x + _other._x,
						  _y + _other._y);
		return tmpCoord;
	}
};


int main() {

	Coord coord1;

	cout << "(" << coord1.GetCoordX() << "," << coord1.GetCoordY() << ")" << endl;
	coord1.SetCoord(1, 2);
	cout << "(" << coord1.GetCoordX() << "," << coord1.GetCoordY() << ")" << endl;

	// ��ü�� �������� �����Ҵ� �� ��
	// new ������ 
	// ���·� �Ҵ���.
	Coord* coord2ptr = new Coord(5,2);
	cout << "(" << coord2ptr->GetCoordX() << "," << coord2ptr->GetCoordY() << ")" << endl;

	// Ŭ�������� ���Կ��� ����
	coord1 = *coord2ptr;
	Coord coord3 = (coord1 + *coord2ptr);

	cout << "(" << coord1.GetCoordX() << "," << coord1.GetCoordY() << ")" << endl;

	delete coord2ptr;

	return 0;
}