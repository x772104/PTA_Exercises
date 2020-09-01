#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    double bei = 1; //计算倍数
    int cnt = 0;    //数2有几个
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '2')
            cnt++;
    }
    int l = n.length();
    if (!((n[l - 1] - '0') % 2)) //注意 长度会比下标多一位
        bei *= 2;
    if (n[0] == '-')
    {
        bei *= 1.5;
        l--; //如果先判断负号 l--会导致判断最后一位时出错
    }

    bei *= (cnt * 1.0) / l * 100;
    printf("%.2f%%", bei);
    system("pause");
    return 0;
}