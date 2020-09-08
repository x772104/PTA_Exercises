#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[1001] = {0};
    cin >> n;
    while (n--)
    {
        int k;
        cin >> k;
        while (k--)
        {
            int c;
            cin >> c;
            a[c]++;
        }
    }
    int max, index;
    for (int i = 0; i < 1001; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
            index = i;
        }
    }
    cout << index << " " << max;
    system("pause");
    return 0;
}