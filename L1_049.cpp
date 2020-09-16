#include<bits/stdc++.h>
#define Max 101
using namespace std;
int sc[Max][Max]={0};
int flag[Max]={0};
int show(int n)
{
	cout<<"#"<<n+1;
	int i=0;
	while(sc[n][i]!=-1)
	{
		if(i%10==0)
			cout<<endl;
		cout<<sc[n][i];
		if(i%10!=9)	cout<<" ";
		i++;
	}
}
int main()
{
	int n,i,a;
	cin>>n;
	int total=0;
	int cnt=1;
	vector<int> num;
	for(i=0;i<n;i++)
	{
		cin>>a;
		sc[i][10*a]=-1;//记录每所学校最后一位的位置
		total+=a;//记录总共有多少支队伍
		num.push_back(a);
	}
	int tot_n=n;//当前的学校数 
	total*=10;//总人数 
	i=0;//行 
	int j=0;//列 
	while(total>0)
	{
		i%=n;
		for(;i<n;i++)
		{
			if(sc[i][j]==-1)//如果学校到了最后一个人
			{
				flag[i]=1;//记录该学校
				tot_n--;//当前学校数--
			}
			else if(!flag[i]){//如果学校还有人 则分配座位
				sc[i][j]=cnt++;
				total--;
			}
			if(tot_n==1)//剩最后一个学校结束循环
			break;
		}
		if(tot_n==1)
			break;
		j++;
	}
	int index=0;
	cnt++;
	for(i=0;i<n;i++)//找出最后一个学校
		if(flag[i]==0)
		{
			index=i;
			break;
		}
	for(i=0;i<num[index]*10;i++)
	{
		if(sc[index][i]==-1)
			break;
		else if(sc[index][i]==0)//单独给最后一个学校最后的学生分配座位
		{
			sc[index][i]=cnt;
			cnt+=2;
		}
	}
	for(i=0;i<n;i++)
		show(i),
		cout<<endl;
}