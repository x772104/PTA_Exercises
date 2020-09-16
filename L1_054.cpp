#include<bits/stdc++.h>
using namespace std;
char c[101][101],d[101][101];
int main(void)
{
	char a;
	int n,flag=0;
	scanf("%c %d",&a,&n);
	getchar();
	for(int i=0;i<n;i++)
	{
	   for(int j=0;j<n;j++)
	   {
	   	    scanf("%c",&c[i][j]);  
	   }
	    getchar();
	}
	
	for(int i=n-1,p=0;i>=0;p++,i--)
	{
		for(int j=n-1,q=0;j>=0;q++,j--)
		{
			d[p][q]=c[i][j];	
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(c[i][j]!=d[i][j])
			{
				flag=1;
				break;
			}
		}
	}
	if(!flag)
        cout<<"bu yong dao le"<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(d[i][j]!=' ')
				printf("%c",a);
				else 
				cout<<" ";
			}
			cout<<endl;
		}
	return 0;
}