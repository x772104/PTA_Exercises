//L1-003 个位数统计 (15分)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    cin >> c;
    int cnt[10] = {0};
    int i = 0;
    while(c[i]!='\0')
    {
        cnt[c[i] - '0']++;
        i++;
    }
    for (i = 0; i <= 9;i++)
    {
        if(cnt[i])
        {
            cout << i << ":" << cnt[i] << endl;
        }
    }
    system("pause");
    return 0;
}