/*
*/
#include<stdio.h>
#include<stdlib.h>

    int main()
    {
        char drinks[100];
        int order;
        double price;

        printf("\n [========== SELECT DRINKS ==========] \n");
        printf("    Drinks             Price (PHP)         \n");
        printf("     [1] Coke            35.23             \n");
        printf("     [2] Royal           33.17             \n");
        printf("     [3] Pepsi           39.45             \n");
        printf("     [4] Sprite          32.15             \n");
        printf("     [5] Mountain Dew    45.25             \n");
        printf(" =====================================     \n");

        printf("\n Enter your Order: ");
        scanf("%d", &order);

        switch(order)
        {
        case 1:
            strcpy(drinks, "Coke");
            price = 35.23;
            printf("\n Your Order is %s.\n", drinks);
            printf(" Total Payment is %.2lf.\n", price);
            break;
        case 2:
            strcpy(drinks, "Royal");
            price = 33.17;
            printf("\n Your Order is %s.\n", drinks);
            printf(" Total Payment is %.2lf.\n", price);
            break;
        case 3:
            strcpy(drinks, "Pepsi");
            price = 39.45;
            printf("\n Your Order is %s.\n", drinks);
            printf(" Total Payment is %.2lf.\n", price);
            break;
        case 4:
            strcpy(drinks, "Sprite");
            price = 32.15;
            printf("\n Your Order is %s.\n", drinks);
            printf(" Total Payment is %.2lf.\n", price);
            break;
        case 5:
            strcpy(drinks, "Mountain Dew");
            price = 45.25;
            printf("\n Your Order is %s.\n", drinks);
            printf(" Total Payment is %.2lf.\n", price);
            break;
        default:
            printf("\n <<< Order not found here! >>> \n");
        }
            return 0;
}