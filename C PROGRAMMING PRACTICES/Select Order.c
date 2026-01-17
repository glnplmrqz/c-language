/*
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

    int main()
    {
        char foods[100];
        int order;
        double price;

        printf("\n =============== SELECT ORDER =============== \n");
        printf(" [1] Chicken Wings \n");
        printf(" [2] Hotdog \n");
        printf(" [3] Macaroni \n");
        printf(" [4] Baloney \n");
        printf(" ============================================ \n");

        printf(" What's your order? ");
        scanf("%i", &order);

        switch(order)
        {
            case 1:
                strcpy(foods, "Chicken Wings");
                price = 125.5;
                break;
            case 2:
                strcpy(foods, "Hotdog");
                price = 55;
                break;
            case 3:
                strcpy(foods, "Macaroni");
                price = 75.25;
                break;
            case 4:
                strcpy(foods, "Baloney");
                price = 48.5;
                break;
            default:
                printf(" Order not found!, Try Again. \n");
                exit(0);
        }
            printf(" You ordered %s! \n", foods);
            printf(" Total payment is %.2lf Pesos\n", price);
        return 0;
    }