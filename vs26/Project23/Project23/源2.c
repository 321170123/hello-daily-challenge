#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(int);

	srand(time(NULL));
	int sum = 0;
	for (int i = 0;i < len;i++)
	{
		int num = rand() % 100 + 1;;
		arr[i] = num;
	}
	for (int i = 0;i < len;i++)
	{
		sum = sum + arr[i];
	}


	printf("%d", sum); 





	return 0;
}