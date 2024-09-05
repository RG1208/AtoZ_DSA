#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int N;

void print()
{
    cin >> N;
    if (cnt >= N)
    {
        return;
    }
    else
    {
        cout << "Hi" << endl;
        cnt++;
        print();
    }
}

int main()
{
    print();
    return 0;
}