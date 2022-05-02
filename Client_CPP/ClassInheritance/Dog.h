#pragma once
#include "Creature.h"
#include "IFourLeggedWalker.h"
// Ŭ���� ���
// class Ŭ�����̸� : ��ӹ��� Ŭ���� �̸� (�θ�Ŭ����)

class Dog :
    public Creature , public IFourLeggedWalker
{
private :
    bool followEnable;

    // friend : friend class Ŭ������ 
    // �̶�� ����� Ŭ����Ÿ���� ��ü���� ���������ڿ� ������� ����� ���� �����ϵ��� ���ش�.
    // �ڵ� ���̴ϱ� �ظ��ϸ� �Ⱦ����� ��������
    friend class Human; 

public : 
    int tailLength;

public :
    void Bite(Creature* creature);
    void FourLeggedWalker();
};

