#include <stdio.h>

void print(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void insertionsort(int a[], int n) {
    for(int i = 1; i < n; i++) {
        int key = a[i];
        
        printf("\nPass %d\t key->%d\t:", i, key); 
        
        int j = i - 1; 
        
        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j]; 
            j = j - 1;       
        }
        
        a[j + 1] = key;
        
        print(a, n);
    }
}

void main() {
    int a[] = {5, 4, 2, 3, 1};
    
    int n = sizeof(a) / sizeof(int);
    
    printf("Unsorted array\t:\t");
    print(a, n);
    
    insertionsort(a, n);
    
    printf("\nSorted array\t:\t");
    print(a, n);
}