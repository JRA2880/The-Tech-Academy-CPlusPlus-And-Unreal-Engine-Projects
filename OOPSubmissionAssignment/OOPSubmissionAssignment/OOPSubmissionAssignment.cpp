// Developer: John R. Adams
// Assignment: OOP Submission Assignment
// Requirements:
// 1.) Write a program that includes the class, properties (state), methods (behavior) and the object covered
// in the example diagram.
// 2.) Create the exact class shown, the instance of the class (object) and have it inherit all of the properties and methods.

#include <iostream>
#include "Dog.h"
#include <string>

using std::string;
using std::cout;
using std::cin;

int main()
{
    Dog Hound;
    Hound.Breed = "Hound";
    Hound.Color = "Brown";
    Hound.Height = 2;
    Hound.Weight = 60;

    cout << "Dog Breed: " << Hound.Breed << '\n';
    cout << "Dog Color: " << Hound.Color << '\n';
    cout << "Dog Height: " << Hound.Height << " feet" << '\n';
    cout << "Dog Weight: " << Hound.Weight << " pounds" << '\n';
    Hound.Shake();
    Hound.Sit();
    Hound.Laydown();
}

