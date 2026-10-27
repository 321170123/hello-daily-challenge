#include "stdio.h"
#include "string.h"
#include "stdlib.h"

const int reglen = 94;       //每区(行)有 94 位(列)
const int font_width = 16;   // 单字点阵宽度(列数)
const int font_height = 16;  // 单字点阵高度(行数)
const int dotsize = 16 * 16 / 8;   //一个汉字点阵所占的字节数
const int subcode = 0xa0;    //内码与区、位码的差值
const int charcount = 3;     //姓名字数

char* font_file_name = "chs16.fon"; // 点阵字库文件名
char str[] = "许戈洋";   //要显示点阵信息的汉字(本人姓名)
char bindot[3][16 * 16 / 8] = { 0 };   //存储三个汉字点阵信息的数组

void printbindot(void);
int main(int argc, char* argv[])
{
    FILE* fp = fopen(font_file_name, "rb");
    int i = 0;
    int offset = 0;
    unsigned char regcode;  //区码
    unsigned char bitcode;  //位码

    if (fp == NULL)
    {
        printf("无法打开字库文件 %s\n", font_file_name);
        system("pause");
        return 1;
    }

    // 依次取出每个汉字的机内码，减 0xa0 得到区码、位码，
    // 再计算该汉字点阵信息在字库文件中的偏移量并读出
    for (i = 0; i < charcount; ++i)
    {
        regcode = (unsigned char)str[2 * i] - subcode;
        bitcode = (unsigned char)str[2 * i + 1] - subcode;

        offset = ((regcode - 1) * reglen + bitcode - 1) * dotsize;

        // 从字库文件中读取点阵信息
        fseek(fp, offset, SEEK_SET);
        fread(bindot[i], sizeof(bindot[i]), 1, fp);
    }
    fclose(fp);

    //输出三个汉字的点阵信息
    printbindot();

    system("pause");
    return 0;
}

//按行扫描: 每行依次输出三个汉字对应的点阵位信息, 实现横向并排显示
void printbindot(void)
{
    int row = 0;      //当前行号
    int col = 0;      //当前列号
    int c = 0;        //当前汉字序号
    int bitvalue = 0; //当前位的值

    for (row = 0; row < font_height; ++row)
    {
        for (c = 0; c < charcount; ++c)
        {
            for (col = 0; col < font_width; ++col)
            {
                //每行 16 位 = 2 个字节, 从高位到低位取每位的值
                bitvalue = (bindot[c][row * 2 + col / 8] >> (7 - col % 8)) & 0x1;
                printf("%c", bitvalue + '0');
            }
            printf("    ");   //字与字之间的间隔
        }
        printf("\n");
    }
}
