#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    double c;
    cin >> a >> b;
    if (b == 0)
        printf("%d/%d=Error", a, b);
    else
    {
        c = 1.0 * a / b;
        if (b < 0)
            printf("%d/(%d)=%.2f", a, b, c);
        else
            printf("%d/%d=%.2f", a, b, c);
    }
}