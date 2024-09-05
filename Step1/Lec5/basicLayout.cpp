#include <bits/stdc++.h>
using namespace std;

int cnt = 1;
int N;

void print()
{
    cin >> N;
    if (cnt > N)
    {
        return;
    }
    else
    {
        cout << cnt << endl;
        cnt++;
        print();
    }
}
int main()
{
    print();
    return 0;
}