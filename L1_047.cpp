#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string name;
        int breath, throb;
        cin >> name >> breath >> throb;
        if(breath>20||breath<15||throb<50||throb>70)
            cout << name << endl;
    }
}