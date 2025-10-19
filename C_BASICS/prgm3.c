#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int number[5] = {1,2,3,4,5};
    printf("%d\n",number[0]);
    printf("%d\n",number[1]);
    printf("%d\n",number[2]);
    printf("%d\n",number[3]);
    printf("%d\n",number[4]);
    return 0;*/

    int num_arr[5];
    printf("Enter 5 numbers to store in the array:\n");
    for (int i=0; i<5; i++){
        scanf("%d",&num_arr[i]);
    }

    printf("The numbers stored in the array are:\n");
    for (int i=0; i<=4; i++){
        printf("%d\t",num_arr[i]);
    }

    printf("\nThe total sum of elements in the array is:\n");
    int sum = 0;
    for (int i = 0; i<=4; i++){
        sum+= num_arr[i];
    }
    printf("%d",sum);

    return 0;
}