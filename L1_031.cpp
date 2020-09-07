#include <math.h>
#include <stdio.h>
int main()
{
    int n, h, w, wr;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &h, &w);
        wr = (h - 100) * 0.9 * 2;
        if (abs(w - wr) < wr * 0.1)
            printf("You are wan mei!\n");
        else if (w > wr)
            printf("You are tai pang le!\n");
        else
            printf("You are tai shou le!\n");
    }
    return 0;
}