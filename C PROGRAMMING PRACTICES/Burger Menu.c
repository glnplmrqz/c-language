/*
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>

        char selectMenu, food[100], again;
        int pickOrder, quantity, price, age, payment;
        double total, totalBill, seniorDiscount, change;

void loading()
{
    // Local Variable
        int loadingDot, a;
        int d = 250;

        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tLoading");   

        for(loadingDot = 0; loadingDot < 6; loadingDot++){
            a = loadingDot;
            printf(" . ");
            Sleep(d);
        }

        printf("\n\n\n\t\t\t\t\tTHANK YOU FOR WAITING!");
        for(loadingDot = 0; loadingDot < 6; loadingDot++){
            a = loadingDot;
            Sleep(100);
        }

        system("cls");
        burgerMenu();
}

void burgerMenu()
{
    printf("\n\t\t\t ========================= Beef Burgers Menu ========================= \n\n");
    printf("\n\t\t\t                       Lists          Price \n\n");
    printf("\t\t\t                 1. Beef Burger          120   \n");
    printf("\t\t\t                 2. Cheese Burger        130   \n");
    printf("\t\t\t                 3. Beef Bacon           140   \n");
    printf("\t\t\t                 4. Creamy Mushroom      100   \n");
    printf("\t\t\t                 5. Hawaiian Burger      110   \n");
    printf("\n\t\t\t ===================================================================== \n");

    printf("\n\t\t\t ========================= Chicken Burgers Menu ====================== \n\n");
    printf("\n\t\t\t                        Lists          Price \n\n");
    printf("\t\t\t                 1. Spicy Tandoori       100   \n");
    printf("\t\t\t                 2. Spicy Buffalo        100   \n");
    printf("\t\t\t                 3. BBQ Chicken           99   \n");
    printf("\t\t\t                 4. Crispy Chicken       160   \n");
    printf("\t\t\t                 5. Chicken Paradise     190   \n");
    printf("\n\t\t\t ===================================================================== \n");

    printf("\n Press B for Beef Burger, Press C for Chicken Burger: ");
    scanf(" %c", &selectMenu);

    if(selectMenu == 'b' || selectMenu == 'B'){
            beefBurger();
    }else if(selectMenu == 'c' || selectMenu == 'C'){
            chickenBurger();
    }
}

void beefBurger()
{
    system("cls");
    printf("\n\t\t\t ========================= Beef Burgers Menu ========================= \n\n");
    printf("\n\t\t\t                       Lists          Price \n\n");
    printf("\t\t\t                 1. Beef Burger          120   \n");
    printf("\t\t\t                 2. Cheese Burger        130   \n");
    printf("\t\t\t                 3. Beef Bacon           140   \n");
    printf("\t\t\t                 4. Creamy Mushroom      100   \n");
    printf("\t\t\t                 5. Hawaiian Burger      110   \n");
    printf("\n\t\t\t ===================================================================== \n");

    printf("\n Enter your order: ");
    scanf("%d", &pickOrder);
    printf(" How many: ");
    scanf("%d", &quantity);

    if(pickOrder == 1){
        strcpy(food, "Beef Burger");
        price = 120;
    }else if(pickOrder == 2){
        strcpy(food, "Cheese Burger");
        price = 130;
    }else if(pickOrder == 3){
        strcpy(food, "Beef Bacon");
        price = 140;
    }else if(pickOrder == 4){
        strcpy(food, "Creamy Mushroom");
        price = 100;
    }else if(pickOrder == 5){
        strcpy(food, "Hawaiian Burger");
        price = 110;
    }
         
         printf(" Do you want to order again? [y/n]: ");
         scanf(" %c", &again);
         total += price * quantity;

        if(again == 'y' || again == 'Y'){
            beefBurger();     
        }
            system("cls");
            printf("\n Do you want to order in Chicken Burger? [y/n]: ");
            scanf(" %c", &again);
            getchar();

        if(again == 'y' || again == 'Y'){
            chickenBurger();
        }else{
            totalPayment();
            exit(0);
        }
}

void chickenBurger()
{
    system("cls");
    printf("\n\t\t\t ========================= Chicken Burgers Menu ====================== \n\n");
    printf("\n\t\t\t                        Lists          Price \n\n");
    printf("\t\t\t                 1. Spicy Tandoori       100   \n");
    printf("\t\t\t                 2. Spicy Buffalo        100   \n");
    printf("\t\t\t                 3. BBQ Chicken           99   \n");
    printf("\t\t\t                 4. Crispy Chicken       160   \n");
    printf("\t\t\t                 5. Chicken Paradise     190   \n");
    printf("\n\t\t\t ===================================================================== \n");

    printf("\n Enter your order: ");
    scanf("%d", &pickOrder);
    printf(" How many: ");
    scanf("%d", &quantity);

    if(pickOrder == 1){
        strcpy(food, "Spicy Tandoori");
        price = 100;
    }else if(pickOrder == 2){
        strcpy(food, "Spicy Buffalo");
        price = 100;
    }else if(pickOrder == 3){
        strcpy(food, "BBQ Chicken");
        price = 99;
    }else if(pickOrder == 4){
        strcpy(food, "Crispy Chicken");
        price = 160;
    }else if(pickOrder == 5){
        strcpy(food, "Chicken Paradise");
        price = 190;
    }
         
         printf(" Do you want to order again? [y/n]: ");
         scanf(" %c", &again);
         total += price * quantity;

        if(again == 'y' || again == 'Y'){
            chickenBurger();     
        }
            system("cls");
            printf("\n Do you want to order in Beef Burger? [y/n]: ");
            scanf(" %c", &again);
            getchar();

        if(again == 'y' || again == 'Y'){
            beefBurger();
        }else{
            totalPayment();
            exit(0);
        }
}

int totalPayment()
{
        printf("\n Total is: %.1lf \n", total);
        printf("\n Enter Age: ");
        scanf("%d", &age);

        if(age >= 60){
            printf("\n Senior Citizen, 10 Percent Discounted! \n");

            seniorDiscount =  total * 0.1;
            totalBill = total - seniorDiscount;

            printf("\n %.0lf - %.1lf = %.0lf\n", total, seniorDiscount, totalBill);
            printf("\n Your total payment is: %0.lf \n", totalBill);

            printf("\n Enter payment: ");
            scanf("%d", &payment);
            
            change = payment - totalBill;

            system("cls");
            printf("\n Here is your change: %.lf \n", change);
            printf(" Thank You! Come Again! \n");
            printf(" ----------------------------------- \n");
        }else{
            totalBill = total; 
            printf("\n Not Senior Citizen, No 10 Percent Discount! \n");
            printf("\n Your total payment is: %.0lf \n", totalBill);

            printf("\n Enter payment: ");
            scanf("%d", &payment);
            
            change = payment - totalBill;

            system("cls");
            printf("\n Here is your change: %.lf \n", change);
            printf(" Thank You! Come Again! \n");
            printf(" ----------------------------------- \n");
        }
}

    int main()
    {
        loading();
        return 0;
    }