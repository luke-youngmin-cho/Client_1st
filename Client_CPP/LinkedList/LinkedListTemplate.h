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
	Node* _first, * _last, * _tmp, * _tmp2;	

	// (����) ��ũ�� ����Ʈ ���ø� �����غ��� 
	// C �� �ߴ��� ����
	// ����Լ��� 

	void AddFirst(T item);
	void AddLast(T item);
	void AddBefore(Node<T>& target, T item);
	void AddBefore(T targetItem, T item);
	void AddAfter(Node<T>& target, T item);
	void AddAfter(T targetItem, T item);
	Node<T>& Find(T item);
	Node<T>& FindLast(T item);
	Node<T>& First();
	Node<T>& Last();
	bool Remove(T item);
	bool RemoveLast(T item);
	void Delete();
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

template<typename T>
inline void LinkedList<T>::AddBefore(Node<T>& target, T item)
{
	_tmp = _first; // ù ������ �˻�����
	while (_tmp = nullptr)
	{
		// ��� ã������
		if (_tmp == target) {
			_tmp2 = new Node<T>(); // �űԳ�� ����

			// Ÿ�ٳ���� ������尡 ���� �ϸ�
			if (_tmp->_prev != nullptr) {
				_tmp->_prev->_next = _tmp2; // Ÿ�� ����� ��������� ���� ��� �����Ͱ� �ű� ��带 ����Ű���� ��.
				_tmp2->_prev = _tmp->_prev; // �ű� ����� ���� ��������Ͱ� Ÿ�ٳ���� ���� ��带 ����Ű���� ��.
			}
			_tmp->_prev = _tmp2; // Ÿ�� ����� ���� ��� �����Ͱ� �ű� ��带 ����Ű���� �� 
			_tmp2->_next = _tmp; // �ű� ����� ���� ��� �����Ͱ� Ÿ�� ��带 ����Ű���� ��
			_tmp2->_item = item; // �ű� ����� ������ �ʱ�ȭ.
			return;
		}
		_tmp = _tmp->_next;
	}
}

template<typename T>
inline void LinkedList<T>::AddBefore(T targetItem, T item)
{
	_tmp = _first; // ù ������ �˻�����
	while (_tmp = nullptr)
	{
		// ��� ã������
		if (_tmp->_item == targetItem) {
			_tmp2 = new Node<T>(); // �űԳ�� ����

			// Ÿ�ٳ���� ������尡 ���� �ϸ�
			if (_tmp->_prev != nullptr) {
				_tmp->_prev->_next = _tmp2; // Ÿ�� ����� ��������� ���� ��� �����Ͱ� �ű� ��带 ����Ű���� ��.
				_tmp2->_prev = _tmp->_prev; // �ű� ����� ���� ��������Ͱ� Ÿ�ٳ���� ���� ��带 ����Ű���� ��.
			}
			_tmp->_prev = _tmp2; // Ÿ�� ����� ���� ��� �����Ͱ� �ű� ��带 ����Ű���� �� 
			_tmp2->_next = _tmp; // �ű� ����� ���� ��� �����Ͱ� Ÿ�� ��带 ����Ű���� ��
			_tmp2->_item = item; // �ű� ����� ������ �ʱ�ȭ.
			return;
		}
		_tmp = _tmp->_next;
	}
}

template<typename T>
inline void LinkedList<T>::AddAfter(Node<T>& target, T item)
{
	_tmp = _first; // ù ������ �˻�����
	while (_tmp = nullptr)
	{
		// ��� ã������
		if (_tmp == target) {
			_tmp2 = new Node<T>(); // �űԳ�� ����

			// Ÿ�ٳ���� ������尡 ���� �ϸ�
			if (_tmp->_next != nullptr) {
				_tmp->_next->_prev = _tmp2; // Ÿ�� ����� ��������� ���� ��� �����Ͱ� �ű� ��带 ����Ű���� ��.
				_tmp2->_next = _tmp->_next; // �ű� ����� ���� ��������Ͱ� Ÿ�ٳ���� ���� ��带 ����Ű���� ��.
			}
			_tmp->_next = _tmp2; // Ÿ�� ����� ���� ��� �����Ͱ� �ű� ��带 ����Ű���� �� 
			_tmp2->_prev = _tmp; // �ű� ����� ���� ��� �����Ͱ� Ÿ�� ��带 ����Ű���� ��
			_tmp2->_item = item; // �ű� ����� ������ �ʱ�ȭ.
			return;
		}
		_tmp = _tmp->_next;
	}
}

