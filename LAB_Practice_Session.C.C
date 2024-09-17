#include <stdio.h>

int main(){

    // Task 1
    int age = 25;
    printf("my name is Pasindu and my age is %d \n", age);


    // Task 2

    printf("What are your 5 most favorite numbers (enter them without spaces)?");
    
    int User_Input = 0;
    scanf("%d", &User_Input);

    printf("Your Output is %d", User_Input);

    int After_increment_by_one = ++User_Input;
    printf("After increment by one %d", After_increment_by_one);

    int After_decrement_by_one = --User_Input;
    printf("After decrement by one %d", After_decrement_by_one);

    return 0;
    
}