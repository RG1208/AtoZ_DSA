#include <bits/stdc++.h>
using namespace std;

//  iterator points to the memory address of a variable
//  if we want to get value then use *

int main()
{

    vector<int> vect{10, 20, 30, 40, 50};

    // inserting the element at 0th positon.
    vect.insert(vect.begin(), 5);

    for (int y : vect)
        cout << y << " ";
    cout << endl;

    // inserting more than one element at some position
    vect.insert(vect.begin() + 4, 2, 10);
    for (int y : vect)
        cout << y << " ";
    cout << endl;

    cout << vect.size(); // returns the size of the vector
    cout << endl;

    vect.pop_back(); // removes the last element
    for (int y : vect)
        cout << y << " ";

    vect.clear();
    for (int y : vect)
        cout << y << " ";

    return 0;
}