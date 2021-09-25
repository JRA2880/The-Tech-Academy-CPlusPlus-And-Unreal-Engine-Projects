// Developer: John R. Adams
// Assignment: Exception Challenge
// Requirements:
// 1.) Utilize these keywords: try, throw, and catch.
//

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

int main()
{
    int minimumAge = 18;
    
    try {
        int renterAge = 16;
        if (renterAge == minimumAge)
        {
            cout << "You are old enough to rent a time travel machine!  Enjoy yor time travel vacation!" << '\n';
        } 
        else {
            throw(renterAge);
        }
    } 
    catch (int renterAge)
    {
        cout << "Time travel rental denied - You must be at least 18 years old to rent a time travel machine!" << '\n';
        cout << "Renter Age is: " << renterAge;
    }
}

