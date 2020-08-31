//L1-006 连续因子 (20分)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int i = 2,Max=0;
    int First=2;
    for (; i <= sqrt(N);i++)
    {
        int cnt = 0;
        int j = i;
        int M = N;
        while(M%j==0)
        {
            M /= j;
            j++;
            cnt++;
        }
        if(cnt>Max)
        {
            Max = cnt;
            First = i;
            
        }
        // i += cnt;
    }
    if (Max == 0)
    {
        cout << 1 << endl;
        cout << N;
    }
    else
    {
        cout << Max << endl;
        cout << First++;
        for (i = 1; i < Max; i++)
            cout << "*" << First++;
    }
    system("pause");
    return 0;
}