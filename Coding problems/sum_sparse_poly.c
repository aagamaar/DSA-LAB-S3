#include <stdio.h>
typedef struct {
    int coeff;
    int exp;
}Polynomial;

void input(int n, Polynomial p[], int s){
    printf("Enter the polynomial %d :\n",s);
    for (int i=-0; i<=n-1; i++){
        printf("Coefficient : ");
        scanf("%d", &p[i].coeff);
        printf("Exponent : ");
        scanf("%d", &p[i].exp);
    }
    printf("\n");
}

void display(int n, Polynomial p[], int s){
    printf("Polynomial %d : ",s);
    int i, flag = 0;
    for (i=0; i<n; i++){
        if ((p[i].coeff !=0) && (flag ==1)){
            printf(" +");
        }
        printf("%dx^%d", p[i].coeff, p[i].exp);
        flag =1;
    }
    if (flag ==0){
        printf("0");
    }
    printf("\n");
}

int add(int m, int n, Polynomial a[], Polynomial b[], Polynomial result[]){
    int index=0, flag, i=0, j = 0;
    for (i=0; i<m; i++){
        flag = 0;
        for (j=0; j<n; j++){
            if (a[i].exp == b[j].exp){
                result[index].exp = a[i].exp;
                result[index].coeff = a[i].coeff +b[j].coeff;
                index++;
                flag =1;
                break;
            }
        }
        if (flag == 0){
            result[index].exp =a[i].exp;
            result[index].coeff = a[i].coeff;
            index++;
        }
    }
    for (i=0; i<n; i++){
        flag=0;
        for (j=0; j<index; j++){
            if (b[i].exp == result[j].exp){
                flag =1;
            }
        }
        if (flag == 0){
            result[index].exp = b[i].exp;
            result[index].coeff = b[i].coeff;
            index++;
        }
    }
    return index;
}

int main(){

    int m,n, result_size;
    printf("Eneter the size of polynomial 1: ");
    scanf("%d",&m);

    printf("Enter the size of polynomial 2: ");
    scanf("%d",&n);
    
    Polynomial a[m], b[n], result[m+n];
    input(m,a,1);
    display(m,a,1);
    input(n,b,2);
    display(n,b,2);
    result_size = add(m,n,a,b,result);
    display(result_size, result, 3);
    return 0;
}
