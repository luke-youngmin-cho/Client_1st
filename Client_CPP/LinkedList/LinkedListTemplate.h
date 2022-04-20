#pragma once

// ����ü vs Ŭ����
// ������� ���ļ� �ϳ��� �ڷ������� �����ؾ� �� �� ,
// ����ü�� Ŭ���� �߿� ����� ����ϴ°��� ���������� �Ǵ��ϴ� ������ �Ϲ�������
// 
// 1. ������� ������ �� ���� 16byte ���ϸ� ����ü, �̻��̸� Ŭ����
// ����ü ��ü�� ���ڷ� �����Ҷ��� ��� ����� ���� �����ϰ�, 
// Ŭ���� ��ü�� ���ڷ� ������ ���� �ش� ��ü�� �ּҸ� �����Ѵ�. 
// ����ü ��ü�� ������ ���� ���� �����ؼ� ���Ƿ� 
// �ּҸ� �����ͼ� ���������ؾ��ϴ� Ŭ���� ���� �⺻�����δ� ������. 
// ������ ���������� ũ�Ⱑ 16byte �̱⶧���� ����ü�� ��� ������ �� ���� 16byte �� �Ѿ�ԵǸ�
// ���� �о���̰� ���µ� �ι� �̻��� �ð��� �ҿ�Ǹ�, 
// �̷� ��쿡�� Ŭ���� ��ü�� ���� �������� ������. 
//
// 2. ������ ������ ���� ���̺� �뵵�� ����� �� ( �Լ��� ���ڷ� �����ϰų� ��ü�� ������ ���� ���� ���� �� )
// ��ü���� ��ȣ�ۿ뺸�ٴ� �ܼ��� ���� ������ �������� ���̺��̶�� ���� 
// ��Ȯ�ϰ� ǥ���ϱ� ���� ������ �̷���� 16byte �� �Ѱܵ� ���� ����� �� �ִ�. 
//
// ����ü vs Ŭ���� ���� ���ؿ� ������ ������ ���������� �� �������� ������.
template <typename T>
class Node
{
	T _item;
	Node* _prev;
	Node* _next;
};

template <typename T>
class LinkedList
{
	Node* _first, * _last, * _tmp;	

	// (����) ��ũ�� ����Ʈ ���ø� �����غ��� 
	// C �� �ߴ��� ����
	// ����Լ��� 
	// void AddFirst(T item), 
	// void AddLast(T item)
	// void AddAfter(Node& node, T item)
	// void AddBefore(Node& node, T item)
	// Node<T>& First() 
	// Node<T>& Last()
	// Node<T>& Find(T item)
	// Node<T>& FindLast(T item)
	// bool Remove(T item)
	// bool RemoveLast(T item)
	// void Delete()
	void AddFirst(T item);
	void AddLast(T item);
};

/// <summary>
/// ����Ʈ�� ���� �տ� �ű� ��� �����ϴ� �Լ�
/// </summary>
template<typename T>
inline void LinkedList<T>::AddFirst(T item)
{
	_tmp = new Node<T>(); // �űԳ�� ����
	_tmp->_item = item; // �űԳ�� �� ����

	// first �� ������ ?
	if (_first != nullptr) {
		_tmp->_next = _first; // �űԳ���� ���� ��尡 first �� ����Ű�� �Ѵ�.
		_first->_prev = _tmp; // first �� ���� ��尡 �ű� ��带 ����Ű���Ѵ�.
	}
	
	// last �� �������?
	// : �̹� �űԳ�尡 ���� ó������ ������ ����
	// ��, first �� last �����Ͱ� �Ѵ� �űԳ�带 �����Ѿ��Ѵ�
	if (_last == nullptr) {
		_last = _tmp;
		// _first = _tmp; // ������ �������� first �� �űԳ�带 ����Ű�� �ҰŴϱ� ��������
	}
		
	_first = _tmp; // �߰� �Ϸ�Ǿ����� first �� �űԳ�带 ����Ű�� ��
}

/// <summary>
/// ����Ʈ�� ���� �ڿ� �ű� ��� �����ϴ� �Լ�
/// </summary>
template<typename T>
inline void LinkedList<T>::AddLast(T item)
{
	_tmp = new Node<T>(); // �űԳ�� ����
	_tmp->_item = item; // �űԳ�� �� ����

	// last �� ������ ?
	if (_last != nullptr) {
		_tmp->_prev = _last; // �űԳ���� ������尡 last �� ����Ű���Ѵ�.
		_last->_next = _tmp; // last �� ���� ��尡 �ű� ��带 ����Ű���Ѵ�.
	}

	// first �� �������?
	// : �̹� �űԳ�尡 ���� ó������ ������ ����
	// ��, first �� last �����Ͱ� �Ѵ� �űԳ�带 �����Ѿ��Ѵ�
	if (_last == nullptr) {
		//_last = _tmp; // ������ �������� last �� �űԳ�带 ����Ű�� �ҰŴϱ� ��������
		_first = _tmp; 
	}

	_last = _tmp; // �߰� �Ϸ�Ǿ����� last �� �űԳ�带 ����Ű�� ��
}