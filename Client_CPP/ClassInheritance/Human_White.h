#pragma once
#include "Human.h"
class Human_White :
    public Human
{
public:
    void GoTravel();

    // override 
    // �θ��� ����Լ��� ������ �� �� �ִ� ���
    void Breath();
    void Grow();
};

