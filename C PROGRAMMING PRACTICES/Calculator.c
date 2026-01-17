/*
*/
#include<stdio.h>
#include<stdlib.h>

    int main()
    {
        int num1, num2, result;
        char op;

        printf("\n Enter a number: ");
        scanf("%d", &num1);
        printf(" Enter operator: ");
        scanf(" %c", &op);
        printf(" Enter another number: ");
        scanf("%d", &num2);

        switch(op)
        {
            case '+':
                result = num1 + num2;
                printf("\n %d + %d = %d\n", num1, num2, result);
                printf(" The result of the given number is %d. \n", result);
            break;
            case '-':
                result = num1 - num2;
                printf("\n %d - %d = %d\n", num1, num2, result);
                printf(" The result of the given number is %d. \n", result);
            break;
            case '*':
                result = num1 * num2;
                printf("\n %d x %d = %d\n", num1, num2, result);
                printf(" The result of the given number is %d. \n", result);
            break;
            case '/':
                result = num1 / num2;
                printf("\n %d / %d = %d\n", num1, num2, result);
                printf(" The result of the given number is %d. \n", result);
            break;
            default:
                printf("\n This is not an operator... Please Try Again... \n");
                main();
        }
        return 0;
    }