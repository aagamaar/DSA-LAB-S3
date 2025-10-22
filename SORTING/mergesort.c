#include <stdio.h>

void print(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void merge(int a[], int lb, int mid, int ub) {

    int i = lb, j = mid + 1, k = lb;

    int m[100]; 
    
    while (i <= mid && j <= ub) {
        if (a[i] < a[j]) {
            m[k] = a[i];
            i++;
        } else {
            m[k] = a[j];
            j++;
        }
        k++;
    }

    while (i <= mid) {
        m[k] = a[i];
        i++;
        k++;
    }

    while (j <= ub) {
        m[k] = a[j];
        j++;
        k++;
    }

    for (k = lb; k <= ub; k++) {
        a[k] = m[k];
    }
}

void mergesort(int a[], int lb, int ub) {
    if (lb < ub) {
        int mid = lb + (ub - lb) / 2; 

        mergesort(a, lb, mid);
        
        mergesort(a, mid + 1, ub);
        
        merge(a, lb, mid, ub);
    }
}

void main() {
    int a[] = {26, 5, 77, 1, 61, 11, 59, 15, 48, 19};
    
    int n = sizeof(a) / sizeof(int);
    
    printf("Unsorted array\t:\t");
    print(a, n);
    
    mergesort(a, 0, n - 1);
    
    printf("\nSorted array\t:\t");
    print(a, n);
}