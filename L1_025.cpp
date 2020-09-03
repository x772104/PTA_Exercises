#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1;
    getchar();
    getline(cin, s2);
    int i, j, n, m;
    // if (stoi(s1) < 1 || stoi(s1) > 1000)
    //     s1 = "?";
    // else
    for (i = 0; i < s1.length(); i++)
    {
        if (!isdigit(s1[i]) || stoi(s1) < 1 || stoi(s1) > 1000)
        {
            s1 = "?";
            break;
        }
    }
    // if (stoi(s2) < 1 || stoi(s2) > 1000)
    //     s2 = "?";
    // else
    for (i = 0; i < s2.length(); i++)
    {
        if (!isdigit(s2[i]) || stoi(s2) < 1 || stoi(s2) > 1000)
        {
            s2 = "?";
            break;
        }
    }
    if (s1 == "?" || s2 == "?")
        cout << s1 << " + " << s2 << " = ?";
    else
        cout << s1 << " + " << s2 << " = " << stoi(s1) + stoi(s2);
    return 0;
}