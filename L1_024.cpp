#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    a = (n + 2) % 7;
    if (!a)
        a = 7;
    cout << a;
    return 0;
}