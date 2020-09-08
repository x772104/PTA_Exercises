#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    int i = 0;
    do
    {
        i++;
        cin >> c;
        if (i == 2)
            a = c;
        if (i == 14)
            b = c;
    } while (c[0] != '.');
    if (i > 14)
        cout << a << " and " << b << " are inviting you to dinner...";
    else if (i > 2)
        cout << a << " is the only one for you...";
    else
        cout << "Momo... No one is for you ...";
    system("pause");
    return 0;
}