#include <stdio.h>

int main()
{
	/*
	   需求2：键盘录入自己的年龄，并按照以下格式打印出来
	   格式：我的年龄为：xx岁
	*/
	//1.定义变量
	int age;

	//2.键盘录入
	printf("请输入您的年龄：");
	scanf("%d", &age);

	//3.输出打印
	printf("我的年龄为：%d岁", age);



	return 0;
}