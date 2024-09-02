#include <bits/stdc++.h>
using namespace std;
// time complexity- log10(n)
int main()
{
    int n;
    cin >> n;
    int last_digit;
    int number = 0;

    while (n > 0)
    {
        last_digit = n % 10;
        number++;
        n = n / 10;
        // cout << last_digit << endl;
    }
    cout << number;
    return 0;
}