#include <bits/stdc++.h>
using namespace std;
struct student
{
    int sex;
    string name;
};
int main()
{
    int n, i,j = 0;
    cin >> n;
    struct student s[n];
    for (i = 0; i < n; i++)
    {
        cin >> s[i].sex >> s[i].name;
    }
    i = i - 1;
    for (i; i >= 0;)
    {
        if (s[j].sex != s[i].sex && s[j].sex < 2 && s[i].sex < 2)
        {
            cout<<s[j].name<<" "<<s[i].name<<endl;
            s[j].sex = s[i].sex = 3;
            j++;
            i = n - 1;
        }
        else
            i--;
    }
}