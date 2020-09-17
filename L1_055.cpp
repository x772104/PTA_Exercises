#include<bits/stdc++.h>
using namespace std;

int main()
{
  int pa,pb,a=0,b=0,c;
  cin >> pa >> pb;
  for(int i=1;i<=3;i++)
  {
      cin >> c;
      if (c == 1)
          b++;
      else
          a++;
  }
  if(pa>pb)
  {
    if(a>0) printf("The winner is a: %d + %d",pa,a);
    else printf("The winner is b: %d + %d",pb,b);
  }
  else if(pb>pa)
  {
    if(b>0) printf("The winner is b: %d + %d",pb,b);
    else printf("The winner is a: %d + %d",pa,a);
  }
  return 0;
}