#include <bits/stdc++.h>
using namespace std;
// time complexity- log10(n)

int main()
{
    int n;
    cin >> n;
    int duplicate = n;
    int last_digit;
    int number = 0;

    int revNumber = 0;
    while (n > 0)
    {
        last_digit = n % 10;
        n = n / 10;
        revNumber = (revNumber * 10) + last_digit;
    }

    if (duplicate == revNumber)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}