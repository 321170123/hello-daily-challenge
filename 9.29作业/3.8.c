#include <stdio.h>
int main()
{
	char c1,c2;
	printf("输入两个字符c1 c2:");
	c1=getchar();
	c2=getchar();
	printf("%c %c\n",c1,c2);
	putchar(c1);
	putchar(c2);
	
	
	return 0;
}


//第八题思考 
//1 二者皆可以 
//2 用pritnf（“%d，%d”，c1，c2）；
//3 在0到127之间可以 
