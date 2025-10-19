#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    double b;
    char name[15];
    char d;
    
    printf("Enter the integer value a :\n");
    scanf("%d",&a);
    printf("Enter the double value b :\n");
    scanf("%lf",&b);
    printf("Enter your name : \n");
    scanf("%s",name);
    printf("Enter the character 'd' :\n");
    scanf(" %c",&d);
    printf("*******************************************\n");
    printf("%d\n",a);
    printf("%f\n",b);
    printf("%c\n",d);
    printf("%s",name);
    return 0;// The program will terminate here, so the next line is unreachable.
    printf("This line will never be executed.\n");
    /*This is a 
    multiline comment.*/
}