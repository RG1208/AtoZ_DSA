#include <bits/stdc++.h>
using namespace std;

// vectors are useful than arrays because size of array cannot be changed
//  while size of a vector can be changed whenever needed

int main()
{
    // creating a vector with integer data type
    vector<int> A;

    // for adding a term
    A.push_back(1);
    // or
    A.emplace_back(2);

    // creating vector from an pair
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4); // in emplace back we don't have to use curly braces{}

    // creating a vector  with some fixed values
    vector<int> B(5, 100); // output- {100,100,100,100,100}
    vector<int> C(5);      // output- {0,0,0,0,0}
    vector<int> D(C);      // copies C in D

    cout << B;
    return 0;
}
