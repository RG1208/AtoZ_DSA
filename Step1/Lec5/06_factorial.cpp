#include <bits/stdc++.h>
using namespace std;
int cnt = 1;
int N;

int product = 1;
void print()
{
    cin >> N;
    if (cnt > N)
    {
        return;
    }
    else
    {
        product = product * cnt;
        cnt++;
        print();
    }
}
int main()
{
    print();
    cout << product;

    return 0;
}