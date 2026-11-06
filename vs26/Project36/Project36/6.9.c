#include<stdio.h>
int main()
{
	int arr[16];
	int i;

	printf("请按从大到小的顺序输入15个数：\n");
	for (i = 1;i<=15;i++)
	{
		scanf_s(" %d", &arr[i]);
		printf(" %d", arr[i]);
	}

	int high=15, low=0, mid;
	int num;
	printf("\n请输入一个数：");
	scanf_s("%d", &num);

	int answer = 0;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (num == arr[mid])
		{
			answer = 1;
			break;
		}
		else if (num > arr[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}

	}

	if (answer == 1)
	{
		printf("该数是数组的第%d个数", mid);
	}

	else
	{
		printf("无此数");

	}

	return 0;
}