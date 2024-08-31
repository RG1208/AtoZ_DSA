#include <bits/stdc++.h>
using namespace std;
//  stack works on the principle of FIFO
//  First In First Out

int main()
{
    // Time Complexity of all the functions is:- O(1)

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4); // emplace is same as push

    cout << q.back() << endl;

    q.back() += 5;
    cout << q.back() << endl;

    cout << q.front() << endl;

    q.pop();
    cout << q.front() << endl;

    // size swap empty are same as stack
    return 0;
}