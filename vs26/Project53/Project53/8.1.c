#include<stdio.h>
int main()
{
	int *p1, *p2, *p3;
	int a,b,c,t;
	scanf_s("%d %d %d",&a,&b,&c);
	p1 = &a;
	p2 = &b;
	p3 = &c;
	
	if (a > b)
	{
		t = *p1;
		*p1 = *p2;
		*p2 = t;
	}
	if (a > c)
	{
		t = *p1;
		*p1 = *p3;
		*p3 = t;
	}
	if (b > c)
	{
		t = *p2;
		*p2 = *p3;
		*p3 = t;
	}
	
	printf("%d %d %d", *p1, *p2, *p3);







	return 0;
}