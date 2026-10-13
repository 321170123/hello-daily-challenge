#include <stdio.h>
int main()
{
	int num, c, ge, shi, bai, qian, wan;
	printf("输入一个位数不超过5的数字：");
	scanf_s("%d", &num);
	if (num < 9)
		c = 1;
	printf("它是的位数为：%d", &c);
	if (9 < num < 99)
		c = 2;
	printf("它是的位数为：%d", &c);
	if (99 < num < 999)
		c = 3;
	printf("它是的位数为：%d", &c);
	if (999 < num < 9999)
		c = 4;
	printf("它是的位数为：%d", &c);
	if (9999 < num < 99999)
		c = 5;
	printf("它是的位数为：%d", &c);








	return 0;
}