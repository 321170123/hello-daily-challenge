#include <stdio.h>
int main()
{
	int year = 2000;
	while (year <= 2500)
	{
		if (year % 4 != 0)
			printf("%d 非闰年",year);
		else
		{
			if (year % 100 != 0)
			{
				printf("%d 闰年",year);
			}
			else
			{
				if (year % 400 != 0)
				{
					printf("%d 非闰年",year);
				}
				else
				{
					printf("%d 闰年",year);
				}
				
			}

		}


		year = year + 1;
	}


	return 0;
}