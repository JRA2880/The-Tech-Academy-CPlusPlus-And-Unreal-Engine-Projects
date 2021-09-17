//Developer: John R. Adams
//Course: C++ Fundamentals
//Tasks:
//1.) Write a program that asks the user for two words and tells them which one is longer.

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

int main()
{
    string phrase1;
    string phrase2;
    int stringValue1;
    int stringValue2;

    cout << "Enter a word, any word: " << '\n';
    getline(cin, phrase1);
    cout << "Now enter another word, any word: " << '\n';
    getline(cin, phrase2);

    stringValue1 = phrase1.length();
    stringValue2 = phrase2.length();

    if (stringValue1 > stringValue2)
    {
        cout << "The phrase " + phrase1 + " is longer by " << +stringValue1 - stringValue2 << '\n' << "In total, " + phrase1 + " is a total of " << +stringValue1 <<'\n';
    } 
    else if (stringValue1 == stringValue2)
    {
        cout << "The phrase " + phrase1 +  " and " + phrase2 + " are equal to " << + stringValue1 * 1 << '\n' << "In total, " + phrase1 + "  and " + phrase2 + " are a total of " << +stringValue1 <<'\n';
    }
    else
    {
        cout << "The phrase " + phrase2 + " is longer by " << +stringValue2 - stringValue1 << '\n' << "In total, " + phrase2 + " is a total of " << +stringValue2 <<'\n';
    } 
    cout << "Thank you for using  the String Exercise Application!";
} 

//cout << "Enter a word, any word: " << '\n';
//cin >> firstWord;
//cout << "Now enter another word, any word: " << '\n';
//cin >> secondWord;
//
//stringValue1 = firstWord.length();
//stringValue2 = secondWord.length();
//
//if (stringValue1 > stringValue2)
//{
//    cout << "The word " + firstWord + " is longer by " << +stringValue1 - stringValue2 << '\n' << "In total, " + firstWord + " is a total of " << +stringValue1 << '\n';
//}
//else if (stringValue1 == stringValue2)
//{
//    cout << "The word " + firstWord + " and " + secondWord + " are equal to " << +stringValue1 * 1 << '\n' << "In total, " + firstWord + "  and " + secondWord + " are a total of " << +stringValue1 << '\n';
//}
//else
//{
//    cout << "The word " + secondWord + " is longer by " << +stringValue2 - stringValue1 << '\n' << "In total, " + secondWord + " is a total of " << +stringValue2 << '\n';
//}
//cout << "Thank you for using  the String Exercise Application!";