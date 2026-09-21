#include <stdio.h>
int main()
{
	int a;
	printf("电话中的语音提示：\n");
	scanf_s("%d", & a);

	switch (a)
	{
	case 1:
		printf("机票查询\n");
		break;
    case 2:
		printf("机票预订");
		break;
	case 3:
		printf("机票改签");
		break;

	case 4:
		printf("退出服务");
		break;

	default:
		printf("退出服务");
		break;
	}


	return 0;

}