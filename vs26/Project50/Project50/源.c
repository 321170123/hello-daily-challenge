#include<stdio.h>
float ave(int arr[][4]);
int max = 0, min = 0;
int main()
{
	int a[3][4];
	int i, j;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++)
		{
			scanf_s("%d",&a[i][j]);
		}
	}
	float avg = ave(a);
	printf("%f %d %d", avg, max, min);


	return 0;
}

float ave(int arr[][4])
{
	int i, j;
	int sum = arr[0][0];
	 max = arr[0][0];
	 min = arr[0][0];
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++)
		{
			sum += arr[i][j];
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
			else if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}
	}
	float avg = sum / 12.0;
	return avg;
}