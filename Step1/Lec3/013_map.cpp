#include <bits/stdc++.h>
using namespace std;

// map stores everything as a key-value pair
// key and value can be of any data-type
// map stores unique keys in sorted order

int main()
{
    map<int, int> mp;              //{key,value}
    map<int, pair<int, int>> mpp;  //{key,value}
    map<pair<int, int>, int> mppp; //{key,value}
    return 0;
}

// in multimap we can store duplicate keys and sorted
// in un-sorted map we can store data in un-sorted way but unique keys