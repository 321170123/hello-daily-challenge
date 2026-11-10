//连接字符串
#include<stdio.h>

int main()
{
	void stract(char first[], char second[]);
	char first[99], second[99];

	printf("请输入第一个字符串：\n");
	
	scanf_s("%40s", first, 99);

	printf("请输入第二个字符串：\n");
	
	scanf_s("%40s", second, 99);

	stract(first, second);

	
	printf("连接后的字符串为：%s\n", first);

	return 0;
}

void stract(char first[], char second[])
{
	int i = 0;
	while (first[i] != '\0')
	{
		i++;
	}

	for (int j = 0; second[j] != '\0'; j++)
	{
		first[i] = second[j];
		i++;
	}

	first[i] = '\0';
}