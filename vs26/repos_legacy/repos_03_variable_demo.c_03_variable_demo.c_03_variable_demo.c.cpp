//#include  <stdio.h>

//int main()
{
	//1.定义short int long longlong四种数据类型的变量
	//格式：数据类型 变量名=数据值;

	//short 短整型 Windows 2个字节 （-32768～32767）
	short a = 32768;
	printf("%d\r\n", a);

	//int 整数 Windows 四个字节 （-2147483648～2147483647）
	int b = 100;
	printf("%d\r\n", b);

	//long 长整数 Windows 四个字节 （-2147483648～2147483647）
	//
	long c = 1000L;
	printf("%ld\r\n", c);


	//longlong(C99)超长整型 Windows 8个字节（19位数）
	long long d = 10000LL;
	printf("%lld\r\n", d);


	//2.利用sizeof测量每一种数据类型占用多少字节？
	//short
	printf("%zu\r\n", sizeof(short));
	printf("%lld\r\n", sizeof(a));

	return 0;
//}