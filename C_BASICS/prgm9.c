#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main(){
    char str1[10] = "Aagama";
    printf("Length of %s is %d\n",str1,strlen(str1));
    printf("Lowercase form of %s is %s\n",str1,strlwr(str1));
    printf("Uppercase form of %s is %s\n",str1,strupr(str1));
    return 0;
}
