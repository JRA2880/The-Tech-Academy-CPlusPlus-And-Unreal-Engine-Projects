// Developer: John R. Adams
// Assignment: Operators Challenge
// Requirements:
// Utilize each of the following operators and display their result in the console:
// 1.) +
// 2.) - 
// 3.) *
// 4.) /
// 5.) ++
//

#include <iostream>
using std::string;
using std::cout;
using std::cin;


int main()
{
    int number1 = 1;
    int number2 = 2;

    cout << number1 + number2;
    cout << number2 - number1;
    cout << number1 * number2;
    cout << number2 / number1;

    for (int i = 0; i < 10; i++)
    {
        cout << number1++;
        cout << "----" << '\n';
        cout << number2++;
        cout << "----" << '\n';
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
