#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ji = 0, ou = 0;
    while (n--)
    {
        int a;
        cin >> a;
        if (a % 2)
            ji++;
        else
            ou++;
    }
    cout << ji << " " << ou;
    return 0;
}