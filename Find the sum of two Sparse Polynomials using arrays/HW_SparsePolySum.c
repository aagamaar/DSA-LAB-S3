#include <stdio.h>

void main(){
    int i,j,k,m,n;
    printf("Enter the no.of terms for each of the polynomials:\n");
    if (scanf("%d %d",&m,&n) !=2 || m<0 || n<0){
        printf("Invalid no. of terms\n");
        return;// FORGOT RETURN TYPE OF MAIN AS INT
    }
    int p1[m][2], p2[n][2], p3[m + n][2];

    printf("Enter each term of first polynomial (Eg. 5x^3 as 5 3): \n");
    for (i=0; i<m; i++){
        printf("P1 Term %d : ",i+1);
        scanf("%d %d",&p1[i][0], &p1[i][1]);
    }

    printf("Enter each term of second polynomial (Eg. 5x^3 as 5 3): \n");
    for (j=0; j<n; j++){
        printf("P2 Term %d : ", j+1);
        scanf("%d %d",&p2[j][0], &p2[j][1]);
    }

    i=0; j=0; k=0;

    while(i<m && j<n){
        if (p1[i][1] == p2[j][1]) {
            int sum_coeff = p1[i][0] + p2[j][0];
            if (sum_coeff !=0){
                p3[k][0] = sum_coeff;
                p3[k][1] = p1[i][1];
                k++;
            }
            i++;
            j++;
        } else if (p1[i][1] > p2[j][1]){
            p3[k][0] = p1[i][0];
            p3[k][1] = p1[i][1];
            i++;
            k++;
        } else{
            p3[k][0] = p2[j][0];
            p3[k][1] = p2[j][1];
            j++;
            k++;
        }
    }
    while(i<m){ // j=n
        p3[k][0] = p1[i][0];
        p3[k][1] = p1[i][1];
        i++;
        k++;
    }
    while (j<n){
        p3[k][0] = p2[j][0];
        p3[k][1] = p2[j][1];
        j++;
        k++;
    }

    printf("Resultant polynomial: \n");
    for (i=0; i<k; i++){
        if (p3[i][0] !=0){
            printf("%dx^%d ",p3[i][0], p3[i][1]);
            if (i<k-1){
                printf("+ ");
            }
        }

    }
    printf("\n");
}