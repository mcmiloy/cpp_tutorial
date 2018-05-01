#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>
#include <cstdlib>
#include <sstream>

class Warrior{
private:
    std::string name;
    int health;
    int attack;
    int block;

public:
    Warrior(std::string, int, int, int);

    std::string GetName(){return this->name;}
    
    int GetHealth(){return this->health;}
    
    int GetAttack(){
        int attack_this_turn = random() % this->attack;
        std::cout << this->name << " dealt " << attack_this_turn << " damage.\n";
        return attack_this_turn;
    }

    int GetBlock(){
        int block_this_turn = random() % this->block;
        std::cout << this->name << " blocked " << block_this_turn << " damage.\n";       
        return block_this_turn;
    }

    void TakeDamage(int damage){this->health -= damage;
        std::cout << this->name << " now has " << this->health << " health.\n";}

    std::string ListStats();
};

Warrior::Warrior(std::string name, int health, int attack, int block){
    this->name = name;
    this->health = health;
    this->attack = attack;
    this->block = block;
}

std::string Warrior::ListStats(){
    std::stringstream ss;
    ss << this->name <<
        " { hp: " << this->health <<
        ", att: " << this->attack <<
        ", def: " << this->block << " }\n";
    return ss.str();
}


class Battle{

public:
    static void StartFight(Warrior first, Warrior second){
        std::cout << "Battle:\n" << first.ListStats() << "vs\n" << second.ListStats() << "\n"; 
        while(true){
            second.TakeDamage((first.GetAttack()-second.GetBlock() > 0) ? 
            first.GetAttack()-second.GetBlock() : 
            0);
            std::cout << "\n";           
            if(second.GetHealth() <= 0) break;
            
            first.TakeDamage((second.GetAttack()-first.GetBlock() > 0) ? 
            second.GetAttack()-first.GetBlock() : 
            0);
            std::cout << "\n";            
            if(first.GetHealth() <= 0) break;
        }
        if(second.GetHealth() <= 0){
            std::cout << first.GetName() << " wins!\n";
        } else {
            std::cout << second.GetName() << " wins!\n";
        }
    }
};

int main(){


    srand(time(NULL));
    Warrior thor("Thor", 100, 30, 15);
    Warrior hulk("Hulk", 135, 25, 10);

    Battle::StartFight(thor, hulk);

    return 0;
}