#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(3);
    ls.push_front(4);
    ls.emplace_front(5);

    for (int y : ls)
        cout << y << " ";

    // rest all the functions are same as the vector
    // begin,end,rend,rbegin,clear,insert,swap,size
    return 0;
}