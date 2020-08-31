//L1-005 考试座位号 (15分)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string student[N + 1];
    while (N--)
    {
        string str, kao;
        int shi;
        cin >> str;
        cin >> shi >> kao;
        student[shi] = str + ' ' + kao;
    }
    int M;
    cin >> M;
    while (M--)
    {
        int a;
        cin >> a;
        cout << student[a] << endl;
    }
    system("pause");
    return 0;
}