#include <stdio.h>

int main()
{
	int number;
	printf("请输入一个两位数\n");
	scanf_s("%d", &number);
	printf("%d\n",number);


	//该数字不包含7（个位十位都不能有7）
	int ge = number % 10;
	int shi = number / 10 % 10;

	//判断
	printf("%d\n", ge != 7 && shi != 7);






	return 0;
}