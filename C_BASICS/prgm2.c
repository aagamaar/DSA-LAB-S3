#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Printing numbers from 1 to 5 using individual printf statements
    printf("Printing numbers from 1 to 5 using individual printf statements:\n");
    printf("%d\n",1);
    printf("%d\n",2);
    printf("%d\n",3);
    printf("%d\n",4);
    printf("%d\n",5);

    printf("************************************************\n");
    
    //FOR loop to print numbers from 1 to 5
    printf("Printing numbers from 1 to 5 using FOR loop:\n");

    for (int n = 1; n <= 5; n++){
        printf("%d\n",n);
    }

    printf("************************************************\n");

    //WHILE loop to print numbers from 1 to 5
    printf("Printing numbers from 1 to 5 using WHILE loop:\n");

    int  a =1;
    while (a<6){
        printf("%d\n",a);
        a++;
    }

    printf("************************************************\n");
    //DO WHILE loop to print numbers from 1 to 5
    printf("Printing numbers from 1 to 5 using DO WHILE loop:\n");
    int c =1;
    do{
        printf("%d\n",c);
        c++;
    }while (c<6);
    
    return 0;

}