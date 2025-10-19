#include <stdio.h>
#include <stdlib.h>

int findCube(int num){
    int c = num*num*num;
    return c;
}

int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    printf("%d",findCube(n));
    return 0;
}