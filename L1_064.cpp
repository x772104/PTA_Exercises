/*L1-064 估值一亿的AI核心代码 (20 分)*/
#include<bits/stdc++.h>
using namespace std;
void BianXiaoXie(string &str)
{
    int i = 0;
    for (i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z' && str[i] != 'I')
            str[i] = tolower(str[i]);
    }
}
void ShanKongGe(string &str)
{
    int count = 0, i = 0;
    for (i = 0; i < str.length(); i++)
    {
        //cout<<1<<endl;
        if (str[i] == ' ')
        {
            int j = i;
            while (str[j] == ' ')
            {
                count++;
                //cout<<"while"<<endl;
                j++;
            }
            str.erase(i, count);
            count = 0;
            if (i != 0 && ((str[i] >= 'a' && str[i] <= 'z') || str[i] == 'I' || (str[i] >= '0' && str[i] <= '9')))
                str.insert(i, " ");
            //i++;
        }
    }
    if (str[str.length() - 1] == ' ')
        str.erase(str.length() - 1, 1);
    /*if (str[0] == ' ')
        str.erase(0, 1);*/
}
void CanYou(string &str)
{
    int i = 0, flag1 = 1, flag2 = 1;
    while (flag1 && flag2)
    {
        i = str.find("can you ");
        if (i != -1)
            str.replace(i, 8, "I can ");
        else
            flag1 = 0;
        i = str.find("could you ");
        if (i != -1)
            str.replace(i, 10, "I could ");
        else
            flag2 = 0;
    }
}
void I(string &str)
{
    int i = 0;
    i=str.find(" I");
    while (i != -1)
    {
        if (i+2!=str.length()&&(str[i + 2] > 'z' || str[i + 2] < 'a'))
            str.replace(i, 2, " you");
        i = str.find(" I", i + 1);
    }
}
void Me(string &str)
{
    int i = 0;
    i = str.find(" me");
    while (i != -1)
    {
        
        if ( i+3!=str.length()&&(str[i + 3] > 'z' || str[i + 3] < 'a'))
            str.replace(i, 3, " you");
        i = str.find(" me", i + 1);
    }
}
void WenHao(string &str)
{
    int i = 0;
    for (i; i < str.length(); i++)
        if (str[i] == '?')
            str[i] = '!';
}
/*void ChaKong(string &str)
{
    int i = 0;
    for (i; i < str.length(); i++)
    {
        //cout<<"1"<<endl;
        char c = str[i];
        if (c == ',' || c == '.' || c == '!' || c == '?'||c=='@'||c=='#'||c=='$'||c=='%'||c=='^'||c=='&'||c=='*'||c=='('||c==')'||c=='+'||c=='-'||c=='/')
            str.insert(i, " ");
        i++;
    }
}*/
int main()
{
    int N;
    cin >> N;
    int i;
    getchar();
    string c;
    for (i = 0; i < N; i++)
    {
        getline(cin, c);
        cout << c << endl
             << "AI: ";
        BianXiaoXie(c);
        ShanKongGe(c);
        I(c);
        Me(c);
        CanYou(c);
        WenHao(c);
        cout << c << endl;
    }
    system("pause");
}