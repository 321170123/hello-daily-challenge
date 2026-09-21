#include <stdio.h>

int main()
{
	int a = 10;
	int b = 30;
	int c = 20;

	int d = a > b ? a : b;
	int f = d > c ? d : c;
	
	printf("%d", d);



	return 0;
}