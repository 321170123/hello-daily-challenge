#include <stdio.h>
int main()
{
	int arr[6];
	int temp, i, j, min;

	for (i = 1;i <= 5;i++)
	{
		printf("请输入：");
		scanf_s("%d", &arr[i]);
		printf("%d\n", arr[i]);
	}

	printf("数组为：");
	for (i = 1;i <= 5;i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");

	min = arr[1];
	for (i = 1;i <= 4;i++)
	{
		min = i;
		for (j = i + 1;j <= 5;j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
	if (min != i)
		{
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}

	

	for (i = 1;i <= 5;i++)
	{
		printf(" %d", arr[i]);
	}






	return 0;
}