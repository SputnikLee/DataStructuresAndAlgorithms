#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 100

void InsertionSort(int *a, int left, int right) {
    int p, key, i;
    for (p = left + 1; p <= right; ++p) {
        key = a[p];
        i = p - 1;
        while (i >= 0 && a[i] > key) {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;
    }
}

void Swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void Median3(int *a, int left, int right) {
    int center = (left + right) / 2;
    int x1 = a[left];
    int x2 = a[center];
    int x3 = a[right];
    if (x1 > x2)
        Swap(&x1, &x2);
    if (x1 > x3)
        Swap(&x1, &x3);
    if (x2 > x3)
        Swap(&x2, &x3);

    if (a[center] == x2)
        Swap(&a[center], &a[left]);
    else if (a[right] == x2)
        Swap(&a[right], &a[left]);
}

int Partition(int *a, int left, int right) {
    Median3(a, left, right);
    int i = left, j = right - 2, pivot = a[right - 1];
    while (true) {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;
        if (i < j) Swap(&a[i], &a[j]);
        else break;
    }
    Swap(&a[i], &a[right - 1]);
    return i;
}

void QuickSort(int *a, int left, int right) {
    if (left >= right - 10) {
        InsertionSort(a, left, right);
        return;
    }
    int q = Partition(a, left, right);
    //q is the position of the pivot
    QuickSort(a, left, q - 1);
    QuickSort(a, q + 1, right);
}


bool Insert(int *a, int size, int x, int maxsize) {
    if (size > (maxsize - 1)) {
        return false;
    } else {
        int hole = size;
        while (hole > 0 && x > a[(hole - 1) / 2]) {
            a[hole] = a[(hole - 1) / 2];
            hole = (hole - 1) / 2;
        }
        a[hole] = x;
        return true;
    }
}

bool DeleteMin(int *a, int size) {
    if (size <= 0) {
        return false;
    } else {
        int max = a[0];
        int hole = 0;
        int x = a[size - 1];
        while ((2 * hole) + 1 <= (size - 2)) {
            int sid = (a[(2 * hole) + 1] > a[(2 * hole) + 2]) ? (2 * hole) + 1 : (2 * hole) + 2;
            if (x >= a[sid]) {
                break;
            }

            a[hole] = a[sid];
            hole = sid;
        }
        a[hole] = x;
        a[size - 1] = max;

    }
}

void HeapSort(int *a, int size) {
    for (int i = 0; i < size; i++) {
        Insert(a, i, a[i], size);
    }
    for (int j = size - 1; j > 0; j--) {
        DeleteMin(a, j + 1);
    }
}

int main() {
    int *a1, *a2, i;
    a1 = (int *) malloc(sizeof(int) * NUM);
    a2 = (int *) malloc(sizeof(int) * NUM);
    srand(time(NULL));
    clock_t start, end;


    for (i = 0; i < NUM; ++i) {
        a1[i] = rand() % (NUM * 10);
    }

    printf("QuickSort:\n");
    for (i = 0; i < NUM; ++i) {
        a2[i] = a1[i];
        printf("%d ", a1[i]);
        if ((i + 1) % 1000 == 0) printf("\n");
    }

    printf("\n");

    start = clock();
    QuickSort(a1, 0, NUM - 1);
    end = clock();
    for (i = 0; i < NUM; ++i) {
        printf("%d ", a1[i]);
        if ((i + 1) % 1000 == 0) printf("\n");
    }
    printf("\nQuickSort sort %d numbers with %g milliseconds\n\nHeapSort:\n", NUM, (double) (end - start));

    for (i = 0; i < NUM; ++i) {
        printf("%d ", a2[i]);
        if ((i + 1) % 1000 == 0) printf("\n");
    }
    printf("\n");

    start = clock();
    HeapSort(a2, NUM);
    end = clock();
    for (i = 0; i < NUM; ++i) {
        printf("%d ", a2[i]);
        if ((i + 1) % 1000 == 0) printf("\n");
    }
    printf("HeapSort sort %d numbers with %g milliseconds\n", NUM, (double) (end - start));

    return 0;
}