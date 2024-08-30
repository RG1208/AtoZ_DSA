#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Pairs
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    // Pairs but if we want to have 3 variables then nested pair is used
    pair<int, pair<int, int>> B = {1, {2, 3}};
    cout << B.first << " " << B.second.first << " " << B.second.second << endl;

    // pairs as a array
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};

    cout << arr[0].first << endl;
    cout << arr[0].second << endl;
    cout << arr[1].first << endl;
    cout << arr[1].second << endl;
    cout << arr[2].first << endl;
    cout << arr[2].second << endl;
}
