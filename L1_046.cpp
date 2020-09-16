/*L1-046 整除光棍 (20 分)*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int i = 1, flag = 0;
    int count = 1, yu = 1;//模拟竖式除法的过程 yu是余数
    while (yu % x != 0)
    {
        //cout<<"xunhuan"<<endl;
        if (flag)
        {
            cout << yu / x;
            yu = (yu % x) * 10 + 1;
            count++;
        }
        else
        {
            if (yu / x != 0)
            {
                cout << yu / x;
                flag = 1;
            }
            yu = (yu % x) * 10 + 1;//不断向后借位
            count++;
        }
    }
    cout << yu / x;
    cout << " " << count;
    //system("pause");
}