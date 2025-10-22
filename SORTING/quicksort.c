#include <stdio.h>

void print(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void quicksort(int a[], int lb, int ub) {
    if (lb < ub) {
        int pivot = a[lb];
        
        int i = lb;  
        int j = ub;

        while (i < j) {
            while (a[i] <= pivot && i < ub) {
                i++;
            }
            
            while (a[j] > pivot) {
                j--;
            }
            
            if (i < j) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }


        int t = a[lb];
        a[lb] = a[j];
        a[j] = t;

        quicksort(a, lb, j - 1);
        
        quicksort(a, j + 1, ub);
    }
}

void main() {
    int a[] = {5, 3, 4, 2, 7, 9, 1, 6, 8};
    
    int n = sizeof(a) / sizeof(int);
    
    printf("Unsorted array\t:\t");
    print(a, n);
    
    quicksort(a, 0, n - 1);
    
    printf("Sorted array\t:\t");
    print(a, n);
}