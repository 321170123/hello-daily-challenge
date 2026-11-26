#include<stdio.h>
void shuru(int*p,int n)
{
	int i;
	for (i = 0;i < n;i++)
	{
		scanf_s("%d",p+i );
	}
}
void shuchu(int* p,int n)
{
	int i;
	
	for (i = 0;i < n;i++)
	{
		printf("%d ",*(p+i));
	}
}
void process(int* p, int n)
{
	int* min = p;
	int* max = p;
	int temp;

	for (int i = 1;i < n;i++)
	{
		if (*(p + i) < *min)
		{
			min = p + i;
		}
		if (*(p + i) > *max)
		{
			max = p + i;
		}
	}

	temp = *p;
	*p = *min;
	*min = temp;


	if (max == p)
	{
		max = min;
	}
	temp = *(p + n - 1);
	*(p + n - 1) = *max;
	*max = temp;
}

int main()
{
	int a[10];
	int n = 10;
	shuru(a, n);
	process(a, n);
	shuchu(a, n);










	return 0;
}