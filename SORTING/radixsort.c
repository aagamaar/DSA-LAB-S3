#include <stdio.h>

void print(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int getMax(int a[], int n) {
    int max = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

void sort(int a[], int n, int placeval) {
       int bucket[10][n + 1]; 
    int index[10] = {0};   

    for(int i = 0; i < 10; i++) {
        index[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        int element = a[i];
        int digit = (element / placeval) % 10;
        
        bucket[digit][index[digit]] = element;
        index[digit]++;
    }

    int array_index = 0; 
    for(int i = 0; i < 10; i++) { 
        if(index[i] > 0) {
            for(int j = 0; j < index[i]; j++) {
                a[array_index++] = bucket[i][j];
            }
        }
    }
}

void radixsort(int a[], int n) {
    int max = getMax(a, n); 
    
    int pass = 1;
    for(int placeval = 1; max / placeval > 0; placeval *= 10) {
        printf("\nPass %d\t:", pass++);
        sort(a, n, placeval);
        print(a, n);           
    }
}

void main() {
    int a[] = {523, 32, 445, 2025, 715, 149, 341, 260, 28};
    
    int n = sizeof(a) / sizeof(int);
    
    printf("Unsorted array\t:\t");
    print(a, n);
    
    radixsort(a, n);
    
    printf("\nSorted array\t:\t");
    print(a, n);
}