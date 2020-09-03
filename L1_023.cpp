#include <bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    int g = 0, p = 0, l = 0, t = 0;
    cin >> c;
    for (int i = 0; i < c.length();i++)
    {
        if (c[i] == 'G' || c[i] == 'g')
            g++;
        else if (c[i] == 'P' || c[i] == 'p')
            p++;
        else if (c[i] == 'L' || c[i] == 'l')
            l++;
        else if (c[i] == 'T' || c[i] == 't')
            t++;
    }
    while (g != 0 || p != 0 || l != 0 || t != 0)
    {
        if (g != 0)
        {
            printf("G");
            g--;
        }
        if (p != 0)
        {
            printf("P");
            p--;
        }
        if (l != 0)
        {
            printf("L");
            l--;
        }
        if (t != 0)
        {
            printf("T");
            t--;
        }
    }
    system("pause");
    return 0;
}