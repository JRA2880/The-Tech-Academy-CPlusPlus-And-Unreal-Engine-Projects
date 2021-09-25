#pragma once
#include <iostream>
#include <string>
#include "Shape.h"
using std::string;
using std::cout;
using std::cin; 

class Circle : public Shape {
   public:
	   int Radius;
	   int area;
	   const double PI = 3.14;
	   int getArea(int r)
	   {
		   Radius = r;
		   area = PI * (pow(Radius, 2));
		   return area;
	   }
};