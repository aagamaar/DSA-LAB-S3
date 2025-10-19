#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World\n");
    return 0;// The program will terminate here, so the next line is unreachable.
    printf("This line will never be executed.\n");
}