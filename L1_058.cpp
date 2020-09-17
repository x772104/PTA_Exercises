/*L1-058 6翻了 (15 分)*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    getline(cin, c);
    int i = 0, count = 0;
    int l = c.length();
    for (i; i < l; i++)
    {
        if (c[i] == '6')
        {
            int j = i;
            while (c[j] == '6')
            {
                count++;
                j++;
            }
            if (count > 9)
                cout << 27;
            else if (count > 3)
                cout << 9;
            // else
            //     i -= count ;
            i += count ;
            count = 0;
        }
        cout << c[i];
    }
    system("pause");
}