#include "HashTable.h"
#include "LinkedListTemplate.h"
HashTable::HashTable()
    : DEFAULT_SIZE(100)
{
    *_bucket = new LinkedList<string>[DEFAULT_SIZE];
}

void HashTable::Add(string value)
{
    _tmpHash = Hash(value); // �߰��Ϸ��� value �� �ؽ� ���ϱ�

    // bucket ���� �ش� �ؽÿ� ���� ��ũ�帮��Ʈ�� ������ ����
    if (_bucket[_tmpHash] == nullptr)
        _bucket[_tmpHash] = new LinkedList<string>();

    _bucket[_tmpHash]->AddLast(value); // bucket ���� �ش� �ؽÿ� �ش��ϴ� ��ũ�帮��Ʈ�� ���� �߰�.
}

bool HashTable::ContainsKey(int key)
{
    return false;
}

bool HashTable::ContainsKey(string value)
{
    return false;
}

bool HashTable::ContainsValue(string value)
{
    return false;
}

bool HashTable::RemoveKey(int key)
{
    return false;
}

bool HashTable::RemoveKey(string value)
{
    return false;
}

bool HashTable::RemoveValue(string value)
{
    return false;
}

bool HashTable::Clear()
{
    return false;
}

bool HashTable::Delete()
{
    return false;
}

int HashTable::Hash(string value)
{
    _tmpHash = 0;
    for (int i = 0; i < value.length(); i++)
    {
        _tmpHash += value[i];
    }
    _tmpHash %= DEFAULT_SIZE;
    return _tmpHash;
}
