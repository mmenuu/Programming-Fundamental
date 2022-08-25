#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d", &n);
    m=n;
    for (int i = 1; i <= n; i++)
    {   
        for (int s = 0; s < m; s++, m--)
        {
            printf(" ");   
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}