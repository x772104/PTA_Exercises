#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin.ignore(100, '\n');
    for (int i = 0; i < n; i++)
    {
        int len = 0, flagA = 0, flagB = 0, count = 0;
        getline(cin, s);
        len = s.length();
        int j = s.find(",");
        if (s[j - 3] == 'o' && s[j - 2] == 'n' && s[j - 1] == 'g')
            flagA = 1;
        j = s.find(".");
        if (s[j - 3] == 'o' && s[j - 2] == 'n' && s[j - 1] == 'g')
            flagB = 1;
        int pos;
        if (flagA && flagB)
        {
            for (j = len - 1; j >= 0; j--)
            {                    //倒序遍历字符
                if (s[j] == ' ') //判断空格
                    count++;
                if (count == 3)
                {
                    pos = j; //将第三个空格的下标进行存储
                    break;
                }
            }
            for (j = 0; j <= pos; j++)
            {
                printf("%c", s[j]);
            }
            printf("qiao ben zhong.\n");
        }
        else
        {
            printf("Skipped\n");
        }
    }
    return 0;
}