#include<stdio.h>

int main(){
    int i, j;
    
    for(i = 1; i <= 5; i++){

        
        for(j = 5; j > i; j--){
            printf("  ");   
        }
        for(j = 1; j <= i; j++){
            printf("* ");
        }

        printf("|  ");  

        
        for(j = 5; j > i; j--){
            printf("  ");
        }
        for(j = 1; j <= i; j++){
            printf("%d ", j);
		}      

        printf("|  ");  

        
        char ch = 'A';
        for(j = 5; j > i; j--){
            printf("  ");
        }
        for(j = 1; j <= i; j++){
            printf("%c ", ch++);
        }

        printf("\n");
    }
    return 0;
}

	

