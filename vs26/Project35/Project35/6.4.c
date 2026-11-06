#include<stdio.h>
int main()
{
	int arr[12];
	int i = 1;

	printf("请输入10个数字：");
	for (i = 1;i <= 10;i++)
	{
		scanf_s(" %d", &arr[i]);
		
	}
	printf("\n数组为：");
	for (i = 1;i <= 10;i++)
	{
		printf(" %d", arr[i]);
	}

	int num;
	
	printf("请输入要插入的数：");
	scanf_s("%d", &num);

	for (i = 10;1<=i;i--)
	{
		if (num < arr[i])
		{
			arr[i+1] = arr[i];
		}
		else
		{
			break;
		}
	}

	arr[i + 1] = num;


	printf("\n数组为：");
	for (i = 1;i <= 11;i++)
	{
		printf(" %d", arr[i]);
	}







	return 0;
}