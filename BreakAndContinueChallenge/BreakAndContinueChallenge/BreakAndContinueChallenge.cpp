// Developer: John R. Adams
// Assignment: Break and Continue Challenge
// Requirements: 
// 1.) Utilize the break and continue statements inside a while loop.

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

int main()
{
    int i = 0;
    while (i < 10)
    {   
        i++;
        if (i == 5)
        {
            cout << "You have reached the number 5!" << '\n';
            continue;
        } 
        if (i == 8)
        {
            cout << "You have reached the number 8! Time to say good bye!";
            break;
        }
    }
}
