// Developer: John R. Adams
// Assignment: Constants Challenge
// 
//

#include <iostream>

using std::cout;

int main()
{
    const int LENGTH = 10;
    const int WIDTH = 20;
    const char NEWLINE = '\n';
    int area;

    area = LENGTH * WIDTH;
    cout << "The area of the object is " << + area << ".";
    cout << NEWLINE;
    return 0;
}

