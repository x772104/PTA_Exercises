/*L1-043 阅览室 (20 分)*/
#include <bits/stdc++.h>
using namespace std;
int compute_time(int h, int m)
{
    return h * 60 + m;
}
int main()
{
    int book[1001];
    memset(&book[1], -1, sizeof(int) * 1000);
    int ID, hh, mm, N;
    double AllTime = 0;
    int count = 0;
    char K, c;
    cin >> N;
    while (book[0] < N)
    {
        cin >> ID >> K >> hh >> c >> mm;
        if (ID == 0)
        {
            //cout<<"book[0] = "<<book[0]<<endl;
            if (count)
            {
                AllTime = AllTime * 1.0 / count;
                cout << count << " ";
                printf("%.f\n", AllTime);
            }
            else
                cout << "0 0" << endl;
            memset(&book[1], -1, sizeof(int) * 1000);
            count = 0;
            AllTime = 0;
            book[0]++;
        }
        else if (K == 'S' /*&& book[ID] == -1*/)
            book[ID] = compute_time(hh, mm);
        else if (K == 'E' && book[ID] >= 0)
        {
            AllTime += compute_time(hh, mm) - book[ID];
            count++;
            book[ID] = -1;
        }
    }
    system("pause");
}