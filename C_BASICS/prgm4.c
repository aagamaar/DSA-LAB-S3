#include <stdio.h>
#include <stdlib.h>

void sayHello(char name[]) //Void function does not return any value
{ 
    printf("Hello %s\n",name);
}

int main()
{
    sayHello("Joseph"); //Function call
    sayHello("Aagama");
    sayHello("Sanjana");
    return 0;
}