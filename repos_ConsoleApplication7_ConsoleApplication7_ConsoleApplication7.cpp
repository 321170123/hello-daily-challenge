#include <stdio.h>

int main()
{
    double length;
    double width;
    double height;

    printf("请输入三个小数，分别表示长宽高");
    scanf_s("%lf %lf %lf", &length, &width, &height);

    double areaA = length * width;
    double areaB = height * width;
    double areaC = length * height;

    printf("A面面积为：%.2lf\n", areaA);
    printf("B面面积为：%.2lf\n", areaB);
    printf("C面面积为：%.2lf\n", areaC);

    double bulk = length * width * height;
    printf("长方体体积为：%.2lf\n", bulk);


    return 0;



}