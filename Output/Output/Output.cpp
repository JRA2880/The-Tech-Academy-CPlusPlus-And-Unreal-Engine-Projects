// Output.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;

int main()
{
    std::cout << "Hello!\n";
    std::cout << "This is my first C++ Program.\n";
    std::cout << "I have learned many other programming languages before such as: \n";
    std::cout << "C#, Python, C, Java, JavaScript, Kotlin, HTML5, CSS3, PHP, and Lua to name a few...\n";
    std::cout << "In total, before I started learning C++, I knew this many languages: \n";
    std::cout << 10 << '\n';
    std::cout << "After this course, I will know: \n";
    std::cout << 11; 

    cout << '\n' << '\n';
    int i = 2 + 2;
    cout << i << '\n';
    i = i * 3;
    cout << i << '\n'; 

    int j = 2;
    cout << j << '\n';

    i = 4.9;
    j = 7 / 2;
    cout << i << " " << j << '\n';

    cout << "Enter a number: ";
    cin >> i;
    cout << "You entered the number: " << i;
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
