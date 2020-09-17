/*L1-060 心理阴影面积 (5 分)*/
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<5000-(x)*(y)/2-(100-y)*(100-x)/2-(100-x)*y;
    system("pause");
}