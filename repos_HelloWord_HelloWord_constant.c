//整型常量%d   实型常量 %f   字符常量%c    字符串常量%s
  #include <stdio.h>

//int main()
{
	//输出常量
	//1.输出整数
	printf("%d", 18);
    
	//2.输出小数
	printf("%f", 1.93);
	
	//3.输出字符
	//printf("%c", 'A');

	//4.输出字符串
    //第二种方式：
	printf("Hello World!");
	//第二种方式：为什么中文没办法正常输出，出现乱码呢
	printf("我的名字为：%s","银璇很帅");

    return 0;
}