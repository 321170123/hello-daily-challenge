#include <stdio.h>

int main()
{
	int i = 10;
	int j = 5;
	int k = i++ + ++i - --j - i--;
	//windows:前缀优先于后缀，前缀统一自增/自减，再把结果拿出来用
	// 后缀统一先用，等整个表达式变量用完了，再进行自增/减

	     //   11   +   11   -   4 - 11=7






}