#include<stdio.h>
#include<string.h>

void swap(char *x,char *y)
{
	char t[100];
	strcpy_s(t,100,x);
	strcpy_s(x, 100, y);
	strcpy_s(y, 100, t);


}
int main()
{
	char a[100], b[100], c[100], t[100];
	char* p1, * p2, * p3;
	scanf_s("%s %s %s", a,100, b,100, c,100);
	p1 = a;
	p2 = b;
	p3 = c;
	if (strcmp(p1, p2) > 0)swap(p1, p2);
	if (strcmp(p1, p3) > 0)swap(p1, p3);
	if (strcmp(p2, p3) > 0)swap(p2, p3);

	printf("%s %s %s", p1, p2, p3);









	return 0;
}