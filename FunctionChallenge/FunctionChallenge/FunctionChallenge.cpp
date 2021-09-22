// Developer: John R. Adams
// Assignment: Function Challenge
// Requirements:
// 1.) Call a function without an argument.
// 2.) Declare a function with multiple parameters.
// 3.) Utilize the return keyword inside a function.
// 4.) Pass a reference to a function.
// 5.) Use function overloading (name multiple functions with different parameters.
//

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

int main()
{
    std::cout << "Hello World!\n";
} 

void FunctionTest()
{
    cout << "This function demonstrates a function without an argument." << '\n';
} 

void CalculateArea(int a, int b)
{
    cout << "The area of the object is: " << a * b << '\n';
} 

double Exponential(double a, double b)
{
    return  pow(a, b);

} 

int Exponential(int a, int b)
{
    return pow(a, b);
}

void switchPlaces(int& x, int& y)
{
    int z = x;
    x = y;
    y = z;
    cout << x << y << z << '\n';
}

