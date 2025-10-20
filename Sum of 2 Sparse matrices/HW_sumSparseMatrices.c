#include <stdio.h>
#define MAX 100

struct Element{
    int row;
    int col;
    int value;
};

int main(){
    struct Element M1[MAX], M2[MAX], SUM[MAX];
    int i, j , k;
    int m, n , vA, vB;

    // Input for Matrix 1
    printf("Enter the no. of rows of the Matrix 1: ");
    scanf("%d", &M1[0].row);
    printf("Enter the no. of columns of the Matrix 1: ");
    scanf("%d", &M1[0].col);
    printf("Enter the no. of non-zero elements of Matrix 1 : ");
    scanf("%d", &M1[0].value);
    vA = M1[0].value;

    printf("Enter the non-zero elements one by one [row col value]: ");
    for (i=1; i<=vA; i++){
        scanf("%d %d %d", &M1[i].row, &M1[i].col, &M1[i].value);
    }
    // Input for Matrix 2
    printf("Enter the no. of rows, no. of columns and the no. of non-zero elements of Matrix 2: ");
    scanf("%d %d %d", &M2[0].row, &M2[0].col, &M2[0].value);
    vB = M2[0].value;

    printf("Enter the rows, colums and values of non-zero elements one by one: ");
    for (j=1; j<=vB; j++){
        scanf("%d %d %d", &M2[j].row, &M2[j].col, &M2[j].value);
    }
    // Check if addition is possible
    if (M1[0].row!=M2[0].row || M1[0].col!=M2[0].col){
        printf("Addition is not possible.");
    }
    i=j=k=1;
    SUM[0].row = M1[0].row;
    SUM[0].col = M1[0].col;
    SUM[0].value = 0;

    while (i<=vA && j<=vB){
        if (M1[i].row < M2[j].row || (M1[i].row==M2[j].row && M1[i].col<M2[j].col)){
            SUM[k] = M1[i];
            i++;
            k++;
        }else if (M2[j].row,M1[i].row || (M2[j].row == M1[i].row && M2[j].col < M1[i].col)){
            SUM[k] = M2[j];
            j++;
            k++;
        }else{
            int s = M1[i].value + M2[j].value;
            if (s!=0){
                SUM[k].row = M1[i].row;
                SUM[k].col = M1[i].col;
                SUM[k].value = s;
                k++;
            }
            i++;
            j++;
        }
    }
    while (i<=vA){
        SUM[k] = M1[i];
        i++;
        k++;
    }
    while (j<=vB){
        SUM[k] = M2[j];
        j++;
        k++;
    }
    SUM[0].value = k-1;

    printf("Resultant matrix in the form of row col and value: \n");
    for( i=0; i<k; i++){
        printf("%d %d %d\n",SUM[i].row, SUM[i].col, SUM[i].value);
    } 
    return 0;

}
