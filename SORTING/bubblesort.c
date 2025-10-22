#include<stdio.h>

// Function to print the array
void print_array(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

// Function to perform Bubble Sort
void bubblesort(int a[], int n) {
    // Outer loop for passes (n-1 passes are required)
    for(int i = 0; i < n - 1; i++) {
        printf("\nPass %d\t:\t", i + 1);
        
        // Inner loop for comparisons and swapping in each pass
        // The -i is for optimization: the last i elements are already in place
        for(int j = 0; j < n - 1 - i; j++) {
            // Check if the current element is greater than the next element
            if(a[j] > a[j+1]) {
                // Swap the elements
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
        
        // Print the array after each pass to show the step-by-step sorting
        print_array(a, n);
    }
}

// Main function
void main() {
    // Initialize the unsorted array
    int a[] = {5, 4, 2, 3, 1};
    
    // Calculate the size of the array
    int n = sizeof(a) / sizeof(int);
    
    printf("Unsorted array\t:\t");
    print_array(a, n);
    
    // Perform the bubble sort
    bubblesort(a, n);
    
    printf("\nSorted array\t:\t");
    print_array(a, n);
}