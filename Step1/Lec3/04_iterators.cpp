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

    it++;
    cout << *it << " " << endl;

    it = it + 2;
    cout << *it << " " << endl;

    // .end points to the location after the last element
    vector<int>::iterator itt = vect.end();
    cout << *itt << endl;

    itt--; // for getting the last element
    cout << *itt << endl;

    // .back returns the last value of a vector
    cout << vect.back() << endl;
    return 0;
}