#include <stdio.h>
#include <stdlib.h>

int sum(){
    int result = 100 + 324;
    printf("This line will  be executed.\n");
    return result;
    printf("This line will never be executed.\n");
}

int main()
{
    int a = sum();
    printf("%d",a);
    return 0;
}