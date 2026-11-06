#include <stdio.h>
#include <string.h> 

int main()
{
    char ch[100];
    char tran[100];
    int i;

    
    printf("请输入一行密码：\n");
    gets(ch);

    
    int len = strlen(ch);

    
    for (i = 0; i < len; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            tran[i] = 155 - ch[i]; 
        }
        else if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            tran[i] = 219 - ch[i]; 
        }
        else
        {
            tran[i] = ch[i]; 
        }
    }

    
    tran[i] = '\0';

    
    printf("\n密码为：%s\n", ch);
    printf("原文为：%s\n", tran);

    return 0;
}