#include <bits/stdc++.h>
using namespace std;
int cheak(int *c, int a)
{
    int i;
    for (i = 0; i < 11; i++)
    {
        if (*(c + i) == a)
            return i;
    }
}
int main()
{
    int a[11] /*记录电话号码*/, b[10] = {-1} /*输出的第一行*/, c[10] = {0} /*记录哪些数字出现过*/, d[11], i = 0, j = 0;
    for (i = 0; i < 11; i++)
    {
        scanf("%1d", &a[i]); //一次只能输入一位int
        c[a[i]]++;
    }
    for (i = 9; i >= 0; i--) //递减所以i=9
    {
        if (c[i] != 0)
            b[j++] = i;
    }
    for (i = 0; i < 11; i++)
    {
        d[i] = cheak(b, a[i]); //cheak函数检查a[i]在b里的下标是多少
    }
    printf("int[] arr = new int[]{%d", b[0]);
    for (i = 1; i < j; i++)
        printf(",%d", b[i]);
    printf("};\n");
    printf("int[] index = new int[]{%d", d[0]);
    for (i = 1; i < 11; i++)
        printf(",%d", d[i]);
    printf("};");
    system("pause");
    return 0;
}