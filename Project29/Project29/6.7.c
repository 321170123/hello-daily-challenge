#include <stdio.h>

int main()
{
    int n, i, hang, lie, t;
    int a[15][15] = { 0 };

    printf("ÇëÊäÈëÆæÊın£¨n<=15£©£º");
    scanf_s("%d", &n);

    hang = 0;
    lie = n / 2;
    a[hang][lie] = 1;

    for (i = 2; i <= n * n; i++)
    {
        t = hang;
        hang--;
        lie++;

        if (hang < 0) hang = n - 1;
        if (lie >= n) lie = 0;

        if (a[hang][lie] != 0)
        {
            hang = t + 1;
            lie--;
        }

        a[hang][lie] = i;
    }

    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }

    return 0;
}