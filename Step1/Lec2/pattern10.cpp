#include <bits/stdc++.h>
using namespace std;
// pattern 2+5
int main()
{
    int n;
    cin >> n;
    // pattern 2
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // pattern 5
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}