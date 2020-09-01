#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int main()
{
    int n, i, result = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        result += fact(i);
    }
    cout << result;
    return 0;
}