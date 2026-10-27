#include<stdio.h>

int main()
{
	int arr[101], i, j;
	for (i = 1;i <= 100;i++)
	{
		arr[i] = i;
	}
	arr[1] = 0;

	for(i=2;i<=100;i++)
		if (arr[i] != 0)
		{
			for (j = i + 1;j <= 100;j++)
			{
				if (arr[j] != 0 && arr[j] % arr[i] == 0)
				{
					arr[j] = 0;
				}
			}
		}

	for (i = 1;i <= 100;i++)
	{
		if (arr[i] != 0)
			printf("%5d", arr[i]);
	}



	


	return 0;
}