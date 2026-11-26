#include <stdio.h>

void move(int* p, int n, int m)
{
    int temp[20];
    int i;

    m = m % n;
    if (m == 0) return;

    for (i = 0; i < m; i++)
        temp[i] = *(p + n - m + i);

    for (i = n - m - 1; i >= 0; i--)
        *(p + i + m) = *(p + i);

    for (i = 0; i < m; i++)
        *(p + i) = temp[i];
}

int main(void)
{
    int a[100], n, m, i;

    printf("n = ");
    scanf_s("%d", &n);
    printf("input %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf_s("%d", &a[i]);

    printf("m = ");
    scanf_s("%d", &m);

    move(a, n, m);

    for (i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");

    return 0;
}