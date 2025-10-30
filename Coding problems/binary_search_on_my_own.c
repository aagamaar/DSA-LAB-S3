#include <stdio.h>

int bin_search(int n, int x, int arr[]){
	int mid, start=0, end = n-1;
	while (start <= end){
		mid = (start + end) / 2;
		if (x == arr[mid]){
			return mid;
		}else if ( x < arr[mid] ){
			end = mid -1;
		}else if(x > arr[mid]){
			start =mid+1;
		}
	}
	return -1; 
}

int main(){
	int n, k, index;
	printf("Enter the number of elements in array: ");
	scanf("%d", &n);

	int a[n];
	printf("Enter the elements one by one : ");
	for( int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}

	printf("Enter the element you want to search : ");
	scanf("%d", &k);

	index = bin_search(n,k,a);
	
	if (index == -1){
		printf("Element %d is not found .", k);
	}else{
		printf("Element %d is found at index %d.", k, index);
	}
	return 0;
}