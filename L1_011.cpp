#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    int flag[256]={0};	//定义ASCII码索引 
    getline(cin, a);//有空格
    getline(cin, b);   
    for(int i=0; i<b.length(); i++){
    	flag[b[i]] = 1;	//标记索引，在b里出现的字符标记为1 
	}
    for(int i=0; i<a.length(); i++){
    	if(!flag[a[i]])	//如果a中里的字符不包含b中字符的索引，则输出 
   	 		cout<<a[i];
	}
    return 0;
}
