#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
    {
        int i = 2;
        for (i; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return 0;
        }
        return 1;
    }
}
int main()
{
    int n, a;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (fact(a))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}