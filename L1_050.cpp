/*L1-050 倒数第N个字符串 (15 分)*/
#include <iostream>
using namespace std;
int main()
{
    char d[26] = {'a', 'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b'};
    //倒数第二十六个字母是a
    int L, N;
    cin >> L >> N;
    int c[L];
    int i = 0;
    for (; i < L; i++)
    {
        c[i] = N % 26;//26进制
        N = N / 26;
        if (c[i])
            N++;
    }
    for (i = i - 1; i >= 0; i--)
        cout << d[c[i]];
    system("pause");
}