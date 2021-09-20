// Developer: John R Adams
// Assignment: String Challenge
// Requirements:
// 1.) Utilize the string type.
// 2.) Concatentate a string.
//

#include <iostream>
using std::string;
using std::cout;
using std::cin;

int main()
{ 
	string name;
	string const direction = "North";
	string const rank = "King";

	cout << "What is your name?";
	cin >> name;
	cout << name << ", you are the " << rank << " of the " << direction << "!" << '\n';
}
