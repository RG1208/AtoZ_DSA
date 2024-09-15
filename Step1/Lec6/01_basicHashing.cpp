#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    // array input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precomputing the 13 size array
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    // how much times the query is to be submitted
    int q;
    cin >> q;

    // giving the queries
    while (q--)
    {
        int number;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    return 0;
}