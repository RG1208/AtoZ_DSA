#include <bits/stdc++.h>
using namespace std;

//  iterator points to the memory address of a variable
//  if we want to get value then use *

int main()
{

    vector<int> vect{10, 20, 30, 40, 50};

    vector<int>::iterator it = vect.begin();
    // .begin points at the 0th index

    cout << *it << " " << endl;

    // erasing the element at 0th positon.
    vect.erase(vect.begin());

    for (int y : vect)
        cout << y << " ";
    cout << endl;

    // for erasing multiple elements then
    vect.erase(vect.begin(), vect.begin() + 2);
    // it goes from 0th index to n-1 index
    for (int y : vect)
        cout << y << " ";
    return 0;
}