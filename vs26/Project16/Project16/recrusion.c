#include <stdio.h>
#include <time.h>

// 递归求斐波那契
long long fib1(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib1(n - 1) + fib1(n - 2);
}

// 循环求斐波那契
long long fib2(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    long long a = 1;
    long long b = 1;
    long long c = 0;
    int i;
    for (i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n = 50;
    clock_t t1, t2;
    double time;
    int i;

    // 先用循环算一遍
    printf("用循环方法计算F(1)到F(50)：\n");
    t1 = clock();
    for (i = 1; i <= n; i++) {
        printf("F(%d) = %lld\n", i, fib2(i));
    }
    t2 = clock();
    time = (double)(t2 - t1) / CLOCKS_PER_SEC;
    printf("循环方法运行时间：%f 秒\n\n", time);

    // 再用递归算F(50)
    printf("用递归方法计算F(50)：\n");
    t1 = clock();
    long long result = fib1(n);
    t2 = clock();
    time = (double)(t2 - t1) / CLOCKS_PER_SEC;
    printf("F(50) = %lld\n", result);
    printf("递归方法运行时间：%f 秒\n", time);

    return 0;
}