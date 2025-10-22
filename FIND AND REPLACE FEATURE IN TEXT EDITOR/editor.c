#include<stdio.h>
#include<string.h>

void findandreplace(char list[][50], char find[], char replace[], int noofwords) {
    int f = 0; 

    for(int i = 0; i < noofwords; i++) {
        
        if(strcmp(list[i], find) == 0) {
           
            strcpy(list[i], replace);
            f = 1; 
        }
    }

    if(f == 0) {
        printf("\n\"%s\" not found in the list\n", find);
    }
}

void main() {
    int noofwords;
    
    printf("Enter the total number of words you want to add : ");
    scanf("%d", &noofwords);
    
    char list[noofwords][50]; 
    
    printf("Enter the words one by one : ");
    
    for(int i = 0; i < noofwords; i++) {
        scanf("%s", list[i]);
    }
    
    char find[50], replace[50];
    
    printf("Which word do you want to find ? ");
    scanf("%s", find);
    
    printf("Which word do you want to replace with ? ");
    scanf("%s", replace);
    
    findandreplace(list, find, replace, noofwords);
    
    printf("\nAfter replacement, the new list of words are :\n");
    
    for(int i = 0; i < noofwords; i++) {
        printf("%s\n", list[i]);
    }
}

/* OUTPUT:
Enter the total number of words you want to add : 5
Enter the words one by one : 
cute
girl
boy
friend
book
Which word do you want to find ? boy
Which word do you want to replace with ? baby

After replacement, the new list of words are :
cute
girl
baby
friend
book
*/