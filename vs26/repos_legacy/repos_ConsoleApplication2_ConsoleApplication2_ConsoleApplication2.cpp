#include <stdio.h>

int main()
{
	//1.定义float double longdouble 数据类型的变量
	//float 单精度小数(精确度小数点后6位）Windows占4个字节（38位）
	float a = 3.14F;
	printf("%.2f\r\n", a);

	//double 双精度小数 （精确度小数点后15位） Windows占8个字节（308位）
	double b = 1.78;
	printf("%.2lf\r\n",b);

	//long double 高精度小数（精确度小数点后18～19位）Windows占8个字节 其他（12，16）
	long double c = 3.1415926L;
	printf("%.3f\r\n", c);


	//2.利用sizeof测量每一种数据类型占用多少字节？
	printf("%zu\r\n", sizeof(float));
	printf("%zu\r\n", sizeof(a));

	//3.小数的数据类型无法跟unsigned组合使用
	unsigned  double d = 1.79;
	printf("%.2lf\r\n",d);


	return 0;
}