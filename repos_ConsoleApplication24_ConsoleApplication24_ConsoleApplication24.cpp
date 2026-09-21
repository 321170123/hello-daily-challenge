#include <stdio.h>
int main()
{
	int height = 8844430;
	double paper = 0.1;


	int count = 0;
	while (paper <= height)
	{
		paper = paper * 2;
		count++;

	}
	printf("%d", count);
	return 0;
}