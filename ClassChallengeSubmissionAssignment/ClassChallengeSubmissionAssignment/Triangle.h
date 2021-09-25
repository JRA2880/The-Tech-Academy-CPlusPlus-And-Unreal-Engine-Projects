#pragma once
#include <iostream>
#include <string>
#include "Shape.h"
using std::string;
using std::cout;
using std::cin;

class Triangle : public Shape {
   public:
	   int Base;
	   int Height;
	   int area;
	   int getArea(int x, int y)
	   { 
		   Base = x;
		   Height = y;
		   area = (Base * Height) / 2;
		   return area;
	   }
};
