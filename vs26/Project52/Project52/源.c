#include<stdio.h>
int fac(int n);
int main()
{
	int b,n;
	scanf_s("%d", &n);
	b=fac(n);
	printf("%d", b);






	return 0;
}

int fac(int n)
{
	static int f = 1;
	f = f * n;
	return f;
}