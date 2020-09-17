/*L1-063 吃鱼还是吃肉 (10 分)*/
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int i=0;
    int sex,sheng,zhong;
    for(i;i<N;i++)
    {
        cin>>sex>>sheng>>zhong;
        if(sex)
        {
            if(sheng<130) cout<<"duo chi yu!"<<" ";
            else if (sheng>130) cout<<"ni li hai!"<<" ";
            else cout<<"wan mei!"<<" ";
            if(zhong<27) cout<<"duo chi rou!"<<endl;
            else if (zhong>27) cout<<"shao chi rou!"<<endl;
            else cout<<"wan mei!"<<endl;
        }
        else
        {
            if(sheng<129) cout<<"duo chi yu!"<<" ";
            else if (sheng>129) cout<<"ni li hai!"<<" ";
            else cout<<"wan mei!"<<" ";
            if(zhong<25) cout<<"duo chi rou!"<<endl;
            else if (zhong>25) cout<<"shao chi rou!"<<endl;
            else cout<<"wan mei!"<<endl;
        }
        
    }
}