#include <bits/stdc++.h>
using namespace std;
// it stores everything in a sorted order and unique elements
// Time complexity is log N
int main()
{
    set<int> st;

    st.insert(1);  //{1}
    st.insert(4);  //{1,4}
    st.emplace(3); //{1,3,4}
    st.insert(3);  //{1,3,4}
    st.insert(2);  //{1,2,3,4}

    auto it = st.find(2);
    auto it = st.find(6);

    st.erase(5);

    int cnt = st.count(1);

    return 0;
}