#include <bits/stdc++.h>
using namespace std;
// Time Complexity of top function is:- O(1)
// Time Complexity of push and pop function is:- log n

int main()
{
    // 1. Max heap
    // in this the elements will be stored in the
    // way where biggest element is stored at the top

    priority_queue<int> Maxq;
    Maxq.push(1);
    Maxq.push(2);
    Maxq.push(3);
    Maxq.emplace(4); // emplace is same as push

    cout << Maxq.top();
    Maxq.pop();
    cout << endl;
    cout << Maxq.top();
    cout << endl;

    // 2. Min heap
    // in this the elements will be stored in the
    // way where smallest element is stored at the top
    priority_queue<int, vector<int>, greater<int>> Minq;
    Minq.push(1);
    Minq.push(2);
    Minq.push(3);
    Minq.emplace(4); // emplace is same as push

    cout << Minq.top();
    Minq.pop();
    cout << endl;
    cout << Minq.top();
    return 0;
}