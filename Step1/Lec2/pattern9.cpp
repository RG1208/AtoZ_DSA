#include <bits/stdc++.h>
using namespace std;
// pattern 7+8
int main()
{
    int n;
    cin >> n;

    // Pattern 7
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // pattern 8
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}