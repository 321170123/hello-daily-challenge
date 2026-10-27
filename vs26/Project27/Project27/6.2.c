#include <stdio.h>

int main()
{
    int i,j,min,t, arr[11];

    for (i = 1; i <= 10; i++)
    {
        printf("请输入第 %d 个整数：", i);
        scanf_s("%d", &arr[i]);
    }

    printf("\n你输入的整数是：\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 1;i <= 9;i++)
    {
        min = i;
        for (j = i + 1;j <= 10;j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
                t = arr[i];
                arr[i] = arr[min];
                arr[min] = t;
            }
        }
    }


    printf("从小到大排列为：");
    for (i = 1;i <= 10;i++)
    {
        printf("%5d", arr[i]);
    }


    return 0;
}