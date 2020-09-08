#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    char sex;
    double height, biaozun;
    cin >> n;
    while (n--)
    {
        cin >> sex >> height;
        cin.ignore(1, '\n');
        if (sex == 'M')
            biaozun = height / 1.09;
        if (sex == 'F')
            biaozun = height * 1.09;
        printf("%.2f\n", biaozun);
    }
    return 0;
}