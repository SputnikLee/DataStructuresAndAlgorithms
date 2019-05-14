#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 100000


void InsertionSort(int *A, int n) {
    int p, key, i;
    for (p = 1; p < n; ++p) {
        key = A[p];
        i = p - 1;
        while (i >= 0 && A[i] > key) {
            A[i + 1] = A[i];
            i -= 1;
        }
        A[i + 1] = key;
    }
}

void Merge(int *A, int left, int center, int right) {
    int i1, i2, i, j;
    int B[NUM];
    i1 = left;
    i2 = center + 1;
    i = 0;
    while (i1 <= center && i2 <= right) {
        if (A[i1] < A[i2])
            B[i++] = A[i1++];
        else
            B[i++] = A[i2++];
    }
    while (i1 <= center) {
        B[i++] = A[i1++];
    }
    while (i2 <= right) {
        B[i++] = A[i2++];
    }
    for (j = 0, i = left; i <= right; ++i, ++j) {
        A[i] = B[j];
    }
}

void MergeSort(int *A, int left, int right) {
    if (left >= right) return;
    else {
        int center = (left + right) / 2;
        MergeSort(A, left, center);
        MergeSort(A, center + 1, right);
        Merge(A, left, center, right);
    }
}

int main() {
    int *A1, *A2, i;
    A1 = (int *) malloc(sizeof(int) * NUM);
    A2 = (int *) malloc(sizeof(int) * NUM);
    srand(time(NULL));
    clock_t start,end;


    for (i = 0; i < NUM; ++i) {
        A1[i] = rand() % (NUM * 10);
    }

    printf("InsertionSort:\n");
    for (i = 0; i < NUM; ++i) {
        A2[i] = A1[i];
        printf("%d ", A1[i]);
        if((i+1) % 1000 == 0) printf("\n");
    }

    printf("\n");

    start = clock();
    InsertionSort(A1, NUM);
    end = clock();
    for (i = 0; i < NUM; ++i) {
        printf("%d ", A1[i]);
        if((i+1) % 1000 == 0) printf("\n");
    }
    printf("\nInsertionSort sort %d numbers with %g milliseconds\n\nMergeSort:\n",NUM,(double)(end - start));

    for (i = 0; i < NUM; ++i) {
        printf("%d ", A2[i]);
        if((i+1) % 1000 == 0) printf("\n");
    }
    printf("\n");

    start = clock();
    MergeSort(A2, 0, NUM);
    end = clock();
    for (i = 0; i < NUM; ++i) {
        printf("%d ", A2[i]);
        if((i+1) % 1000 == 0) printf("\n");
    }
    printf("MergeSort sort %d numbers with %g milliseconds\n",NUM,(double)(end - start));

    return 0;
}
