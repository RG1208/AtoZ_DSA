#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N1, N2;
    cin >> N1 >> N2;
    int gcd = 1;
    int i;
    for (i = 1; i <= min(N1, N2); i++)

    {
        if (N1 % i == 0 && N2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd;
    return 0;
}