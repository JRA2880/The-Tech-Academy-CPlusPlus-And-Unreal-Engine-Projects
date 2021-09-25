#pragma once
#include <iostream>
#include <string>
#include "Shape.h"
using std::string;
using std::cout;
using std::cin; 

class Rectangle : public Shape
{  
  public:
	int Height;
	int Width;
	int area;
	 int getArea(int x, int y)
	{
		Height = x;
		Width = y;

		area = Height * Width;
		return area;
	}
};
