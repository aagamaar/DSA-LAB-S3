#include <stdio.h>
#include <stdlib.h>

struct Details{
    char name[10];
    int age ;
    double height;
    char sex;
};

int main(){
    struct Details d1[5];

    for (int i=0; i<5; i++){
        printf("Enter your name:\n");
        scanf("%s",d1[i].name);
        printf("Enter your age:\n");
        scanf("%d",&d1[i].age);
        printf("Enter your height:\n");
        scanf("%lf",&d1[i].height);
        printf("Enter your sex (M/F):\n");
        scanf(" %c",&d1[i].sex);
    }

    for (int i=0; i<5; i++){
        printf("The details you entered are:\n");
        printf("Name: %s\n",d1[i].name);   
        printf("Age: %d\n",d1[i].age);
        printf("Height: %.2lf\n",d1[i].height);
        printf("Sex: %c\n",d1[i].sex);
    }
    
    return 0;
}