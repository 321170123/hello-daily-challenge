#include <stdio.h>
int main()
{
	int a, b, c, max;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a >= b)
	{
		if (a >= c)
		{
			max = a;
			printf("最大值为%d", a);
		}
		else
		{
			max = c;
			printf("最大值为%d", c);
		}

	}

	else
	{
		if (b >= c)
		{
			max = b;
			printf("最大值为%d", b);
		}
		else
		{
			max = c;
			printf("最大值为%d", c);
		}



	}


	return 0;
}