#include<stdio.h>
int main()
{
	int i, j, arr[10][10];
	for (i = 0;i < 10;i++)
	{
		arr[i][i] = 1;
		arr[i][0] = 1;
	}
	for(i=2;i<10;i++)
		for (j = 1;j <= i - 1;j++)
		{
			arr[i][j] = arr[i - 1][j-1] + arr[i - 1][j];
		}
	for (i = 0;i < 10;i++)
	{
		for (j = 0;j <= i;j++)
		{
			printf("%6d", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");






	return 0;
}