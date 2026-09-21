#include <stdio.h>

int main()
{
	//隐式转换：short类型的数据在参与计算时候，提升为int
	short s1 = 10;
	short s2 = 20;
	short result = (short)(s1 + s2);
	printf("%d", result);

	printf("%zu", sizeof((short)(s1 + s2)));





	return 0;

}