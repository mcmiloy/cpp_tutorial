#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>
#include <cstdlib>

class Warrior{

public:
    int Attack(){}
    int Block(){}
};

class Battle{

public:
    static void StartFight(){}
    static int GetAttackResult(){}
};

int main(){


    srand(time(NULL));
    Warrior thor("Thor", 100, 30, 15);
    Warrior hulk("Hulk", 135, 25, 10);

    Battle::StartFight(thor, hulk);

    return 0;
}