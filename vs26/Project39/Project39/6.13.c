#include <stdio.h>
int main()
{
	int i, j;
	char s1[100], s2[100];

	printf("请输入字符串1：");
	gets(s1);

	printf("请输入字符串2：");
	gets(s2);

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (s2[j] != '\0') 
	{
		s1[i] = s2[j]; 
		i++;
		j++;
	}

	
	s1[i] = '\0';

	printf("连接后的字符串 s1 为: %s\n", s1);


}