#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int aa = a;
    int bb = b;
    for (int i = 1; i <= n; i++)
    {
        int a_spk, b_spk, a_tak, b_tak;
        cin >> a_spk >> a_tak >> b_spk >> b_tak;
        if (a_spk == b_spk)
            continue;
        if (a_spk + b_spk == a_tak)
            aa--;
        else if (a_spk + b_spk == b_tak)
            bb--;

        if (aa < 0 || bb < 0)
            break;
    }
    if (aa < 0)
        printf("A\n%d", b - bb);
    else if (bb < 0)
        printf("B\n%d", a - aa);
    system("pause");
    return 0;
}