#include <stdio.h>
int main()
{
	int number = 125;
	int original = number;
	int rev = 0;
	while (number != 0)
	{
		int temp = number % 10;
		number = number / 10;
		rev = rev * 10 + temp;


	}

	if (rev == original)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

	return 0;


}