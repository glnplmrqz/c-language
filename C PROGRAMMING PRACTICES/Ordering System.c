/*
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h>

    // Global Variables
    int variant;
    int size, price, quantity, payment, totalBalance, totalAmount, flavour;
    double change;
    char anotherOrder, productName[100];

void loading()
{
    // Local Variable
        int loadingDot;

        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tLoading");   

        for(loadingDot = 0; loadingDot < 6; loadingDot++){
            printf(" . ");
            Sleep(250);
        }

        printf("\n\n\n\t\t\t\t\tTHANK YOU FOR WAITING!");
        for(loadingDot = 0; loadingDot < 6; loadingDot++){
            Sleep(100);
        }
            menu();
}

void menu()
{
        system("cls");
        printf("\n\t\t\t  ========================================================== ");
        printf("\n\t\t\t            FOOD           ORDERING            SYSTEM        ");
        printf("\n\t\t\t  ========================================================== ");
        printf("\n\t\t\t             ===========    =========      ==========        ");
        printf("\n\t\t\t             ===========   ===========   ==========          ");
        printf("\n\t\t\t             ===           ===     ===   ====                ");
        printf("\n\t\t\t             ===========   ===     ===   =======             ");
        printf("\n\t\t\t             ===========   ===     ===      =======          ");
        printf("\n\t\t\t             ===           ===     ===          ======       ");
        printf("\n\t\t\t             ===           ===     ===             ====      ");
        printf("\n\t\t\t             ===           ===========      ===========      ");
        printf("\n\t\t\t             ===            =========      ==========        ");
        printf("\n\t\t\t  ========================================================== ");
        printf("\n\t\t\t                       Created by Paul                       ");
        printf("\n\t\t\t  ========================================================== ");
        printf("\n\t\t\t  ==========================================================\n");
        printf("\t\t\t\t\t     Enter [1] to Proceed \n");
        printf("\t\t\t\t\t     Enter [0] to Exit \n");
        printf("\t\t\t  ==========================================================\n");

        int enter;
        printf("\n\n\t\t\t\t\t     Please Enter Code: ");
        scanf("%d", &enter);

        if(enter == 1){
            proceed();
        }else if(enter == 0){
            exit(0);
        }else{
            menu(); // Return to Menu until you Press 1 to Proceed
        }
}

void proceed()
{
        do{
        system("cls");
        printf("\n\t\t================================ Coffee Menu ===================================\n");
        printf("\n\t\t                           == Espresso & Classic ==                 \n");
        printf("\n\t\t [code]                               [Short]     [Tall]     [Grande] \n");
        printf("\t\t = [1] Flat White                       250         280        310 \n");
        printf("\t\t = [2] Caramel/Macchiato                250         275        300 \n");
        printf("\t\t = [3] Caffe Mocha/ White Mocha         230         260        285 \n");
        printf("\t\t = [4] Caffe latte                      200         225        285 \n");
        printf("\t\t = [5] Cappuccino                       200         225        250 \n");
        printf("\t\t = [6] Chocolate Cappuccino             260         285        310 \n");
        printf("\t\t = [7] Americano                        185         210        235 \n");
        printf("\t\t = [8] Brewed Coffee                    195         220        250 \n");
        printf("\t\t = [9] Espresso/Espresso Macchaito      155         175        190 \n");
        printf("\t\t = [10] Signature Hot Chocolate         200         225        250 \n");
        printf("\n\t\t                                 == Cold Brew == \n");
        printf("\n\t\t [code]                                [Tall]     [Grande]     [Venti] \n");
        printf("\t\t = [1] Cold Brew Black                   240         270         295 \n");
        printf("\t\t = [2] Vanilla Sweet Cream Cold Brew     290         315         340 \n");
        printf("\t\t = [3] Citrus Cold Brew                  320         345         375 \n");
        printf("\n\t\t================================================================================\n");

        printf("\n\n\t\tSelect Variant [1] Espresso & Classic [2] Cold Brew \n");
        printf("\t\tSelect Variant: ");
        scanf("%d", &variant);

        switch(variant)
        {
            case 1:
            system("cls");
            printf("\n\t\t                           == Espresso & Classic ==                 \n");
            printf("\n\t\t [code]                               [Short]     [Tall]     [Grande] \n");
            printf("\t\t = [1] Flat White                       250         280        310 \n");
            printf("\t\t = [2] Caramel/Macchiato                250         275        300 \n");
            printf("\t\t = [3] Caffe Mocha/ White Mocha         230         260        285 \n");
            printf("\t\t = [4] Caffe latte                      200         225        285 \n");
            printf("\t\t = [5] Cappuccino                       200         225        250 \n");
            printf("\t\t = [6] Chocolate Cappuccino             260         285        310 \n");
            printf("\t\t = [7] Americano                        185         210        235 \n");
            printf("\t\t = [8] Brewed Coffee                    195         220        250 \n");
            printf("\t\t = [9] Espresso/Espresso Macchaito      155         175        190 \n");
            printf("\t\t = [10] Signature Hot Chocolate         200         225        250 \n");

            printf("\n\t\tChoose size [1] Short [2] Tall [3] Grande \n");
            printf("\n\t\tChoose Size: ");
            scanf("%d", &size);

            switch(size)
            {
                case 1:
                    printf("\n\t\tYOU SELECTED SHORT SIZE...");
                    printf("\n\n\t\tChoose flavour\n");
                    printf("\n\t\tEnter Code: ");
                    scanf("%d", &flavour);

                switch(flavour)
                {
                    case 1:
                        strcpy(productName, "Flat White");
                        price = 250;
                        break;
                    case 2:
                        strcpy(productName, "Caramel/Macchiato");
                        price = 250;
                        break;
                    case 3:
                        strcpy(productName, "Caffe Mocha/White Mocha");
                        price = 230;
                        break;
                    case 4:
                        strcpy(productName, "Caffe latte");
                        price = 200;
                        break;
                    case 5:
                        strcpy(productName, "Cappuccino");
                        price = 200;
                        break;
                    case 6:
                        strcpy(productName, "Chocolate Cappuccino");
                        price = 260;
                        break;
                    case 7:
                        strcpy(productName, "Americano");
                        price = 185;
                        break;
                    case 8:
                        strcpy(productName, "Brewed Coffee");
                        price = 195;
                        break;
                    case 9:
                        strcpy(productName, "Espresso/Espresso Macchiato");
                        price = 155;
                        break;
                    case 10:
                        strcpy(productName, "Signature Hot Chocolate");
                        price = 200;
                        break;
                    default:
                        printf("\n\t\tYou Entered Invlid Option\n");
                        break;
                }
                    break;
                case 2:
                    printf("\n\t\tYOU SELECTED TALL SIZE...");
                    printf("\n\n\t\tChoose flavour\n");
                    printf("\n\t\tEnter Code: ");
                    scanf("%d", &flavour);

                    switch(flavour)
                {
                    case 1:
                        strcpy(productName, "Flat White");
                        price = 280;
                        break;
                    case 2:
                        strcpy(productName, "Caramel/Macchiato");
                        price = 275;
                        break;
                    case 3:
                        strcpy(productName, "Cafee Mocha/White Mocha");
                        price = 260;
                        break;
                    case 4:
                        strcpy(productName, "Caffe latte");
                        price = 225;
                        break;
                    case 5:
                        strcpy(productName, "Cappuccino");
                        price = 225;
                        break;
                    case 6:
                        strcpy(productName, "Chocolate Cappuccino");
                        price = 285;
                        break;
                    case 7:
                        strcpy(productName, "Americano");
                        price = 210;
                        break;
                    case 8:
                        strcpy(productName, "Brewed Coffee");
                        price = 220;
                        break;
                    case 9:
                        strcpy(productName, "Espresso/Espresso Macchiato");
                        price = 175;
                        break;
                    case 10:
                        strcpy(productName, "Signature Hot Chocolate");
                        price = 225;
                        break;
                    default:
                        printf("\n\t\tYou Entered Invlid Option\n");
                        break;
                }
                      break;
                case 3:
                    printf("\n\t\tYOU SELECTED GRANDE SIZE...");
                    printf("\n\n\t\tChoose flavour\n");
                    printf("\n\t\tEnter Code: ");
                    scanf("%d", &flavour);

                switch(flavour)
                {
                    case 1:
                        strcpy(productName, "Flat White");
                        price = 310;
                        break;
                    case 2:
                        strcpy(productName, "Caramel/Macchiato");
                        price = 300;
                        break;
                    case 3:
                        strcpy(productName, "Caffe Mocha/White Mocha");
                        price = 285;
                        break;
                    case 4:
                        strcpy(productName, "Caffe latte");
                        price = 285;
                        break;
                    case 5:
                        strcpy(productName, "Cappuccino");
                        price = 250;
                        break;
                    case 6:
                        strcpy(productName, "Chocolate Cappuccino");
                        price = 310;
                        break;
                    case 7:
                        strcpy(productName, "Americano");
                        price = 235;
                        break;
                    case 8:
                        strcpy(productName, "Brewed Coffee");
                        price = 250;
                        break;
                    case 9:
                        strcpy(productName, "Espresso/Espresso Macchiato");
                        price = 190;
                        break;
                    case 10:
                        strcpy(productName, "Signature Hot Chocolate");
                        price = 250;
                        break;
                    default:
                        printf("\n\t\tYou Entered Invlid Option\n");
                        break;
                }
                break;
            }
                break;
            case 2:
                system("cls");
                printf("\n\t\t                                 == Cold Brew == \n");
                printf("\n\t\t [code]                                [Tall]     [Grande]     [Venti] \n");
                printf("\t\t = [1] Cold Brew Black                   240         270         295 \n");
                printf("\t\t = [2] Vanilla Sweet Cream Cold Brew     290         315         340 \n");
                printf("\t\t = [3] Citrus Cold Brew                  320         345         375 \n");

                printf("\n\t\tChoose size [1] Tall [2] Grande [3] Venti \n");
                printf("\n\t\tChoose Size: ");
                scanf("%d", &size);
            switch(size)
            {
                case 1:
                    printf("\n\t\tYOU SELECTED TALL SIZE...");
                    printf("\n\n\t\tChoose flavour\n");
                    printf("\n\t\tEnter Code: ");
                    scanf("%d", &flavour);

                    switch(flavour)
                {
                    case 1:
                        strcpy(productName, "Cold Brew Black");
                        price = 240;
                        break;
                    case 2:
                        strcpy(productName, "Vanilla Sweet Cream Cold Crew");
                        price = 290;
                        break;
                    case 3:
                        strcpy(productName, "Citrus Cold Brew");
                        price = 320;
                        break;
                    default:
                        printf("\n\t\tYou Entered Invlid Option\n");
                        break;
                }
                    break;
                case 2:
                    printf("\n\t\tYOU SELECTED GRANDE SIZE...");
                    printf("\n\n\t\tChoose flavour\n");
                    printf("\n\t\tEnter Code: ");
                    scanf("%d", &flavour);

                    switch(flavour)
                {
                    case 1:
                        strcpy(productName, "Cold Brew Black");
                        price = 270;
                        break;
                    case 2:
                        strcpy(productName, "Vanilla Sweet Cream Cold Crew");
                        price = 315;
                        break;
                    case 3:
                        strcpy(productName, "Citrus Cold Brew");
                        price = 345;
                        break;
                    default:
                        printf("\n\t\tYou Entered Invlid Option\n");
                        break;
                }
                break;
                    case 3:
                    printf("\n\t\tYOU SELECTED VENTI SIZE...");
                    printf("\n\n\t\tChoose flavour\n");
                    printf("\n\t\tEnter Code: ");
                    scanf("%d", &flavour);

                    switch(flavour)
                {
                    case 1:
                        strcpy(productName, "Cold Brew Black");
                        price = 295;
                        break;
                    case 2:
                        strcpy(productName, "Vanilla Sweet Cream Cold Crew");
                        price = 340;
                        break;
                    case 3:
                        strcpy(productName, "Citrus Cold Brew");
                        price = 375;
                        break;
                    default:
                        printf("\n\t\tYou Entered Invlid Option");
                        break;
            }
                break;
        }
            break;
                default:
                    Proceed();
        }
            printf("\n\t\tFlavour selected is %s \n", productName);
            printf("\n\t\tQuantity: ");
            scanf("%d", &quantity);

            totalAmount = price * quantity;
            printf("\n\t\tTotal Amount: %d \n", totalAmount);

            totalBalance = totalBalance + totalAmount;
            printf("\n\t\tTotal Balance: %d \n", totalBalance);
            
            printf("\n\t\tWant to add another order? [y/n]: ");
            anotherOrder = getch();

        }while(anotherOrder == 'y' || anotherOrder == 'Y');
            system("cls");
            printf("\n\t\t================>>>> RECIEPT  <<<<================\n");
            printf("\n\t\t   Total Balance: %d \n", totalBalance);
            printf("\n\t\t   Enter Payment: ");
            scanf("%d", &payment);

            change = payment - totalBalance;

            if(payment == totalBalance){
                printf("\t\t   Thank You! Come Again! \n");
                exit(0);
            }else if(payment > totalBalance){
                printf("\n\t\t   Here is your change: %.lf \n", change);
                printf("\t\t   Thank You! Come Again! \n");
                printf("\t\t-------------------------------------------------- \n");
                exit(0);
            }
}

    int main()
    {
        loading();
        return 0;
    }