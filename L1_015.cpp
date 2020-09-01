#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char c;
    cin >> n >> c;
    int h = (n % 2) ? n / 2 + 1 : n / 2;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << c;
        cout << endl;
    }
    system("pause");
    return 0;
}