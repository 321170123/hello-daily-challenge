#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int number = rand() % 100 + 1;

	int guess;

	while (1)
	{
		printf("请输入猜数：\n");
		scanf_s("%d", &guess);
		if (guess < number)
		{
			printf("小了\n");
		}
		else if (guess > number)
		{
			printf("大了\n");
		}
		else
		{
			printf("中了\n");
			break;
		}

	}







	return 0;
}