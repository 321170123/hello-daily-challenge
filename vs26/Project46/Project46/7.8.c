//加空格
#include <stdio.h>
#include <string.h>

void insert(char str[]);

int main() {
    char str[80];
    printf("请输入:");
    scanf_s("%s", str,10);
    insert(str);
    return 0;
}

void insert(char str[]) {
    int i;
    int len = strlen(str);

    for (i = len; i > 0; i--) 
    {
        str[2 * i - 2] = str[i - 1];
        if (i > 1)
        {
            str[2 * i - 3] = ' ';
        }
    }
    str[2 * len - 1] = '\0';

    printf("输出:\n%s\n", str);
}