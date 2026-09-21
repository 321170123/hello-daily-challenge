#include <stdio.h>

int main()
{
	//1.定义char数据类型的变量
	//char 字符 取值范围 ASCII码表中所有的内容 Windows1个字节
	char c1 = 'a';
	printf("%c\r\n", c1);
	
	
	//这里的1是字符内存是1，数字1内存占四个字节
	char c2 = '1';
	printf("%c\r\n", c2);

	char c3 = 'A';
	printf("%c\r\n", c3);

    //2.利用sizeof测量占用多少字节？
	printf("%zu", sizeof(char));
	
	
	
	
	
	
	
	return 0;
}