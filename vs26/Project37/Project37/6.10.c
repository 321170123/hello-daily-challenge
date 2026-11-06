#include <stdio.h>

int main()
{
    char text[3][100];
    int i, j; 

    printf("请输入3行文字：\n");
    for (i = 0; i < 3; i++)
    {
        gets(text[i]);
    }

    int big = 0;
    int small = 0;
    int digital = 0;
    int blank = 0;
    int other = 0;

    for (i = 0; i < 3; i++)
    {
        j = 0;
        while (text[i][j] != '\0')
        {
            if (text[i][j] >= 'A' && text[i][j] <= 'Z')
            {
                big++;
            }
            else if (text[i][j] >= 'a' && text[i][j] <= 'z')
            {
                small++;
            }
            else if (text[i][j] >= '0' && text[i][j] <= '9')
            {
                digital++;
            }
            else if (text[i][j] == ' ')
            {
                blank++;
            }
            else
            {
                other++;  
            }

            j++;
        }
    }

    printf("大写字母: %d\n", big);
    printf("小写字母: %d\n", small);
    printf("数字:     %d\n", digital);
    printf("空格:     %d\n", blank);
    printf("其他字符: %d\n", other);

    return 0;
}