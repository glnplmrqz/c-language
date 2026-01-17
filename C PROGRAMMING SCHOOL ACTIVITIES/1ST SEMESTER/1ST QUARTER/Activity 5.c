/*
*/
#include<stdio.h>
#include<stdlib.h>

    int main()
    {
        int num1, num2, num3;

        printf("\n Enter First Number: ");
        scanf("%d", &num1);
        printf(" Enter Second Number: ");
        scanf("%d", &num2);
        printf(" Enter Third Number: ");
        scanf("%d", &num3);

        if(num1 <= num2 && num1 <= num3){
            printf(" The lowest number is: %d", num1);
        }else if(num2 <= num1 && num2 <= num3){
            printf(" The lowest number is: %d", num2);
        }else if(num3 <= num1 && num3 <= num2){
             printf(" The lowest number is: %d", num3);
        }
        return 0;
    }