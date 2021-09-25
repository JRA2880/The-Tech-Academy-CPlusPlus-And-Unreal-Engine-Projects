// Developer: John R. Adams
// Assignment: Inheritance Challenge
// Requirements:
// 1.) Utilize the : symbol to inherit from a class.
// 2.) Utilize multilevel inheritance.
// 3.) Derive a class from more than one base (using a comma-seperated list).
// 4.) Access the protected specificer in an inherited class.
//

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

class Character {
public:
    string name;
    string race;
    void CharacterRoll()
    {
        cout << "The character must roll to determine HP, MP, and AP" << '\n';
    }
}; 
 
class Adventurer : public Character {
   public: 
       string profession;
       int XP;
}; 

class Hero : public Adventurer {
   public:
       string weapon;
       string armor;
       int HP;
       int MP;
       int AP;
       void SetStats(string item, string armor, int x, int y, int z)
       {
           weapon = item;
           armor = armor;
           HP = x;
           MP = y;
           AP = z;
       }
       int CalculateStartingXP(int x, int y, int z)
       {
           XP = x * y * z;
           return XP;
       }
   protected:
       int GetStartingExperience()
       {
           return XP;
       }
      
}; 

class Monster {
  public:
      string race;
      void MonsterRaceOut()
      {
          cout << "Monster Race: " << race << '\n';
      }
}; 

class MonsterType {
   public:
       string type;
       void MonsterTypeOut()
       {
           cout << "Monster Type: " << type << '\n';
       }
};  

class MonsterClass: public MonsterType, public Monster {
   public:
       string profession;
       int HP;
       int MP;
       int AP;
       string AttackType;
       int AttackModifier;
};

int main()
{   
    Adventurer Ronin;
    Ronin.name = "Akiro";
    Ronin.race = "Kitsune";
    Ronin.profession = "Wandering Samurai";

    cout << "An adventurer named " << Ronin.name << " enters into the tavern..." << "a " << Ronin.race << "'s ear peaks up..." << "The " << Ronin.profession << " shows no fear!" << '\n';
    Hero Paladin;
    Paladin.name = "Roland";
    Paladin.race = "Human";
    cout << Paladin.name << " enters into the tavern..." << '\n';
    Paladin.CharacterRoll();
    MonsterClass Dragon;
    Dragon.race = "Dragonian";
    Dragon.type = "Elemental";
    Dragon.profession = "Maurader";
    Dragon.HP = 100;
    Dragon.MP = 200;
    Dragon.AP = 150;
    Dragon.AttackType = "Fire Breath";
    Dragon.AttackModifier = 10;
    Dragon.MonsterRaceOut();
    Dragon.MonsterTypeOut(); 

    Hero Witcher;
    Witcher.SetStats("blade", "rogue armor", 100, 100, 100);
    Witcher.CalculateStartingXP(1, 10, 100);
    cout << "Witcher Starting XP: " << Witcher.XP << '\n';
}