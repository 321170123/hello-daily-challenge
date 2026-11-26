#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

void find(char str[], char longest[])
{
    int i;
    int currentlen = 0;
    int maxlen = 0;

    int currentstart = 0;
    int startidx = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (currentlen == 0)
            {
                currentstart = i;
            }
            currentlen++;
        }
        else {
            if (currentlen > maxlen)
            {
                maxlen = currentlen;
                startidx = currentstart;
            }
            currentlen = 0;
        }
    }

    if (currentlen > maxlen)
    {
        maxlen = currentlen;
        startidx = currentstart;
    }

    // 【第二步】把 strncpy_s 删掉，用下面这两行标准的 strncpy 替代
    strncpy(longest, str + startidx, maxlen); // 只复制 maxlen 个字符
    longest[maxlen] = '\0'; // 手动在末尾加上结束符，非常安全且高效
}

int main() {
    char str[1000], longest[1000];

    printf("请输入一行字符：\n");

    fgets(str, sizeof(str), stdin);


    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }

    find(str, longest);

    printf("\n最长的单词是：%s\n", longest);

    return 0;
}