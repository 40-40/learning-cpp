#include <iostream>
using namespace std;

int main()
{
    // This program will calculate the area of a room in square feet
    // int age; if you dont initialize a variable and you end up using it the value will be random
    // int age {}; use this instead!

    cout << "Enter the width of the room: ";
    int room_width {0};
    cin >> room_width;

    cout << "Enter the length of the room: ";
    int room_length {0};
    cin >> room_length;

    cout << "The area of the room is: " << room_length * room_width << " square feet" << endl;

    return 0;
}