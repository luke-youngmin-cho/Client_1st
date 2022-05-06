#pragma once
#include <cassert>

template <typename T>
class DynamicArray
{
private:
	T* _data;
	int _length;
	int _capacity;
	const int DEFAULT_SIZE;

public:

	int Length();
	void Add(T item);
	int Find(T item); 
	bool IsExist(T item); 
	bool Remove(T item); 
	bool RemoveAt(int index);
	void Delete();
	T* GetData();
	
	

	DynamicArray();
	~DynamicArray();

	T& operator[] (int index) {
		if (index < 0 &&
			index >= _length) {
			throw "�迭 �ε����� �������� �Ѿ���ϴ�";
		}
		return _data[index];
	}
public:
	// inner class
	class Iterator 
	{
		
	private:
		friend class DynamicArray<T>;
		DynamicArray* p_DA;
		T* p_Data;
		int _idx;

	public:
		T& operator * () {
			return p_Data[_idx];
		}

		Iterator& operator ++() {

			// Dynamic Array �� ������ �ּҿ� Iterator �� �������ִ� ������ �ּҰ� ��������
			if ((p_DA == nullptr) ||
				(p_DA->_data != p_Data) || 
				(_idx < 0))
			{
				assert(nullptr);
			}

			// Iterator �� �����Ͱ� ������ ��� �̻� ��� end ���
			if (_idx < p_DA->_length - 1) {
				++_idx;
			}
			else {
				_idx = -1;
			}
			return *this;
		}

		Iterator operator++(int) {
			Iterator tmpIter = *this;
			++(*this);
			return tmpIter;
		}

		bool operator < (const Iterator& other) {
			// this �� end �϶�
			if (_idx < 0)
				return false;

			// other �� end �϶�
			if (other._idx < 0)
				return true;

			// �Ѵ� end ���ƴҶ�
			if (_idx < other._idx &&
				p_DA->_data == other.p_DA->_data)
				return true;
			return false;
		}

		bool operator == (const Iterator& other) {
			if (p_DA->_data == other.p_DA->_data &&
				_idx == other._idx)
				return true;
			return false;
		}

		bool operator != (const Iterator& other) {
			return !(*this == other);
		}

		Iterator() 
			: p_DA(nullptr)
			, p_Data(nullptr)
			, _idx(-1) 
		{
		}

		Iterator(DynamicArray* da, T* data, int index) 
			: p_DA(da)
			, p_Data(data) 
			, _idx(index)
		{
			if (data == nullptr)
				index = -1;
		}
	};

	DynamicArray<T>::Iterator Begin();
	DynamicArray<T>::Iterator End();
	DynamicArray<T>::Iterator Erase(const Iterator& _iter);
};


template <typename T>
int DynamicArray<T>::Length() {
	return _length;
}

template<typename T>
inline void DynamicArray<T>::Add(T item)
{
	// �迭�� ũ�Ⱑ ������� ������ ���� ������ �ι�� �ø���.
	if (_length >= _capacity) {
		_capacity *= 2;
		T* tmp = new T[_capacity];
		for (int i = 0; i < _length; i++)
			tmp[i] = _data[i];
		delete[] _data;
		_data = new T[_capacity];
		for (int i = 0; i < _length; i++)
			_data[i] = tmp[i];
		delete[] tmp;
		_data[_length] = item;
		++_length;
	}
	else
	{
		_data[_length] = item;
		++_length;
	}
	
}

template<typename T>
inline int DynamicArray<T>::Find(T item)
{
	for (int i = 0; i < _length; i++)
	{
		if (_data[i] == item)
			return i;
	}
	return -1;
}

template<typename T>
inline bool DynamicArray<T>::IsExist(T item)
{
	for (int i = 0; i < _length; i++)
	{
		if (_data[i] == item)
			return true;
	}
	return false;
}

template<typename T>
inline bool DynamicArray<T>::Remove(T item)
{
	for (int i = 0; i < _length; i++)
	{
		if (_data[i] == item)
			return RemoveAt(i);
	}
	return false;
}


template<typename T>
inline bool DynamicArray<T>::RemoveAt(int index)
{
	if (index < _length) {
		for (int i = index; i < _length - 1; i++)
		{
			_data[i] = _data[i + 1];
		}
		_length--;
		return true;
	}

	return false;
}

template<typename T>
inline void DynamicArray<T>::Delete()
{
	delete[] _data;
}

template<typename T>
inline T* DynamicArray<T>::GetData()
{
	return _data;
}



template<typename T>
DynamicArray<T>::DynamicArray()
	:DEFAULT_SIZE(1)// �̴ϼȶ�����, ������ �Լ� ���� ���� ���� ��� �ʱ�ȭ�� �ҋ� ����Ѵ�.
{
	_length = 0;
	_capacity = DEFAULT_SIZE;
	_data = new T[_capacity];
}

template<typename T>
DynamicArray<T>::~DynamicArray()
{
}

template<typename T>
typename DynamicArray<T>::Iterator DynamicArray<T>::Begin()
{
	return DynamicArray<T>::Iterator(this, _data, 0);
}

template<typename T>
typename DynamicArray<T>::Iterator DynamicArray<T>::End()
{
	return DynamicArray<T>::Iterator(this, _data, -1);
}

template<typename T>
typename DynamicArray<T>::Iterator DynamicArray<T>::Erase(const Iterator& _iter)
{
	// ���� DynamicArray ������ �ּҿ� iterator�� �������ִ� DynamaicArray �ּҰ� �ٸ���
	// ���� �����Ϳ� iterator �� �������ִ� �����Ͱ� �ٸ���
	// index�� ��ȿ���� ������
	if (this != _iter.p_DA ||
		_data != _iter.p_Data ||
		_length <= _iter._idx) {
		assert(nullptr);
	}

	if (RemoveAt(_iter._idx) == false) {
		assert(nullptr);
	}

	return DynamicArray<T>::Iterator(this, _data, _iter._idx);
}
