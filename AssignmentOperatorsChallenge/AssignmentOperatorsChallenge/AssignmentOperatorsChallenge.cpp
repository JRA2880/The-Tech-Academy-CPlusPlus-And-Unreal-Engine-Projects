// Developer: John R. Adams
// Assignment: Assignment Operators Challenge
// Requirements:
// 1.) Utilize the following assignments operators:
// 2.) =
// 3.) +=
// 4.) &=
// 5.) <<=

#include <iostream>
using std::string;
using std::cout;
using std::cin;

int main()
{
    int x = 2;
    x += 5;
    x &= 10;
    x <<= 5;
    cout << x << '\n';
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
