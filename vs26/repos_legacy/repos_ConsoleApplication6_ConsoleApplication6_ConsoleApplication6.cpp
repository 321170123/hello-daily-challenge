#include <stdio.h>
int main()
{
	/*
	   定义两个整数类型的变量num1 2 ，键盘录入数据分别为两个变量赋值。
	   求两个数的和并进行打印
	
	*/
	
	//1.定义两个变量
	int num1;
	int num2;
	
	
	//2.键盘录入多个数据
	
	printf("请输入两个整数：");
	scanf_s("%d %d" ,& num1, &num2);
	
	
	
	//3.相加并输出
	printf("%d\r\n", num1 + num2);



	return 0;





}