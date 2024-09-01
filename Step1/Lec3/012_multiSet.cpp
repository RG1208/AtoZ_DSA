#include <bits/stdc++.h>
using namespace std;
// it stores everything in only sorted order, unique elements can be added
// Time complexity is log N
int main()
{
    set<int> ms;

    ms.insert(1);  //{1}
    ms.insert(1);  //{1,1}
    ms.emplace(1); //{1,1,1}
    ms.emplace(1); //{1,1,1,1}
    ms.emplace(1); //{1,1,1,1,1}

    int cnt = ms.count(1);

    ms.erase(ms.find(1)); // clear only single 1
    ms.erase(1);          // erase all the 1

       return 0;
}