#include <stdio.h>
int main()
{
    double I,B;
    int C;
	printf("请输入利润：");
	scanf_s("%lf",&I);

    if(I<=100000)
	{
		C=0;
	}  
    if(100000<I&&I<=200000)
	{
		C=1;
	}  
    if(200000<I&&I<=400000)
	{
		C=2;
	}   
    if(400000<I&&I<=600000)
	{
		C=3;
	}   
	if(600000<I&&I<=1000000)
	{
		C=4;
	}   
	if(1000000<I)
	{
		C=5;
	}   
    
	switch (C) {
        case 0:
            B=I*0.1;
            break;
        case 1:
            B=10000+(I-100000)*0.075;
            break;
        case 2:
		    B=17500+(I-200000)*0.05;
		    break;
        case 3:
            B=27500+(I-400000)*0.03;
            break;
        case 4:
        	B=33500+(I-600000)*0.015;
            break;
        case 5:
            B=39500+(I-1000000)*0.01;
            break;
        
    }

    printf("应发的奖金总数为: %.2f\n", B);

    return 0;
}
