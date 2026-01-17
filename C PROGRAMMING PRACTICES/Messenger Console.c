/*
*/
#include<stdio.h>
#include<string.h>

    int main()
    {
        char message[100], again;
        int numberRecipient;

        do{
        system("cls");
        printf("\n <<< WELCOME TO MESSAGE CONSOLE >>> \n");
        printf("\n Type your message here: ");
        fgets(message, 100, stdin);
        message[strlen(message) - 1] = '\0';
        printf(" Number of Recipient: ");
        scanf("%d", &numberRecipient);

        printf("\n");
        for(int x = 0; x < numberRecipient; x++){
            printf(" %d - %s \n", x + 1, message);
        }
            printf("\n Do you want to message again? (y/n): ");
            scanf(" %c", &again);
            getchar();
        }while(again == 'y' || again == 'Y');
            printf("\n Congrats, you did it! \n");
            printf(" !<<< Messenger Closed >>>! \n");
        return 0;
    }