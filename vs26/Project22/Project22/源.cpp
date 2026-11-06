#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// 冒泡排序
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// 快速排序辅助函数：交换
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 快速排序分区
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// 快速排序主函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// 验证排序是否正确
int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) return 0;
    }
    return 1;
}

int main() {
    int n = 100000;
    int* data = (int*)malloc(n * sizeof(int));
    int* dataCopy = (int*)malloc(n * sizeof(int));

    // 生成随机数
    srand((unsigned int)time(NULL));
    for (int i = 0; i < n; i++) {
        data[i] = rand() % 1000000;
    }

    // 复制数据用于另一个排序
    memcpy(dataCopy, data, n * sizeof(int));

    // 测试冒泡排序
    clock_t start = clock();
    bubbleSort(data, n);
    clock_t end = clock();
    double bubbleTime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("冒泡排序 (100000个元素): %.4f 秒\n", bubbleTime);
    printf("冒泡排序验证: %s\n", isSorted(data, n) ? "正确" : "错误");

    // 测试快速排序
    start = clock();
    quickSort(dataCopy, 0, n - 1);
    end = clock();
    double quickTime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("快速排序 (100000个元素): %.4f 秒\n", quickTime);
    printf("快速排序验证: %s\n", isSorted(dataCopy, n) ? "正确" : "错误");

    printf("\n快速排序比冒泡排序快约 %.1f 倍\n", bubbleTime / quickTime);

    free(data);
    free(dataCopy);
    return 0;
}