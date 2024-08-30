#include <bits/stdc++.h>
using namespace std;

// In CPP we have mainly two types of functions:-
//  1. Void functions which do not take any inputs and returns the same thing as feeded in the functions
//  2. Return function which take parameters and returns the value based on that parameter

// 1. Void function creation
void print()
{
    cout << "Hey Rachit!!";
}

// 2. Parameter function
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    // calling the void function without giving any parameter
    print();
    cout << endl;

    // calling the paramter function by giving two paramterers a and b

    int s = sum(5, 6);
    cout << s;
    return 0;
}