#include<stdio.h>
int fac(int n);
int main()
{
	int i,b;
	
	for (i = 1;i <= 5;i++)
	{
		printf("%d", fac(i));
	}
	return 0;
}

int fac(int n)
{
	static int f = 1;
	f = f * n;
	return(f);
}