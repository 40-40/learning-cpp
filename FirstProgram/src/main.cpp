#include <iostream>
// this lets us use cin and cout

// every c++ program must start with a main function
// just like in unreal we tell a function what value it will be returning
int main()
{
    // unlike what I learned in the unreal course our variables are not camel case
    int favorite_number;

    //std::cout allows you to print text to the console
    std::cout << "Enter your favorite number between 1-100: ";

    //std::cin allows you to receive input from the console
    std::cin >> favorite_number;

    //std::endl insets a new-line character and flushes the stream (not sure what this means yet)
    std::cout << "That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << favorite_number << " is my favorite number!";

    return 0;
}