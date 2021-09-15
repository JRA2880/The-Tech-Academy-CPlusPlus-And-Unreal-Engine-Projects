// Flow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//  

#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int firstNumber;
    int secondNumber;
    bool keepgoing = true;
    int answer;

    while (keepgoing)
    {
        cout << "Enter a number: ";
        cin >> firstNumber;
        cout << "You entered " << firstNumber << ". Enter another number: ";
        cin >> secondNumber;

        if (firstNumber < secondNumber)
        {
            cout << "The first number, " << firstNumber << ", is less than the second number, " << secondNumber << '\n';
        }
        else
        {
            cout << "The first number, " << firstNumber << ", is not less than the second number " << secondNumber << '\n';
        }
        if (firstNumber == secondNumber)
        {
            cout << "The first number, " << firstNumber << ", is equal to the second number, " << secondNumber << '\n';
        }
        if (firstNumber > secondNumber)
        {
            cout << "The first number, " << firstNumber << ", is greater than the second number, " << secondNumber << '\n';
        } 
        for (int loop = 0; loop < 10; loop++)
        {
            cout << loop << "\n";
        }
        cout << "Compare another pair of numbers? Enter 0 to quit the program, or enter another set of numbers to continue: ";
        cin >> answer;
        if (answer == 0)
        {
            keepgoing = false;
            cout << "Thank you using the Number Comparison App. Have a great day!";
        }
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
