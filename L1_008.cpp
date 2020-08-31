#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0, a, b;
    int j = 0;//记录换行
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        sum += i;
        printf("%5d", i);
        j++;
        if (j % 5 == 0)
            cout << endl;
    }
    if (j % 5 != 0)//刚好换过行了就不用换行了
        cout << endl;
    cout << "Sum = " << sum;
    system("pause");
    return 0;
}