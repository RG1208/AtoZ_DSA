#include <bits/stdc++.h>
using namespace std;
//  stack works on the principle of LIFO
//  Last In First Out

int main()
{
    // In stack we have to only perform pop,push,top functions
    // Time Complexity of all the three is:- O(1)

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.push(4);
    st.emplace(5); // emplace is same as push

    cout << st.top() << endl;

    st.pop();
    cout << st.top() << endl;

    cout << st.size() << endl;

    cout << st.empty() << endl;

    stack<int> st1, st2;
    st1.swap(st2);
    return 0;
}