#pragma once
#include "Creature.h"
#include "IFourLeggedWalker.h"
// Ŭ���� ���
// class Ŭ�����̸� : ��ӹ��� Ŭ���� �̸� (�θ�Ŭ����)

class Dog :
    public Creature , public IFourLeggedWalker
{
public : 
    int tailLength;

public :
    void Bite(Creature* creature);
    void FourLeggedWalker();
};

