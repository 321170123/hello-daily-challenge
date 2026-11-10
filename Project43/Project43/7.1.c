//写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果
#include<stdio.h>
int main()
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);

	int max(int,int);
	int min(int, int);

	printf("最大公约数是：%d\n", max(num1, num2));
	printf("最小公倍数是：%d", min(num1, num2));








	


	return 0;
}

int max(int a, int b)
{
	int temp;
	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int min(int a, int b)
{
	return (a * b) / max(a, b);
}
