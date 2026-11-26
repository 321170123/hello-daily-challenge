#include <stdio.h>
#include <string.h>

int letter, digit, space, others;

int main()
{
    void count(char s[]);
    char text[80];

    printf("input string:\n");
    gets(text);

    letter = 0;
    digit = 0;
    space = 0;
    others = 0;

    count(text);

    printf("\nletter:%d\n", letter);
    printf("digit:%d\n", digit);
    printf("space:%d\n", space);
    printf("others:%d\n", others);

    return 0;
}

void count(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            letter++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            digit++;
        }
        else if (s[i] == ' ')
        {
            space++;
        }
        else
        {
            others++;
        }
    }
}