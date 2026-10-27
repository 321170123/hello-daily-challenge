#define _CRT_SECURE_NO_WARNINGS // 告诉VS忽略fopen的安全警告
#include <stdio.h>
#include <stdlib.h>

// 打印函数声明
void printcharbindot(char* bindot, int len);

// 获取汉字的区位码
void get_quwei_code(const char* str, int* regcode, int* bitcode) {
    // 汉字"计"的 GBK 内码固定为 0xBCC6，减去区位码偏移量 0xA0A0
    int innercode = (unsigned char)str[0] * 256 + (unsigned char)str[1];
    int offset = innercode - 0xA0A0;
    *regcode = offset / 256; // 提取区码
    *bitcode = offset % 256; // 提取位码
}

int main(int argc, char* argv[]) {
    char* font_file_name = "chs16.fon"; // 点阵字库文件名
    char str[] = "计";                  // 要显示点阵信息的汉字

    // 使用标准的 fopen 打开文件
    FILE* fp = fopen(font_file_name, "rb");

    // 检查文件是否打开成功
    if (fp == NULL) {
        printf("[错误] 无法打开文件 %s！\n", font_file_name);
        printf("[提示] 请将 chs16.fon 文件复制到 x64/Debug 目录下。\n");
        return 1;
    }

    int font_width = 16;  // 字体宽度
    int font_height = 16; // 字体高度
    int string_size = font_width * font_height / 8; // 一个汉字占用的字节数

    char bindot[16 * 16 / 8] = { 0 }; // 存储点阵信息的数组
    int i = 0, j = 0;
    int regcode, bitcode;
    int offset = 0;

    // 获取当前汉字的区码和位码
    get_quwei_code(str, &regcode, &bitcode);
    printf("成功提取汉字 \"%s\"，区码: %d，位码: %d\n\n", str, regcode, bitcode);

    // 计算该字符点阵在字体文件中的偏移量
    offset = ((regcode - 1) * 94 + bitcode - 1) * string_size;

    // 在字库文件中读取其点阵数据
    fseek(fp, offset, SEEK_SET);
    fread(bindot, sizeof(bindot), 1, fp);

    // 打印点阵图
    printcharbindot(bindot, string_size);

    fclose(fp);
    return 0;
}

// 打印字符点阵信息的实现函数
void printcharbindot(char* bindot, int len) {
    int i, j;
    printf("开始绘制点阵图形：\n");
    for (i = 0; i < len; i++) {
        unsigned char byte = bindot[i];
        // 打印每一个 bit (从高位到低位)
        for (j = 7; j >= 0; j--) {
            if (byte & (1 << j)) {
                printf("■"); // 如果该位是1，打印方块
            }
            else {
                printf("  "); // 如果该位是0，打印两个空格
            }
        }
        // 每打印2行字节，换一行
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }
}