// Developer: John R Adams
// Assignment: Polymorphism Challenge
// Requirements:
// 1.) Write code in C++ that utilizes polymorphism.
//

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

class PocketMonster 
{
  public:
    void MonsterSound() {
        cout << "The Pocket Monster makes a sound \n";
    }
}; 

class Bigfoot : public PocketMonster {
public:
    void MonsterSound()
    {
        cout << "A monster Bigfoot says: GREERE!!!! \n";
    }
}; 

class Werewolf : public PocketMonster {
public:
    void MonsterSound()
    {
        cout << "A monster Werewolf says: HOWWWL!!! \n";
    }
};

int main()
{
    PocketMonster MyPocketMonster;
    Bigfoot MyBigfoot;
    Werewolf MyWerewolf;

    MyPocketMonster.MonsterSound();
    MyBigfoot.MonsterSound();
    MyWerewolf.MonsterSound();
}
