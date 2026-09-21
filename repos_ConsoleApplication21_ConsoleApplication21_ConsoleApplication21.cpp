#include <stdio.h>
int main()
{
	int num1;
	int num2;
	printf("请录入两个整数：\n");
	scanf_s("%d %d", &num1, &num2);

	int min = num1 < num2 ? num1 : num2;
	int max = num1 > num2 ? num1 : num2;

	int count = 0;

	for (int i = min;i <= max;i++)
	{
		if (i % 6 == 0 && i % 8 == 0)
		{
			count++;
		}
	}

	printf("% d" ,count);

	return 0;
}