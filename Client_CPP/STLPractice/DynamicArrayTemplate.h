#pragma once
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
	public:
		T* p_Data;
		int _idx;

		T& operator * () {
			return p_Data[_idx];
		}

		Iterator(T* data, int index) 
			: p_Data(data) 
			, _idx(index)
		{
		}
	};

	DynamicArray<T>::Iterator Begin();
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
	}
	_data[_length] = item;
	_length++;
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
	return DynamicArray<T>::Iterator(_data, 0);
}
