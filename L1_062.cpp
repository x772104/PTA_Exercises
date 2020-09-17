/*L1-062 幸运彩票 (15 分)*/
#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int i=0;
    int shu[6];
    int sum1=0,sum2=0;
    for(i;i<N;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%1d",&shu[j]);
            if(j<3) sum1+=shu[j];
            else sum2+=shu[j];
        }
        if(sum1==sum2) cout<<"You are lucky!"<<endl;
        else cout<<"Wish you good luck."<<endl;
        sum1=sum2=0;
    }
}