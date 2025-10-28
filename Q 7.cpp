#include <stdio.h>

int main() {
    int i, j, k;
    int rows = 5; 

   
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) 
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++) 
            printf("*");
        printf("\n");
    }

    printf("\n");

 
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++)  
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++)  
            printf("%d ", k);
        printf("\n");
    }

    printf("\n");

    
    for (i = 1; i <= rows; i++) {
        char ch = 'A';
        for (j = 1; j <= rows - i; j++)  
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++) {  
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}

