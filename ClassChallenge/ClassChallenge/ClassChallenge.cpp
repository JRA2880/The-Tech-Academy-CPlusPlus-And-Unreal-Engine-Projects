// Developer: John R. Adams
// Assignment: Class Challenge
// Requirements:
// 1.) Create a class
// 2.) Utilize the public keyord
// 3.) Create multiple objects  within a single class
// 4.) Define a function that belongs to a class inside the class definition.
// 5.) Define a function that belongs to a casss out the class definition.
// 6.) Create a constructr with parameters
// 7.) Define a constructor outside a class

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

class Monster
{
    public:
        string name;
        string type;
        string mainAttack;
        string specialAbility;
        string specialAbilityDescription;
        int health;
        int mana;
        int armorClass;
        int attackDamage;
        int actionPoints;
        Monster(string x, string y, string z);
        Monster(int x, int y, int z)
        {
            health = x;
            mana = y;
            actionPoints = z;
        }
        void Attack()
        {
            cout << name << " attacks for " << attackDamage << " damage!" << '\n';
        }
        void specialAbilityAttack();
   protected:
       string allies;
       string location;
       string strength;
       string weakness;
   private:
      int XP;
      int Value;
      string item;
      string loot;      
};  

Monster::Monster(string x, string y, string z)
{
    name = x;
    type = y;
    specialAbility = z;
}

void Monster::specialAbilityAttack()
{
    cout << name << " uses " << specialAbility << specialAbilityDescription << " to attack the party!" << '\n';
}

int main()
{   
    Monster monster1("Seawolf", "Sea monseter", "Sea Wolf's Howl");
    Monster monster1(40,40,60);
    monster1.name = "Seawolf";
    monster1.type = "Sea monster";
    monster1.mainAttack = "Sea wolf bite";
    monster1.specialAbility = "Sea Wolf's Howl";
    monster1.specialAbilityDescription = " to summon the sea wolf pack";
    monster1.health = 40;
    monster1.mana = 40;
    monster1.armorClass = 10;
    monster1.attackDamage = 30;
    monster1.actionPoints = 60; 

    cout << "Monster Name: " << monster1.name << '\n';
    cout << "Monster Type: " << monster1.type << '\n';
    cout << "Monster Main Attack: " << monster1.mainAttack << '\n';
    cout << "Monster Special Ability: " << monster1.specialAbility << '\n';
    cout << "Monster Health: " << monster1.health << '\n';
    cout << "Monster Mana: " << monster1.mana << '\n';
    cout << "Monster Armor Class: " << monster1.armorClass << '\n';
    cout << "Monster Attack Damage: " << monster1.attackDamage << '\n';
    cout << "Monster Action Points: " << monster1.actionPoints << '\n';

    monster1.Attack();
    monster1.specialAbilityAttack();
}