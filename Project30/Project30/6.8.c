#include <stdio.h>

#define N 4

int main()
{
    int a[N][N];
    int i, j, k;
    int rowMax;
    int rowMaxCol;
    int found = 0;

    printf("请输入 %d*%d 的矩阵：\n", N, N);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf_s("%d", &a[i][j]);
        }
    }

    for (i = 0; i < N; i++)
    {
        rowMax = a[i][0];
        rowMaxCol = 0;

        for (j = 1; j < N; j++)
        {
            if (a[i][j] > rowMax)
            {
                rowMax = a[i][j];
                rowMaxCol = j;
            }
        }

        for (k = 0; k < N; k++)
        {
            if (a[k][rowMaxCol] < rowMax)
            {
                break;
            }
        }

        if (k == N)
        {
            printf("鞍点：a[%d][%d]=%d\n", i, rowMaxCol, rowMax);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("没有鞍点\n");
    }

    return 0;
}