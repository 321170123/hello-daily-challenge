#include<stdio.h>
#include<time.h>

int main()
{
	clock_t start, end;
	start = clock();
	long long a = 1, b = 1;
	int i;
	printf("F(1)=%lld\n", a);
	printf("F(2)=%lld\n", b);
	for (i = 3;i <= 50;i++)
	{
		long long c = a + b;
		printf("F(%d)=%lld\n", i, c);
		a = b;
		b = c;
	}

	end = clock();
	double time = (double)(end - start) /
		CLOCKS_PER_SEC;
	printf("总运行时间: %f秒\n", time);
	return 0;

}
