#pragma once
#include <string>
#include "Creature.h"
#include "DynamicArrayTemplate.h"
#include "ITwoLeggedWalker.h"
#include "IFourLeggedWalker.h"
#include "Dog.h"
using namespace std;

class Human :
    public Creature, public ITwoLeggedWalker, public IFourLeggedWalker
{
public:
    DynamicArray<string> clothes;

public:

    void WearCloth(string cloth);
    void PrintAllClothes();
    void TwoLeggedWalk();
    void FourLeggedWalk();
    void MakeDogFollowMe(Dog& dog);
};

