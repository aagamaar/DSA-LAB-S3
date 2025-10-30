#include <stdio.h>

void sortDesc( int A[], int n){
	int temp;
	for (int i=0; i<n-1; i++){
		for (int j=0; j<n-i-1; j++){
			if ( A[j] < A[j+1] ){
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}

int main(){
	int m, n;
	printf("Enter the number of events : ");
	scanf("%d", &n);

	int A[n];
	printf("Enter the activity point for each event one by one :");
	for (int i=0; i<n; i++){
		scanf("%d", &A[i]);
	}
	
	printf("Enter the maximum events you can participate : ");
	scanf("%d", &m);

	sortDesc(A, n);

	int maxPoints =0;
	
	for (int i=0; i<n && i<m; i++){
		maxPoints += A[i];
	}
	printf("The Maximised KTU points is %d.",maxPoints);
	return 0;


}