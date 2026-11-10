//将一个字符串的元音字母复制到另一个字符串
#include<stdio.h>
int main()
{
	void copy(char first[], char second[]);
	char first[100];
	char second[100];
	printf("请输入\n");
	scanf_s("%s", first,99);
	copy(first, second);
	printf("%s", second);










	return 0;
}

void copy(char first[], char second[])
{
	int i=0, j = 0;
	while (first[i] != '\0')
	{
		if (first[i] == 'a' || first[i] == 'e' || first[i] == 'i' || first[i] == 'o' || first[i] == 'u' || first[i] == 'A' || first[i] == 'E' || first[i] == 'I' || first[i] == 'O' || first[i] == 'U')
		{
			second[j] = first[i];   // 是元音，复制到新数组
			j++;
		}
		i++;

	}
	second[j] = '\0';
}