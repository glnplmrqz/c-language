/*
*/
#include<stdio.h>
#include<stdlib.h>

    int main()
    {
        // else-if Statement
        // if(condition 1){
            // block of code to be executed if condition 1 is true
        // }else if(condition 2){
            // block of code to be executed if the condition 1 is false and condition 2 is true
        // }else{
            // block of code to be executed if the condition 1 is false and condition 2 is false

        int number;
        printf("\n [========== POSITIVE, NEGATIVE, ZERO ==========] \n");
        printf(" Enter Number: ");
        scanf("%d", &number);

        if(number > 0){
            printf("\n <<< This number is Positive >>> \n");
        }else if(number < 0){
            printf("\n <<< This number is Negative >>> \n");
        }else{
            printf("\n <<< This number is Zero >>> \n");
        }
        return 0;
    }