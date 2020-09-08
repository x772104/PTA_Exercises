#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, index, flag = 0;
    int n = 0;
    char c = '\0';
    while (c != '\n')
    {
        scanf("%d%c", &n, &c);
        i++;
        if (n == 250 && !flag)
        {
            index = i;
            flag = 1;
        }
    }
    cout << index;
    return 0;
}