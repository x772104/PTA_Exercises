/*L1-044 稳赢 (15 分)*/
#include<bits/stdc++.h>
using namespace std;
//typedef enum{Chuizi,Jiandao,Bu} Bi;
int main()
{
    int K;
    cin >> K;
    K++;
    string str = "0";
    int flag = 0;
    while (1)
    {
        flag++;
        cin >> str;
        if(str=="End") break;
        if (flag % K == 0)
        {
            cout << str << endl;
            // continue;
        }
        else
        {
            if (str == "ChuiZi")
                cout << "Bu" << endl;
            else if (str == "JianDao")
                cout << "ChuiZi" << endl;
            else if (str == "Bu")
                cout << "JianDao" << endl;
        }
    }
    //system("pause");
}