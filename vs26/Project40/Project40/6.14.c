#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i = 0;
    int result;

    printf("请输入字符串 s1: ");
    gets(s1); 

    printf("请输入字符串 s2: ");
    gets(s2); 

    
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) {
        i++;
    }

    
    result = s1[i] - s2[i];

    printf("比较结果: %d\n", result);

    return 0;
}