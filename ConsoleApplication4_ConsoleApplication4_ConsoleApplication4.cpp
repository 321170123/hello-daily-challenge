#include <stdio.h>
int main()
{
	int i = 2;
	int p = 1;
	while (i <= 5)
	{
		
	    p = i * p;
		i++;
	}

	printf("%d", p);


	return 0;
}