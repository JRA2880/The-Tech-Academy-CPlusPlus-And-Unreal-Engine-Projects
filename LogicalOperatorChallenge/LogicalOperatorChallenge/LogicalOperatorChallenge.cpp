// Developer: John R. Adams
// Assignment: Logical Operator Challenge
// Requirements:
// 1.) Utilize the following assignment operators and display their results in the console.
// 2.) &&
// 3.) ||
// 4.) !

#include <iostream>
using std::string;
using std::cout;
using std::cin;

int main()
{
    int number1 = 1;
    int number2 = 1;
    int number3 = number1 + number2;
    int number4 = number3 * number3;
    string userInput;
    string const word = "newspaper";

    if (number1 && number2 == 1)
    {
        cout << "both of the numbers are the same!" << '\n';
    }
    if (number3 == 2 || number4 == 4)
    {
        cout << "Simple math still works!"  << '\n';
    } 
    if (!number3 || !number4)
    {
        cout << "Stop everything, simple math has broken down!" << '\n';
    }
    cout << "What is black, white, and read all over?" << '\n';
    cin >> userInput;
    if (userInput == word)
    {
        cout << "Yes, a newspaper is black, white, and read all over!" << '\n';
    }
}