#include <stdio.h>

int main()
{
	printf("请输入一个三位数：\n");
	int num;
	scanf_s("%d",&num );
	
	int ge = num % 10;
	int shi = num / 10 % 10;
	int bai = num / 100 % 10 ;
	
	printf("个位是：%d\n", ge);
	printf("十位是：%d\n", shi);
	printf("百位是：%d\n", bai);


	return 0;
}