template<typename T>
inline void LinkedList<T>::AddAfter(T targetItem, T item)
{
	_tmp = _first; // ù ������ �˻�����
	while (_tmp = nullptr)
	{
		// ��� ã������
		if (_tmp->_item == targetItem) {
			_tmp2 = new Node<T>(); // �űԳ�� ����

			// Ÿ�ٳ���� ������尡 ���� �ϸ�
			if (_tmp->_next != nullptr) {
				_tmp->_next->_prev = _tmp2; // Ÿ�� ����� ��������� ���� ��� �����Ͱ� �ű� ��带 ����Ű���� ��.
				_tmp2->_next = _tmp->_next; // �ű� ����� ���� ��������Ͱ� Ÿ�ٳ���� ���� ��带 ����Ű���� ��.
			}
			_tmp->_next = _tmp2; // Ÿ�� ����� ���� ��� �����Ͱ� �ű� ��带 ����Ű���� �� 
			_tmp2->_prev = _tmp; // �ű� ����� ���� ��� �����Ͱ� Ÿ�� ��带 ����Ű���� ��
			_tmp2->_item = item; // �ű� ����� ������ �ʱ�ȭ.
			return;
		}
		_tmp = _tmp->_next;
	}
}

template<typename T>
inline Node<T>& LinkedList<T>::Find(T item)
{
	_tmp = _first; // ���� ù ������ �˻�
	while (_tmp != nullptr)
	{
		if (_tmp->_item == item)
			return _tmp;

		_tmp = _tmp->_next;  // �״��� ��� �˻�
	}
	return nullptr;
}

template<typename T>
inline Node<T>& LinkedList<T>::FindLast(T item)
{
	_tmp = _last; // ���� �� ������ �˻�
	while (_tmp != nullptr)
	{
		if (_tmp->_item == item)
			return _tmp;

		_tmp = _tmp->_prev;  // �� �� ��� �˻�
	}
	return nullptr;
}

template<typename T>
inline Node<T>& LinkedList<T>::First()
{
	return _first;
}

template<typename T>
inline Node<T>& LinkedList<T>::Last()
{
	return _last;
}

template<typename T>
inline bool LinkedList<T>::Remove(T item)
{
	bool isRemoved = false;

	// ��� �˻�
	_tmp = Find(item);

	// ��� ã������
	if (_tmp != nullptr) {
		// ���� ��尡 ������
		if (_tmp->_prev != nullptr)
			_tmp->_prev->_next = _tmp->_next; // ������ ����� ���� ����� ���� �����Ͱ� ������ ����� ���� ��带 ����Ű���� ��.
		// ���� ��尡 ������
		if (_tmp->_next != nullptr)
			_tmp->_next->_prev = _tmp->_prev; // ������ ����� ���� ����� ���� �����Ͱ� ������ ����� ���� ��带 ����Ű���� ��.

		delete _tmp; // ������ ��� �޸� ����
		isRemoved = true;
	}
	
	return isRemoved;
}

template<typename T>
inline bool LinkedList<T>::RemoveLast(T item)
{
	bool isRemoved = false;

	// ��� �˻�
	_tmp = FindLast(item);

	// ��� ã������
	if (_tmp != nullptr) {
		// ���� ��尡 ������
		if (_tmp->_prev != nullptr)
			_tmp->_prev->_next = _tmp->_next; // ������ ����� ���� ����� ���� �����Ͱ� ������ ����� ���� ��带 ����Ű���� ��.
		// ���� ��尡 ������
		if (_tmp->_next != nullptr)
			_tmp->_next->_prev = _tmp->_prev; // ������ ����� ���� ����� ���� �����Ͱ� ������ ����� ���� ��带 ����Ű���� ��.

		delete _tmp; // ������ ��� �޸� ����
		isRemoved = true;
	}

	return isRemoved;
}

template<typename T>
inline void LinkedList<T>::Delete()
{
	_tmp = _first;
	while (_tmp != nul)
	{
		_tmp2 = _tmp->_next; // ���� ��� ������ �ӽ�����
		delete _tmp; // ���� ��� �޸� ����
		_tmp = _tmp2; // �ӽ������Ѱ� ���� �˻�
	}
}
