#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum = 0;
    int i;
    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            // cout << i << " ";
            sum++;
        }
    }

    if (sum == 2)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not a prime number";
    }
    return 0;
}