#include <stdio.h>

// Function to print the array
void print(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

// Function to perform Insertion Sort
void insertionsort(int a[], int n) {
    // Start from the second element (index 1), as the first element (index 0) is the initial sorted subarray
    for(int i = 1; i < n; i++) {
        // 'key' is the element to be inserted into the sorted subarray
        int key = a[i];
        
        // Print the pass number and the key element being inserted
        printf("\nPass %d\t key->%d\t:", i, key); 
        
        // 'j' is the index of the last element in the sorted subarray
        int j = i - 1; 
        
        // Move elements of the sorted subarray that are greater than the key to one position ahead
        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j]; // Shift element to the right
            j = j - 1;       // Move to the previous element in the sorted subarray
        }
        
        // Insert the key element into its correct position
        a[j + 1] = key;
        
        // Print the array after the current pass
        print(a, n);
    }
}

void main() {
    // Initialize the unsorted array
    int a[] = {5, 4, 2, 3, 1};
    
    // Calculate the size of the array
    int n = sizeof(a) / sizeof(int);
    
    printf("Unsorted array\t:\t");
    print(a, n);
    
    // Perform the insertion sort
    insertionsort(a, n);
    
    printf("\nSorted array\t:\t");
    print(a, n);
}