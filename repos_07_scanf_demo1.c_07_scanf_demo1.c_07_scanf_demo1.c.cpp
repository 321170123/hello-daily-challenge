#include <stdio.h>

int main()
{
	//键盘录入的基本使用

	//1.定义一个变量用来接受数据
	int a;

	//2.键盘录入
	printf("请输入一个整数");
	scanf("%d", &a);

	//3.打印一下
	printf("%d", a);

	return 0;
}