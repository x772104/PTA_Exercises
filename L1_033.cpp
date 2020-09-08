#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y, n;
    cin >> y >> n;
    for (int i = y;; i++)
    {
        set<int> Year;
        int x = i;
        for (int j = 0; j < 4; j++)
        {
            Year.insert(x % 10);
            x = x / 10;
        }
        if (Year.size() == n)
        {
            printf("%d %04d", i - y, i);
            system("pause");
            return 0;
        }
    }
}