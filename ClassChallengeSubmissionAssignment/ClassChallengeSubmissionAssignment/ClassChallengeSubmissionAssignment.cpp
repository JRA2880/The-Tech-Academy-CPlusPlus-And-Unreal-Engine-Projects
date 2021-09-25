// Developer: John R. Adams
// Assignment: Class Challenge Submission Assignment
// Requirements:
// 1.) Create a superclass named Shape that has the property of color, and the method of get areal
// 2.) Create subclasses of rectangle, Triangle, and Circle that inherits the color and method from the superclass,
//     and has it own classes.
// 3.) Create an instance of each, and display it to the console.
//

#include <iostream>
#include <string>
#include "Shape.h"
#include "Rectangle.h";
#include "Triangle.h";
#include "Circle.h";
using std::string;
using std::cout;
using std::cin;

int main()
{
	Rectangle r;
	r.Color = "Blue";
	r.Height = 10;
	r.Width = 8;
	r.getArea(r.Height, r.Width);
	cout << "Rectangle Color: " << r.Color << '\n';
	cout << "Rectangle Height: " << r.Height << '\n';
	cout << "Rectangle Width: " << r.Width << '\n';
	cout << "Rectangle Area: " << r.area << '\n';
	cout << '\n';
	cout << '\n';
	Triangle t;
	t.Color = "Green";
	t.Height = 12;
	t.Base = 18;
	t.getArea(t.Base, t.Height);
	cout << "Triangle Color: " << t.Color << '\n';
	cout << "Triangle Height: " << t.Height << '\n';
	cout << "Triangle Base: " << t.Base << '\n';
	cout << "Triangle Area: " << t.area << '\n';
	cout << '\n';
	cout << '\n';
	Circle c;
	c.Color = "Red";
	c.Radius = 8;
	c.getArea(c.Radius);
	cout << "Circle Color: " << c.Color << '\n';
	cout << "Circle Radius: " << c.Radius << '\n';
	cout << "Circle Area: " << c.area << '\n';
}

