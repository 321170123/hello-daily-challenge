#include <stdio.h>
int main()
{
	int number = 28;
    int i = 1;
	while (i * i <= number)
	{

		i++;
	}

	printf("%d", i-1);
	return 0;
}