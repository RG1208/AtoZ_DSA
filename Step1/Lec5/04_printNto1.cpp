#include <bits/stdc++.h>
using namespace std;

int N;

void print(int n)
{

    cin >> N;

    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n << endl;

        print(n - 1);
    }
}
int main()
{
    print(N);
    return 0;
}