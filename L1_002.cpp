// L1-002 打印沙漏 (20分)
// 本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印

// *****
//  ***
//   *
//  ***
// *****
// 所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；
// 符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。

// 给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。
#include <bits/stdc++.h>
using namespace std;
void printUp(int n, char c)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
            printf(" ");
        for (j = 1; j <= n - i + 1; j++)
            printf("%c", c);
        for (j = 1; j <= n - i; j++)
            printf("%c", c);
        putchar('\n');
    }
}
void printDown(int n, char c)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= i + 1; j++)
            printf("%c", c);
        for (j = 1; j <= i; j++)
            printf("%c", c);
        putchar('\n');
    }
}
int main()
{
    int n, i = 0;
    char c;
    cin >> n >> c;
    while (n >= pow(i, 2) * 2 - 1)
    {
        i++;
    }
    i--;
    printUp(i, c);
    printDown(i-1, c);
    cout << n - (pow(i++, 2) * 2 - 1) << endl;
    system("pause");
    return 0;
}