#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ra, ca;
    cin >> ra >> ca;
    int a[ra][ca];
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < ca; j++)
        {
            cin >> a[i][j];
        }
    }

    int rb, cb;
    cin >> rb >> cb;
    int b[rb][cb];
    for (int i = 0; i < rb; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            cin >> b[i][j];
        }
    }
    int sum = 0;
    if (ca == rb)
    {
        cout << ra << " " << cb << endl;
        for (int h = 0; h < ra; h++)
        {
            for (int k = 0; k < cb; k++)
            {
                for (int i = 0, j = 0; i < ca, j < rb; i++, j++)
                {
                    sum += a[h][i] * b[j][k];
                }
                if (k == 0)
                    printf("%d", sum);
                else
                    printf(" %d", sum);
                sum = 0;
            }
            cout << endl;
        }
    }
    else
        cout << "Error: " << ca << " != " << rb << endl;
    return 0;
}