#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

class Dog {
  public:
	  string Breed;
	  string Color;
	  int Height;
	  int Weight;
      
	  void Shake()
	  {
		  cout << Breed << " shakes!" << '\n';
	  } 
	  void Sit()
	  {
		  cout << Breed << " sits!" << '\n';
	  } 
	  void Laydown()
	  {
		  cout << Breed << " lays down!" << '\n';
	  }

};
