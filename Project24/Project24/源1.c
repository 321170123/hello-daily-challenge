#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(int);

	srand(time(NULL));
	for (int i = 0;i < len;i++)
	{
		int index = rand() % len;
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	for (int i = 0;i < len;i++)
	{
		printf("%d", arr[i]);
	}













	return 0;
}