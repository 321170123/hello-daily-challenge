#include <stdio.h>
int main()
{
	int num, c, ge, shi, bai, qian, wan;
	printf("输入一个位数不超过5的数字：");
	scanf("%d", &num);
	if (num <= 9)
		{
		c = 1;
	printf("它是的位数为：%d", c);}
	else if (9 <num && num <= 99)
		{
		c = 2;
	printf("它是的位数为：%d", c);}
	else if (99 <num && num <= 999)
		{
		c = 3;
	printf("它是的位数为：%d", c);}
	else if (999 < num && num <= 9999)
		{c = 4;
	printf("它是的位数为：%d", c);}
	else if (9999 <num && num <= 99999)
		{c = 5;
	printf("它是的位数为：%d", c);}

    wan=num/10000;
    qian=num/1000%10;
    bai=num/100%10;
    shi=num/10%10;
    ge=num%10;


    printf("\n从小到大每一位：\n");
    switch (c) 
	{
        case 5: printf("%d %d %d %d %d\n", wan, qian, bai, shi, ge); break;
        case 4: printf("%d %d %d %d\n", qian, bai, shi, ge); break;
        case 3: printf("%d %d %d\n", bai, shi, ge); break;
        case 2: printf("%d %d\n", shi, ge); break;
        case 1: printf("%d\n", ge); break;
    }

printf("逆序为:");
switch(c)
{
	case 5: printf("%d %d %d %d %d\n",ge,shi,bai,qian,wan);break;
	case 4: printf("%d %d %d %d \n",ge,shi,bai,qian);break;
	case 3: printf("%d %d %d \n",ge,shi,bai);break;
	case 2: printf("%d %d \n",ge,shi);break;
	case 1: printf("%d \n",ge);break;
	
	
}




















	return 0;
}

// test edit 192242
