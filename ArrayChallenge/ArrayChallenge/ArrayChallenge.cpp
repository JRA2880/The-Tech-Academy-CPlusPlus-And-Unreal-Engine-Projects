// Developer: John R. Adams
// Assignment: Array Challenge
// Requirements: 
// 1.) Declare an array and display one of its elements in the console.
//

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

int main()
{   
    string monsters[5] = { "Dragon","Minotaur","Goblin","Ogre","Basilisk" };
    cout << "The monster chosen for the arena is the: " << monsters[1] << '\n';

    for (int i = 0; i < 5; i++)
    {
        cout << monsters[i] << '\n';
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
