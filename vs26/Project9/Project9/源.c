#include <stdio.h>

int sum(int a, int b)
{
	int sum = a + b;
	return sum;

}




int main()
{
	int s1 = sum(93, 10);
	int s2 = sum(88, 11);

	if (s1 > s2)
	{
		printf("s1À÷º¦");

	}

	else if (s1 < s2)
	{
		printf("s2À÷º¦");

	}
	else
	{
		printf("Ò»ÑùÀ÷º¦");
	}
	return 0;
}