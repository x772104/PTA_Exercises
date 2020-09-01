#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, m, i;
    scanf("%d:%d", &h, &m);
    if (h >= 0 && h <= 12)
    {
        printf("Only %02d:%02d.  Too early to Dang.", h, m);
        return 0;
    }
    else if (m > 0)
        h++;
    h = h - 12;
    for (i = 1; i <= h; i++)
        cout << "Dang";
    return 0;
}