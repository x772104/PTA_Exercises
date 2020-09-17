#include<bits/stdc++.h>
using namespace std;
struct p{
	string name;
	int num;
};
int main()
{
	int n,sum=0,index,min=100;
	scanf("%d",&n);
	struct p ps[n],t;
	for(int i=0;i<n;i++)
	{
		cin>>t.name;
		cin>>t.num;
		sum+=t.num;
		ps[i].name=t.name;
		ps[i].num=t.num;
	}
	sum=(sum/n)/2;
	for(int i=0;i<n;i++)
	{
		if(abs(ps[i].num-sum)<min) {
		min=abs(ps[i].num-sum);
		index=i;
	    }
	}
	printf("%d ",sum);
	cout<<ps[index].name;
	return 0;
}