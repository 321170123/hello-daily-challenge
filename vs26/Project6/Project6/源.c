#include <stdio.h>
int main()
{
	long long res = 0;
	for (int i = 1;i <= 10;i++)
	{
		long long pow = 1;
		for (int j = 1;j <= i;j++)
		{
			pow = i * pow;


		}

		res = pow + res;

	}

	printf("×ÜºÍÎª£º%lld", res);


	return 0;
}