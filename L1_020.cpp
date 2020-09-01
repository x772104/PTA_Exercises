#include <bits/stdc++.h>
using namespace std;
int main()
{
    int friends[100000] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k, a;
        cin >> k;
        if (k == 1)
            cin >> a;
        else
        {
            for (int j = 0; j < k; j++)
            {
                cin >> a;
                friends[a]++;
            }
        }
    }
    cin >> n;
    int flag = 0, a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (friends[a] == 0)
        {
            if (!flag)
            {
                flag = 1;
            }
            else
                cout << " ";
            cout << setfill('0') << setw(5) << a;
            friends[a] = -1;
        }
    }
    if (!flag)
        cout << "No one is handsome";
    system("pause");
    return 0;
}