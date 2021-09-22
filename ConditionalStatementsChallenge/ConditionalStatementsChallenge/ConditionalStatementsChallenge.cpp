// Developer: John R. Adams
// Assignment: Conditional Statements Challenge
// Requirements:
// 1.) Write and execute an if statement and display the result to the console.
// 2.) Write and execute an else statement and display the result to the console.
// 3.) Write and execute an else if statement and display the result to the console.
// 4.) Write and exectue a switch statement and display the result to the console.
// 5.) Utilize a tenary operator.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
using std::string;
using std::cout;
using std::cin;


int main()
{
    int customerAge;
    int carType;
    double seniorDiscount = 0.25;
    double rentalPrice;
    bool needsCarInsurance;
    double carInsurance = 25.99;
    int rentalDays;

    cout << "Welcome to the Rental Car Emporium!  Please tell me your age: >>";
    cin >> customerAge;

    if (customerAge <= 16)
    {
        cout << "Sorry, you are too young to rent a car, please try again once you are at least 18 years old." << '\n';
    }
    else if (customerAge <= 18 || customerAge >= 25)
    {
        cout << "Welcome to the Rental Car Emporium!" << '\n';
        rentalPrice = 99.99;
    }
    else if (customerAge <= 40 || customerAge >= 55)
    {
        cout << "Ah, we have a middle-aged customer today, well, you get a discount!" << '\n';
        rentalPrice = 49.99;
    }
    else
    {
        cout << "Ah, we have a senior customer today, well, you get a discount!" << '\n';
        rentalPrice = 19.99;
    }
    cout << "Please tell me what kind of car you would like ? The choices are sedan, SUV, and Van.Enter 1 for sedan, 2 for SUV, or 3 for Van : >>" << '\n';
    cin >> carType;

    switch (carType)
    {
       case 1:
           cout << "Great! You have chosen the sedan!" << '\n';
           break;
       case 2:
           cout <<"Great! you have chosen the SUV!" << '\n';
           break;
       case 3:
           cout << "Great you have chosen the Van!" << '\n';
    } 
    needsCarInsurance = (customerAge <= 18) ? true : false;
    if (needsCarInsurance == true)
    {
        cout <<"Your car price today is:" << rentalPrice + carInsurance << '\n';
    } 
    else
    {
        cout << "Your car price today is: " << rentalPrice << '\n';
    } 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
