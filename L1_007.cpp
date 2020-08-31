#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (i)
            cout << " ";
        if (a[i] == '-')
            cout << "fu";
        else if (a[i] == '0')
            cout << "ling";
        else if (a[i] == '1')
            cout << "yi";
        else if (a[i] == '2')
            cout << "er";
        else if (a[i] == '3')
            cout << "san";
        else if (a[i] == '4')
            cout << "si";
        else if (a[i] == '5')
            cout << "wu";
        else if (a[i] == '6')
            cout << "liu";
        else if (a[i] == '7')
            cout << "qi";
        else if (a[i] == '8')
            cout << "ba";
        else if (a[i] == '9')
            cout << "jiu";
    }
    system("pause");
    return 0;
}