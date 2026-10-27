#include <stdio.h>
#include <time.h>

// 递归方法
long long fib_recursive(int n) {
    if (n <= 2) return 1;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

// 非递归方法 (循环/迭代)
long long fib_iterative(int n) {
    if (n <= 2) return 1;
    long long a = 1, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n = 50;
    clock_t start, end;
    double cpu_time_used;

    // --- 测试非递归方法 ---
    printf("=== 非递归方法 (Iterative) ===\n");
    start = clock();
    for (int i = 1; i <= n; i++) {
        printf("F(%d) = %lld\n", i, fib_iterative(i));
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("非递归运行时间: %.6f 秒\n\n", cpu_time_used);

    // --- 测试递归方法 ---
    printf("=== 递归方法 (Recursive) ===\n");
    printf("(注意：为演示时间差异，正在计算F(50)的运行时间，请耐心等待...)\n");

    start = clock();
    // 纯递归跑F(50)会极慢，这里仅计算最后一个F(50)来展示耗时
    long long result = fib_recursive(n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("递归计算 F(50)=%lld 的运行时间: %.6f 秒\n", result, cpu_time_used);

    return 0;
}