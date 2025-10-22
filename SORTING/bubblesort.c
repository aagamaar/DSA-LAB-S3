#include<stdio.h>

void print_array(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void bubblesort(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        printf("\nPass %d\t:\t", i + 1);
        
         for(int j = 0; j < n - 1 - i; j++) {
            if(a[j] > a[j+1]) {
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
        
        print_array(a, n);
    }
}

void main() {
    int a[] = {5, 4, 2, 3, 1};
    
    int n = sizeof(a) / sizeof(int);
    
    printf("Unsorted array\t:\t");
    print_array(a, n);
    
    bubblesort(a, n);
    
    printf("\nSorted array\t:\t");
    print_array(a, n);
}