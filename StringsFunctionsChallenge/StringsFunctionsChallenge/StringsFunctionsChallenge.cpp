// Developer: John R. Adams
// Assignment: String Fucntions Challenge
// Requirements:
// 1.) Utilize the length() function and the display the output in the console.
// 2.) Access and print the third character in one of your strings in the console.
// 3.) change the value of a specific character in a string.

#include <iostream>
using std::string;
using std::cout;
using std::cin;

int main()
{   
    string word;
    int wordlength;
    cout << "Enter a word, any word: " << '\n';
    cin >> word;
    wordlength = word.length();
    cout << "The length of your word is " << wordlength << " characters long." << '\n';
    word[0] = 'Q';
    cout << "Your new word is " << word << '\n';
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
