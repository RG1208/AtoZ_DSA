#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int last_digit;
    int duplicate = n;
    int revNumber = 0;
    int sum = 0;
    while (n > 0)
    {
        last_digit = n % 10;

        n = n / 10;

        sum = sum + (last_digit * last_digit * last_digit);
    }
    cout << sum << endl;

    if (duplicate == sum)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}