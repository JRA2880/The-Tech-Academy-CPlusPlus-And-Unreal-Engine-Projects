// Developer: John R. Adams
// Assignment: Variables Challenge
// Complete these actions:
// Declare a variable and display its value in the console.
//Utilize each of the following keywords:
//char
//int
//double
//bool
//string
//Declare more than one variable of the same data type

#include <iostream>
using std::cout;
using std::string;

int main()
{   
    int luckyNumber = 7;
    int unluckyNumber = 13;
    char exclamation = '!';
    float PI = 3.14;
    double isRaining = false;
    string secretWord = "nimbus";

    cout << "The luckiest number in the word is " + luckyNumber << '\n';
    cout << "The unluckiest number in the world is " + unluckyNumber << '\n';
    cout << "When need to show exictement in a sentence, use the " + exclamation << " character to display that range of emotion." << '\n';
    cout << "The value of PI is " << + PI << " which is the standard value used for PI." << '\n';
    cout << "Is it raining?" << "The is answer is " << + isRaining << '\n';
    cout << "Todays secret word is " + secretWord << '\n';
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
