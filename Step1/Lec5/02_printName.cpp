#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int N;
string name;
void print()
{
    cin >> N;
    cin >> name;
    if (cnt >= N)
    {
        return;
    }
    else
    {
        cout << name << " ";
        cnt++;
        print();
    }
}

int main()
{
    print();
    return 0;
}