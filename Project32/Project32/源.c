#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// 冒泡排序 O(n^2)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = t;
            }
        }
    }
}

// 快速排序分区：Lomuto scheme，选 arr[high] 为 pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
        }
    }
    int t = arr[i + 1]; arr[i + 1] = arr[high]; arr[high] = t;
    return i + 1;
}

// 快速排序主函数 O(n log n) 平均
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// 验证排序是否正确
int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (arr[i] > arr[i + 1]) return 0;
    return 1;
}

int main() {
    const int N = 100000;
    int* data = (int*)malloc(N * sizeof(int));
    int* copy = (int*)malloc(N * sizeof(int));

    srand((unsigned int)time(NULL));
    for (int i = 0; i < N; i++) data[i] = rand() % 1000000;
    memcpy(copy, data, N * sizeof(int));

    // 冒泡排序计时
    clock_t t0 = clock();
    bubbleSort(data, N);
    double bt = (double)(clock() - t0) / CLOCKS_PER_SEC;

    // 快速排序计时
    t0 = clock();
    quickSort(copy, 0, N - 1);
    double qt = (double)(clock() - t0) / CLOCKS_PER_SEC;

    printf("冒泡排序 (%d个元素): %.4f 秒\n", N, bt);
    printf("快速排序 (%d个元素): %.4f 秒\n", N, qt);
    printf("冒泡排序验证: %s\n", isSorted(data, N) ? "正确" : "错误");
    printf("快速排序验证: %s\n", isSorted(copy, N) ? "正确" : "错误");
    printf("\n快速排序比冒泡排序快约 %.1f 倍\n", bt / qt);

    free(data); free(copy);
    return 0;
}