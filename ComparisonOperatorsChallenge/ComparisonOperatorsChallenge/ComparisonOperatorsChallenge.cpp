// Developer: John R. Adams
// Assignment: Comparison Operators Challenge
// Requirements:
// 1.) Utilize the following comparison operators and their result in the console:
// 2.) > 
// 3.) ==
// 4.) !=
//

#include <iostream>
using std::string;
using std::cout;
using std::cin;

int main() 
{ 
    int number1 = 1;
    int number2 = 2;
    string word1 = "dog";
    string word2 = "cat";
    string animal = "octopus";
    string userInput;
    int length = 2;
    int width = 5;
    int area;

    if (number2 > number1)
    {
        cout << number2 << " is greater than " << number1 << '\n';
    } 
    if (word1 == word2)
    {
       cout << word1 << " has the same number of characters as " << word2 << '\n';
    } 
    cout << "Guess an animal, any animal:";
    cin >> userInput;
    if (userInput != animal)
    {
        cout << "You guessed wrong.  Sorry no prize for you!" << '\n';
    } 
    else
    {
        cout << "Congratulations! You guessed the right animal! The animal is: " << animal << '\n';
    } 

    area = length * width;
    if (area <= 10)
    {
        cout << "The area of the space is: " << area;
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
