#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    string str;
    cin >> N;
    cin.ignore(100, '\n');
    getline(cin, str);
    int l = str.length();
    int j, i = (N - (l % N)) % N;
    for (; i > 0; i--)//补空格
        str[l++] = ' ';
    str[l] = '\0';
    for (j = 0; j < N; j++)
    {
        for (i = l - 1; i >= 0; i--)
        {
            if (i % N == j)
                cout << str[i];
        }
        cout << endl;
    }
    //system("pause");
}