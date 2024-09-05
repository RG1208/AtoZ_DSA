#include <bits/stdc++.h>
using namespace std;
int cnt = 1;
int N;

int sum = 0;
void print()
{
    cin >> N;
    if (cnt > N)
    {
        return;
    }
    else
    {
        sum = sum + cnt;
        cnt++;
        print();
    }
}
int main()
{
    print();
    cout << sum;

    return 0;
}