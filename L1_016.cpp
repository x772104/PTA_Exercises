#include <bits/stdc++.h>
using namespace std;
bool cheak(string a)
{
    for (int i = 0; i < 17; i++)
    {
        if (a[i] < '0' || a[i] > '9')
            return false;
    }
    return true;
}
int main()
{
    int q[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    char z[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
    int n;
    cin >> n;
    string a;
    int flag = 0; //用以判断是否有输出
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (!cheak(a))
        {
            cout << a << endl;
            flag++;
        }
        else
        {
            int sum = 0;
            for (int i = 0; i < 17; i++)
            {
                sum += ((a[i] - '0') * q[i]);
            }
            char c = z[sum % 11];
            if (c != a[17])
            {
                cout << a << endl;
                flag++;
            }
        }
    }
    if (!flag)
        cout << "All passed";
    system("pause");
    return 0;
}