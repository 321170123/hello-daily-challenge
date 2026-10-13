#include <stdio.h>
#define PI 3.1416
int main()
{
	
	double r,h,l,s1,s2,v1,v2;
	printf("请输入圆半径r：\n"); 
	printf("请输入圆柱高h：\n"); 
	scanf_s("%lf %lf",&r,&h); 
	
	
	
	l=2*PI*r;
	s1=PI*r*r;
	s2=4*PI*r*r;
	v1=4.0/3.0*PI*r*r*r;
	v2=s1*h;
	
	printf("圆周长为：%.2lf\n",l);
	printf("圆面积为：%.2lf\n",s1);
	printf("圆球表面积为：%.2lf\n",s2);
	printf("圆球体积为：%.2lf\n",v1);
	printf("圆柱体积为：%.2lf\n",v2);
	
	
	return 0;
}
