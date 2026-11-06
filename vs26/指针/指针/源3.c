#include<stdio.h>
int get(int num1, int num2, int* res)
{
	if (num2 == 0)
	{
		return 1;
	}
	res = num1 % num2;
	return 0;
}
int main()
{

	int a = 10;
	int b = 3;
	int res = 0;

	int flag = get(a, b, &res);
	if (!flag)
	{
		printf("%d", res);
	}





	return 0;
}