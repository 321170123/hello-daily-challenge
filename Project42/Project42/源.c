#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	int* p1 = &arr[0];

	//通过内存地址获取数据
	/*printf("%d", *p1);
	printf("%d", *(p1 + 1));*/

	int* p2 = &arr[5];

	printf("%d\n", p2 - p1);
	printf("%p", p1);



		








	return 0;
}