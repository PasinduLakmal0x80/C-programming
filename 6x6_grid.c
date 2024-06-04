#include <stdio.h>


int main(){

    int num = 6;

    for (int i = 0; i < num; i++) {
        
        for (int j = 0; j < 6; j++){
            printf("* ");
            
        }
        printf("\n");
        
    }
}

/*
output
* * * * * *
* * * * * * 
* * * * * * 
* * * * * * 
* * * * * * 
* * * * * * 
*/