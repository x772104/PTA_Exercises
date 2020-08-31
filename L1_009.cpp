#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b) //最大公因数
{
    if (a == 0)
        return 0;
    else
        return (b == 0) ? a : gcd(b, a % b);
}
int main()
{

    int n;
    cin >> n;
    ll a, b, tg;
    char c;
    cin >> a >> c >> b;
    if (a)//a不等于0 就可以约分
    {
        tg = gcd(a, b);
        a /= tg;
        b /= tg;
    }
    ll aa, bb;
    for (int i = 1; i < n; i++)
    {
        cin >> aa >> c >> bb;
        ll tl = (b * bb) / gcd(b, bb);//求出两数相加约分后的分母
        a = a * (tl / b) + aa * (tl / bb);//相加后的分子等于两分子乘上各自通分的数
        b = tl;//思路就是始终以a b为主体 用下一个数来加 加完就是新的 a b
        if (a)//再次约分
        {
            tg = gcd(a, b);
            a /= tg;
            b /= tg;
        }
    }
    if (fabs(a) >= b)
    {
        cout << a / b;
        if (a % b)
            cout << " " << a % b << "/" << b;
    }
    else if (a == 0)
        cout << 0;
    else
    {
        cout << a << "/" << b;
    }
    system("pause");
    return 0;
}