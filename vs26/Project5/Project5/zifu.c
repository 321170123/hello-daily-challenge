#include <stdio.h>
int main()
{
	int countA = 0;
	for (int i = 2;i <= 100;i++)
	{
		int count = 0;
		for (int j = 2;j <= i;j++)
		{
			if (i % j == 0)
			{
				count++;
				break;

			}

		}
		if (count == 0)
		{
			countA++;
		}




    } 

	printf("%d", countA);

	return 0;
}