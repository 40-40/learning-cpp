#include <iostream>
using namespace std;

int age {18}; // this variable is in global scope (bad practice as it can cause bugs easily)

int main()
{
    int age {16}; // this variable is in local scope
    cout << age << endl;
    return 0;
}