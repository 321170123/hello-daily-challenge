#include <stdio.h>
int main()
{
	int a, b, c, max;
	printf("请输入 a,b,c:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	max = a;
	if (max <= b)
		max = b;


	if (max < c)
		max = c;

	printf("最大的数是%d", max);
	return 0;
}