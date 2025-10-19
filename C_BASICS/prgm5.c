#include <stdio.h>
#include <stdlib.h>

void findSquare(int num){
    int square = num * num;
    printf("The sqaure of %d is %d\n",num, square);

}

int main() 
{
    findSquare(12);
    return 0;
}